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

#include "textfield.h"

UITextField::UITextField()
{
    unimplemented();
}

UITextField::~UITextField()
{
    unimplemented();
}

void UITextField::Action(union eqEvent arg1)
{
    return stub<thiscall_t<void, UITextField*, union eqEvent>>(0x4E6BB0, this, arg1);
}

void UITextField::CaptureAction(union eqEvent arg1)
{
    return stub<thiscall_t<void, UITextField*, union eqEvent>>(0x4E6BA0, this, arg1);
}

void UITextField::ClearField()
{
    return stub<thiscall_t<void, UITextField*>>(0x4E6C00, this);
}

void UITextField::Init(struct LocString* arg1, char* arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, i32 arg7, i32 arg8,
    i32 arg9, i32 arg10, i32 arg11, class datCallback arg12, class UIMenu* arg13)
{
    return stub<thiscall_t<void, UITextField*, struct LocString*, char*, f32, f32, f32, f32, i32, i32, i32, i32, i32,
        class datCallback, class UIMenu*>>(
        0x4E6820, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
}

i32 UITextField::IsValidChar(u16 arg1)
{
    return stub<thiscall_t<i32, UITextField*, u16>>(0x4E6EB0, this, arg1);
}

void UITextField::KeyAction(union eqEvent* arg1)
{
    return stub<thiscall_t<void, UITextField*, union eqEvent*>>(0x4E70F0, this, arg1);
}

void UITextField::SetCompositionWindow()
{
    return stub<thiscall_t<void, UITextField*>>(0x4E7200, this);
}

void UITextField::SetField(char* arg1)
{
    return stub<thiscall_t<void, UITextField*, char*>>(0x4E6B40, this, arg1);
}

void UITextField::SetText(struct LocString* arg1)
{
    return stub<thiscall_t<void, UITextField*, struct LocString*>>(0x4E6B20, this, arg1);
}

void UITextField::SetTextField()
{
    return stub<thiscall_t<void, UITextField*>>(0x4E6C60, this);
}

void UITextField::Switch(i32 arg1)
{
    return stub<thiscall_t<void, UITextField*, i32>>(0x4E6E00, this, arg1);
}

void UITextField::ToggleField(i32 arg1)
{
    return stub<thiscall_t<void, UITextField*, i32>>(0x4E6CB0, this, arg1);
}

void UITextField::Update()
{
    return stub<thiscall_t<void, UITextField*>>(0x4E7430, this);
}

void UITextField::WmCharHandler(u8 arg1)
{
    return stub<thiscall_t<void, UITextField*, u8>>(0x4E6F70, this, arg1);
}

uiWidget::uiWidget()
{
    unimplemented();
}

uiWidget::~uiWidget()
{
    unimplemented();
}

void uiWidget::AddToolTip(class UIMenu* arg1, struct LocString* arg2)
{
    return stub<thiscall_t<void, uiWidget*, class UIMenu*, struct LocString*>>(0x4E7470, this, arg1, arg2);
}

void uiWidget::ResetToolTip()
{
    return stub<thiscall_t<void, uiWidget*>>(0x4E74A0, this);
}

void uiWidget::SetToolTipText(struct LocString* arg1)
{
    return stub<thiscall_t<void, uiWidget*, struct LocString*>>(0x4E74B0, this, arg1);
}

void uiWidget::Disable()
{
    return stub<thiscall_t<void, uiWidget*>>(0x4E7330, this);
}

void uiWidget::Enable()
{
    return stub<thiscall_t<void, uiWidget*>>(0x4E7340, this);
}

void uiWidget::TurnOn()
{
    return stub<thiscall_t<void, uiWidget*>>(0x4E7350, this);
}

void uiWidget::TurnOff()
{
    return stub<thiscall_t<void, uiWidget*>>(0x4E7370, this);
}

void uiWidget::SetReadOnly(i32 arg1)
{
    return stub<thiscall_t<void, uiWidget*, i32>>(0x4E7380, this, arg1);
}

void uiWidget::Action(union eqEvent arg1)
{
    return stub<thiscall_t<void, uiWidget*, union eqEvent>>(0x4E73A0, this, arg1);
}

void uiWidget::CaptureAction(union eqEvent arg1)
{
    return stub<thiscall_t<void, uiWidget*, union eqEvent>>(0x4E73B0, this, arg1);
}

void uiWidget::Switch(i32 arg1)
{
    return stub<thiscall_t<void, uiWidget*, i32>>(0x4E7480, this, arg1);
}

void uiWidget::EvalMouseX(f32 arg1)
{
    return stub<thiscall_t<void, uiWidget*, f32>>(0x4E73C0, this, arg1);
}

char* uiWidget::ReturnDescription()
{
    return stub<thiscall_t<char*, uiWidget*>>(0x4E73D0, this);
}

void uiWidget::SetPosition(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<void, uiWidget*, f32, f32>>(0x4E73E0, this, arg1, arg2);
}

f32 uiWidget::GetScreenHeight()
{
    return stub<thiscall_t<f32, uiWidget*>>(0x4E73F0, this);
}

define_dummy_symbol(mmwidget_textfield);