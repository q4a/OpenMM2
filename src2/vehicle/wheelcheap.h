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

#include "node/node.h"

/*
    vehicle:wheelcheap

    0x59D790 | public: __thiscall vehWheelCheap::vehWheelCheap(void) | ??0vehWheelCheap@@QAE@XZ
    0x59D860 | public: virtual void __thiscall vehWheelCheap::Reset(void) | ?Reset@vehWheelCheap@@UAEXXZ
    0x59D890 | public: void __thiscall vehWheelCheap::Init(class Vector3 *,class aiVehicleData *,class phInertialCS *) | ?Init@vehWheelCheap@@QAEXPAVVector3@@PAVaiVehicleData@@PAVphInertialCS@@@Z
    0x59D970 | public: virtual void __thiscall vehWheelCheap::Update(void) | ?Update@vehWheelCheap@@UAEXXZ
    public: virtual void * __thiscall vehWheelCheap::`vector deleting destructor'(unsigned int) | ??_EvehWheelCheap@@UAEPAXI@Z
    0x59E280 | public: virtual void * __thiscall vehWheelCheap::`scalar deleting destructor'(unsigned int) | ??_GvehWheelCheap@@UAEPAXI@Z
    0x5B8790 | const vehWheelCheap::`vftable' | ??_7vehWheelCheap@@6B@
*/

class vehWheelCheap : public asNode
{
    // const vehWheelCheap::`vftable' @ 0x5B8790

public:
    // 0x59D790 | ??0vehWheelCheap@@QAE@XZ
    vehWheelCheap();

    // 0x59E280 | ??_GvehWheelCheap@@UAEPAXI@Z
    // 0x554360 | ??1vehWheelCheap@@UAE@XZ
    ~vehWheelCheap() override;

    // 0x59D890 | ?Init@vehWheelCheap@@QAEXPAVVector3@@PAVaiVehicleData@@PAVphInertialCS@@@Z
    void Init(class Vector3* arg1, class aiVehicleData* arg2, class phInertialCS* arg3);

    // 0x59D860 | ?Reset@vehWheelCheap@@UAEXXZ
    void Reset() override;

    // 0x59D970 | ?Update@vehWheelCheap@@UAEXXZ
    void Update() override;
};

check_size(vehWheelCheap, 0x0);