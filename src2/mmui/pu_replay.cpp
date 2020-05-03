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

#include "pu_replay.h"

PUReplay::PUReplay(i32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, char* arg6)
{
    unimplemented();
}

PUReplay::~PUReplay()
{
    unimplemented();
}

i32 PUReplay::GetSaveRO()
{
    return stub<thiscall_t<i32, PUReplay*>>(0x50B560, this);
}

void PUReplay::SaveRO(i32 arg1)
{
    return stub<thiscall_t<void, PUReplay*, i32>>(0x50B540, this, arg1);
}

define_dummy_symbol(mmui_pu_replay);