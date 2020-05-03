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

#include "appcs.h"

camAppCS::camAppCS()
{
    unimplemented();
}

camAppCS::~camAppCS()
{
    unimplemented();
}

void camAppCS::FileIO(class datParser& arg1)
{
    return stub<thiscall_t<void, camAppCS*, class datParser&>>(0x5229D0, this, arg1);
}

void camAppCS::ApproachIt()
{
    return stub<thiscall_t<void, camAppCS*>>(0x522060, this);
}

i32 camAppCS::DApproach(f32& arg1, f32 arg2, f32 arg3, f32 arg4, f32& arg5, f32 arg6)
{
    return stub<thiscall_t<i32, camAppCS*, f32&, f32, f32, f32, f32&, f32>>(
        0x522880, this, arg1, arg2, arg3, arg4, arg5, arg6);
}

void camAppCS::UpdateApproach()
{
    return stub<thiscall_t<void, camAppCS*>>(0x522090, this);
}

void camAppCS::UpdateMaxDist()
{
    return stub<thiscall_t<void, camAppCS*>>(0x522650, this);
}

define_dummy_symbol(camera_appcs);
