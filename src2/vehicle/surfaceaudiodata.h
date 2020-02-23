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
    vehicle:surfaceaudiodata

    0x4DFD50 | public: __thiscall vehSurfaceAudioData::vehSurfaceAudioData(void) | ??0vehSurfaceAudioData@@QAE@XZ
    0x4DFD80 | public: virtual __thiscall vehSurfaceAudioData::~vehSurfaceAudioData(void) | ??1vehSurfaceAudioData@@UAE@XZ
    0x4DFDA0 | public: void __thiscall vehSurfaceAudioData::AllocateSkidSamples(int) | ?AllocateSkidSamples@vehSurfaceAudioData@@QAEXH@Z
    0x4DFDD0 | public: void __thiscall vehSurfaceAudioData::StopSkid(void) | ?StopSkid@vehSurfaceAudioData@@QAEXXZ
    0x4DFE10 | public: void __thiscall vehSurfaceAudioData::UpdateSkid(float,float,float) | ?UpdateSkid@vehSurfaceAudioData@@QAEXMMM@Z
    0x4E0010 | public: void __thiscall vehSurfaceAudioData::UpdateSkid(float) | ?UpdateSkid@vehSurfaceAudioData@@QAEXM@Z
    0x4E00C0 | public: void __thiscall vehSurfaceAudioData::UpdateSurface(float,float,float) | ?UpdateSurface@vehSurfaceAudioData@@QAEXMMM@Z
    0x4E0160 | public: void __thiscall vehSurfaceAudioData::UpdateSurface(float) | ?UpdateSurface@vehSurfaceAudioData@@QAEXM@Z
    0x4E01E0 | public: void __thiscall vehSurfaceAudioData::StopSurface(void) | ?StopSurface@vehSurfaceAudioData@@QAEXXZ
    0x4E0200 | public: bool __thiscall vehSurfaceAudioData::ParseCSVBuffer(class Stream *) | ?ParseCSVBuffer@vehSurfaceAudioData@@QAE_NPAVStream@@@Z
    public: void __thiscall vehSurfaceAudioData::SaveCSVBuffer(class Stream *) | ?SaveCSVBuffer@vehSurfaceAudioData@@QAEXPAVStream@@@Z
    0x4E04E0 | public: int __thiscall vehSurfaceAudioData::SkidPlaying(void) | ?SkidPlaying@vehSurfaceAudioData@@QAEHXZ
    0x4E0520 | public: int __thiscall vehSurfaceAudioData::SurfacePlaying(void) | ?SurfacePlaying@vehSurfaceAudioData@@QAEHXZ
    0x4E0540 | public: class AudSoundBase * __thiscall vehSurfaceAudioData::GetSurfaceSoundPtr(void) | ?GetSurfaceSoundPtr@vehSurfaceAudioData@@QAEPAVAudSoundBase@@XZ
    0x4E0550 | public: void __thiscall vehSurfaceAudioData::AssignSounds(int) | ?AssignSounds@vehSurfaceAudioData@@QAEXH@Z
    0x4E05B0 | public: void __thiscall vehSurfaceAudioData::UnAssignSounds(void) | ?UnAssignSounds@vehSurfaceAudioData@@QAEXXZ
    0x4E05E0 | public: void __thiscall vehSurfaceAudioData::SetPan(float) | ?SetPan@vehSurfaceAudioData@@QAEXM@Z
    0x4E0640 | public: void __thiscall vehSurfaceAudioData::EchoOn(float) | ?EchoOn@vehSurfaceAudioData@@QAEXM@Z
    0x4E06C0 | public: void __thiscall vehSurfaceAudioData::EchoOff(void) | ?EchoOff@vehSurfaceAudioData@@QAEXXZ
    public: void __thiscall vehSurfaceAudioData::UpdateEcho(void) | ?UpdateEcho@vehSurfaceAudioData@@QAEXXZ
    public: void __thiscall vehSurfaceAudioData::AddWidgets(class bkBank &,int) | ?AddWidgets@vehSurfaceAudioData@@QAEXAAVbkBank@@H@Z
    public: void __thiscall vehSurfaceAudioData::WidgetVolDivs(void) | ?WidgetVolDivs@vehSurfaceAudioData@@QAEXXZ
    public: void __thiscall vehSurfaceAudioData::WidgetPlaySkid(void) | ?WidgetPlaySkid@vehSurfaceAudioData@@QAEXXZ
    public: void __thiscall vehSurfaceAudioData::WidgetPlaySurface(void) | ?WidgetPlaySurface@vehSurfaceAudioData@@QAEXXZ
    public: void __thiscall vehSurfaceAudioData::WidgetStopSurface(void) | ?WidgetStopSurface@vehSurfaceAudioData@@QAEXXZ
    public: virtual void * __thiscall vehSurfaceAudioData::`vector deleting destructor'(unsigned int) | ??_EvehSurfaceAudioData@@UAEPAXI@Z
    public: virtual void * __thiscall vehSurfaceAudioData::`scalar deleting destructor'(unsigned int) | ??_GvehSurfaceAudioData@@UAEPAXI@Z
    const vehSurfaceAudioData::`vftable' | ??_7vehSurfaceAudioData@@6B@
*/

struct vehSurfaceAudioData
{
public:
    // 0x4DFD50 | ??0vehSurfaceAudioData@@QAE@XZ
    inline vehSurfaceAudioData()
    {
        stub<member_func_t<void, vehSurfaceAudioData>>(0x4DFD50, this);
    }

    // 0x4DFDA0 | ?AllocateSkidSamples@vehSurfaceAudioData@@QAEXH@Z
    inline void AllocateSkidSamples(i32 arg1)
    {
        return stub<member_func_t<void, vehSurfaceAudioData, i32>>(0x4DFDA0, this, arg1);
    }

    // 0x4DFDD0 | ?StopSkid@vehSurfaceAudioData@@QAEXXZ
    inline void StopSkid()
    {
        return stub<member_func_t<void, vehSurfaceAudioData>>(0x4DFDD0, this);
    }

    // 0x4DFE10 | ?UpdateSkid@vehSurfaceAudioData@@QAEXMMM@Z
    inline void UpdateSkid(f32 arg1, f32 arg2, f32 arg3)
    {
        return stub<member_func_t<void, vehSurfaceAudioData, f32, f32, f32>>(0x4DFE10, this, arg1, arg2, arg3);
    }

    // 0x4E0010 | ?UpdateSkid@vehSurfaceAudioData@@QAEXM@Z
    inline void UpdateSkid(f32 arg1)
    {
        return stub<member_func_t<void, vehSurfaceAudioData, f32>>(0x4E0010, this, arg1);
    }

    // 0x4E00C0 | ?UpdateSurface@vehSurfaceAudioData@@QAEXMMM@Z
    inline void UpdateSurface(f32 arg1, f32 arg2, f32 arg3)
    {
        return stub<member_func_t<void, vehSurfaceAudioData, f32, f32, f32>>(0x4E00C0, this, arg1, arg2, arg3);
    }

    // 0x4E0160 | ?UpdateSurface@vehSurfaceAudioData@@QAEXM@Z
    inline void UpdateSurface(f32 arg1)
    {
        return stub<member_func_t<void, vehSurfaceAudioData, f32>>(0x4E0160, this, arg1);
    }

    // 0x4E01E0 | ?StopSurface@vehSurfaceAudioData@@QAEXXZ
    inline void StopSurface()
    {
        return stub<member_func_t<void, vehSurfaceAudioData>>(0x4E01E0, this);
    }

    // 0x4E0200 | ?ParseCSVBuffer@vehSurfaceAudioData@@QAE_NPAVStream@@@Z
    inline bool ParseCSVBuffer(class Stream* arg1)
    {
        return stub<member_func_t<bool, vehSurfaceAudioData, class Stream*>>(0x4E0200, this, arg1);
    }

    // 0x4E04E0 | ?SkidPlaying@vehSurfaceAudioData@@QAEHXZ
    inline i32 SkidPlaying()
    {
        return stub<member_func_t<i32, vehSurfaceAudioData>>(0x4E04E0, this);
    }

    // 0x4E0520 | ?SurfacePlaying@vehSurfaceAudioData@@QAEHXZ
    inline i32 SurfacePlaying()
    {
        return stub<member_func_t<i32, vehSurfaceAudioData>>(0x4E0520, this);
    }

    // 0x4E0540 | ?GetSurfaceSoundPtr@vehSurfaceAudioData@@QAEPAVAudSoundBase@@XZ
    inline class AudSoundBase* GetSurfaceSoundPtr()
    {
        return stub<member_func_t<class AudSoundBase*, vehSurfaceAudioData>>(0x4E0540, this);
    }

    // 0x4E0550 | ?AssignSounds@vehSurfaceAudioData@@QAEXH@Z
    inline void AssignSounds(i32 arg1)
    {
        return stub<member_func_t<void, vehSurfaceAudioData, i32>>(0x4E0550, this, arg1);
    }

    // 0x4E05B0 | ?UnAssignSounds@vehSurfaceAudioData@@QAEXXZ
    inline void UnAssignSounds()
    {
        return stub<member_func_t<void, vehSurfaceAudioData>>(0x4E05B0, this);
    }

    // 0x4E05E0 | ?SetPan@vehSurfaceAudioData@@QAEXM@Z
    inline void SetPan(f32 arg1)
    {
        return stub<member_func_t<void, vehSurfaceAudioData, f32>>(0x4E05E0, this, arg1);
    }

    // 0x4E0640 | ?EchoOn@vehSurfaceAudioData@@QAEXM@Z
    inline void EchoOn(f32 arg1)
    {
        return stub<member_func_t<void, vehSurfaceAudioData, f32>>(0x4E0640, this, arg1);
    }

    // 0x4E06C0 | ?EchoOff@vehSurfaceAudioData@@QAEXXZ
    inline void EchoOff()
    {
        return stub<member_func_t<void, vehSurfaceAudioData>>(0x4E06C0, this);
    }
};