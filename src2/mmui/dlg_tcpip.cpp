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

#include "dlg_tcpip.h"

Dialog_TCPIP::Dialog_TCPIP(i32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, char* arg6)
{
    unimplemented();
}

Dialog_TCPIP::~Dialog_TCPIP()
{
    unimplemented();
}

void Dialog_TCPIP::IPAddressCallback()
{
    return stub<thiscall_t<void, Dialog_TCPIP*>>(0x4FE7D0, this);
}

void Dialog_TCPIP::PreSetup()
{
    return stub<thiscall_t<void, Dialog_TCPIP*>>(0x4FE7C0, this);
}

void Dialog_TCPIP::SetIPAddress(char* arg1)
{
    return stub<thiscall_t<void, Dialog_TCPIP*, char*>>(0x4FE7E0, this, arg1);
}

define_dummy_symbol(mmui_dlg_tcpip);