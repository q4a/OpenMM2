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

#include "jdapimin.h"

void jpeg_CreateDecompress(struct jpeg_decompress_struct* arg1, i32 arg2, u32 arg3)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*, i32, u32>>(0x497D10, arg1, arg2, arg3);
}

void jpeg_abort_decompress(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*>>(0x497E10, arg1);
}

i32 jpeg_consume_input(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<i32, struct jpeg_decompress_struct*>>(0x497EB0, arg1);
}

void jpeg_destroy_decompress(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*>>(0x497DF0, arg1);
}

u8 jpeg_finish_decompress(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<u8, struct jpeg_decompress_struct*>>(0x4981D0, arg1);
}

u8 jpeg_has_multiple_scans(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<u8, struct jpeg_decompress_struct*>>(0x498180, arg1);
}

u8 jpeg_input_complete(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<u8, struct jpeg_decompress_struct*>>(0x498130, arg1);
}

i32 jpeg_read_header(struct jpeg_decompress_struct* arg1, u8 arg2)
{
    return stub<cdecl_t<i32, struct jpeg_decompress_struct*, u8>>(0x497E30, arg1, arg2);
}

define_dummy_symbol(djpeg_jdapimin);