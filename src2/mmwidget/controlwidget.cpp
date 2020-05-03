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

#include "controlwidget.h"

UIControlWidget::UIControlWidget()
{
    unimplemented();
}

UIControlWidget::~UIControlWidget()
{
    unimplemented();
}

void UIControlWidget::Action(union eqEvent arg1)
{
    return stub<thiscall_t<void, UIControlWidget*, union eqEvent>>(0x4EC360, this, arg1);
}

void UIControlWidget::DisableField()
{
    return stub<thiscall_t<void, UIControlWidget*>>(0x4EC480, this);
}

void UIControlWidget::EnableField()
{
    return stub<thiscall_t<void, UIControlWidget*>>(0x4EC420, this);
}

void UIControlWidget::Init(f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, class mmIO* arg6, class datCallback arg7)
{
    return stub<thiscall_t<void, UIControlWidget*, f32, f32, f32, f32, f32, class mmIO*, class datCallback>>(
        0x4EC0D0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

void UIControlWidget::SetPosition(f32 arg1, f32 arg2, f32 arg3, f32 arg4)
{
    return stub<thiscall_t<void, UIControlWidget*, f32, f32, f32, f32>>(0x4EC250, this, arg1, arg2, arg3, arg4);
}

void UIControlWidget::Switch(i32 arg1)
{
    return stub<thiscall_t<void, UIControlWidget*, i32>>(0x4EC3B0, this, arg1);
}

void UIControlWidget::TurnOff()
{
    return stub<thiscall_t<void, UIControlWidget*>>(0x4EC510, this);
}

void UIControlWidget::TurnOn()
{
    return stub<thiscall_t<void, UIControlWidget*>>(0x4EC500, this);
}

void UIControlWidget::Update()
{
    return stub<thiscall_t<void, UIControlWidget*>>(0x4EC310, this);
}

void UIControlWidget::UpdateField()
{
    return stub<thiscall_t<void, UIControlWidget*>>(0x4EC330, this);
}

define_dummy_symbol(mmwidget_controlwidget);