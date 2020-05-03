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

#include "toggle2.h"

mmToggle2::mmToggle2()
{
    unimplemented();
}

mmToggle2::~mmToggle2()
{
    unimplemented();
}

void mmToggle2::Cull()
{
    return stub<thiscall_t<void, mmToggle2*>>(0x4F3E80, this);
}

void mmToggle2::Init(char* arg1, f32 arg2, f32 arg3, i32* arg4)
{
    return stub<thiscall_t<void, mmToggle2*, char*, f32, f32, i32*>>(0x4F3D30, this, arg1, arg2, arg3, arg4);
}

void mmToggle2::SetPosition(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<void, mmToggle2*, f32, f32>>(0x4F3DC0, this, arg1, arg2);
}

void mmToggle2::Update()
{
    return stub<thiscall_t<void, mmToggle2*>>(0x4F3E60, this);
}

void mmToggle2::LoadBitmap(char* arg1)
{
    return stub<thiscall_t<void, mmToggle2*, char*>>(0x4F3D60, this, arg1);
}

define_dummy_symbol(mmwidget_toggle2);