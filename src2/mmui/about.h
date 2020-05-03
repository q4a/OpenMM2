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

#include "mmwidget/menu.h"

/*
    mmui:about

    0x505850 | void __cdecl GetMidtownRegString(char *,int,char *,char *) | ?GetMidtownRegString@@YAXPADH00@Z
    0x5058D0 | public: __thiscall AboutMenu::AboutMenu(int) | ??0AboutMenu@@QAE@H@Z
    0x505AB0 | public: virtual __thiscall AboutMenu::~AboutMenu(void) | ??1AboutMenu@@UAE@XZ
    0x505AC0 | public: virtual void __thiscall AboutMenu::PreSetup(void) | ?PreSetup@AboutMenu@@UAEXXZ
    0x505AE0 | public: virtual void __thiscall AboutMenu::Update(void) | ?Update@AboutMenu@@UAEXXZ
    0x505B50 | public: virtual void __thiscall AboutMenu::Cull(void) | ?Cull@AboutMenu@@UAEXXZ
    public: virtual void * __thiscall AboutMenu::`vector deleting destructor'(unsigned int) | ??_EAboutMenu@@UAEPAXI@Z
    0x505C00 | public: virtual void * __thiscall AboutMenu::`scalar deleting destructor'(unsigned int) | ??_GAboutMenu@@UAEPAXI@Z
    0x5B4584 | const AboutMenu::`vftable' | ??_7AboutMenu@@6B@
*/

// 0x505850 | ?GetMidtownRegString@@YAXPADH00@Z
void GetMidtownRegString(char* arg1, i32 arg2, char* arg3, char* arg4);

class AboutMenu : public UIMenu
{
    // const AboutMenu::`vftable' @ 0x5B4584

public:
    // 0x5058D0 | ??0AboutMenu@@QAE@H@Z
    AboutMenu(i32 arg1);

    // 0x505C00 | ??_GAboutMenu@@UAEPAXI@Z
    // 0x505AB0 | ??1AboutMenu@@UAE@XZ
    ~AboutMenu() override;

    // 0x505B50 | ?Cull@AboutMenu@@UAEXXZ
    void Cull() override;

    // 0x505AC0 | ?PreSetup@AboutMenu@@UAEXXZ
    void PreSetup() override;

    // 0x505AE0 | ?Update@AboutMenu@@UAEXXZ
    void Update() override;
};

check_size(AboutMenu, 0xAC);
