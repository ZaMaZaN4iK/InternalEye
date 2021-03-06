/***************************************************************************
 *   Copyright (C) 2016 by Zaitsev Alexander                               *
 *   zamazan4ik@tut.by	                                                   *
 *                                                                         *
 *   This file is part of InternalEye.                                     *
 *                                                                         *
 *   InternalEye is free software: you can redistribute it and/or modify   *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation, either version 3 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   InternalEye is distributed in the hope that it will be useful,        *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with InternalEye.  If not, see <http://www.gnu.org/licenses/>.  *
 ***************************************************************************/
 
 
#include <QString>
#include <QByteArray>
#include <QTextStream>
#include "Util.h"
#include "Constants.h"
#include "Devices.h"

#define DI Devices::InputDevices
#define DII DI::InputDevice

DII::InputDevice()
{
}

DII::InputDevice(const QString &name_, const QString &connectedTo_, const int bus_, const int vendor_,
                 const int product_, const int version_, const DII::TypeOfInputDevice type_) : name(name_),
                 connectedTo(connectedTo_), bus(bus_), vendor(vendor_), product(product_), version(version_),
                 type(type_)
{
}

void DI::_update()
{
    QByteArray arr = getOutputConsole("/proc/bus/input/devices");
    if(arr.isEmpty())
    {
        return;
    }
    QTextStream stream(&arr);
    QString line, name, connectedTo;
    int bus, vendor, product, version;
    DII::TypeOfInputDevice type;
    while(!stream.atEnd())
    {
        line = stream.readLine();
        switch (line.at(0).toLatin1())
        {
        case 'N':
            name = line.remove("\"").remove("N: Name=");
            break;
        case 'P':
            connectedTo = line.remove("P: Phys=");
            break;
        case 'I':
            sscanf(line.toStdString().c_str(), "I: Bus=%x Vendor=%x Product=%x Version=%x",
                   &bus, &vendor, &product, &version);
            break;
        case 'H':
            if (line.indexOf("kbd") != -1)
                type = DII::KEYBOARD;		//INPUT_KEYBOARD;
            else if (line.indexOf("js") != -1)
                type = DII::JOYSTICK;		//INPUT_JOYSTICK;
            else if (line.indexOf("mouse") != -1)
                type = DII::MOUSE;		//INPUT_MOUSE;
            else
                type = DII::UNKNOWN;		//INPUT_UNKNOWN;
            break;
        case '\n':
            if (!name.isEmpty() && name.indexOf("PC Speaker") != -1)
            {
                type = DII::PCSPKR;		// INPUT_PCSPKR
            }

            const QString url;
            //url = (VendorList.find(id) != VendorList.end() ? VendorList[id] : "");
            if(!url.isEmpty())
            {
                //TODO : Write a full parser
            }

            devices.push_back(InputDevice(name, connectedTo, bus, vendor, product, version, type));
        }
    }
}


