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

#include "options.h"

OptionsMenu::OptionsMenu(i32 arg1)
{
    unimplemented();
}

OptionsMenu::~OptionsMenu()
{
    unimplemented();
}

void OptionsMenu::FocusDescription(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, OptionsMenu*, i32, i32>>(0x502CE0, this, arg1, arg2);
}

void OptionsMenu::PostSetup()
{
    return stub<thiscall_t<void, OptionsMenu*>>(0x502CC0, this);
}

void OptionsMenu::PreSetup()
{
    return stub<thiscall_t<void, OptionsMenu*>>(0x502C80, this);
}

define_dummy_symbol(mmui_options);