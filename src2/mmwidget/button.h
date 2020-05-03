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
    mmwidget:button

    0x4ECDB0 | public: __thiscall UIButton::UIButton(void) | ??0UIButton@@QAE@XZ
    0x4ECE50 | public: virtual __thiscall UIButton::~UIButton(void) | ??1UIButton@@UAE@XZ
    0x4ECEE0 | public: void __thiscall UIButton::Init(struct LocString *,int,float,float,float,float,int,class datCallback) | ?Init@UIButton@@QAEXPAULocString@@HMMMMHVdatCallback@@@Z
    0x4ECFB0 | public: virtual void __thiscall UIButton::Update(void) | ?Update@UIButton@@UAEXXZ
    0x4ECFC0 | public: void __thiscall UIButton::SetString(struct LocString *) | ?SetString@UIButton@@QAEXPAULocString@@@Z
    0x4ECFE0 | private: void __thiscall UIButton::DrawOff(void) | ?DrawOff@UIButton@@AAEXXZ
    0x4ED010 | private: void __thiscall UIButton::DrawOn(void) | ?DrawOn@UIButton@@AAEXXZ
    0x4ED040 | public: virtual void __thiscall UIButton::Action(union eqEvent) | ?Action@UIButton@@UAEXTeqEvent@@@Z
    0x4ED090 | public: virtual void __thiscall UIButton::SetReadOnly(int) | ?SetReadOnly@UIButton@@UAEXH@Z
    0x4ED0D0 | public: virtual void __thiscall UIButton::Switch(int) | ?Switch@UIButton@@UAEXH@Z
    0x4ED140 | public: void __thiscall UIButton::SetType(int) | ?SetType@UIButton@@QAEXH@Z
    0x4ED190 | public: int __thiscall UIButton::TestHit(float,float) | ?TestHit@UIButton@@QAEHMM@Z
    0x4ED1A0 | public: virtual void * __thiscall UIButton::`scalar deleting destructor'(unsigned int) | ??_GUIButton@@UAEPAXI@Z
    public: virtual void * __thiscall UIButton::`vector deleting destructor'(unsigned int) | ??_EUIButton@@UAEPAXI@Z
    0x4ED1D0 | public: virtual void __thiscall UIButton::Enable(void) | ?Enable@UIButton@@UAEXXZ
    0x4ED1F0 | public: virtual void __thiscall UIButton::Disable(void) | ?Disable@UIButton@@UAEXXZ
    0x5B36B0 | const UIButton::`vftable' | ??_7UIButton@@6B@
*/

class UIButton : public uiWidget
{
    // const UIButton::`vftable' @ 0x5B36B0

public:
    // 0x4ECDB0 | ??0UIButton@@QAE@XZ
    UIButton();

    // 0x4ED1A0 | ??_GUIButton@@UAEPAXI@Z
    // 0x4ECE50 | ??1UIButton@@UAE@XZ
    ~UIButton() override;

    // 0x4ED040 | ?Action@UIButton@@UAEXTeqEvent@@@Z
    void Action(union eqEvent arg1) override;

    // 0x4ED1F0 | ?Disable@UIButton@@UAEXXZ
    void Disable() override;

    // 0x4ED1D0 | ?Enable@UIButton@@UAEXXZ
    void Enable() override;

    // 0x4ECEE0 | ?Init@UIButton@@QAEXPAULocString@@HMMMMHVdatCallback@@@Z
    void Init(
        struct LocString* arg1, i32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, i32 arg7, class datCallback arg8);

    // 0x4ED090 | ?SetReadOnly@UIButton@@UAEXH@Z
    void SetReadOnly(i32 arg1) override;

    // 0x4ECFC0 | ?SetString@UIButton@@QAEXPAULocString@@@Z
    void SetString(struct LocString* arg1);

    // 0x4ED140 | ?SetType@UIButton@@QAEXH@Z
    void SetType(i32 arg1);

    // 0x4ED0D0 | ?Switch@UIButton@@UAEXH@Z
    void Switch(i32 arg1) override;

    // 0x4ED190 | ?TestHit@UIButton@@QAEHMM@Z
    i32 TestHit(f32 arg1, f32 arg2);

    // 0x4ECFB0 | ?Update@UIButton@@UAEXXZ
    void Update() override;

private:
    // 0x4ECFE0 | ?DrawOff@UIButton@@AAEXXZ
    void DrawOff();

    // 0x4ED010 | ?DrawOn@UIButton@@AAEXXZ
    void DrawOn();
};

check_size(UIButton, 0xA4);