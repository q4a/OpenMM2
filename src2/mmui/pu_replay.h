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
    mmui:pu_replay

    0x50B270 | public: __thiscall PUReplay::PUReplay(int,float,float,float,float,char *) | ??0PUReplay@@QAE@HMMMMPAD@Z
    0x50B530 | public: virtual __thiscall PUReplay::~PUReplay(void) | ??1PUReplay@@UAE@XZ
    0x50B540 | public: void __thiscall PUReplay::SaveRO(int) | ?SaveRO@PUReplay@@QAEXH@Z
    0x50B560 | public: int __thiscall PUReplay::GetSaveRO(void) | ?GetSaveRO@PUReplay@@QAEHXZ
    public: virtual void * __thiscall PUReplay::`vector deleting destructor'(unsigned int) | ??_EPUReplay@@UAEPAXI@Z
    0x50B570 | public: virtual void * __thiscall PUReplay::`scalar deleting destructor'(unsigned int) | ??_GPUReplay@@UAEPAXI@Z
    0x5B47F8 | const PUReplay::`vftable' | ??_7PUReplay@@6B@
*/

struct PUReplay : PUMenuBase
{
public:
    // PUReplay::`vftable' @ 0x5B47F8

    // 0x50B270 | ??0PUReplay@@QAE@HMMMMPAD@Z
    inline PUReplay(i32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, char* arg6)
    {
        stub<member_func_t<void, PUReplay, i32, f32, f32, f32, f32, char*>>(
            0x50B270, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x50B540 | ?SaveRO@PUReplay@@QAEXH@Z
    inline void SaveRO(i32 arg1)
    {
        return stub<member_func_t<void, PUReplay, i32>>(0x50B540, this, arg1);
    }

    // 0x50B560 | ?GetSaveRO@PUReplay@@QAEHXZ
    inline i32 GetSaveRO()
    {
        return stub<member_func_t<i32, PUReplay>>(0x50B560, this);
    }

    // 0x50B530 | ??1PUReplay@@UAE@XZ
    inline ~PUReplay() override
    {
        stub<member_func_t<void, PUReplay>>(0x50B530, this);
    }
};