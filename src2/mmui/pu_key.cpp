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

#include "pu_key.h"

PUKey::PUKey(i32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5)
{
    unimplemented();
}

PUKey::~PUKey()
{
    unimplemented();
}

void PUKey::PostSetup()
{
    return stub<thiscall_t<void, PUKey*>>(0x50B910, this);
}

void PUKey::PreSetup()
{
    return stub<thiscall_t<void, PUKey*>>(0x50B650, this);
}

define_dummy_symbol(mmui_pu_key);