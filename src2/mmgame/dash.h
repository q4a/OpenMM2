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

#include "node/linear.h"
#include "node/node.h"

/*
    mmgame:dash

    0x430610 | public: __thiscall mmDashView::mmDashView(void) | ??0mmDashView@@QAE@XZ
    0x4307B0 | public: virtual __thiscall mmDashView::~mmDashView(void) | ??1mmDashView@@UAE@XZ
    0x430890 | public: void __thiscall mmDashView::Init(char *,class mmPlayer *) | ?Init@mmDashView@@QAEXPADPAVmmPlayer@@@Z
    0x430A90 | private: void __thiscall mmDashView::LoadPkg(char *) | ?LoadPkg@mmDashView@@AAEXPAD@Z
    0x430C30 | private: void __thiscall mmDashView::LoadPivotInfo(char *) | ?LoadPivotInfo@mmDashView@@AAEXPAD@Z
    0x430D90 | public: virtual void __thiscall mmDashView::Reset(void) | ?Reset@mmDashView@@UAEXXZ
    0x430DA0 | public: virtual void __thiscall mmDashView::BeforeSave(void) | ?BeforeSave@mmDashView@@UAEXXZ
    0x430E00 | public: virtual void __thiscall mmDashView::AfterLoad(void) | ?AfterLoad@mmDashView@@UAEXXZ
    0x430E60 | public: void __thiscall mmDashView::ActivateUntilTransitionIsOver(void) | ?ActivateUntilTransitionIsOver@mmDashView@@QAEXXZ
    0x430E80 | public: void __thiscall mmDashView::Activate(void) | ?Activate@mmDashView@@QAEXXZ
    0x430EA0 | public: void __thiscall mmDashView::Deactivate(void) | ?Deactivate@mmDashView@@QAEXXZ
    0x430EC0 | public: void __thiscall mmDashView::TempDeactivate(void) | ?TempDeactivate@mmDashView@@QAEXXZ
    0x430ED0 | public: virtual void __thiscall mmDashView::Update(void) | ?Update@mmDashView@@UAEXXZ
    0x430FB0 | public: virtual void __thiscall mmDashView::Cull(void) | ?Cull@mmDashView@@UAEXXZ
    public: void __thiscall mmDashView::AddWidgets(class bkBank *) | ?AddWidgets@mmDashView@@QAEXPAVbkBank@@@Z
    0x4315D0 | private: virtual void __thiscall mmDashView::FileIO(class datParser &) | ?FileIO@mmDashView@@EAEXAAVdatParser@@@Z
    0x4317B0 | public: __thiscall mmExternalView::mmExternalView(void) | ??0mmExternalView@@QAE@XZ
    0x431840 | public: void __thiscall mmExternalView::Init(class mmPlayer *) | ?Init@mmExternalView@@QAEXPAVmmPlayer@@@Z
    0x431880 | public: virtual void __thiscall mmExternalView::ResChange(int,int) | ?ResChange@mmExternalView@@UAEXHH@Z
    0x4319D0 | public: virtual void __thiscall mmExternalView::Reset(void) | ?Reset@mmExternalView@@UAEXXZ
    0x4319E0 | public: virtual void __thiscall mmExternalView::Update(void) | ?Update@mmExternalView@@UAEXXZ
    0x4319F0 | public: virtual void __thiscall mmExternalView::Cull(void) | ?Cull@mmExternalView@@UAEXXZ
    public: void __thiscall mmExternalView::AddWidgets(class bkBank *) | ?AddWidgets@mmExternalView@@QAEXPAVbkBank@@@Z
    0x431B50 | public: virtual void * __thiscall mmDashView::`scalar deleting destructor'(unsigned int) | ??_GmmDashView@@UAEPAXI@Z
    public: virtual void * __thiscall mmDashView::`vector deleting destructor'(unsigned int) | ??_EmmDashView@@UAEPAXI@Z
    0x431B80 | public: virtual __thiscall asLinearCS::~asLinearCS(void) | ??1asLinearCS@@UAE@XZ
    0x431B90 | public: virtual __thiscall RadialGauge::~RadialGauge(void) | ??1RadialGauge@@UAE@XZ
    0x431BE0 | public: virtual void * __thiscall mmExternalView::`scalar deleting destructor'(unsigned int) | ??_GmmExternalView@@UAEPAXI@Z
    public: virtual void * __thiscall mmExternalView::`vector deleting destructor'(unsigned int) | ??_EmmExternalView@@UAEPAXI@Z
    0x431C10 | public: __thiscall mmSlidingGauge::~mmSlidingGauge(void) | ??1mmSlidingGauge@@QAE@XZ
    private: void __thiscall gfxRenderState::CheckSet(bool &,bool) | ?CheckSet@gfxRenderState@@AAEXAA_N_N@Z
    0x431C20 | public: virtual char * __thiscall mmExternalView::GetClassNameA(void) | ?GetClassNameA@mmExternalView@@UAEPADXZ
    0x431C30 | public: virtual char * __thiscall mmDashView::GetClassNameA(void) | ?GetClassNameA@mmDashView@@UAEPADXZ
    0x5B0D78 | const mmDashView::`vftable' | ??_7mmDashView@@6B@
    0x5B0DB0 | const mmExternalView::`vftable' | ??_7mmExternalView@@6B@
*/

class mmExternalView : public asNode
{
    // const mmExternalView::`vftable' @ 0x5B0DB0

public:
    // 0x4317B0 | ??0mmExternalView@@QAE@XZ
    mmExternalView();

    // 0x431BE0 | ??_GmmExternalView@@UAEPAXI@Z
    // 0x42EA80 | ??1mmExternalView@@UAE@XZ
    ~mmExternalView() override;

    // 0x4319F0 | ?Cull@mmExternalView@@UAEXXZ
    void Cull() override;

    // 0x431840 | ?Init@mmExternalView@@QAEXPAVmmPlayer@@@Z
    void Init(class mmPlayer* arg1);

    // 0x431880 | ?ResChange@mmExternalView@@UAEXHH@Z
    void ResChange(i32 arg1, i32 arg2) override;

    // 0x4319D0 | ?Reset@mmExternalView@@UAEXXZ
    void Reset() override;

    // 0x4319E0 | ?Update@mmExternalView@@UAEXXZ
    void Update() override;

    // 0x431C20 | ?GetClassNameA@mmExternalView@@UAEPADXZ
    virtual char* GetClassNameA();
};

check_size(mmExternalView, 0x0);

class mmDashView : public asLinearCS
{
    // const mmDashView::`vftable' @ 0x5B0D78

public:
    // 0x430610 | ??0mmDashView@@QAE@XZ
    mmDashView();

    // 0x431B50 | ??_GmmDashView@@UAEPAXI@Z
    // 0x4307B0 | ??1mmDashView@@UAE@XZ
    ~mmDashView() override;

    // 0x430E80 | ?Activate@mmDashView@@QAEXXZ
    void Activate();

    // 0x430E60 | ?ActivateUntilTransitionIsOver@mmDashView@@QAEXXZ
    void ActivateUntilTransitionIsOver();

    // 0x430E00 | ?AfterLoad@mmDashView@@UAEXXZ
    void AfterLoad() override;

    // 0x430DA0 | ?BeforeSave@mmDashView@@UAEXXZ
    void BeforeSave() override;

    // 0x430FB0 | ?Cull@mmDashView@@UAEXXZ
    void Cull() override;

    // 0x430EA0 | ?Deactivate@mmDashView@@QAEXXZ
    void Deactivate();

    // 0x430890 | ?Init@mmDashView@@QAEXPADPAVmmPlayer@@@Z
    void Init(char* arg1, class mmPlayer* arg2);

    // 0x430D90 | ?Reset@mmDashView@@UAEXXZ
    void Reset() override;

    // 0x430EC0 | ?TempDeactivate@mmDashView@@QAEXXZ
    void TempDeactivate();

    // 0x430ED0 | ?Update@mmDashView@@UAEXXZ
    void Update() override;

    // 0x431C30 | ?GetClassNameA@mmDashView@@UAEPADXZ
    virtual char* GetClassNameA();

private:
    // 0x4315D0 | ?FileIO@mmDashView@@EAEXAAVdatParser@@@Z
    void FileIO(class datParser& arg1) override;

    // 0x430C30 | ?LoadPivotInfo@mmDashView@@AAEXPAD@Z
    void LoadPivotInfo(char* arg1);

    // 0x430A90 | ?LoadPkg@mmDashView@@AAEXPAD@Z
    void LoadPkg(char* arg1);
};

check_size(mmDashView, 0x0);
