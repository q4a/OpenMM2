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

#include "ArrayList.h"

CArrayList::CArrayList()
{
    unimplemented();
}

CArrayList::~CArrayList()
{
    unimplemented();
}

void CArrayList::Append(i32 arg1)
{
    return stub<thiscall_t<void, CArrayList*, i32>>(0x543D50, this, arg1);
}

void CArrayList::ReadBinary(class Stream* arg1)
{
    return stub<thiscall_t<void, CArrayList*, class Stream*>>(0x543DE0, this, arg1);
}

void CArrayList::SaveBinary(class Stream* arg1)
{
    return stub<thiscall_t<void, CArrayList*, class Stream*>>(0x543DB0, this, arg1);
}

define_dummy_symbol(ai_ArrayList);