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

#include "game.h"

/*
    mmgame:gamesingle

    0x433A60 | public: __thiscall mmGameSingle::mmGameSingle(void) | ??0mmGameSingle@@QAE@XZ
    0x433A90 | public: virtual __thiscall mmGameSingle::~mmGameSingle(void) | ??1mmGameSingle@@UAE@XZ
    0x433AA0 | public: virtual int __thiscall mmGameSingle::Init(void) | ?Init@mmGameSingle@@UAEHXZ
    0x433AB0 | public: virtual void __thiscall mmGameSingle::InitOtherPlayers(void) | ?InitOtherPlayers@mmGameSingle@@UAEXXZ
    0x433AC0 | public: virtual void __thiscall mmGameSingle::Reset(void) | ?Reset@mmGameSingle@@UAEXXZ
    0x433B50 | protected: void __thiscall mmGameSingle::EnableRacers(void) | ?EnableRacers@mmGameSingle@@IAEXXZ
    0x433C00 | protected: void __thiscall mmGameSingle::DisableRacers(void) | ?DisableRacers@mmGameSingle@@IAEXXZ
    0x433C70 | public: virtual void __thiscall mmGameSingle::HitWaterHandler(void) | ?HitWaterHandler@mmGameSingle@@UAEXXZ
    0x433C80 | public: virtual void __thiscall mmGameSingle::Update(void) | ?Update@mmGameSingle@@UAEXXZ
    0x433C90 | public: virtual void __thiscall mmGameSingle::UpdateGameInput(int) | ?UpdateGameInput@mmGameSingle@@UAEXH@Z
    0x433CA0 | public: virtual void __thiscall mmGameSingle::UpdateGame(void) | ?UpdateGame@mmGameSingle@@UAEXXZ
    0x433CB0 | protected: bool __thiscall mmGameSingle::UpdateRewards(void) | ?UpdateRewards@mmGameSingle@@IAE_NXZ
    public: void __thiscall mmGameSingle::AddWidgets(class bkBank *) | ?AddWidgets@mmGameSingle@@QAEXPAVbkBank@@@Z
    public: virtual void * __thiscall mmGameSingle::`vector deleting destructor'(unsigned int) | ??_EmmGameSingle@@UAEPAXI@Z
    0x433EF0 | public: virtual void * __thiscall mmGameSingle::`scalar deleting destructor'(unsigned int) | ??_GmmGameSingle@@UAEPAXI@Z
    0x433F20 | public: virtual void __thiscall mmGameSingle::UpdateDebugKeyInput(int) | ?UpdateDebugKeyInput@mmGameSingle@@UAEXH@Z
    0x433F30 | public: __thiscall mmRewardRecord::~mmRewardRecord(void) | ??1mmRewardRecord@@QAE@XZ
    0x5B0EB0 | const mmGameSingle::`vftable' | ??_7mmGameSingle@@6B@
*/

class mmGameSingle : public mmGame
{
    // const mmGameSingle::`vftable' @ 0x5B0EB0

public:
    // 0x433A60 | ??0mmGameSingle@@QAE@XZ
    mmGameSingle();

    // 0x433EF0 | ??_GmmGameSingle@@UAEPAXI@Z
    // 0x433A90 | ??1mmGameSingle@@UAE@XZ
    ~mmGameSingle() override;

    // 0x41ABA0 | ?GetWaypoints@mmGameSingle@@UAEPAVmmWaypoints@@XZ
    class mmWaypoints* GetWaypoints() override;

    // 0x433C70 | ?HitWaterHandler@mmGameSingle@@UAEXXZ
    void HitWaterHandler() override;

    // 0x433AA0 | ?Init@mmGameSingle@@UAEHXZ
    i32 Init() override;

    // 0x433AB0 | ?InitOtherPlayers@mmGameSingle@@UAEXXZ
    void InitOtherPlayers() override;

    // 0x433AC0 | ?Reset@mmGameSingle@@UAEXXZ
    void Reset() override;

    // 0x433C80 | ?Update@mmGameSingle@@UAEXXZ
    void Update() override;

    // 0x433F20 | ?UpdateDebugKeyInput@mmGameSingle@@UAEXH@Z
    void UpdateDebugKeyInput(i32 arg1) override;

    // 0x433CA0 | ?UpdateGame@mmGameSingle@@UAEXXZ
    void UpdateGame() override;

    // 0x433C90 | ?UpdateGameInput@mmGameSingle@@UAEXH@Z
    void UpdateGameInput(i32 arg1) override;

protected:
    // 0x433C00 | ?DisableRacers@mmGameSingle@@IAEXXZ
    void DisableRacers();

    // 0x433B50 | ?EnableRacers@mmGameSingle@@IAEXXZ
    void EnableRacers();

    // 0x433CB0 | ?UpdateRewards@mmGameSingle@@IAE_NXZ
    bool UpdateRewards();
};

check_size(mmGameSingle, 0x0);
