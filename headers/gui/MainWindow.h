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
 
 
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include "MenuBar.h"
#include "Shell.h"

class MainWindow : public QWidget
{
    Q_OBJECT
private:
    QVBoxLayout* pvbx;
    QHBoxLayout* genButtons;
    MenuBar* pMenuBar;

    QPushButton* refresh;

    void writeSettings() const;
    void readSettings();

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
};

#endif // MAINWINDOW_H
