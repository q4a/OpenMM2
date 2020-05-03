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
    mmwidget:label

    0x4ED200 | public: __thiscall UILabel::UILabel(void) | ??0UILabel@@QAE@XZ
    0x4ED280 | public: virtual __thiscall UILabel::~UILabel(void) | ??1UILabel@@UAE@XZ
    0x4ED2E0 | public: void __thiscall UILabel::Init(struct LocString *,int,float,float,float,float,int) | ?Init@UILabel@@QAEXPAULocString@@HMMMMH@Z
    0x4ED3A0 | public: void __thiscall UILabel::SetText(struct LocString *) | ?SetText@UILabel@@QAEXPAULocString@@@Z
    0x4ED3C0 | public: virtual void __thiscall UILabel::Update(void) | ?Update@UILabel@@UAEXXZ
    0x4ED400 | public: void __thiscall UILabel::SetBlink(int) | ?SetBlink@UILabel@@QAEXH@Z
    0x4ED430 | public: virtual void __thiscall UILabel::Switch(int) | ?Switch@UILabel@@UAEXH@Z
    0x4ED440 | public: void __thiscall UILabel::SwitchState(int) | ?SwitchState@UILabel@@QAEXH@Z
    public: virtual void * __thiscall UILabel::`vector deleting destructor'(unsigned int) | ??_EUILabel@@UAEPAXI@Z
    0x4ED490 | public: virtual void * __thiscall UILabel::`scalar deleting destructor'(unsigned int) | ??_GUILabel@@UAEPAXI@Z
    0x4ED4C0 | public: virtual void __thiscall UILabel::Action(union eqEvent) | ?Action@UILabel@@UAEXTeqEvent@@@Z
    0x5B3714 | const UILabel::`vftable' | ??_7UILabel@@6B@
    0x6B03F4 | public: static float UILabel::TextHeight | ?TextHeight@UILabel@@2MA
*/

class UILabel : public uiWidget
{
    // const UILabel::`vftable' @ 0x5B3714

public:
    // 0x4ED200 | ??0UILabel@@QAE@XZ
    UILabel();

    // 0x4ED490 | ??_GUILabel@@UAEPAXI@Z
    // 0x4ED280 | ??1UILabel@@UAE@XZ
    ~UILabel() override;

    // 0x4ED4C0 | ?Action@UILabel@@UAEXTeqEvent@@@Z
    void Action(union eqEvent arg1) override;

    // 0x4ED2E0 | ?Init@UILabel@@QAEXPAULocString@@HMMMMH@Z
    void Init(struct LocString* arg1, i32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, i32 arg7);

    // 0x4ED400 | ?SetBlink@UILabel@@QAEXH@Z
    void SetBlink(i32 arg1);

    // 0x4ED3A0 | ?SetText@UILabel@@QAEXPAULocString@@@Z
    void SetText(struct LocString* arg1);

    // 0x4ED430 | ?Switch@UILabel@@UAEXH@Z
    void Switch(i32 arg1) override;

    // 0x4ED440 | ?SwitchState@UILabel@@QAEXH@Z
    void SwitchState(i32 arg1);

    // 0x4ED3C0 | ?Update@UILabel@@UAEXXZ
    void Update() override;

    // 0x6B03F4 | ?TextHeight@UILabel@@2MA
    static inline extern_var(0x6B03F4, f32, TextHeight);
};

check_size(UILabel, 0x80);
