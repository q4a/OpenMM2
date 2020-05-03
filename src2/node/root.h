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

#include "node.h"

/*
    node:root

    0x4A0B70 | public: __thiscall asRoot::asRoot(void) | ??0asRoot@@QAE@XZ
    0x4A0BE0 | public: void __thiscall asRoot::Init(bool) | ?Init@asRoot@@QAEX_N@Z
    0x4A0C00 | public: virtual void __thiscall asRoot::Update(void) | ?Update@asRoot@@UAEXXZ
    0x4A0C40 | public: virtual void __thiscall asRoot::Reset(void) | ?Reset@asRoot@@UAEXXZ
    0x4A0C50 | public: void __thiscall asRoot::Quit(void) | ?Quit@asRoot@@QAEXXZ
    0x4A0C60 | public: bool __thiscall asRoot::IsPaused(void) | ?IsPaused@asRoot@@QAE_NXZ
    0x4A0C70 | public: void __thiscall asRoot::TogglePause(void) | ?TogglePause@asRoot@@QAEXXZ
    0x4A0C80 | public: void __thiscall asRoot::SetPause(bool) | ?SetPause@asRoot@@QAEX_N@Z
    0x4A0C90 | public: virtual __thiscall asRoot::~asRoot(void) | ??1asRoot@@UAE@XZ
    public: virtual void * __thiscall asRoot::`vector deleting destructor'(unsigned int) | ??_EasRoot@@UAEPAXI@Z
    0x4A0CA0 | public: virtual void * __thiscall asRoot::`scalar deleting destructor'(unsigned int) | ??_GasRoot@@UAEPAXI@Z
    0x4A0CD0 | public: virtual char * __thiscall asRoot::GetClassName(void) | ?GetClassName@asRoot@@UAEPADXZ
    0x5B28B4 | const asRoot::`vftable' | ??_7asRoot@@6B@
    0x661738 | class asRoot ROOT | ?ROOT@@3VasRoot@@A
*/

class asRoot : public asNode
{
    // const asRoot::`vftable' @ 0x5B28B4

public:
    // 0x4A0B70 | ??0asRoot@@QAE@XZ
    asRoot();

    // 0x4A0CA0 | ??_GasRoot@@UAEPAXI@Z
    // 0x4A0C90 | ??1asRoot@@UAE@XZ
    ~asRoot() override;

    // 0x4A0CD0 | ?GetClassName@asRoot@@UAEPADXZ
    char* GetClassName() override;

    // 0x4A0BE0 | ?Init@asRoot@@QAEX_N@Z
    void Init(bool arg1);

    // 0x4A0C60 | ?IsPaused@asRoot@@QAE_NXZ
    bool IsPaused();

    // 0x4A0C50 | ?Quit@asRoot@@QAEXXZ
    void Quit();

    // 0x4A0C40 | ?Reset@asRoot@@UAEXXZ
    void Reset() override;

    // 0x4A0C80 | ?SetPause@asRoot@@QAEX_N@Z
    void SetPause(bool arg1);

    // 0x4A0C70 | ?TogglePause@asRoot@@QAEXXZ
    void TogglePause();

    // 0x4A0C00 | ?Update@asRoot@@UAEXXZ
    void Update() override;
};

check_size(asRoot, 0x0);

// 0x661738 | ?ROOT@@3VasRoot@@A
inline extern_var(0x661738, class asRoot, ROOT);