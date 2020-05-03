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
    ped:ragdollmgr

    0x57B8B0 | public: __thiscall pedRagdollMgr::pedRagdollMgr(void) | ??0pedRagdollMgr@@QAE@XZ
    0x57B910 | public: virtual __thiscall pedRagdollMgr::~pedRagdollMgr(void) | ??1pedRagdollMgr@@UAE@XZ
    0x57B9B0 | public: void __thiscall pedRagdollMgr::Init(int,char * *) | ?Init@pedRagdollMgr@@QAEXHPAPAD@Z
    0x57BAF0 | public: class pedActive * __thiscall pedRagdollMgr::Attach(class aiPedestrianInstance *) | ?Attach@pedRagdollMgr@@QAEPAVpedActive@@PAVaiPedestrianInstance@@@Z
    0x57BB80 | public: void __thiscall pedRagdollMgr::Detach(class aiPedestrianInstance *) | ?Detach@pedRagdollMgr@@QAEXPAVaiPedestrianInstance@@@Z
    0x57BBB0 | public: bool __thiscall pedRagdollMgr::UnusedActive(void) | ?UnusedActive@pedRagdollMgr@@QAE_NXZ
    0x57BBD0 | public: virtual void __thiscall pedRagdollMgr::Reset(void) | ?Reset@pedRagdollMgr@@UAEXXZ
    0x57BC10 | public: virtual void __thiscall pedRagdollMgr::Update(void) | ?Update@pedRagdollMgr@@UAEXXZ
    public: virtual void * __thiscall pedRagdollMgr::`scalar deleting destructor'(unsigned int) | ??_GpedRagdollMgr@@UAEPAXI@Z
    0x57BC80 | public: virtual void * __thiscall pedRagdollMgr::`vector deleting destructor'(unsigned int) | ??_EpedRagdollMgr@@UAEPAXI@Z
    0x57BCB0 | public: void * __thiscall pedActiveData::`vector deleting destructor'(unsigned int) | ??_EpedActiveData@@QAEPAXI@Z
    0x57BD10 | public: virtual void * __thiscall pedActive::`vector deleting destructor'(unsigned int) | ??_EpedActive@@UAEPAXI@Z
    0x5B635C | const pedRagdollMgr::`vftable' | ??_7pedRagdollMgr@@6B@
    0x6B4740 | public: static class pedRagdollMgr * pedRagdollMgr::Instance | ?Instance@pedRagdollMgr@@2PAV1@A
*/

class pedRagdollMgr : public asNode
{
    // const pedRagdollMgr::`vftable' @ 0x5B635C

public:
    // 0x57B8B0 | ??0pedRagdollMgr@@QAE@XZ
    pedRagdollMgr();

    // 0x57BC80 | ??_EpedRagdollMgr@@UAEPAXI@Z
    // 0x57B910 | ??1pedRagdollMgr@@UAE@XZ
    ~pedRagdollMgr() override;

    // 0x57BAF0 | ?Attach@pedRagdollMgr@@QAEPAVpedActive@@PAVaiPedestrianInstance@@@Z
    class pedActive* Attach(class aiPedestrianInstance* arg1);

    // 0x57BB80 | ?Detach@pedRagdollMgr@@QAEXPAVaiPedestrianInstance@@@Z
    void Detach(class aiPedestrianInstance* arg1);

    // 0x57B9B0 | ?Init@pedRagdollMgr@@QAEXHPAPAD@Z
    void Init(i32 arg1, char** arg2);

    // 0x57BBD0 | ?Reset@pedRagdollMgr@@UAEXXZ
    void Reset() override;

    // 0x57BBB0 | ?UnusedActive@pedRagdollMgr@@QAE_NXZ
    bool UnusedActive();

    // 0x57BC10 | ?Update@pedRagdollMgr@@UAEXXZ
    void Update() override;

    // 0x6B4740 | ?Instance@pedRagdollMgr@@2PAV1@A
    static inline extern_var(0x6B4740, class pedRagdollMgr*, Instance);
};

check_size(pedRagdollMgr, 0x0);
