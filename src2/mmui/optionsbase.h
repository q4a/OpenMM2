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

#include "mmwidget/menu.h"

/*
    mmui:optionsbase

    0x50D230 | public: __thiscall OptionsBase::OptionsBase(int) | ??0OptionsBase@@QAE@H@Z
    0x50D3C0 | public: void __thiscall OptionsBase::CreateTitle(struct LocString *) | ?CreateTitle@OptionsBase@@QAEXPAULocString@@@Z
    0x50D3F0 | public: virtual __thiscall OptionsBase::~OptionsBase(void) | ??1OptionsBase@@UAE@XZ
    public: virtual void * __thiscall OptionsBase::`vector deleting destructor'(unsigned int) | ??_EOptionsBase@@UAEPAXI@Z
    0x50D460 | public: virtual void * __thiscall OptionsBase::`scalar deleting destructor'(unsigned int) | ??_GOptionsBase@@UAEPAXI@Z
    0x50D490 | [thunk]: __thiscall `vcall'{80,{flat}}' }' | ??_9@$BFA@AE
    0x50D4A0 | [thunk]: __thiscall `vcall'{84,{flat}}' }' | ??_9@$BFE@AE
    0x50D4B0 | public: virtual void __thiscall OptionsBase::ResetDefaultAction(void) | ?ResetDefaultAction@OptionsBase@@UAEXXZ
    0x5B4AD8 | const OptionsBase::`vftable' | ??_7OptionsBase@@6B@
*/

class OptionsBase : public UIMenu
{
    // const OptionsBase::`vftable' @ 0x5B4AD8

public:
    // 0x50D230 | ??0OptionsBase@@QAE@H@Z
    OptionsBase(i32 arg1);

    // 0x50D460 | ??_GOptionsBase@@UAEPAXI@Z
    // 0x50D3F0 | ??1OptionsBase@@UAE@XZ
    ~OptionsBase() override;

    // 0x50D3C0 | ?CreateTitle@OptionsBase@@QAEXPAULocString@@@Z
    void CreateTitle(struct LocString* arg1);

    // 0x4F5460 | ?IsAnOptionMenu@OptionsBase@@UAEHXZ
    i32 IsAnOptionMenu() override;

    virtual void CancelAction() = 0;

    virtual void DoneAction() = 0;

    // 0x50D4B0 | ?ResetDefaultAction@OptionsBase@@UAEXXZ
    virtual void ResetDefaultAction();

    // 0x4F5450 | ?StoreCurrentSetup@OptionsBase@@UAEXXZ
    virtual void StoreCurrentSetup();
};

check_size(OptionsBase, 0x0);

// 0x50D490 | ??_9@$BFA@AE (Skipped: void)

// 0x50D4A0 | ??_9@$BFE@AE (Skipped: void)