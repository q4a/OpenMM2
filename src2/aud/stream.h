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
    aud:stream

    0x5A4C80 | public: class audStream * __thiscall audStream::Create(class audObject *) | ?Create@audStream@@QAEPAV1@PAVaudObject@@@Z
    0x5A4CC0 | public: void __thiscall audStream::Init(void) | ?Init@audStream@@QAEXXZ
    0x5A4CD0 | public: void __thiscall audStream::Destroy(void) | ?Destroy@audStream@@QAEXXZ
    0x5A4CF0 | public: bool __thiscall audStream::Update(int) | ?Update@audStream@@QAE_NH@Z
    0x5A4E00 | public: bool __thiscall audStream::CloseStream(void) | ?CloseStream@audStream@@QAE_NXZ
    0x5A4E60 | public: int __thiscall audStream::GetCurrentCursor(void) | ?GetCurrentCursor@audStream@@QAEHXZ
    0x5A4E70 | public: void __thiscall audStream::SetBufferSize(int) | ?SetBufferSize@audStream@@QAEXH@Z
    0x5A4E80 | public: int __thiscall audStream::GetBufferSize(void) | ?GetBufferSize@audStream@@QAEHXZ
    0x5A4E90 | public: void __thiscall audStream::SetFileInfo(void *) | ?SetFileInfo@audStream@@QAEXPAX@Z
    0x5A4EA0 | public: bool __thiscall audStream::IsFinished(void) | ?IsFinished@audStream@@QAE_NXZ
    0x5A4EB0 | public: void __thiscall audStream::SetVolume(float) | ?SetVolume@audStream@@QAEXM@Z
    0x5A4EC0 | public: void __thiscall audStream::SetLooping(bool) | ?SetLooping@audStream@@QAEX_N@Z
*/

class audStream
{
public:
    // 0x5A4E00 | ?CloseStream@audStream@@QAE_NXZ
    bool CloseStream();

    // 0x5A4C80 | ?Create@audStream@@QAEPAV1@PAVaudObject@@@Z
    class audStream* Create(class audObject* arg1);

    // 0x5A4CD0 | ?Destroy@audStream@@QAEXXZ
    void Destroy();

    // 0x5A4E80 | ?GetBufferSize@audStream@@QAEHXZ
    i32 GetBufferSize();

    // 0x5A4E60 | ?GetCurrentCursor@audStream@@QAEHXZ
    i32 GetCurrentCursor();

    // 0x5A4CC0 | ?Init@audStream@@QAEXXZ
    void Init();

    // 0x5A4EA0 | ?IsFinished@audStream@@QAE_NXZ
    bool IsFinished();

    // 0x5A4E70 | ?SetBufferSize@audStream@@QAEXH@Z
    void SetBufferSize(i32 arg1);

    // 0x5A4E90 | ?SetFileInfo@audStream@@QAEXPAX@Z
    void SetFileInfo(void* arg1);

    // 0x5A4EC0 | ?SetLooping@audStream@@QAEX_N@Z
    void SetLooping(bool arg1);

    // 0x5A4EB0 | ?SetVolume@audStream@@QAEXM@Z
    void SetVolume(f32 arg1);

    // 0x5A4CF0 | ?Update@audStream@@QAE_NH@Z
    bool Update(i32 arg1);
};

check_size(audStream, 0x0);