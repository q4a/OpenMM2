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
    mmwidget:vswidget

    0x4F27D0 | public: __thiscall VSWidget::VSWidget(void) | ??0VSWidget@@QAE@XZ
    0x4F2860 | public: virtual __thiscall VSWidget::~VSWidget(void) | ??1VSWidget@@UAE@XZ
    0x4F28F0 | public: void __thiscall VSWidget::Init(float,float,float,float,int *,class datCallback,int) | ?Init@VSWidget@@QAEXMMMMPAHVdatCallback@@H@Z
    0x4F2950 | public: void __thiscall VSWidget::LoadBitmap(void) | ?LoadBitmap@VSWidget@@QAEXXZ
    0x4F2A90 | public: void __thiscall VSWidget::CalcTroughRatio(float) | ?CalcTroughRatio@VSWidget@@QAEXM@Z
    0x4F2B00 | public: void __thiscall VSWidget::SetHotSpots(void) | ?SetHotSpots@VSWidget@@QAEXXZ
    0x4F2B70 | public: void __thiscall VSWidget::SyncData(void) | ?SyncData@VSWidget@@QAEXXZ
    0x4F2BB0 | public: float __thiscall VSWidget::Inc(void) | ?Inc@VSWidget@@QAEMXZ
    0x4F2C00 | public: float __thiscall VSWidget::Dec(void) | ?Dec@VSWidget@@QAEMXZ
    0x4F2C60 | public: void __thiscall VSWidget::SetStep(int,float) | ?SetStep@VSWidget@@QAEXHM@Z
    0x4F2CD0 | public: void __thiscall VSWidget::SetTrough(float) | ?SetTrough@VSWidget@@QAEXM@Z
    0x4F2D60 | public: virtual void __thiscall VSWidget::Update(void) | ?Update@VSWidget@@UAEXXZ
    0x4F2D90 | public: void __thiscall VSWidget::Switch(int,float,float) | ?Switch@VSWidget@@QAEXHMM@Z
    0x4F2DE0 | public: int __thiscall VSWidget::Action(union eqEvent,float,float,int) | ?Action@VSWidget@@QAEHTeqEvent@@MMH@Z
    0x4F2EA0 | public: void __thiscall VSWidget::EvalMouseXY(float,float,int) | ?EvalMouseXY@VSWidget@@QAEXMMH@Z
    0x4F3020 | public: virtual void __thiscall VSWidget::Cull(void) | ?Cull@VSWidget@@UAEXXZ
    0x4F3190 | public: virtual void * __thiscall VSWidget::`scalar deleting destructor'(unsigned int) | ??_GVSWidget@@UAEPAXI@Z
    public: virtual void * __thiscall VSWidget::`vector deleting destructor'(unsigned int) | ??_EVSWidget@@UAEPAXI@Z
    0x5B3C04 | const VSWidget::`vftable' | ??_7VSWidget@@6B@
*/

struct VSWidget : asNode
{
public:
    // VSWidget::`vftable' @ 0x5B3C04

    // 0x4F27D0 | ??0VSWidget@@QAE@XZ
    inline VSWidget()
    {
        stub<member_func_t<void, VSWidget>>(0x4F27D0, this);
    }

    // 0x4F28F0 | ?Init@VSWidget@@QAEXMMMMPAHVdatCallback@@H@Z
    inline void Init(f32 arg1, f32 arg2, f32 arg3, f32 arg4, i32* arg5, class datCallback arg6, i32 arg7)
    {
        return stub<member_func_t<void, VSWidget, f32, f32, f32, f32, i32*, class datCallback, i32>>(
            0x4F28F0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x4F2950 | ?LoadBitmap@VSWidget@@QAEXXZ
    inline void LoadBitmap()
    {
        return stub<member_func_t<void, VSWidget>>(0x4F2950, this);
    }

    // 0x4F2A90 | ?CalcTroughRatio@VSWidget@@QAEXM@Z
    inline void CalcTroughRatio(f32 arg1)
    {
        return stub<member_func_t<void, VSWidget, f32>>(0x4F2A90, this, arg1);
    }

    // 0x4F2B00 | ?SetHotSpots@VSWidget@@QAEXXZ
    inline void SetHotSpots()
    {
        return stub<member_func_t<void, VSWidget>>(0x4F2B00, this);
    }

    // 0x4F2B70 | ?SyncData@VSWidget@@QAEXXZ
    inline void SyncData()
    {
        return stub<member_func_t<void, VSWidget>>(0x4F2B70, this);
    }

    // 0x4F2BB0 | ?Inc@VSWidget@@QAEMXZ
    inline f32 Inc()
    {
        return stub<member_func_t<f32, VSWidget>>(0x4F2BB0, this);
    }

    // 0x4F2C00 | ?Dec@VSWidget@@QAEMXZ
    inline f32 Dec()
    {
        return stub<member_func_t<f32, VSWidget>>(0x4F2C00, this);
    }

    // 0x4F2C60 | ?SetStep@VSWidget@@QAEXHM@Z
    inline void SetStep(i32 arg1, f32 arg2)
    {
        return stub<member_func_t<void, VSWidget, i32, f32>>(0x4F2C60, this, arg1, arg2);
    }

    // 0x4F2CD0 | ?SetTrough@VSWidget@@QAEXM@Z
    inline void SetTrough(f32 arg1)
    {
        return stub<member_func_t<void, VSWidget, f32>>(0x4F2CD0, this, arg1);
    }

    // 0x4F2D90 | ?Switch@VSWidget@@QAEXHMM@Z
    inline void Switch(i32 arg1, f32 arg2, f32 arg3)
    {
        return stub<member_func_t<void, VSWidget, i32, f32, f32>>(0x4F2D90, this, arg1, arg2, arg3);
    }

    // 0x4F2DE0 | ?Action@VSWidget@@QAEHTeqEvent@@MMH@Z
    inline i32 Action(union eqEvent arg1, f32 arg2, f32 arg3, i32 arg4)
    {
        return stub<member_func_t<i32, VSWidget, union eqEvent, f32, f32, i32>>(0x4F2DE0, this, arg1, arg2, arg3, arg4);
    }

    // 0x4F2EA0 | ?EvalMouseXY@VSWidget@@QAEXMMH@Z
    inline void EvalMouseXY(f32 arg1, f32 arg2, i32 arg3)
    {
        return stub<member_func_t<void, VSWidget, f32, f32, i32>>(0x4F2EA0, this, arg1, arg2, arg3);
    }

    // 0x4F2860 | ??1VSWidget@@UAE@XZ
    inline ~VSWidget() override
    {
        stub<member_func_t<void, VSWidget>>(0x4F2860, this);
    }

    // 0x4F3020 | ?Cull@VSWidget@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, VSWidget>>(0x4F3020, this);
    }

    // 0x4F2D60 | ?Update@VSWidget@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, VSWidget>>(0x4F2D60, this);
    }
};