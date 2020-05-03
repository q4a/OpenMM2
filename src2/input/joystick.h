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
    input:joystick

    0x4BB7F0 | private: static int __stdcall ioJoystick::EnumDeviceProc(struct DIDEVICEINSTANCEA const *,void *) | ?EnumDeviceProc@ioJoystick@@CGHPBUDIDEVICEINSTANCEA@@PAX@Z
    0x4BBA00 | public: static void __cdecl ioJoystick::BeginAll(void) | ?BeginAll@ioJoystick@@SAXXZ
    0x4BBA50 | public: static void __cdecl ioJoystick::PollAll(void) | ?PollAll@ioJoystick@@SAXXZ
    0x4BBA80 | public: static void __cdecl ioJoystick::UpdateAll(void) | ?UpdateAll@ioJoystick@@SAXXZ
    0x4BBAB0 | public: static void __cdecl ioJoystick::EndAll(void) | ?EndAll@ioJoystick@@SAXXZ
    0x4BBAE0 | private: static int __stdcall ioJoystick::EnumObjectProc(struct DIDEVICEOBJECTINSTANCEA const *,void *) | ?EnumObjectProc@ioJoystick@@CGHPBUDIDEVICEOBJECTINSTANCEA@@PAX@Z
    0x4BBAF0 | private: void __thiscall ioJoystick::Begin(void) | ?Begin@ioJoystick@@AAEXXZ
    0x4BBC50 | private: void __thiscall ioJoystick::Poll(void) | ?Poll@ioJoystick@@AAEXXZ
    0x4BBC60 | private: void __thiscall ioJoystick::Update(void) | ?Update@ioJoystick@@AAEXXZ
    0x4BBD20 | private: void __thiscall ioJoystick::End(void) | ?End@ioJoystick@@AAEXXZ
    0x6A3968 | private: static class ioJoystick * ioJoystick::STICKS | ?STICKS@ioJoystick@@0PAV1@A
    0x6A3AAC | private: static int ioJoystick::StickCount | ?StickCount@ioJoystick@@0HA
*/

class ioJoystick
{
public:
    // 0x4BBA00 | ?BeginAll@ioJoystick@@SAXXZ
    static void BeginAll();

    // 0x4BBAB0 | ?EndAll@ioJoystick@@SAXXZ
    static void EndAll();

    // 0x4BBA50 | ?PollAll@ioJoystick@@SAXXZ
    static void PollAll();

    // 0x4BBA80 | ?UpdateAll@ioJoystick@@SAXXZ
    static void UpdateAll();

private:
    // 0x4BBAF0 | ?Begin@ioJoystick@@AAEXXZ
    void Begin();

    // 0x4BBD20 | ?End@ioJoystick@@AAEXXZ
    void End();

    // 0x4BBC50 | ?Poll@ioJoystick@@AAEXXZ
    void Poll();

    // 0x4BBC60 | ?Update@ioJoystick@@AAEXXZ
    void Update();

    // 0x4BB7F0 | ?EnumDeviceProc@ioJoystick@@CGHPBUDIDEVICEINSTANCEA@@PAX@Z
    static i32 __stdcall EnumDeviceProc(struct DIDEVICEINSTANCEA const* arg1, void* arg2);

    // 0x4BBAE0 | ?EnumObjectProc@ioJoystick@@CGHPBUDIDEVICEOBJECTINSTANCEA@@PAX@Z
    static i32 __stdcall EnumObjectProc(struct DIDEVICEOBJECTINSTANCEA const* arg1, void* arg2);

    // 0x6A3968 | ?STICKS@ioJoystick@@0PAV1@A
    static inline extern_var(0x6A3968, class ioJoystick*, STICKS);

    // 0x6A3AAC | ?StickCount@ioJoystick@@0HA
    static inline extern_var(0x6A3AAC, i32, StickCount);
};

check_size(ioJoystick, 0x0);
