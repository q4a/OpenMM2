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

#include "compcity.h"

/*
    mmwidget:comprpl

    0x59EC50 | public: __thiscall mmCompReplay::mmCompReplay(void) | ??0mmCompReplay@@QAE@XZ
    0x59EC70 | public: virtual __thiscall mmCompReplay::~mmCompReplay(void) | ??1mmCompReplay@@UAE@XZ
    0x59ECD0 | public: void __thiscall mmCompReplay::Init(char *) | ?Init@mmCompReplay@@QAEXPAD@Z
    0x59ECF0 | public: void __thiscall mmCompReplay::InitTitle(float,float,float,float,struct LocString *) | ?InitTitle@mmCompReplay@@QAEXMMMMPAULocString@@@Z
    0x59ED30 | public: virtual void __thiscall mmCompReplay::Reset(void) | ?Reset@mmCompReplay@@UAEXXZ
    0x59ED40 | public: virtual void __thiscall mmCompReplay::Update(void) | ?Update@mmCompReplay@@UAEXXZ
    0x59ED50 | public: void __thiscall mmCompReplay::SetSubwidgetGeometry(void) | ?SetSubwidgetGeometry@mmCompReplay@@QAEXXZ
    0x59ED70 | public: void __thiscall mmCompReplay::SetTitleGeometry(void) | ?SetTitleGeometry@mmCompReplay@@QAEXXZ
    0x59ED90 | public: virtual void __thiscall mmCompReplay::SetPosition(class mmTextNode *,int,float) | ?SetPosition@mmCompReplay@@UAEXPAVmmTextNode@@HM@Z
    0x59EDD0 | public: virtual void __thiscall mmCompReplay::Highlight(class mmTextNode *,int) | ?Highlight@mmCompReplay@@UAEXPAVmmTextNode@@H@Z
    0x59EDF0 | public: virtual void __thiscall mmCompReplay::Box(int,class mmTextNode *,int) | ?Box@mmCompReplay@@UAEXHPAVmmTextNode@@H@Z
    0x59EE20 | public: virtual void __thiscall mmCompReplay::SetGeometry(float,float,float,float) | ?SetGeometry@mmCompReplay@@UAEXMMMM@Z
    0x59EE50 | public: virtual void __thiscall mmCompReplay::Cull(void) | ?Cull@mmCompReplay@@UAEXXZ
    0x59EE60 | public: virtual void * __thiscall mmCompReplay::`scalar deleting destructor'(unsigned int) | ??_GmmCompReplay@@UAEPAXI@Z
    0x5B8894 | const mmCompReplay::`vftable' | ??_7mmCompReplay@@6B@
*/

class mmCompReplay : public mmCompBase
{
    // const mmCompReplay::`vftable' @ 0x5B8894

public:
    // 0x59EC50 | ??0mmCompReplay@@QAE@XZ
    mmCompReplay();

    // 0x4FACC0 | ??_EmmCompReplay@@UAEPAXI@Z
    // 0x59EC70 | ??1mmCompReplay@@UAE@XZ
    // 0x59EE60 | ??_GmmCompReplay@@UAEPAXI@Z
    ~mmCompReplay() override;

    // 0x59EDF0 | ?Box@mmCompReplay@@UAEXHPAVmmTextNode@@H@Z
    void Box(i32 arg1, class mmTextNode* arg2, i32 arg3) override;

    // 0x59EE50 | ?Cull@mmCompReplay@@UAEXXZ
    void Cull() override;

    // 0x59EDD0 | ?Highlight@mmCompReplay@@UAEXPAVmmTextNode@@H@Z
    void Highlight(class mmTextNode* arg1, i32 arg2) override;

    // 0x59ECD0 | ?Init@mmCompReplay@@QAEXPAD@Z
    void Init(char* arg1);

    // 0x59ECF0 | ?InitTitle@mmCompReplay@@QAEXMMMMPAULocString@@@Z
    void InitTitle(f32 arg1, f32 arg2, f32 arg3, f32 arg4, struct LocString* arg5);

    // 0x59ED30 | ?Reset@mmCompReplay@@UAEXXZ
    void Reset() override;

    // 0x59EE20 | ?SetGeometry@mmCompReplay@@UAEXMMMM@Z
    void SetGeometry(f32 arg1, f32 arg2, f32 arg3, f32 arg4) override;

    // 0x59ED90 | ?SetPosition@mmCompReplay@@UAEXPAVmmTextNode@@HM@Z
    void SetPosition(class mmTextNode* arg1, i32 arg2, f32 arg3) override;

    // 0x59ED50 | ?SetSubwidgetGeometry@mmCompReplay@@QAEXXZ
    void SetSubwidgetGeometry();

    // 0x59ED70 | ?SetTitleGeometry@mmCompReplay@@QAEXXZ
    void SetTitleGeometry();

    // 0x59ED40 | ?Update@mmCompReplay@@UAEXXZ
    void Update() override;
};

check_size(mmCompReplay, 0x4C);