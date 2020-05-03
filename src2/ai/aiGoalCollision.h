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

/*
    ai:aiGoalCollision

    0x56F550 | public: __thiscall aiGoalCollision::aiGoalCollision(class aiRailSet *,class aiVehicleSpline *) | ??0aiGoalCollision@@QAE@PAVaiRailSet@@PAVaiVehicleSpline@@@Z
    0x56F580 | public: __thiscall aiGoalCollision::~aiGoalCollision(void) | ??1aiGoalCollision@@QAE@XZ
    0x56F590 | public: virtual void __thiscall aiGoalCollision::Init(void) | ?Init@aiGoalCollision@@UAEXXZ
    0x56F5A0 | public: virtual void __thiscall aiGoalCollision::Reset(void) | ?Reset@aiGoalCollision@@UAEXXZ
    0x56F5B0 | public: virtual void __thiscall aiGoalCollision::Update(void) | ?Update@aiGoalCollision@@UAEXXZ
    0x56F620 | public: int __thiscall aiGoalCollision::Context(void) | ?Context@aiGoalCollision@@QAEHXZ
    0x56F640 | public: int __thiscall aiGoalCollision::Priority(void) | ?Priority@aiGoalCollision@@QAEHXZ
    0x5B5C14 | const aiGoalCollision::`vftable' | ??_7aiGoalCollision@@6B@
*/

struct aiGoalCollision
{
    // const aiGoalCollision::`vftable' @ 0x5B5C14

public:
    // 0x56F550 | ??0aiGoalCollision@@QAE@PAVaiRailSet@@PAVaiVehicleSpline@@@Z
    aiGoalCollision(class aiRailSet* arg1, class aiVehicleSpline* arg2);

    // 0x56F580 | ??1aiGoalCollision@@QAE@XZ
    ~aiGoalCollision();

    // 0x56F620 | ?Context@aiGoalCollision@@QAEHXZ
    i32 Context();

    // 0x56F640 | ?Priority@aiGoalCollision@@QAEHXZ
    i32 Priority();

    // 0x56F590 | ?Init@aiGoalCollision@@UAEXXZ
    virtual void Init();

    // 0x56F5A0 | ?Reset@aiGoalCollision@@UAEXXZ
    virtual void Reset();

    // 0x56F5B0 | ?Update@aiGoalCollision@@UAEXXZ
    virtual void Update();
};

check_size(aiGoalCollision, 0x10);