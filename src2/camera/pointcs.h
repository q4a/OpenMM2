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

#include "carcs.h"

/*
    camera:pointcs

    0x520610 | public: __thiscall camPointCS::camPointCS(void) | ??0camPointCS@@QAE@XZ
    0x520690 | public: virtual void __thiscall camPointCS::Reset(void) | ?Reset@camPointCS@@UAEXXZ
    0x5206A0 | public: virtual void __thiscall camPointCS::MakeActive(void) | ?MakeActive@camPointCS@@UAEXXZ
    0x5206B0 | public: void __thiscall camPointCS::SetPos(class Vector3 &) | ?SetPos@camPointCS@@QAEXAAVVector3@@@Z
    0x5206F0 | public: void __thiscall camPointCS::SetMaxDist(float) | ?SetMaxDist@camPointCS@@QAEXM@Z
    0x520710 | public: void __thiscall camPointCS::SetMinDist(float) | ?SetMinDist@camPointCS@@QAEXM@Z
    0x520730 | public: void __thiscall camPointCS::SetAppRate(float) | ?SetAppRate@camPointCS@@QAEXM@Z
    0x520740 | public: void __thiscall camPointCS::SetVel(class Vector3 &) | ?SetVel@camPointCS@@QAEXAAVVector3@@@Z
    0x520760 | public: class Vector3 __thiscall camPointCS::GetPos(void) | ?GetPos@camPointCS@@QAE?AVVector3@@XZ
    0x520790 | public: virtual void __thiscall camPointCS::Update(void) | ?Update@camPointCS@@UAEXXZ
    0x5209F0 | public: virtual void * __thiscall camPointCS::`scalar deleting destructor'(unsigned int) | ??_GcamPointCS@@UAEPAXI@Z
    public: virtual void * __thiscall camPointCS::`vector deleting destructor'(unsigned int) | ??_EcamPointCS@@UAEPAXI@Z
    0x520A20 | public: virtual char * __thiscall camPointCS::GetClassName(void) | ?GetClassName@camPointCS@@UAEPADXZ
    0x5B4FD8 | const camPointCS::`vftable' | ??_7camPointCS@@6B@
*/

class camPointCS : public camCarCS
{
    // const camPointCS::`vftable' @ 0x5B4FD8

public:
    // 0x520610 | ??0camPointCS@@QAE@XZ
    camPointCS();

    // 0x5209F0 | ??_GcamPointCS@@UAEPAXI@Z
    // 0x406820 | ??1camPointCS@@UAE@XZ
    ~camPointCS() override;

    // 0x520A20 | ?GetClassName@camPointCS@@UAEPADXZ
    char* GetClassName() override;

    // 0x520760 | ?GetPos@camPointCS@@QAE?AVVector3@@XZ
    class Vector3 GetPos();

    // 0x5206A0 | ?MakeActive@camPointCS@@UAEXXZ
    void MakeActive() override;

    // 0x520690 | ?Reset@camPointCS@@UAEXXZ
    void Reset() override;

    // 0x520730 | ?SetAppRate@camPointCS@@QAEXM@Z
    void SetAppRate(f32 arg1);

    // 0x5206F0 | ?SetMaxDist@camPointCS@@QAEXM@Z
    void SetMaxDist(f32 arg1);

    // 0x520710 | ?SetMinDist@camPointCS@@QAEXM@Z
    void SetMinDist(f32 arg1);

    // 0x5206B0 | ?SetPos@camPointCS@@QAEXAAVVector3@@@Z
    void SetPos(class Vector3& arg1);

    // 0x520740 | ?SetVel@camPointCS@@QAEXAAVVector3@@@Z
    void SetVel(class Vector3& arg1);

    // 0x520790 | ?Update@camPointCS@@UAEXXZ
    void Update() override;
};

check_size(camPointCS, 0x0);