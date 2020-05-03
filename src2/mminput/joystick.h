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
    mminput:joystick

    0x530230 | public: __thiscall mmJaxis::mmJaxis(void) | ??0mmJaxis@@QAE@XZ
    0x530250 | public: __thiscall mmJaxis::~mmJaxis(void) | ??1mmJaxis@@QAE@XZ
    0x530260 | public: void __thiscall mmJaxis::SetRange(float,float) | ?SetRange@mmJaxis@@QAEXMM@Z
    0x530280 | public: void __thiscall mmJaxis::Normalize(float) | ?Normalize@mmJaxis@@QAEXM@Z
    0x5302A0 | public: void __thiscall mmJaxis::NormalizePOV(unsigned long) | ?NormalizePOV@mmJaxis@@QAEXK@Z
    0x5302E0 | public: int __thiscall mmJaxis::Capture(void) | ?Capture@mmJaxis@@QAEHXZ
    0x530310 | public: void __thiscall mmJaxis::ResetCapture(void) | ?ResetCapture@mmJaxis@@QAEXXZ
    0x530330 | public: __thiscall mmJoystick::mmJoystick(void) | ??0mmJoystick@@QAE@XZ
    0x5303B0 | public: __thiscall mmJoystick::~mmJoystick(void) | ??1mmJoystick@@QAE@XZ
    0x5304B0 | public: int __thiscall mmJoystick::Init(struct IDirectInputDevice2A *,struct HWND__ *) | ?Init@mmJoystick@@QAEHPAUIDirectInputDevice2A@@PAUHWND__@@@Z
    0x5305C0 | public: int __thiscall mmJoystick::inputPrepareDevice(void) | ?inputPrepareDevice@mmJoystick@@QAEHXZ
    0x530770 | public: int __thiscall mmJoystick::SetDeadZone(float) | ?SetDeadZone@mmJoystick@@QAEHM@Z
    0x530810 | public: int __thiscall mmJoystick::DisableAutoCenter(void) | ?DisableAutoCenter@mmJoystick@@QAEHXZ
    0x530860 | public: unsigned long __thiscall mmJoystick::Poll(void) | ?Poll@mmJoystick@@QAEKXZ
    0x530970 | public: float __thiscall mmJoystick::GetAxis(int) | ?GetAxis@mmJoystick@@QAEMH@Z
    0x530A70 | public: float __thiscall mmJoystick::GetButton(int) | ?GetButton@mmJoystick@@QAEMH@Z
    0x530AA0 | public: void __thiscall mmJoystick::Update(void) | ?Update@mmJoystick@@QAEXXZ
    0x530B30 | public: void __thiscall mmJoystick::ResetAxisCapture(void) | ?ResetAxisCapture@mmJoystick@@QAEXXZ
    0x530BB0 | public: void __thiscall mmJoystick::InputCreateEffect(void) | ?InputCreateEffect@mmJoystick@@QAEXXZ
    0x530CE0 | public: void __thiscall mmJoystick::InputInitEffect(void) | ?InputInitEffect@mmJoystick@@QAEXXZ
    0x530D20 | public: void __thiscall mmJoystick::InputStopEffect(void) | ?InputStopEffect@mmJoystick@@QAEXXZ
    0x530D60 | public: int __thiscall mmJoystick::SetShake(unsigned long,unsigned long) | ?SetShake@mmJoystick@@QAEHKK@Z
    0x530D90 | public: int __thiscall mmJoystick::PlayShake(void) | ?PlayShake@mmJoystick@@QAEHXZ
    0x530DB0 | public: int __thiscall mmJoystick::StopShake(void) | ?StopShake@mmJoystick@@QAEHXZ
    0x530DD0 | public: int __thiscall mmJoystick::PlayCollision(void) | ?PlayCollision@mmJoystick@@QAEHXZ
    0x530DF0 | public: int __thiscall mmJoystick::SetSteer(long) | ?SetSteer@mmJoystick@@QAEHJ@Z
    0x530E10 | public: int __thiscall mmJoystick::PlaySteer(void) | ?PlaySteer@mmJoystick@@QAEHXZ
    0x530E30 | public: int __thiscall mmJoystick::StopSteer(void) | ?StopSteer@mmJoystick@@QAEHXZ
    0x530E50 | public: int __thiscall mmJoystick::SetFriction(long) | ?SetFriction@mmJoystick@@QAEHJ@Z
    0x530E70 | public: int __thiscall mmJoystick::PlayFriction(void) | ?PlayFriction@mmJoystick@@QAEHXZ
    0x530E90 | public: int __thiscall mmJoystick::StopFriction(void) | ?StopFriction@mmJoystick@@QAEHXZ
    0x530EB0 | public: class mmEffectFF * __thiscall mmJoystick::GetFFEffect(int) | ?GetFFEffect@mmJoystick@@QAEPAVmmEffectFF@@H@Z
    0x530F00 | public: int __thiscall mmJoystick::GetNumButtons(void) | ?GetNumButtons@mmJoystick@@QAEHXZ
    0x530F10 | public: void __thiscall mmJoystick::PrintDeviceCaps(void) | ?PrintDeviceCaps@mmJoystick@@QAEXXZ
    0x5310E0 | void __cdecl DecodeDIErrorMFlag(long) | ?DecodeDIErrorMFlag@@YAXJ@Z
    0x5B529C | const mmFrictionFF::`vftable' | ??_7mmFrictionFF@@6B@
    0x5B52AC | const mmCollideFF::`vftable' | ??_7mmCollideFF@@6B@
    0x5B52BC | const mmSpringFF::`vftable' | ??_7mmSpringFF@@6B@
    0x5B52CC | const mmRoadFF::`vftable' | ??_7mmRoadFF@@6B@
*/

struct mmJoystick
{
public:
    // 0x530330 | ??0mmJoystick@@QAE@XZ
    mmJoystick();

    // 0x5303B0 | ??1mmJoystick@@QAE@XZ
    // 0x5301D0 | ??_EmmJoystick@@QAEPAXI@Z
    ~mmJoystick();

    // 0x530810 | ?DisableAutoCenter@mmJoystick@@QAEHXZ
    i32 DisableAutoCenter();

    // 0x530970 | ?GetAxis@mmJoystick@@QAEMH@Z
    f32 GetAxis(i32 arg1);

    // 0x530A70 | ?GetButton@mmJoystick@@QAEMH@Z
    f32 GetButton(i32 arg1);

    // 0x530EB0 | ?GetFFEffect@mmJoystick@@QAEPAVmmEffectFF@@H@Z
    class mmEffectFF* GetFFEffect(i32 arg1);

    // 0x530F00 | ?GetNumButtons@mmJoystick@@QAEHXZ
    i32 GetNumButtons();

    // 0x5304B0 | ?Init@mmJoystick@@QAEHPAUIDirectInputDevice2A@@PAUHWND__@@@Z
    i32 Init(struct IDirectInputDevice2A* arg1, struct HWND__* arg2);

    // 0x530BB0 | ?InputCreateEffect@mmJoystick@@QAEXXZ
    void InputCreateEffect();

    // 0x530CE0 | ?InputInitEffect@mmJoystick@@QAEXXZ
    void InputInitEffect();

    // 0x530D20 | ?InputStopEffect@mmJoystick@@QAEXXZ
    void InputStopEffect();

    // 0x530DD0 | ?PlayCollision@mmJoystick@@QAEHXZ
    i32 PlayCollision();

    // 0x530E70 | ?PlayFriction@mmJoystick@@QAEHXZ
    i32 PlayFriction();

    // 0x530D90 | ?PlayShake@mmJoystick@@QAEHXZ
    i32 PlayShake();

    // 0x530E10 | ?PlaySteer@mmJoystick@@QAEHXZ
    i32 PlaySteer();

    // 0x530860 | ?Poll@mmJoystick@@QAEKXZ
    u32 Poll();

    // 0x530F10 | ?PrintDeviceCaps@mmJoystick@@QAEXXZ
    void PrintDeviceCaps();

    // 0x530B30 | ?ResetAxisCapture@mmJoystick@@QAEXXZ
    void ResetAxisCapture();

    // 0x530770 | ?SetDeadZone@mmJoystick@@QAEHM@Z
    i32 SetDeadZone(f32 arg1);

    // 0x530E50 | ?SetFriction@mmJoystick@@QAEHJ@Z
    i32 SetFriction(i32 arg1);

    // 0x530D60 | ?SetShake@mmJoystick@@QAEHKK@Z
    i32 SetShake(u32 arg1, u32 arg2);

    // 0x530DF0 | ?SetSteer@mmJoystick@@QAEHJ@Z
    i32 SetSteer(i32 arg1);

    // 0x530E90 | ?StopFriction@mmJoystick@@QAEHXZ
    i32 StopFriction();

    // 0x530DB0 | ?StopShake@mmJoystick@@QAEHXZ
    i32 StopShake();

    // 0x530E30 | ?StopSteer@mmJoystick@@QAEHXZ
    i32 StopSteer();

    // 0x530AA0 | ?Update@mmJoystick@@QAEXXZ
    void Update();

    // 0x5305C0 | ?inputPrepareDevice@mmJoystick@@QAEHXZ
    i32 inputPrepareDevice();
};

check_size(mmJoystick, 0x3A8);

struct mmJaxis
{
public:
    // 0x530230 | ??0mmJaxis@@QAE@XZ
    mmJaxis();

    // 0x530250 | ??1mmJaxis@@QAE@XZ
    ~mmJaxis();

    // 0x5302E0 | ?Capture@mmJaxis@@QAEHXZ
    i32 Capture();

    // 0x530280 | ?Normalize@mmJaxis@@QAEXM@Z
    void Normalize(f32 arg1);

    // 0x5302A0 | ?NormalizePOV@mmJaxis@@QAEXK@Z
    void NormalizePOV(u32 arg1);

    // 0x530310 | ?ResetCapture@mmJaxis@@QAEXXZ
    void ResetCapture();

    // 0x530260 | ?SetRange@mmJaxis@@QAEXMM@Z
    void SetRange(f32 arg1, f32 arg2);
};

check_size(mmJaxis, 0x0);

// 0x5310E0 | ?DecodeDIErrorMFlag@@YAXJ@Z
void DecodeDIErrorMFlag(i32 arg1);