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
    node:linear

    0x4A32F0 | public: __thiscall asLinearCS::asLinearCS(void) | ??0asLinearCS@@QAE@XZ
    0x4A3370 | public: virtual void __thiscall asLinearCS::Update(void) | ?Update@asLinearCS@@UAEXXZ
    0x4A3400 | public: virtual void __thiscall asLinearCS::Cull(void) | ?Cull@asLinearCS@@UAEXXZ
    0x4A3410 | public: virtual void * __thiscall asLinearCS::`vector deleting destructor'(unsigned int) | ??_EasLinearCS@@UAEPAXI@Z
    public: virtual void * __thiscall asLinearCS::`scalar deleting destructor'(unsigned int) | ??_GasLinearCS@@UAEPAXI@Z
    public: virtual char * __thiscall asLinearCS::GetClassName(void) | ?GetClassName@asLinearCS@@UAEPADXZ
    0x5B29AC | const asLinearCS::`vftable' | ??_7asLinearCS@@6B@
    0x5C8D2C | private: static int asLinearCS::FrameHeight | ?FrameHeight@asLinearCS@@0HA
    0x6617A8 | private: static class asLinearCS asLinearCS::RootFrame | ?RootFrame@asLinearCS@@0V1@A
    0x661828 | private: static class asLinearCS * * asLinearCS::FrameStack | ?FrameStack@asLinearCS@@0PAPAV1@A
    0x6618AC | private: static class Matrix34 * asLinearCS::CurrentMatrix | ?CurrentMatrix@asLinearCS@@0PAVMatrix34@@A
*/

class asLinearCS : public asNode
{
    // const asLinearCS::`vftable' @ 0x5B29AC

public:
    // 0x4A32F0 | ??0asLinearCS@@QAE@XZ
    asLinearCS();

    // 0x4A3410 | ??_EasLinearCS@@UAEPAXI@Z
    // 0x431B80 | ??1asLinearCS@@UAE@XZ
    ~asLinearCS() override;

    // 0x4A3400 | ?Cull@asLinearCS@@UAEXXZ
    void Cull() override;

    // 0x4A3370 | ?Update@asLinearCS@@UAEXXZ
    void Update() override;

private:
    // 0x6618AC | ?CurrentMatrix@asLinearCS@@0PAVMatrix34@@A
    static inline extern_var(0x6618AC, class Matrix34*, CurrentMatrix);

    // 0x5C8D2C | ?FrameHeight@asLinearCS@@0HA
    static inline extern_var(0x5C8D2C, i32, FrameHeight);

    // 0x661828 | ?FrameStack@asLinearCS@@0PAPAV1@A
    static inline extern_var(0x661828, class asLinearCS**, FrameStack);

    // 0x6617A8 | ?RootFrame@asLinearCS@@0V1@A
    static inline extern_var(0x6617A8, class asLinearCS, RootFrame);
};

check_size(asLinearCS, 0x0);