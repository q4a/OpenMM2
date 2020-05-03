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

#pragma once

#include "textfield.h"

/*
    mmwidget:textroller2

    0x4E93F0 | public: __thiscall UITextRoller2::UITextRoller2(void) | ??0UITextRoller2@@QAE@XZ
    0x4E94A0 | public: virtual __thiscall UITextRoller2::~UITextRoller2(void) | ??1UITextRoller2@@UAE@XZ
    0x4E9510 | public: void __thiscall UITextRoller2::Init(struct LocString *,int *,float,float,float,float,class string,int,int,int,int,class datCallback,class UIMenu *) | ?Init@UITextRoller2@@QAEXPAULocString@@PAHMMMMVstring@@HHHHVdatCallback@@PAVUIMenu@@@Z
    0x4E9BA0 | public: virtual void __thiscall UITextRoller2::Update(void) | ?Update@UITextRoller2@@UAEXXZ
    0x4E9C00 | public: virtual void __thiscall UITextRoller2::Switch(int) | ?Switch@UITextRoller2@@UAEXH@Z
    0x4E9CA0 | public: virtual void __thiscall UITextRoller2::Action(union eqEvent) | ?Action@UITextRoller2@@UAEXTeqEvent@@@Z
    0x4E9D90 | public: void __thiscall UITextRoller2::EvalMouseXY(float,float) | ?EvalMouseXY@UITextRoller2@@QAEXMM@Z
    0x4E9E60 | public: int __thiscall UITextRoller2::SetValue(int) | ?SetValue@UITextRoller2@@QAEHH@Z
    0x4E9F10 | public: void __thiscall UITextRoller2::SetString(class string) | ?SetString@UITextRoller2@@QAEXVstring@@@Z
    0x4E9FE0 | public: void __thiscall UITextRoller2::SetData(int *) | ?SetData@UITextRoller2@@QAEXPAH@Z
    0x4EA000 | public: void __thiscall UITextRoller2::SetText(void) | ?SetText@UITextRoller2@@QAEXXZ
    0x4EA070 | public: int __thiscall UITextRoller2::Inc(void) | ?Inc@UITextRoller2@@QAEHXZ
    0x4EA0A0 | public: int __thiscall UITextRoller2::Dec(void) | ?Dec@UITextRoller2@@QAEHXZ
    0x4EA0D0 | public: virtual void __thiscall UITextRoller2::Cull(void) | ?Cull@UITextRoller2@@UAEXXZ
    public: virtual void * __thiscall UITextRoller2::`vector deleting destructor'(unsigned int) | ??_EUITextRoller2@@UAEPAXI@Z
    0x4EA1B0 | public: virtual void * __thiscall UITextRoller2::`scalar deleting destructor'(unsigned int) | ??_GUITextRoller2@@UAEPAXI@Z
    0x5B34B4 | const UITextRoller2::`vftable' | ??_7UITextRoller2@@6B@
*/

class UITextRoller2 : public uiWidget
{
    // const UITextRoller2::`vftable' @ 0x5B34B4

public:
    // 0x4E93F0 | ??0UITextRoller2@@QAE@XZ
    UITextRoller2();

    // 0x4EA1B0 | ??_GUITextRoller2@@UAEPAXI@Z
    // 0x4E94A0 | ??1UITextRoller2@@UAE@XZ
    ~UITextRoller2() override;

    // 0x4E9CA0 | ?Action@UITextRoller2@@UAEXTeqEvent@@@Z
    void Action(union eqEvent arg1) override;

    // 0x4EA0D0 | ?Cull@UITextRoller2@@UAEXXZ
    void Cull() override;

    // 0x4EA0A0 | ?Dec@UITextRoller2@@QAEHXZ
    i32 Dec();

    // 0x4E9D90 | ?EvalMouseXY@UITextRoller2@@QAEXMM@Z
    void EvalMouseXY(f32 arg1, f32 arg2);

    // 0x4EA070 | ?Inc@UITextRoller2@@QAEHXZ
    i32 Inc();

    // 0x4E9510 | ?Init@UITextRoller2@@QAEXPAULocString@@PAHMMMMVstring@@HHHHVdatCallback@@PAVUIMenu@@@Z
    void Init(struct LocString* arg1, i32* arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, class string arg7, i32 arg8,
        i32 arg9, i32 arg10, i32 arg11, class datCallback arg12, class UIMenu* arg13);

    // 0x4E9FE0 | ?SetData@UITextRoller2@@QAEXPAH@Z
    void SetData(i32* arg1);

    // 0x4E9F10 | ?SetString@UITextRoller2@@QAEXVstring@@@Z
    void SetString(class string arg1);

    // 0x4EA000 | ?SetText@UITextRoller2@@QAEXXZ
    void SetText();

    // 0x4E9E60 | ?SetValue@UITextRoller2@@QAEHH@Z
    i32 SetValue(i32 arg1);

    // 0x4E9C00 | ?Switch@UITextRoller2@@UAEXH@Z
    void Switch(i32 arg1) override;

    // 0x4E9BA0 | ?Update@UITextRoller2@@UAEXXZ
    void Update() override;
};

check_size(UITextRoller2, 0x134);