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

#include "button.h"

/*
    mmwidget:togglebutton

    0x4EDE10 | public: __thiscall UIToggleButton::UIToggleButton(void) | ??0UIToggleButton@@QAE@XZ
    0x4EDE90 | public: virtual __thiscall UIToggleButton::~UIToggleButton(void) | ??1UIToggleButton@@UAE@XZ
    0x4EDF00 | public: void __thiscall UIToggleButton::Init(struct LocString *,int *,float,float,float,float,int,int,class datCallback) | ?Init@UIToggleButton@@QAEXPAULocString@@PAHMMMMHHVdatCallback@@@Z
    0x4EDFA0 | protected: virtual void __thiscall UIToggleButton::DrawOff(void) | ?DrawOff@UIToggleButton@@MAEXXZ
    0x4EDFC0 | protected: virtual void __thiscall UIToggleButton::DrawOn(void) | ?DrawOn@UIToggleButton@@MAEXXZ
    0x4EDFE0 | public: virtual void __thiscall UIToggleButton::DoToggle(void) | ?DoToggle@UIToggleButton@@UAEXXZ
    0x4EE000 | public: virtual void __thiscall UIToggleButton::Action(union eqEvent) | ?Action@UIToggleButton@@UAEXTeqEvent@@@Z
    public: virtual void * __thiscall UIToggleButton::`vector deleting destructor'(unsigned int) | ??_EUIToggleButton@@UAEPAXI@Z
    0x4EE080 | public: virtual void * __thiscall UIToggleButton::`scalar deleting destructor'(unsigned int) | ??_GUIToggleButton@@UAEPAXI@Z
    0x4EE0B0 | public: virtual void __thiscall UIToggleButton::Update(void) | ?Update@UIToggleButton@@UAEXXZ
    0x5B38A4 | const UIToggleButton::`vftable' | ??_7UIToggleButton@@6B@
    protected: static int UIToggleButton::ToggleBMLoaded | ?ToggleBMLoaded@UIToggleButton@@1HA
*/

class UIToggleButton : public UIButton
{
    // const UIToggleButton::`vftable' @ 0x5B38A4

public:
    // 0x4EDE10 | ??0UIToggleButton@@QAE@XZ
    UIToggleButton();

    // 0x4EE080 | ??_GUIToggleButton@@UAEPAXI@Z
    // 0x4EDE90 | ??1UIToggleButton@@UAE@XZ
    ~UIToggleButton() override;

    // 0x4EE000 | ?Action@UIToggleButton@@UAEXTeqEvent@@@Z
    void Action(union eqEvent arg1) override;

    // 0x4EDF00 | ?Init@UIToggleButton@@QAEXPAULocString@@PAHMMMMHHVdatCallback@@@Z
    void Init(struct LocString* arg1, i32* arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, i32 arg7, i32 arg8,
        class datCallback arg9);

    // 0x4EE0B0 | ?Update@UIToggleButton@@UAEXXZ
    void Update() override;

    // 0x4EDFE0 | ?DoToggle@UIToggleButton@@UAEXXZ
    virtual void DoToggle();

protected:
    // 0x4EDFA0 | ?DrawOff@UIToggleButton@@MAEXXZ
    virtual void DrawOff();

    // 0x4EDFC0 | ?DrawOn@UIToggleButton@@MAEXXZ
    virtual void DrawOn();
};

check_size(UIToggleButton, 0xAC);
