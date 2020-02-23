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
    mmui:controlbase

    0x50D4C0 | public: __thiscall ControlBase::ControlBase(void) | ??0ControlBase@@QAE@XZ
    0x50D4D0 | public: __thiscall ControlBase::~ControlBase(void) | ??1ControlBase@@QAE@XZ
    0x50D4E0 | public: void __thiscall ControlBase::InitSensitivity(void) | ?InitSensitivity@ControlBase@@QAEXXZ
    0x50D540 | public: void __thiscall ControlBase::SetSensitivity(void) | ?SetSensitivity@ControlBase@@QAEXXZ
*/

struct ControlBase
{
public:
    // 0x50D4C0 | ??0ControlBase@@QAE@XZ
    inline ControlBase()
    {
        stub<member_func_t<void, ControlBase>>(0x50D4C0, this);
    }

    // 0x50D4D0 | ??1ControlBase@@QAE@XZ
    inline ~ControlBase()
    {
        stub<member_func_t<void, ControlBase>>(0x50D4D0, this);
    }

    // 0x50D4E0 | ?InitSensitivity@ControlBase@@QAEXXZ
    inline void InitSensitivity()
    {
        return stub<member_func_t<void, ControlBase>>(0x50D4E0, this);
    }

    // 0x50D540 | ?SetSensitivity@ControlBase@@QAEXXZ
    inline void SetSensitivity()
    {
        return stub<member_func_t<void, ControlBase>>(0x50D540, this);
    }
};