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

#include "tscroll.h"

UITextScroll::UITextScroll()
{
    unimplemented();
}

UITextScroll::~UITextScroll()
{
    unimplemented();
}

void UITextScroll::Action(union eqEvent arg1)
{
    return stub<thiscall_t<void, UITextScroll*, union eqEvent>>(0x4EABB0, this, arg1);
}

void UITextScroll::GetCurrentString(char* arg1, i32 arg2)
{
    return stub<thiscall_t<void, UITextScroll*, char*, i32>>(0x4EAA30, this, arg1, arg2);
}

i32 UITextScroll::GetHit(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<i32, UITextScroll*, f32, f32>>(0x4EAAD0, this, arg1, arg2);
}

void UITextScroll::Init(
    void* arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, class string arg6, i32 arg7, i32* arg8, class datCallback arg9)
{
    return stub<thiscall_t<void, UITextScroll*, void*, f32, f32, f32, f32, class string, i32, i32*, class datCallback>>(
        0x4EA3D0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
}

void UITextScroll::InitVScroll(f32 arg1, f32 arg2, f32 arg3)
{
    return stub<thiscall_t<void, UITextScroll*, f32, f32, f32>>(0x4EA730, this, arg1, arg2, arg3);
}

void UITextScroll::Recalc(class string arg1)
{
    return stub<thiscall_t<void, UITextScroll*, class string>>(0x4EA7D0, this, arg1);
}

void UITextScroll::SetHighlight(i32 arg1)
{
    return stub<thiscall_t<void, UITextScroll*, i32>>(0x4EAA80, this, arg1);
}

void UITextScroll::SetText(i32 arg1, struct LocString* arg2)
{
    return stub<thiscall_t<void, UITextScroll*, i32, struct LocString*>>(0x4EAD10, this, arg1, arg2);
}

void UITextScroll::SetVScrollPos()
{
    return stub<thiscall_t<void, UITextScroll*>>(0x4EA7A0, this);
}

void UITextScroll::SetVScrollVals()
{
    return stub<thiscall_t<void, UITextScroll*>>(0x4EA780, this);
}

void UITextScroll::Switch(i32 arg1)
{
    return stub<thiscall_t<void, UITextScroll*, i32>>(0x4EAC70, this, arg1);
}

void UITextScroll::VScrollCB()
{
    return stub<thiscall_t<void, UITextScroll*>>(0x4EA740, this);
}

void UITextScroll::AddTextScrollLine(char* arg1)
{
    return stub<thiscall_t<void, UITextScroll*, char*>>(0x4EAF80, this, arg1);
}

void UITextScroll::AddTextScrollLine(char* arg1, i32 arg2)
{
    return stub<thiscall_t<void, UITextScroll*, char*, i32>>(0x4EAF00, this, arg1, arg2);
}

void UITextScroll::FillScroll()
{
    return stub<thiscall_t<void, UITextScroll*>>(0x4EA950, this);
}

void UITextScroll::InitTextScroll(class string arg1)
{
    return stub<thiscall_t<void, UITextScroll*, class string>>(0x4EADD0, this, arg1);
}

void UITextScroll::KeyAction()
{
    return stub<thiscall_t<void, UITextScroll*>>(0x4EAB50, this);
}

void UITextScroll::ResetTextScroll()
{
    return stub<thiscall_t<void, UITextScroll*>>(0x4EAD50, this);
}

void UITextScroll::SetTextColor()
{
    return stub<thiscall_t<void, UITextScroll*>>(0x4EACB0, this);
}

define_dummy_symbol(mmwidget_tscroll);