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
 
 
#include <fstream>
#include <string>
#include <QDebug>
#include "Computer.h"


#define CU Computer::UptimeInfo

CU::UptimeInfo()
{
    _update();
}

//Getters for Computer time
int CU::getCompSeconds() const
{
    return compSeconds;
}

int CU::getCompMinutes() const
{
    return compMinutes;
}

int CU::getCompHours() const
{
    return compHours;
}

int CU::getCompDays() const
{
    return compDays;
}

int CU::getCompWeeks() const
{
    return compWeeks;
}

int CU::getCompMonths() const
{
    return compMonths;
}


//Getters for CPU idle time
int CU::getCpuSeconds() const
{
    return cpuSeconds;
}

int CU::getCpuMinutes() const
{
    return cpuMinutes;
}

int CU::getCpuHours() const
{
    return cpuHours;
}

int CU::getCpuDays() const
{
    return cpuDays;
}

int CU::getCpuWeeks() const
{
    return cpuWeeks;
}

int CU::getCpuMonths() const
{
    return cpuMonths;
}

void CU::update()
{
    _update();
}

void CU::_update()
{
    std::ifstream in("/proc/uptime");
    std::string compUptime, cpuIdleTime;
    if(!in.is_open())
    {
        compMonths = compDays = compHours = compMinutes = compSeconds =
        cpuMonths = cpuDays = cpuHours = cpuMinutes = cpuSeconds = 0;
        return;
    }
    in >> compUptime >> cpuIdleTime;

    compSeconds = atoi(compUptime.c_str());
    compMinutes = compSeconds / 60;
    compSeconds %= 60;
    compHours = compMinutes / 60;
    compMinutes %= 60;
    compDays = compHours / 24;
    compHours %= 24;
    compWeeks = compDays / 7;
    compDays %= 7;
    compMonths = compWeeks / 4.29;
    compWeeks = ((compWeeks * 10) % 43) / 10;


    cpuSeconds = atoi(cpuIdleTime.c_str());
    cpuMinutes = cpuSeconds / 60;
    cpuSeconds %= 60;
    cpuHours = cpuMinutes / 60;
    cpuMinutes %= 60;
    cpuDays = cpuHours / 24;
    cpuHours %= 24;
    cpuWeeks = cpuDays / 7;
    cpuDays %= 7;
    cpuMonths = cpuWeeks / 4.29;
    cpuWeeks = ((cpuWeeks * 10) % 43) / 10;

    in.close();
}
