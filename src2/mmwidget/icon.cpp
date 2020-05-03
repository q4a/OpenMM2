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

#include "icon.h"

UIIcon::UIIcon()
{
    unimplemented();
}

UIIcon::~UIIcon()
{
    unimplemented();
}

void UIIcon::Cull()
{
    return stub<thiscall_t<void, UIIcon*>>(0x4EDA10, this);
}

void UIIcon::GetHitArea(f32& arg1, f32& arg2)
{
    return stub<thiscall_t<void, UIIcon*, f32&, f32&>>(0x4ED970, this, arg1, arg2);
}

void UIIcon::Init(char* arg1, f32 arg2, f32 arg3)
{
    return stub<thiscall_t<void, UIIcon*, char*, f32, f32>>(0x4ED8E0, this, arg1, arg2, arg3);
}

void UIIcon::LoadBitchmap(char* arg1)
{
    return stub<thiscall_t<void, UIIcon*, char*>>(0x4ED920, this, arg1);
}

void UIIcon::LoadBitmap(char* arg1)
{
    return stub<thiscall_t<void, UIIcon*, char*>>(0x4ED930, this, arg1);
}

void UIIcon::Switch(i32 arg1)
{
    return stub<thiscall_t<void, UIIcon*, i32>>(0x4ED9B0, this, arg1);
}

void UIIcon::Update()
{
    return stub<thiscall_t<void, UIIcon*>>(0x4ED9F0, this);
}

define_dummy_symbol(mmwidget_icon);