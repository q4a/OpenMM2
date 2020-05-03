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
    mmgame:hud

    0x42CD50 | public: __thiscall mmHUD::mmHUD(void) | ??0mmHUD@@QAE@XZ
    0x42D280 | public: void __thiscall mmHUD::PostChatMessage(char *) | ?PostChatMessage@mmHUD@@QAEXPAD@Z
    0x42D2E0 | public: virtual void __thiscall mmHUD::ResChange(int,int) | ?ResChange@mmHUD@@UAEXHH@Z
    0x42D3C0 | public: virtual __thiscall mmHUD::~mmHUD(void) | ??1mmHUD@@UAE@XZ
    0x42D560 | public: void __thiscall mmHUD::StartTimers(void) | ?StartTimers@mmHUD@@QAEXXZ
    0x42D580 | public: void __thiscall mmHUD::StopTimers(void) | ?StopTimers@mmHUD@@QAEXXZ
    0x42D5A0 | public: void __thiscall mmHUD::ResetTimers(void) | ?ResetTimers@mmHUD@@QAEXXZ
    0x42D5E0 | public: void __thiscall mmHUD::Init(char *,class mmPlayer *,int) | ?Init@mmHUD@@QAEXPADPAVmmPlayer@@H@Z
    0x42D910 | public: void __thiscall mmHUD::Enable(void) | ?Enable@mmHUD@@QAEXXZ
    0x42D970 | public: void __thiscall mmHUD::Disable(int) | ?Disable@mmHUD@@QAEXH@Z
    0x42D9D0 | public: void __thiscall mmHUD::Toggle(void) | ?Toggle@mmHUD@@QAEXXZ
    0x42D9F0 | public: void __thiscall mmHUD::ToggleExternalView(void) | ?ToggleExternalView@mmHUD@@QAEXXZ
    0x42DA90 | public: void __thiscall mmHUD::SetDash(int) | ?SetDash@mmHUD@@QAEXH@Z
    0x42DAB0 | public: void __thiscall mmHUD::ActivateDash(void) | ?ActivateDash@mmHUD@@QAEXXZ
    0x42DAE0 | public: void __thiscall mmHUD::DeactivateDash(void) | ?DeactivateDash@mmHUD@@QAEXXZ
    0x42DB10 | public: int __thiscall mmHUD::IsDashActive(void) | ?IsDashActive@mmHUD@@QAEHXZ
    0x42DB20 | public: virtual void __thiscall mmHUD::Reset(void) | ?Reset@mmHUD@@UAEXXZ
    0x42DB60 | public: void __thiscall mmHUD::SetTransparency(bool) | ?SetTransparency@mmHUD@@QAEX_N@Z
    0x42DB70 | public: void __thiscall mmHUD::PostUpdate(void) | ?PostUpdate@mmHUD@@QAEXXZ
    0x42DBC0 | public: virtual void __thiscall mmHUD::Update(void) | ?Update@mmHUD@@UAEXXZ
    0x42DF10 | public: virtual void __thiscall mmHUD::UpdatePaused(void) | ?UpdatePaused@mmHUD@@UAEXXZ
    0x42DF40 | public: virtual void __thiscall mmHUD::Cull(void) | ?Cull@mmHUD@@UAEXXZ
    0x42E040 | public: void __thiscall mmHUD::ShowSplitTime(void) | ?ShowSplitTime@mmHUD@@QAEXXZ
    0x42E0A0 | public: void __thiscall mmHUD::SetStandings(int,int) | ?SetStandings@mmHUD@@QAEXHH@Z
    0x42E0E0 | public: void __thiscall mmHUD::PostLapTime(bool) | ?PostLapTime@mmHUD@@QAEX_N@Z
    public: void __thiscall mmHUD::SetLapTime(int,int) | ?SetLapTime@mmHUD@@QAEXHH@Z
    0x42E1D0 | public: void __thiscall mmHUD::SetWPCleared(int,int) | ?SetWPCleared@mmHUD@@QAEXHH@Z
    0x42E1F0 | public: void __thiscall mmHUD::SetMessage(struct LocString *,float,int) | ?SetMessage@mmHUD@@QAEXPAULocString@@MH@Z
    0x42E240 | public: void __thiscall mmHUD::SetMessage2(struct LocString *) | ?SetMessage2@mmHUD@@QAEXPAULocString@@@Z
    0x42E270 | public: void __thiscall mmHUD::SetScore(char *) | ?SetScore@mmHUD@@QAEXPAD@Z
    0x42E290 | public: void __thiscall mmHUD::AddPlayer(char const *,unsigned long,int,int) | ?AddPlayer@mmHUD@@QAEXPBDKHH@Z
    0x42E2C0 | public: void __thiscall mmHUD::SetScore(unsigned long,int) | ?SetScore@mmHUD@@QAEXKH@Z
    0x42E2E0 | public: void __thiscall mmHUD::RemovePlayer(unsigned long) | ?RemovePlayer@mmHUD@@QAEXK@Z
    0x42E300 | public: void __thiscall mmHUD::ActivateGold(void) | ?ActivateGold@mmHUD@@QAEXXZ
    0x42E310 | public: void __thiscall mmHUD::DeactivateGold(void) | ?DeactivateGold@mmHUD@@QAEXXZ
    0x42E320 | public: void __thiscall mmHUD::GetTime(char *,float) | ?GetTime@mmHUD@@QAEXPADM@Z
    0x42E340 | public: void __thiscall mmHUD::PlayNetAlert(void) | ?PlayNetAlert@mmHUD@@QAEXXZ
    0x42E360 | public: void __thiscall mmHUD::TogglePositionDisplay(int) | ?TogglePositionDisplay@mmHUD@@QAEXH@Z
    0x42E3C0 | public: void __thiscall mmHUD::GetPosHdg(class Vector4 &) | ?GetPosHdg@mmHUD@@QAEXAAVVector4@@@Z
    public: void __thiscall mmHUD::RecordPosition(char *) | ?RecordPosition@mmHUD@@QAEXPAD@Z
    public: void __thiscall mmHUD::DumpPositions(char *) | ?DumpPositions@mmHUD@@QAEXPAD@Z
    public: virtual void __thiscall mmHUD::AddWidgets(class bkBank &) | ?AddWidgets@mmHUD@@UAEXAAVbkBank@@@Z
    0x42E420 | public: __thiscall mmTimer::mmTimer(void) | ??0mmTimer@@QAE@XZ
    0x42E480 | public: virtual __thiscall mmTimer::~mmTimer(void) | ??1mmTimer@@UAE@XZ
    0x42E490 | public: void __thiscall mmTimer::Init(int,float,int) | ?Init@mmTimer@@QAEXHMH@Z
    0x42E4C0 | public: float __thiscall mmTimer::GetTime(void) | ?GetTime@mmTimer@@QAEMXZ
    0x42E4D0 | public: virtual void __thiscall mmTimer::Update(void) | ?Update@mmTimer@@UAEXXZ
    0x42E5F0 | public: virtual void __thiscall mmTimer::Reset(void) | ?Reset@mmTimer@@UAEXXZ
    0x42E610 | public: void __thiscall mmTimer::Start(void) | ?Start@mmTimer@@QAEXXZ
    0x42E630 | public: void __thiscall mmTimer::Stop(void) | ?Stop@mmTimer@@QAEXXZ
    0x42E640 | public: void __thiscall mmTimer::StartStop(void) | ?StartStop@mmTimer@@QAEXXZ
    0x42E650 | public: __thiscall mmArrow::mmArrow(void) | ??0mmArrow@@QAE@XZ
    0x42E710 | public: virtual __thiscall mmArrow::~mmArrow(void) | ??1mmArrow@@UAE@XZ
    0x42E770 | public: void __thiscall mmArrow::Init(class Matrix34 *) | ?Init@mmArrow@@QAEXPAVMatrix34@@@Z
    0x42E780 | public: virtual void __thiscall mmArrow::Reset(void) | ?Reset@mmArrow@@UAEXXZ
    0x42E790 | public: void __thiscall mmArrow::SetInterest(class Vector3 *) | ?SetInterest@mmArrow@@QAEXPAVVector3@@@Z
    0x42E7A0 | private: void __thiscall mmArrow::ReColorArrow(int) | ?ReColorArrow@mmArrow@@AAEXH@Z
    0x42E7F0 | public: virtual void __thiscall mmArrow::Update(void) | ?Update@mmArrow@@UAEXXZ
    public: virtual void * __thiscall mmHUD::`vector deleting destructor'(unsigned int) | ??_EmmHUD@@UAEPAXI@Z
    0x42EA50 | public: virtual void * __thiscall mmHUD::`scalar deleting destructor'(unsigned int) | ??_GmmHUD@@UAEPAXI@Z
    0x42EA80 | public: virtual __thiscall mmExternalView::~mmExternalView(void) | ??1mmExternalView@@UAE@XZ
    public: virtual void * __thiscall mmTimer::`vector deleting destructor'(unsigned int) | ??_EmmTimer@@UAEPAXI@Z
    0x42EAE0 | public: virtual void * __thiscall mmTimer::`scalar deleting destructor'(unsigned int) | ??_GmmTimer@@UAEPAXI@Z
    public: virtual void * __thiscall mmArrow::`vector deleting destructor'(unsigned int) | ??_EmmArrow@@UAEPAXI@Z
    0x42EB10 | public: virtual void * __thiscall mmArrow::`scalar deleting destructor'(unsigned int) | ??_GmmArrow@@UAEPAXI@Z
    0x42EB40 | public: void __thiscall Vector3::Scale(float) | ?Scale@Vector3@@QAEXM@Z
    0x5B0C20 | const mmHUD::`vftable' | ??_7mmHUD@@6B@
    0x5B0C78 | const mmTimer::`vftable' | ??_7mmTimer@@6B@
    0x5B0CAC | const mmArrow::`vftable' | ??_7mmArrow@@6B@
*/

class mmHUD : public asNode
{
    // const mmHUD::`vftable' @ 0x5B0C20

public:
    // 0x42CD50 | ??0mmHUD@@QAE@XZ
    mmHUD();

    // 0x42EA50 | ??_GmmHUD@@UAEPAXI@Z
    // 0x42D3C0 | ??1mmHUD@@UAE@XZ
    ~mmHUD() override;

    // 0x42DAB0 | ?ActivateDash@mmHUD@@QAEXXZ
    void ActivateDash();

    // 0x42E300 | ?ActivateGold@mmHUD@@QAEXXZ
    void ActivateGold();

    // 0x42E290 | ?AddPlayer@mmHUD@@QAEXPBDKHH@Z
    void AddPlayer(char const* arg1, u32 arg2, i32 arg3, i32 arg4);

    // 0x42DF40 | ?Cull@mmHUD@@UAEXXZ
    void Cull() override;

    // 0x42DAE0 | ?DeactivateDash@mmHUD@@QAEXXZ
    void DeactivateDash();

    // 0x42E310 | ?DeactivateGold@mmHUD@@QAEXXZ
    void DeactivateGold();

    // 0x42D970 | ?Disable@mmHUD@@QAEXH@Z
    void Disable(i32 arg1);

    // 0x42D910 | ?Enable@mmHUD@@QAEXXZ
    void Enable();

    // 0x42E3C0 | ?GetPosHdg@mmHUD@@QAEXAAVVector4@@@Z
    void GetPosHdg(class Vector4& arg1);

    // 0x42E320 | ?GetTime@mmHUD@@QAEXPADM@Z
    void GetTime(char* arg1, f32 arg2);

    // 0x42D5E0 | ?Init@mmHUD@@QAEXPADPAVmmPlayer@@H@Z
    void Init(char* arg1, class mmPlayer* arg2, i32 arg3);

    // 0x42DB10 | ?IsDashActive@mmHUD@@QAEHXZ
    i32 IsDashActive();

    // 0x42E340 | ?PlayNetAlert@mmHUD@@QAEXXZ
    void PlayNetAlert();

    // 0x42D280 | ?PostChatMessage@mmHUD@@QAEXPAD@Z
    void PostChatMessage(char* arg1);

    // 0x42E0E0 | ?PostLapTime@mmHUD@@QAEX_N@Z
    void PostLapTime(bool arg1);

    // 0x42DB70 | ?PostUpdate@mmHUD@@QAEXXZ
    void PostUpdate();

    // 0x42E2E0 | ?RemovePlayer@mmHUD@@QAEXK@Z
    void RemovePlayer(u32 arg1);

    // 0x42D2E0 | ?ResChange@mmHUD@@UAEXHH@Z
    void ResChange(i32 arg1, i32 arg2) override;

    // 0x42DB20 | ?Reset@mmHUD@@UAEXXZ
    void Reset() override;

    // 0x42D5A0 | ?ResetTimers@mmHUD@@QAEXXZ
    void ResetTimers();

    // 0x42DA90 | ?SetDash@mmHUD@@QAEXH@Z
    void SetDash(i32 arg1);

    // 0x42E1F0 | ?SetMessage@mmHUD@@QAEXPAULocString@@MH@Z
    void SetMessage(struct LocString* arg1, f32 arg2, i32 arg3);

    // 0x42E240 | ?SetMessage2@mmHUD@@QAEXPAULocString@@@Z
    void SetMessage2(struct LocString* arg1);

    // 0x42E270 | ?SetScore@mmHUD@@QAEXPAD@Z
    void SetScore(char* arg1);

    // 0x42E2C0 | ?SetScore@mmHUD@@QAEXKH@Z
    void SetScore(u32 arg1, i32 arg2);

    // 0x42E0A0 | ?SetStandings@mmHUD@@QAEXHH@Z
    void SetStandings(i32 arg1, i32 arg2);

    // 0x42DB60 | ?SetTransparency@mmHUD@@QAEX_N@Z
    void SetTransparency(bool arg1);

    // 0x42E1D0 | ?SetWPCleared@mmHUD@@QAEXHH@Z
    void SetWPCleared(i32 arg1, i32 arg2);

    // 0x42E040 | ?ShowSplitTime@mmHUD@@QAEXXZ
    void ShowSplitTime();

    // 0x42D560 | ?StartTimers@mmHUD@@QAEXXZ
    void StartTimers();

    // 0x42D580 | ?StopTimers@mmHUD@@QAEXXZ
    void StopTimers();

    // 0x42D9D0 | ?Toggle@mmHUD@@QAEXXZ
    void Toggle();

    // 0x42D9F0 | ?ToggleExternalView@mmHUD@@QAEXXZ
    void ToggleExternalView();

    // 0x42E360 | ?TogglePositionDisplay@mmHUD@@QAEXH@Z
    void TogglePositionDisplay(i32 arg1);

    // 0x42DBC0 | ?Update@mmHUD@@UAEXXZ
    void Update() override;

    // 0x42DF10 | ?UpdatePaused@mmHUD@@UAEXXZ
    void UpdatePaused() override;
};

check_size(mmHUD, 0x0);

class mmTimer : public asNode
{
    // const mmTimer::`vftable' @ 0x5B0C78

public:
    // 0x42E420 | ??0mmTimer@@QAE@XZ
    mmTimer();

    // 0x42EAE0 | ??_GmmTimer@@UAEPAXI@Z
    // 0x42E480 | ??1mmTimer@@UAE@XZ
    ~mmTimer() override;

    // 0x42E4C0 | ?GetTime@mmTimer@@QAEMXZ
    f32 GetTime();

    // 0x42E490 | ?Init@mmTimer@@QAEXHMH@Z
    void Init(i32 arg1, f32 arg2, i32 arg3);

    // 0x42E5F0 | ?Reset@mmTimer@@UAEXXZ
    void Reset() override;

    // 0x42E610 | ?Start@mmTimer@@QAEXXZ
    void Start();

    // 0x42E640 | ?StartStop@mmTimer@@QAEXXZ
    void StartStop();

    // 0x42E630 | ?Stop@mmTimer@@QAEXXZ
    void Stop();

    // 0x42E4D0 | ?Update@mmTimer@@UAEXXZ
    void Update() override;
};

check_size(mmTimer, 0x0);

class mmArrow : public asNode
{
    // const mmArrow::`vftable' @ 0x5B0CAC

public:
    // 0x42E650 | ??0mmArrow@@QAE@XZ
    mmArrow();

    // 0x42EB10 | ??_GmmArrow@@UAEPAXI@Z
    // 0x42E710 | ??1mmArrow@@UAE@XZ
    ~mmArrow() override;

    // 0x42E770 | ?Init@mmArrow@@QAEXPAVMatrix34@@@Z
    void Init(class Matrix34* arg1);

    // 0x42E780 | ?Reset@mmArrow@@UAEXXZ
    void Reset() override;

    // 0x42E790 | ?SetInterest@mmArrow@@QAEXPAVVector3@@@Z
    void SetInterest(class Vector3* arg1);

    // 0x42E7F0 | ?Update@mmArrow@@UAEXXZ
    void Update() override;

private:
    // 0x42E7A0 | ?ReColorArrow@mmArrow@@AAEXH@Z
    void ReColorArrow(i32 arg1);
};

check_size(mmArrow, 0x0);
