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

#include "spring.h"

i32 mmSpringFF::Assign(i32 arg1)
{
    return stub<thiscall_t<i32, mmSpringFF*, i32>>(0x531FF0, this, arg1);
}

i32 mmSpringFF::Init(struct IDirectInputDevice2A* arg1)
{
    return stub<thiscall_t<i32, mmSpringFF*, struct IDirectInputDevice2A*>>(0x531EC0, this, arg1);
}

i32 mmSpringFF::Play()
{
    return stub<thiscall_t<i32, mmSpringFF*>>(0x5320E0, this);
}

i32 mmSpringFF::SetValues(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<i32, mmSpringFF*, f32, f32>>(0x531FC0, this, arg1, arg2);
}

i32 mmSpringFF::Stop()
{
    return stub<thiscall_t<i32, mmSpringFF*>>(0x532150, this);
}

define_dummy_symbol(mminput_spring);