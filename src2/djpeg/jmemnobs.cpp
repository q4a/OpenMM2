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

#include "jmemnobs.h"

void jpeg_free_large(struct jpeg_common_struct* arg1, void* arg2, u32 arg3)
{
    return stub<cdecl_t<void, struct jpeg_common_struct*, void*, u32>>(0x49BC40, arg1, arg2, arg3);
}

void jpeg_free_small(struct jpeg_common_struct* arg1, void* arg2, u32 arg3)
{
    return stub<cdecl_t<void, struct jpeg_common_struct*, void*, u32>>(0x49BC00, arg1, arg2, arg3);
}

void* jpeg_get_large(struct jpeg_common_struct* arg1, u32 arg2)
{
    return stub<cdecl_t<void*, struct jpeg_common_struct*, u32>>(0x49BC20, arg1, arg2);
}

void* jpeg_get_small(struct jpeg_common_struct* arg1, u32 arg2)
{
    return stub<cdecl_t<void*, struct jpeg_common_struct*, u32>>(0x49BBE0, arg1, arg2);
}

i32 jpeg_mem_available(struct jpeg_common_struct* arg1, i32 arg2, i32 arg3, i32 arg4)
{
    return stub<cdecl_t<i32, struct jpeg_common_struct*, i32, i32, i32>>(0x49BC60, arg1, arg2, arg3, arg4);
}

i32 jpeg_mem_init(struct jpeg_common_struct* arg1)
{
    return stub<cdecl_t<i32, struct jpeg_common_struct*>>(0x49BC90, arg1);
}

void jpeg_mem_term(struct jpeg_common_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_common_struct*>>(0x49BCA0, arg1);
}

void jpeg_open_backing_store(struct jpeg_common_struct* arg1, struct backing_store_struct* arg2, i32 arg3)
{
    return stub<cdecl_t<void, struct jpeg_common_struct*, struct backing_store_struct*, i32>>(
        0x49BC70, arg1, arg2, arg3);
}

define_dummy_symbol(djpeg_jmemnobs);