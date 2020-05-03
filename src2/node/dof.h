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

#include "linear.h"

/*
    node:dof

    0x596E20 | public: __thiscall asDofCS::asDofCS(void) | ??0asDofCS@@QAE@XZ
    0x596F10 | public: void __thiscall asDofCS::operator=(class asDofCS const &) | ??4asDofCS@@QAEXABV0@@Z
    0x597050 | public: virtual void __thiscall asDofCS::Reset(void) | ?Reset@asDofCS@@UAEXXZ
    0x597080 | public: void __thiscall asDofCS::SetTime(float,float,int) | ?SetTime@asDofCS@@QAEXMMH@Z
    0x5970F0 | public: virtual void __thiscall asDofCS::Update(void) | ?Update@asDofCS@@UAEXXZ
    0x597750 | public: void __thiscall asDofCS::AddWidgets(class Bank *) | ?AddWidgets@asDofCS@@QAEXPAVBank@@@Z
    0x597760 | public: virtual void * __thiscall asDofCS::`scalar deleting destructor'(unsigned int) | ??_GasDofCS@@UAEPAXI@Z
    public: virtual char * __thiscall asDofCS::GetClassName(void) | ?GetClassName@asDofCS@@UAEPADXZ
    0x5B86E8 | const asDofCS::`vftable' | ??_7asDofCS@@6B@
*/

class asDofCS : public asLinearCS
{
    // const asDofCS::`vftable' @ 0x5B86E8

public:
    // 0x596E20 | ??0asDofCS@@QAE@XZ
    asDofCS();

    // 0x4F7990 | ??_EasDofCS@@UAEPAXI@Z
    // 0x4F79F0 | ??1asDofCS@@UAE@XZ
    // 0x597760 | ??_GasDofCS@@UAEPAXI@Z
    ~asDofCS() override;

    // 0x596F10 | ??4asDofCS@@QAEXABV0@@Z
    void operator=(class asDofCS const& arg1);

    // 0x597750 | ?AddWidgets@asDofCS@@QAEXPAVBank@@@Z
    void AddWidgets(class Bank* arg1);

    // 0x597050 | ?Reset@asDofCS@@UAEXXZ
    void Reset() override;

    // 0x597080 | ?SetTime@asDofCS@@QAEXMMH@Z
    void SetTime(f32 arg1, f32 arg2, i32 arg3);

    // 0x5970F0 | ?Update@asDofCS@@UAEXXZ
    void Update() override;
};

check_size(asDofCS, 0xF0);