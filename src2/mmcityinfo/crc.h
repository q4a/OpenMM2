/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 0x1F9F1

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

#pragma once

/*
    mmcityinfo:crc

    0x52A8F0 | unsigned long __cdecl UpdateCrc(unsigned char *,unsigned int) | ?UpdateCrc@@YAKPAEI@Z
*/

// 0x52A8F0 | ?UpdateCrc@@YAKPAEI@Z
inline u32 UpdateCrc(u8* arg1, u32 arg2)
{
    return stub<cdecl_t<u32, u8*, u32>>(0x52A8F0, arg1, arg2);
}