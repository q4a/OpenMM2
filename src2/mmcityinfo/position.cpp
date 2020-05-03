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

#include "position.h"

mmPositions::mmPositions()
{
    unimplemented();
}

mmPositions::~mmPositions()
{
    unimplemented();
}

i32 mmPositions::Dump(char* arg1)
{
    return stub<thiscall_t<i32, mmPositions*, char*>>(0x52A370, this, arg1);
}

i32 mmPositions::GetCount()
{
    return stub<thiscall_t<i32, mmPositions*>>(0x52A300, this);
}

i32 mmPositions::GetFrameRate(i32 arg1)
{
    return stub<thiscall_t<i32, mmPositions*, i32>>(0x52A340, this, arg1);
}

class Vector4& mmPositions::GetVector4(i32 arg1)
{
    return stub<thiscall_t<class Vector4&, mmPositions*, i32>>(0x52A310, this, arg1);
}

void mmPositions::Init(i32 arg1)
{
    return stub<thiscall_t<void, mmPositions*, i32>>(0x52A0E0, this, arg1);
}

i32 mmPositions::Load(char* arg1)
{
    return stub<thiscall_t<i32, mmPositions*, char*>>(0x52A110, this, arg1);
}

i32 mmPositions::Recall(i32 arg1, class Matrix34* arg2, i32* arg3, char* arg4)
{
    return stub<thiscall_t<i32, mmPositions*, i32, class Matrix34*, i32*, char*>>(
        0x52A380, this, arg1, arg2, arg3, arg4);
}

i32 mmPositions::Register(class Vector4& arg1, i32 arg2, i32 arg3, i32 arg4, i32 arg5, char* arg6)
{
    return stub<thiscall_t<i32, mmPositions*, class Vector4&, i32, i32, i32, i32, char*>>(
        0x52A410, this, arg1, arg2, arg3, arg4, arg5, arg6);
}

define_dummy_symbol(mmcityinfo_position);