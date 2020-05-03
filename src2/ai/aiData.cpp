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

#include "aiData.h"

aiRaceData::aiRaceData(char* arg1, char* arg2, struct dgStatePack const* arg3)
{
    unimplemented();
}

aiRaceData::~aiRaceData()
{
    unimplemented();
}

void aiRaceData::SaveData()
{
    return stub<thiscall_t<void, aiRaceData*>>(0x5558D0, this);
}

define_dummy_symbol(ai_aiData);
