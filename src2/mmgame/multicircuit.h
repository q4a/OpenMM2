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

#include "gamemulti.h"

/*
    mmgame:multicircuit

    0x421B90 | public: __thiscall mmMultiCircuit::mmMultiCircuit(void) | ??0mmMultiCircuit@@QAE@XZ
    0x421BC0 | public: virtual __thiscall mmMultiCircuit::~mmMultiCircuit(void) | ??1mmMultiCircuit@@UAE@XZ
    0x421C60 | public: virtual int __thiscall mmMultiCircuit::Init(void) | ?Init@mmMultiCircuit@@UAEHXZ
    0x421DD0 | public: virtual void __thiscall mmMultiCircuit::InitMyPlayer(void) | ?InitMyPlayer@mmMultiCircuit@@UAEXXZ
    0x421E40 | public: virtual void __thiscall mmMultiCircuit::InitHUD(void) | ?InitHUD@mmMultiCircuit@@UAEXXZ
    0x421E90 | public: virtual void __thiscall mmMultiCircuit::InitGameObjects(void) | ?InitGameObjects@mmMultiCircuit@@UAEXXZ
    0x4220A0 | public: virtual void __thiscall mmMultiCircuit::InitNetworkPlayers(void) | ?InitNetworkPlayers@mmMultiCircuit@@UAEXXZ
    0x422470 | public: virtual void __thiscall mmMultiCircuit::Reset(void) | ?Reset@mmMultiCircuit@@UAEXXZ
    0x422530 | public: virtual void __thiscall mmMultiCircuit::UpdateGameInput(int) | ?UpdateGameInput@mmMultiCircuit@@UAEXH@Z
    0x422570 | public: virtual void __thiscall mmMultiCircuit::UpdateGame(void) | ?UpdateGame@mmMultiCircuit@@UAEXXZ
    0x422D90 | public: virtual void __thiscall mmMultiCircuit::SwitchState(int) | ?SwitchState@mmMultiCircuit@@UAEXH@Z
    0x422DA0 | public: virtual void __thiscall mmMultiCircuit::UpdateDebugKeyInput(int) | ?UpdateDebugKeyInput@mmMultiCircuit@@UAEXH@Z
    0x422DB0 | public: virtual void __thiscall mmMultiCircuit::SystemMessage(struct NETSYS_MSG *) | ?SystemMessage@mmMultiCircuit@@UAEXPAUNETSYS_MSG@@@Z
    0x422EC0 | public: virtual void __thiscall mmMultiCircuit::GameMessage(struct NET_RCXHEAD *) | ?GameMessage@mmMultiCircuit@@UAEXPAUNET_RCXHEAD@@@Z
    public: void __thiscall mmMultiCircuit::SetTimeoutOn(void) | ?SetTimeoutOn@mmMultiCircuit@@QAEXXZ
    public: void __thiscall mmMultiCircuit::SetTimeoutOff(void) | ?SetTimeoutOff@mmMultiCircuit@@QAEXXZ
    0x423670 | public: virtual void * __thiscall mmMultiCircuit::`scalar deleting destructor'(unsigned int) | ??_GmmMultiCircuit@@UAEPAXI@Z
    public: virtual void * __thiscall mmMultiCircuit::`vector deleting destructor'(unsigned int) | ??_EmmMultiCircuit@@UAEPAXI@Z
    0x4236A0 | public: virtual class mmWaypoints * __thiscall mmMultiCircuit::GetWaypoints(void) | ?GetWaypoints@mmMultiCircuit@@UAEPAVmmWaypoints@@XZ
    0x5B08EC | const mmMultiCircuit::`vftable' | ??_7mmMultiCircuit@@6B@
*/

class mmMultiCircuit : public mmGameMulti
{
    // const mmMultiCircuit::`vftable' @ 0x5B08EC

public:
    // 0x421B90 | ??0mmMultiCircuit@@QAE@XZ
    mmMultiCircuit();

    // 0x423670 | ??_GmmMultiCircuit@@UAEPAXI@Z
    // 0x421BC0 | ??1mmMultiCircuit@@UAE@XZ
    ~mmMultiCircuit() override;

    // 0x422EC0 | ?GameMessage@mmMultiCircuit@@UAEXPAUNET_RCXHEAD@@@Z
    void GameMessage(struct NET_RCXHEAD* arg1) override;

    // 0x4236A0 | ?GetWaypoints@mmMultiCircuit@@UAEPAVmmWaypoints@@XZ
    class mmWaypoints* GetWaypoints() override;

    // 0x421C60 | ?Init@mmMultiCircuit@@UAEHXZ
    i32 Init() override;

    // 0x421E90 | ?InitGameObjects@mmMultiCircuit@@UAEXXZ
    void InitGameObjects() override;

    // 0x421E40 | ?InitHUD@mmMultiCircuit@@UAEXXZ
    void InitHUD() override;

    // 0x421DD0 | ?InitMyPlayer@mmMultiCircuit@@UAEXXZ
    void InitMyPlayer() override;

    // 0x4220A0 | ?InitNetworkPlayers@mmMultiCircuit@@UAEXXZ
    void InitNetworkPlayers() override;

    // 0x422470 | ?Reset@mmMultiCircuit@@UAEXXZ
    void Reset() override;

    // 0x422D90 | ?SwitchState@mmMultiCircuit@@UAEXH@Z
    void SwitchState(i32 arg1) override;

    // 0x422DB0 | ?SystemMessage@mmMultiCircuit@@UAEXPAUNETSYS_MSG@@@Z
    void SystemMessage(struct NETSYS_MSG* arg1) override;

    // 0x422DA0 | ?UpdateDebugKeyInput@mmMultiCircuit@@UAEXH@Z
    void UpdateDebugKeyInput(i32 arg1) override;

    // 0x422570 | ?UpdateGame@mmMultiCircuit@@UAEXXZ
    void UpdateGame() override;

    // 0x422530 | ?UpdateGameInput@mmMultiCircuit@@UAEXH@Z
    void UpdateGameInput(i32 arg1) override;
};

check_size(mmMultiCircuit, 0x0);