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

#include "iconwidget.h"

UIIconW::UIIconW()
{
    unimplemented();
}

UIIconW::~UIIconW()
{
    unimplemented();
}

void UIIconW::Action(union eqEvent arg1)
{
    return stub<thiscall_t<void, UIIconW*, union eqEvent>>(0x4EDC90, this, arg1);
}

void UIIconW::Init(struct LocString* arg1, char* arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, class datCallback arg7)
{
    return stub<thiscall_t<void, UIIconW*, struct LocString*, char*, f32, f32, f32, f32, class datCallback>>(
        0x4EDBA0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

void UIIconW::Switch(i32 arg1)
{
    return stub<thiscall_t<void, UIIconW*, i32>>(0x4EDD70, this, arg1);
}

void UIIconW::Update()
{
    return stub<thiscall_t<void, UIIconW*>>(0x4EDCF0, this);
}

define_dummy_symbol(mmwidget_iconwidget);