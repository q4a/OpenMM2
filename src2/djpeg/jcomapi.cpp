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

#include "jcomapi.h"

void jpeg_abort(struct jpeg_common_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_common_struct*>>(0x49B5D0, arg1);
}

struct JHUFF_TBL* jpeg_alloc_huff_table(struct jpeg_common_struct* arg1)
{
    return stub<cdecl_t<struct JHUFF_TBL*, struct jpeg_common_struct*>>(0x49B660, arg1);
}

struct JQUANT_TBL* jpeg_alloc_quant_table(struct jpeg_common_struct* arg1)
{
    return stub<cdecl_t<struct JQUANT_TBL*, struct jpeg_common_struct*>>(0x49B640, arg1);
}

void jpeg_destroy(struct jpeg_common_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_common_struct*>>(0x49B610, arg1);
}

define_dummy_symbol(djpeg_jcomapi);