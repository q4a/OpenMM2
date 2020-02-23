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
    node:random

    0x4A3750 | float __cdecl logf_fast(float) | ?logf_fast@@YAMM@Z
    0x4A37D0 | public: void __thiscall Random::Seed(int) | ?Seed@Random@@QAEXH@Z
    0x4A3880 | public: float __thiscall Random::Number(void) | ?Number@Random@@QAEMXZ
    0x4A38E0 | public: float __thiscall Random::Normal(float,float) | ?Normal@Random@@QAEMMM@Z
*/

// 0x4A3750 | ?logf_fast@@YAMM@Z
inline f32 logf_fast(f32 arg1)
{
    return stub<cdecl_t<f32, f32>>(0x4A3750, arg1);
}

struct Random
{
public:
    // 0x4A37D0 | ?Seed@Random@@QAEXH@Z
    inline void Seed(i32 arg1)
    {
        return stub<member_func_t<void, Random, i32>>(0x4A37D0, this, arg1);
    }

    // 0x4A3880 | ?Number@Random@@QAEMXZ
    inline f32 Number()
    {
        return stub<member_func_t<f32, Random>>(0x4A3880, this);
    }

    // 0x4A38E0 | ?Normal@Random@@QAEMMM@Z
    inline f32 Normal(f32 arg1, f32 arg2)
    {
        return stub<member_func_t<f32, Random, f32, f32>>(0x4A38E0, this, arg1, arg2);
    }
};