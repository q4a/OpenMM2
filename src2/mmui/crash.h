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
#include "node/node.h"

/*
    mmui:crash

    0x502EF0 | public: __thiscall ccStatus::ccStatus(void) | ??0ccStatus@@QAE@XZ
    0x502F20 | public: virtual __thiscall ccStatus::~ccStatus(void) | ??1ccStatus@@UAE@XZ
    0x502F80 | public: void __thiscall ccStatus::LoadBitmap(char *,int,int,int) | ?LoadBitmap@ccStatus@@QAEXPADHHH@Z
    0x502FF0 | public: virtual void __thiscall ccStatus::Update(void) | ?Update@ccStatus@@UAEXXZ
    0x503010 | public: virtual void __thiscall ccStatus::Cull(void) | ?Cull@ccStatus@@UAEXXZ
    0x503060 | public: void __thiscall ccStatus::SetStatus(short) | ?SetStatus@ccStatus@@QAEXF@Z
    0x503070 | public: __thiscall CrashCourse::CrashCourse(int) | ??0CrashCourse@@QAE@H@Z
    0x503710 | public: virtual __thiscall CrashCourse::~CrashCourse(void) | ??1CrashCourse@@UAE@XZ
    0x503790 | public: void __thiscall CrashCourse::SetRaceGrade(int,int) | ?SetRaceGrade@CrashCourse@@QAEXHH@Z
    0x5037C0 | public: virtual void __thiscall CrashCourse::PreSetup(void) | ?PreSetup@CrashCourse@@UAEXXZ
    0x503960 | public: void __thiscall CrashCourse::GameCallback(void) | ?GameCallback@CrashCourse@@QAEXXZ
    0x503980 | public: void __thiscall CrashCourse::SetEnvironment(void) | ?SetEnvironment@CrashCourse@@QAEXXZ
    0x503BD0 | public: void __thiscall CrashCourse::SetRaceState(void) | ?SetRaceState@CrashCourse@@QAEXXZ
    0x503CF0 | public: void __thiscall CrashCourse::ChangeLocalVals(void) | ?ChangeLocalVals@CrashCourse@@QAEXXZ
    0x503F00 | public: void __thiscall CrashCourse::FocusDescription(int,int) | ?FocusDescription@CrashCourse@@QAEXHH@Z
    0x503F10 | public: void __thiscall CrashCourse::SetProgressMask(int) | ?SetProgressMask@CrashCourse@@QAEXH@Z
    0x503F30 | public: void __thiscall CrashCourse::SetBlitzMask(int) | ?SetBlitzMask@CrashCourse@@QAEXH@Z
    0x503F50 | public: void __thiscall CrashCourse::SetCheckpointMask(int) | ?SetCheckpointMask@CrashCourse@@QAEXH@Z
    0x503F70 | public: void __thiscall CrashCourse::IncRaceName(void) | ?IncRaceName@CrashCourse@@QAEXXZ
    0x504010 | public: void __thiscall CrashCourse::DecRaceName(void) | ?DecRaceName@CrashCourse@@QAEXXZ
    0x504080 | public: void __thiscall CrashCourse::SetVehicleNext(bool) | ?SetVehicleNext@CrashCourse@@QAEX_N@Z
    public: virtual void * __thiscall ccStatus::`vector deleting destructor'(unsigned int) | ??_EccStatus@@UAEPAXI@Z
    0x5040D0 | public: virtual void * __thiscall ccStatus::`scalar deleting destructor'(unsigned int) | ??_GccStatus@@UAEPAXI@Z
    0x504100 | public: virtual void * __thiscall CrashCourse::`scalar deleting destructor'(unsigned int) | ??_GCrashCourse@@UAEPAXI@Z
    public: virtual void * __thiscall CrashCourse::`vector deleting destructor'(unsigned int) | ??_ECrashCourse@@UAEPAXI@Z
    0x5B43DC | const ccStatus::`vftable' | ??_7ccStatus@@6B@
    0x5B4410 | const CrashCourse::`vftable' | ??_7CrashCourse@@6B@
*/

class ccStatus : public asNode
{
    // const ccStatus::`vftable' @ 0x5B43DC

public:
    // 0x502EF0 | ??0ccStatus@@QAE@XZ
    ccStatus();

    // 0x5040D0 | ??_GccStatus@@UAEPAXI@Z
    // 0x502F20 | ??1ccStatus@@UAE@XZ
    ~ccStatus() override;

    // 0x503010 | ?Cull@ccStatus@@UAEXXZ
    void Cull() override;

    // 0x502F80 | ?LoadBitmap@ccStatus@@QAEXPADHHH@Z
    void LoadBitmap(char* arg1, i32 arg2, i32 arg3, i32 arg4);

    // 0x503060 | ?SetStatus@ccStatus@@QAEXF@Z
    void SetStatus(i16 arg1);

    // 0x502FF0 | ?Update@ccStatus@@UAEXXZ
    void Update() override;
};

check_size(ccStatus, 0x38);

class CrashCourse : public UIMenu
{
    // const CrashCourse::`vftable' @ 0x5B4410

public:
    // 0x503070 | ??0CrashCourse@@QAE@H@Z
    CrashCourse(i32 arg1);

    // 0x504100 | ??_GCrashCourse@@UAEPAXI@Z
    // 0x503710 | ??1CrashCourse@@UAE@XZ
    ~CrashCourse() override;

    // 0x503CF0 | ?ChangeLocalVals@CrashCourse@@QAEXXZ
    void ChangeLocalVals();

    // 0x504010 | ?DecRaceName@CrashCourse@@QAEXXZ
    void DecRaceName();

    // 0x503F00 | ?FocusDescription@CrashCourse@@QAEXHH@Z
    void FocusDescription(i32 arg1, i32 arg2);

    // 0x503960 | ?GameCallback@CrashCourse@@QAEXXZ
    void GameCallback();

    // 0x503F70 | ?IncRaceName@CrashCourse@@QAEXXZ
    void IncRaceName();

    // 0x5037C0 | ?PreSetup@CrashCourse@@UAEXXZ
    void PreSetup() override;

    // 0x503F30 | ?SetBlitzMask@CrashCourse@@QAEXH@Z
    void SetBlitzMask(i32 arg1);

    // 0x503F50 | ?SetCheckpointMask@CrashCourse@@QAEXH@Z
    void SetCheckpointMask(i32 arg1);

    // 0x503980 | ?SetEnvironment@CrashCourse@@QAEXXZ
    void SetEnvironment();

    // 0x503F10 | ?SetProgressMask@CrashCourse@@QAEXH@Z
    void SetProgressMask(i32 arg1);

    // 0x503790 | ?SetRaceGrade@CrashCourse@@QAEXHH@Z
    void SetRaceGrade(i32 arg1, i32 arg2);

    // 0x503BD0 | ?SetRaceState@CrashCourse@@QAEXXZ
    void SetRaceState();

    // 0x504080 | ?SetVehicleNext@CrashCourse@@QAEX_N@Z
    void SetVehicleNext(bool arg1);
};

check_size(CrashCourse, 0x850);