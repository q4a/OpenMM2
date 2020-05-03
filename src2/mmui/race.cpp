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

#include "race.h"

RaceMenu::RaceMenu(i32 arg1)
{
    unimplemented();
}

RaceMenu::~RaceMenu()
{
    unimplemented();
}

i32 RaceMenu::GetRaceID()
{
    return stub<thiscall_t<i32, RaceMenu*>>(0x5051F0, this);
}

char* RaceMenu::GetRaceName(enum dgGameMode arg1, i32 arg2)
{
    return stub<thiscall_t<char*, RaceMenu*, enum dgGameMode, i32>>(0x505300, this, arg1, arg2);
}

void RaceMenu::SetBlitzMask(i32 arg1)
{
    return stub<thiscall_t<void, RaceMenu*, i32>>(0x5052A0, this, arg1);
}

void RaceMenu::SetCheckpointMask(i32 arg1)
{
    return stub<thiscall_t<void, RaceMenu*, i32>>(0x5052C0, this, arg1);
}

void RaceMenu::SetCircuitMask(i32 arg1)
{
    return stub<thiscall_t<void, RaceMenu*, i32>>(0x5052E0, this, arg1);
}

void RaceMenu::SetProgressMask(i32 arg1)
{
    return stub<thiscall_t<void, RaceMenu*, i32>>(0x505280, this, arg1);
}

define_dummy_symbol(mmui_race);