/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 Brick

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#include "vehicle.h"

Vehicle::Vehicle(i32 arg1)
{
    unimplemented();
}

Vehicle::~Vehicle()
{
    unimplemented();
}

void Vehicle::PostSetup()
{
    return stub<thiscall_t<void, Vehicle*>>(0x505810, this);
}

void Vehicle::PreSetup()
{
    return stub<thiscall_t<void, Vehicle*>>(0x505800, this);
}

void Vehicle::SetSubMenu(i32 arg1)
{
    return stub<thiscall_t<void, Vehicle*, i32>>(0x5057C0, this, arg1);
}

void Vehicle::SetSubMenuButtons()
{
    return stub<thiscall_t<void, Vehicle*>>(0x5057E0, this);
}

define_dummy_symbol(mmui_vehicle);
