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

#pragma once

/*
    zipfile:zutil

    0x574550 | _zlibVersion
    0x574560 | _zError
    0x574580 | void * __cdecl zcalloc(void *,unsigned int,unsigned int) | ?zcalloc@@YAPAXPAXII@Z
    0x5745A0 | void __cdecl zcfree(void *,void *) | ?zcfree@@YAXPAX0@Z
    char const * * z_errmsg | ?z_errmsg@@3PAPBDA
*/

// 0x574580 | ?zcalloc@@YAPAXPAXII@Z
void* zcalloc(void* arg1, u32 arg2, u32 arg3);

// 0x5745A0 | ?zcfree@@YAXPAX0@Z
void zcfree(void* arg1, void* arg2);

// 0x574560 | _zError (Skipped: void)

// 0x574550 | _zlibVersion (Skipped: void)