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

#include "mouse.h"

void ioMouse::Begin(bool arg1)
{
    return stub<cdecl_t<void, bool>>(0x4BB220, arg1);
}

void ioMouse::End()
{
    return stub<cdecl_t<void>>(0x4BB360);
}

void ioMouse::Update()
{
    return stub<cdecl_t<void>>(0x4BB3A0);
}

define_dummy_symbol(input_mouse);