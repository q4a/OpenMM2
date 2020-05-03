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

#include "toggle.h"

mmToggle::mmToggle()
{
    unimplemented();
}

mmToggle::~mmToggle()
{
    unimplemented();
}

void mmToggle::Cull()
{
    return stub<thiscall_t<void, mmToggle*>>(0x4F3C10, this);
}

void mmToggle::Init(char* arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5)
{
    return stub<thiscall_t<void, mmToggle*, char*, f32, f32, f32, f32>>(0x4F3A60, this, arg1, arg2, arg3, arg4, arg5);
}

void mmToggle::Update()
{
    return stub<thiscall_t<void, mmToggle*>>(0x4F3BF0, this);
}

void mmToggle::LoadBitmap(char* arg1)
{
    return stub<thiscall_t<void, mmToggle*, char*>>(0x4F3B00, this, arg1);
}

void mmToggle::SetSize(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<void, mmToggle*, f32, f32>>(0x4F3B40, this, arg1, arg2);
}

define_dummy_symbol(mmwidget_toggle);