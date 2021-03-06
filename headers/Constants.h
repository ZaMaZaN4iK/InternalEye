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
 
 
#ifndef CONSTANTS_H
#define CONSTANTS_H


#include <QHash>
#include <QString>
#include "Vendor.h"

QHash<QString, Vendor> VendorList =
{
    {"ATI",             Vendor("ATI Technologies", "www.ati.com")},
    {"nVidia",          Vendor("NVIDIA", "www.nvidia.com")},
    {"3Com",            Vendor("3Com", "www.3com.com")},
    {"Intel",           Vendor("Intel", "www.intel.com")},
    {"Cirrus Logic",    Vendor("Cirrus Logic", "www.cirrus.com")},
    {"VIA Technologies",Vendor("VIA Technologies", "www.via.com.tw")},
    {"VIA",             Vendor("VIA Technologies", "www.via.com.tw")},
    {"hp",              Vendor("Hewlett-Packard", "www.hp.com")},
    {"NEC Corporation", Vendor("NEC Coporation", "www.nec.com")},
    {"MAXTOR",          Vendor("MAXTOR", "www.maxtor.com")},
    {"SAMSUNG",         Vendor("SAMSUNG", "www.samsung.com")},
    {"PIONEER",         Vendor("PIONEER", "www.pioneer-eur.com")},
    {"PLEXTOR",         Vendor("PLEXTOR", "www.plextor.be")},
    {"Realtek Semiconductor", Vendor("Realtek", "www.realtek.com.tw")},
    {"TOSHIBA",         Vendor("TOSHIBA", "www.toshiba.com")},
    {"LITE-ON",         Vendor("LITE-ON", "www.liteonit.com")},
    {"WDC",             Vendor("Western Digital", "www.wdc.com")},
    {"HL-DT-ST",        Vendor("LG Electronics", "www.lge.com")},
    {"ST",              Vendor("SEAGATE", "www.seagate.com")},
    {"Lexmark",         Vendor("Lexmark", "www.lexmark.com")},
    {"_NEC",            Vendor("NEC Corporation", "www.nec.com")},
    {"Creative Labs",   Vendor("Creative Labs", "www.creative.com")},
    {"Brooktree",       Vendor("Conexant", "www.brooktree.com")},
    {"Atheros",         Vendor("Atheros Communications", "www.atheros.com")},
    {"MATSHITA",        Vendor("Panasonic", "www.panasonic.com")},
    {"Silicon Image",   Vendor("Silicon Image", "www.siliconimage.com")},
    {"Silicon Integrated Image", Vendor("Silicon Image", "www.siliconimage.com")},
    {"KYE",             Vendor("KYE Systems", "www.genius-kye.com")},
    {"Broadcom",        Vendor("Broadcom", "www.broadcom.com")},
    {"Apple",           Vendor("Apple", "www.apple.com")},
    {"IBM",             Vendor("IBM", "www.ibm.com")},
    {"Dell",            Vendor("Dell Computer", "www.dell.com")},
    {"Logitech",        Vendor("Logitech International", "www.logitech.com")},
    {"FUJITSU",         Vendor("Fujitsu", "www.fujitsu.com")},
    {"CDU",             Vendor("Sony", "www.sony.com")},
    {"SanDisk",         Vendor("SanDisk", "www.sandisk.com")},
    {"ExcelStor",       Vendor("ExcelStor Technology", "www.excelstor.com")},
    {"D-Link",          Vendor("D-Link", "www.dlink.com.tw")},
    {"Giga-byte",       Vendor("Gigabyte Technology", "www.gigabyte.com.tw")},
    {"Gigabyte",        Vendor("Gigabyte Technology", "www.gigabyte.com.tw")},
    {"C-Media",         Vendor("C-Media Electronics", "www.cmedia.com.tw")},
    {"Avermedia",       Vendor("AVerMedia Technologies", "www.aver.com")},
    {"Philips",         Vendor("Philips", "www.philips.com")},
    {"RaLink",          Vendor("Ralink Technology", "www.ralinktech.com")},
    {"Siemens",         Vendor("Siemens AG", "www.siemens.com")},
    {"HP",              Vendor("Hewlett-Packard", "www.hp.com")},
    {"Hewlett-Packard", Vendor("Hewlett-Packard", "www.hp.com")},
    {"TEAC",            Vendor("TEAC America", "www.teac.com")},
    {"Microsoft",       Vendor("Microsoft", "www.microsoft.com")},
    {"Memorex",         Vendor("Memorex Products", "www.memorex.com")},
    {"eMPIA",           Vendor("eMPIA Technology", "www.empiatech.com.tw")},
    {"Canon",           Vendor("Canon", "www.canon.com")},
    {"A4Tech",          Vendor("A4tech", "www.a4tech.com")},
    {"ALCOR",           Vendor("Alcor", "www.alcor.org")},
    {"Vimicro",         Vendor("Vimicro", "www.vimicro.com")},
    {"OTi",             Vendor("Ours Technology", "www.oti.com.tw")},
    {"BENQ",            Vendor("BenQ", "www.benq.com")},
    {"Acer",            Vendor("Acer", "www.acer.com")},
    {"QUANTUM",         Vendor("Quantum", "www.quantum.com")},
    {"Kingston",        Vendor("Kingston", "www.kingston.com")},
    {"Chicony",         Vendor("Chicony", "www.chicony.com.tw")},
    {"Genius",          Vendor("Genius", "www.genius.ru")},
    /* BIOS manufacturers */
    {"American Megatrends", Vendor("American Megatrends", "www.ami.com")},
    {"Award",               Vendor("Award Software International", "www.award-bios.com")},
    {"Phoenix",             Vendor("Phoenix Technologies", "www.phoenix.com")},
};

#endif // CONSTANTS_H
