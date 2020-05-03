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

#include "level/inst.h"

/*
    mmgame:wpinst

    0x43F4A0 | public: __thiscall mmWaypointInstance::mmWaypointInstance(void) | ??0mmWaypointInstance@@QAE@XZ
    0x43F510 | public: __thiscall mmWaypointInstance::~mmWaypointInstance(void) | ??1mmWaypointInstance@@QAE@XZ
    0x43F520 | public: virtual class Vector3 const & __thiscall mmWaypointInstance::GetPosition(void) | ?GetPosition@mmWaypointInstance@@UAEABVVector3@@XZ
    0x43F530 | public: virtual class Matrix34 const & __thiscall mmWaypointInstance::GetMatrix(class Matrix34 &) | ?GetMatrix@mmWaypointInstance@@UAEABVMatrix34@@AAV2@@Z
    0x43F550 | public: virtual void __thiscall mmWaypointInstance::SetMatrix(class Matrix34 const &) | ?SetMatrix@mmWaypointInstance@@UAEXABVMatrix34@@@Z
    0x43F570 | public: void __thiscall mmWaypointInstance::MakeVisible(void) | ?MakeVisible@mmWaypointInstance@@QAEXXZ
    0x43F580 | public: void __thiscall mmWaypointInstance::MakeInvisible(void) | ?MakeInvisible@mmWaypointInstance@@QAEXXZ
    0x43F590 | public: __thiscall mmCheckpointInstance::mmCheckpointInstance(void) | ??0mmCheckpointInstance@@QAE@XZ
    0x43F5F0 | public: __thiscall mmCheckpointInstance::~mmCheckpointInstance(void) | ??1mmCheckpointInstance@@QAE@XZ
    0x43F600 | public: virtual void __thiscall mmCheckpointInstance::Init(char *,class Vector3) | ?Init@mmCheckpointInstance@@UAEXPADVVector3@@@Z
    0x43F650 | public: virtual void __thiscall mmCheckpointInstance::Draw(int) | ?Draw@mmCheckpointInstance@@UAEXH@Z
    0x43F7A0 | public: virtual unsigned int __thiscall mmCheckpointInstance::SizeOf(void) | ?SizeOf@mmCheckpointInstance@@UAEIXZ
    0x43F7B0 | public: __thiscall mmBillInstance::mmBillInstance(void) | ??0mmBillInstance@@QAE@XZ
    0x43F810 | public: __thiscall mmBillInstance::~mmBillInstance(void) | ??1mmBillInstance@@QAE@XZ
    0x43F820 | public: virtual void __thiscall mmBillInstance::Init(char *,class Vector3) | ?Init@mmBillInstance@@UAEXPADVVector3@@@Z
    0x43F860 | public: virtual void __thiscall mmBillInstance::Draw(int) | ?Draw@mmBillInstance@@UAEXH@Z
    0x43FA10 | public: virtual unsigned int __thiscall mmBillInstance::SizeOf(void) | ?SizeOf@mmBillInstance@@UAEIXZ
    0x43FA20 | public: __thiscall mmPowerupInstance::mmPowerupInstance(void) | ??0mmPowerupInstance@@QAE@XZ
    0x43FA80 | public: __thiscall mmPowerupInstance::~mmPowerupInstance(void) | ??1mmPowerupInstance@@QAE@XZ
    0x43FA90 | public: virtual void __thiscall mmPowerupInstance::Init(char *,class Vector3) | ?Init@mmPowerupInstance@@UAEXPADVVector3@@@Z
    0x43FAD0 | public: virtual void __thiscall mmPowerupInstance::Draw(int) | ?Draw@mmPowerupInstance@@UAEXH@Z
    0x43FC20 | public: virtual unsigned int __thiscall mmPowerupInstance::SizeOf(void) | ?SizeOf@mmPowerupInstance@@UAEIXZ
    0x43FC30 | public: virtual void __thiscall lvlInstance::Detach(void) | ?Detach@lvlInstance@@UAEXXZ
    0x43FC40 | public: virtual bool __thiscall lvlInstance::IsCollidable(void) | ?IsCollidable@lvlInstance@@UAE_NXZ
    0x43FC50 | public: virtual bool __thiscall lvlInstance::IsTerrainCollidable(void) | ?IsTerrainCollidable@lvlInstance@@UAE_NXZ
    0x43FC60 | public: virtual void __thiscall mmWaypointInstance::SetVariant(int) | ?SetVariant@mmWaypointInstance@@UAEXH@Z
    0x5B11E8 | const mmWaypointInstance::`vftable' | ??_7mmWaypointInstance@@6B@
    0x5B1254 | const mmCheckpointInstance::`vftable' | ??_7mmCheckpointInstance@@6B@
    0x5B12C0 | const mmBillInstance::`vftable' | ??_7mmBillInstance@@6B@
    0x5B132C | const mmPowerupInstance::`vftable' | ??_7mmPowerupInstance@@6B@
*/

class mmWaypointInstance : public lvlInstance
{
    // const mmWaypointInstance::`vftable' @ 0x5B11E8

public:
    // 0x43F4A0 | ??0mmWaypointInstance@@QAE@XZ
    mmWaypointInstance();

    // 0x43F510 | ??1mmWaypointInstance@@QAE@XZ
    ~mmWaypointInstance();

    // 0x43F530 | ?GetMatrix@mmWaypointInstance@@UAEABVMatrix34@@AAV2@@Z
    class Matrix34 const& GetMatrix(class Matrix34& arg1) override;

    // 0x43F520 | ?GetPosition@mmWaypointInstance@@UAEABVVector3@@XZ
    class Vector3 const& GetPosition() override;

    // 0x43F580 | ?MakeInvisible@mmWaypointInstance@@QAEXXZ
    void MakeInvisible();

    // 0x43F570 | ?MakeVisible@mmWaypointInstance@@QAEXXZ
    void MakeVisible();

    // 0x43F550 | ?SetMatrix@mmWaypointInstance@@UAEXABVMatrix34@@@Z
    void SetMatrix(class Matrix34 const& arg1) override;

    // 0x43FC60 | ?SetVariant@mmWaypointInstance@@UAEXH@Z
    void SetVariant(i32 arg1) override;

    virtual void Init(char* arg1, class Vector3 arg2) = 0;
};

check_size(mmWaypointInstance, 0x0);

class mmCheckpointInstance : public mmWaypointInstance
{
    // const mmCheckpointInstance::`vftable' @ 0x5B1254

public:
    // 0x43F590 | ??0mmCheckpointInstance@@QAE@XZ
    mmCheckpointInstance();

    // 0x43F5F0 | ??1mmCheckpointInstance@@QAE@XZ
    ~mmCheckpointInstance();

    // 0x43F650 | ?Draw@mmCheckpointInstance@@UAEXH@Z
    void Draw(i32 arg1) override;

    // 0x43F600 | ?Init@mmCheckpointInstance@@UAEXPADVVector3@@@Z
    void Init(char* arg1, class Vector3 arg2) override;

    // 0x43F7A0 | ?SizeOf@mmCheckpointInstance@@UAEIXZ
    u32 SizeOf() override;
};

check_size(mmCheckpointInstance, 0x0);

class mmBillInstance : public mmWaypointInstance
{
    // const mmBillInstance::`vftable' @ 0x5B12C0

public:
    // 0x43F7B0 | ??0mmBillInstance@@QAE@XZ
    mmBillInstance();

    // 0x43F810 | ??1mmBillInstance@@QAE@XZ
    ~mmBillInstance();

    // 0x43F860 | ?Draw@mmBillInstance@@UAEXH@Z
    void Draw(i32 arg1) override;

    // 0x43F820 | ?Init@mmBillInstance@@UAEXPADVVector3@@@Z
    void Init(char* arg1, class Vector3 arg2) override;

    // 0x43FA10 | ?SizeOf@mmBillInstance@@UAEIXZ
    u32 SizeOf() override;
};

check_size(mmBillInstance, 0x0);

class mmPowerupInstance : public mmWaypointInstance
{
    // const mmPowerupInstance::`vftable' @ 0x5B132C

public:
    // 0x43FA20 | ??0mmPowerupInstance@@QAE@XZ
    mmPowerupInstance();

    // 0x43FA80 | ??1mmPowerupInstance@@QAE@XZ
    ~mmPowerupInstance();

    // 0x43FAD0 | ?Draw@mmPowerupInstance@@UAEXH@Z
    void Draw(i32 arg1) override;

    // 0x43FA90 | ?Init@mmPowerupInstance@@UAEXPADVVector3@@@Z
    void Init(char* arg1, class Vector3 arg2) override;

    // 0x43FC20 | ?SizeOf@mmPowerupInstance@@UAEIXZ
    u32 SizeOf() override;
};

check_size(mmPowerupInstance, 0x0);
