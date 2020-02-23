/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 0x1F9F1

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
    aud:midi

    0x5A46B0 | public: void __thiscall audMIDI::Init(void) | ?Init@audMIDI@@QAEXXZ
    0x5A46F0 | public: bool __thiscall audMIDI::LoadMIDIFile(char *,int,void * *) | ?LoadMIDIFile@audMIDI@@QAE_NPADHPAPAX@Z
    0x5A47D0 | public: bool __thiscall audMIDI::Update(int) | ?Update@audMIDI@@QAE_NH@Z
    0x5A47E0 | public: enum audObject::AUD_OBJECTSTATUS __thiscall audMIDI::GetStatus(void) | ?GetStatus@audMIDI@@QAE?AW4AUD_OBJECTSTATUS@audObject@@XZ
    0x5A4870 | public: bool __thiscall audMIDI::Play(void) | ?Play@audMIDI@@QAE_NXZ
    0x5A48B0 | public: bool __thiscall audMIDI::Stop(void) | ?Stop@audMIDI@@QAE_NXZ
    0x5A48E0 | public: bool __thiscall audMIDI::SetVolume(float) | ?SetVolume@audMIDI@@QAE_NM@Z
    0x5A4920 | public: bool __thiscall audMIDI::SetPitch(float) | ?SetPitch@audMIDI@@QAE_NM@Z
    0x5A4930 | public: bool __thiscall audMIDI::SetPan(float) | ?SetPan@audMIDI@@QAE_NM@Z
    0x5A4990 | public: bool __thiscall audMIDI::PauseResume(bool) | ?PauseResume@audMIDI@@QAE_N_N@Z
    0x5A49F0 | public: bool __thiscall audMIDI::SetTempo(float) | ?SetTempo@audMIDI@@QAE_NM@Z
    0x5A4A40 | public: void __thiscall audMIDI::Destroy(void) | ?Destroy@audMIDI@@QAEXXZ
    0x5A4A70 | public: int __thiscall audMIDI::GetTrackTime(void) | ?GetTrackTime@audMIDI@@QAEHXZ
    0x5A4A90 | public: int __thiscall audMIDI::GetSeqEndPosition(int *) | ?GetSeqEndPosition@audMIDI@@QAEHPAH@Z
    0x5A4AC0 | public: int __thiscall audMIDI::GetSeqStartPosition(int *) | ?GetSeqStartPosition@audMIDI@@QAEHPAH@Z
    0x5A4AF0 | public: bool __thiscall audMIDI::GetTrackInfo(void) | ?GetTrackInfo@audMIDI@@QAE_NXZ
    0x5A4B70 | public: int __thiscall audMIDI::GetNumSeqTracks(void) | ?GetNumSeqTracks@audMIDI@@QAEHXZ
    0x5A4BC0 | public: bool __thiscall audMIDI::SetSeqPosition(int) | ?SetSeqPosition@audMIDI@@QAE_NH@Z
    0x5A4C00 | public: int __thiscall audMIDI::GetSeqPosition(int *) | ?GetSeqPosition@audMIDI@@QAEHPAH@Z
    0x5A4C70 | public: int __thiscall audMIDI::GetMIDIHandle(void) | ?GetMIDIHandle@audMIDI@@QAEHXZ
*/

struct audMIDI
{
public:
    // 0x5A46B0 | ?Init@audMIDI@@QAEXXZ
    inline void Init()
    {
        return stub<member_func_t<void, audMIDI>>(0x5A46B0, this);
    }

    // 0x5A46F0 | ?LoadMIDIFile@audMIDI@@QAE_NPADHPAPAX@Z
    inline bool LoadMIDIFile(char* arg1, i32 arg2, void** arg3)
    {
        return stub<member_func_t<bool, audMIDI, char*, i32, void**>>(0x5A46F0, this, arg1, arg2, arg3);
    }

    // 0x5A47D0 | ?Update@audMIDI@@QAE_NH@Z
    inline bool Update(i32 arg1)
    {
        return stub<member_func_t<bool, audMIDI, i32>>(0x5A47D0, this, arg1);
    }

    // 0x5A47E0 | ?GetStatus@audMIDI@@QAE?AW4AUD_OBJECTSTATUS@audObject@@XZ
    inline enum audObject::AUD_OBJECTSTATUS GetStatus()
    {
        return stub<member_func_t<enum audObject::AUD_OBJECTSTATUS, audMIDI>>(0x5A47E0, this);
    }

    // 0x5A4870 | ?Play@audMIDI@@QAE_NXZ
    inline bool Play()
    {
        return stub<member_func_t<bool, audMIDI>>(0x5A4870, this);
    }

    // 0x5A48B0 | ?Stop@audMIDI@@QAE_NXZ
    inline bool Stop()
    {
        return stub<member_func_t<bool, audMIDI>>(0x5A48B0, this);
    }

    // 0x5A48E0 | ?SetVolume@audMIDI@@QAE_NM@Z
    inline bool SetVolume(f32 arg1)
    {
        return stub<member_func_t<bool, audMIDI, f32>>(0x5A48E0, this, arg1);
    }

    // 0x5A4920 | ?SetPitch@audMIDI@@QAE_NM@Z
    inline bool SetPitch(f32 arg1)
    {
        return stub<member_func_t<bool, audMIDI, f32>>(0x5A4920, this, arg1);
    }

    // 0x5A4930 | ?SetPan@audMIDI@@QAE_NM@Z
    inline bool SetPan(f32 arg1)
    {
        return stub<member_func_t<bool, audMIDI, f32>>(0x5A4930, this, arg1);
    }

    // 0x5A4990 | ?PauseResume@audMIDI@@QAE_N_N@Z
    inline bool PauseResume(bool arg1)
    {
        return stub<member_func_t<bool, audMIDI, bool>>(0x5A4990, this, arg1);
    }

    // 0x5A49F0 | ?SetTempo@audMIDI@@QAE_NM@Z
    inline bool SetTempo(f32 arg1)
    {
        return stub<member_func_t<bool, audMIDI, f32>>(0x5A49F0, this, arg1);
    }

    // 0x5A4A40 | ?Destroy@audMIDI@@QAEXXZ
    inline void Destroy()
    {
        return stub<member_func_t<void, audMIDI>>(0x5A4A40, this);
    }

    // 0x5A4A70 | ?GetTrackTime@audMIDI@@QAEHXZ
    inline i32 GetTrackTime()
    {
        return stub<member_func_t<i32, audMIDI>>(0x5A4A70, this);
    }

    // 0x5A4A90 | ?GetSeqEndPosition@audMIDI@@QAEHPAH@Z
    inline i32 GetSeqEndPosition(i32* arg1)
    {
        return stub<member_func_t<i32, audMIDI, i32*>>(0x5A4A90, this, arg1);
    }

    // 0x5A4AC0 | ?GetSeqStartPosition@audMIDI@@QAEHPAH@Z
    inline i32 GetSeqStartPosition(i32* arg1)
    {
        return stub<member_func_t<i32, audMIDI, i32*>>(0x5A4AC0, this, arg1);
    }

    // 0x5A4AF0 | ?GetTrackInfo@audMIDI@@QAE_NXZ
    inline bool GetTrackInfo()
    {
        return stub<member_func_t<bool, audMIDI>>(0x5A4AF0, this);
    }

    // 0x5A4B70 | ?GetNumSeqTracks@audMIDI@@QAEHXZ
    inline i32 GetNumSeqTracks()
    {
        return stub<member_func_t<i32, audMIDI>>(0x5A4B70, this);
    }

    // 0x5A4BC0 | ?SetSeqPosition@audMIDI@@QAE_NH@Z
    inline bool SetSeqPosition(i32 arg1)
    {
        return stub<member_func_t<bool, audMIDI, i32>>(0x5A4BC0, this, arg1);
    }

    // 0x5A4C00 | ?GetSeqPosition@audMIDI@@QAEHPAH@Z
    inline i32 GetSeqPosition(i32* arg1)
    {
        return stub<member_func_t<i32, audMIDI, i32*>>(0x5A4C00, this, arg1);
    }

    // 0x5A4C70 | ?GetMIDIHandle@audMIDI@@QAEHXZ
    inline i32 GetMIDIHandle()
    {
        return stub<member_func_t<i32, audMIDI>>(0x5A4C70, this);
    }
};