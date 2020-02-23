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
    gizmo:pathspline

    0x57A050 | public: __thiscall gizPathspline::gizPathspline(void) | ??0gizPathspline@@QAE@XZ
    0x57A080 | public: __thiscall gizPathspline::~gizPathspline(void) | ??1gizPathspline@@QAE@XZ
    0x57A090 | public: void __thiscall gizPathspline::Reset(void) | ?Reset@gizPathspline@@QAEXXZ
    0x57A0E0 | public: void __thiscall gizPathspline::Init(class dgPath *,float) | ?Init@gizPathspline@@QAEXPAVdgPath@@M@Z
    0x57A100 | protected: void __thiscall gizPathspline::Compute(class Vector3 &,class Vector3 &,class Vector3 &,class Vector3 &) | ?Compute@gizPathspline@@IAEXAAVVector3@@000@Z
    0x57A370 | protected: void __thiscall gizPathspline::Solve(class Vector3 &,class Vector3 &,float) | ?Solve@gizPathspline@@IAEXAAVVector3@@0M@Z
    0x57A410 | public: void __thiscall gizPathspline::Update(class Vector3 &,class Vector3 &,float) | ?Update@gizPathspline@@QAEXAAVVector3@@0M@Z
    0x57A440 | public: void __thiscall gizPathspline::UpdateRatio(class Vector3 &,class Vector3 &,float) | ?UpdateRatio@gizPathspline@@QAEXAAVVector3@@0M@Z
    0x57A520 | public: float __thiscall gizPathspline::GetCurrRatio(void) | ?GetCurrRatio@gizPathspline@@QAEMXZ
    0x57A530 | protected: void __thiscall gizPathspline::ComputePath(int,int,int) | ?ComputePath@gizPathspline@@IAEXHHH@Z
    0x57A6D0 | protected: void __thiscall gizPathspline::IncrementPath(void) | ?IncrementPath@gizPathspline@@IAEXXZ
    0x57A710 | protected: void __thiscall gizPathspline::DecrementPath(void) | ?DecrementPath@gizPathspline@@IAEXXZ
    0x57A750 | public: int __thiscall gizPathspline::GetNumVertex(void) | ?GetNumVertex@gizPathspline@@QAEHXZ
    0x57A760 | public: void __thiscall gizPathspline::SetSpeed(float) | ?SetSpeed@gizPathspline@@QAEXM@Z
    0x57A780 | public: class Vector3 & __thiscall gizPathspline::GetVertex(int) | ?GetVertex@gizPathspline@@QAEAAVVector3@@H@Z
    class Matrix44 Hermite | ?Hermite@@3VMatrix44@@A
*/

struct gizPathspline
{
public:
    // 0x57A050 | ??0gizPathspline@@QAE@XZ
    inline gizPathspline()
    {
        stub<member_func_t<void, gizPathspline>>(0x57A050, this);
    }

    // 0x57A080 | ??1gizPathspline@@QAE@XZ
    inline ~gizPathspline()
    {
        stub<member_func_t<void, gizPathspline>>(0x57A080, this);
    }

    // 0x57A090 | ?Reset@gizPathspline@@QAEXXZ
    inline void Reset()
    {
        return stub<member_func_t<void, gizPathspline>>(0x57A090, this);
    }

    // 0x57A0E0 | ?Init@gizPathspline@@QAEXPAVdgPath@@M@Z
    inline void Init(class dgPath* arg1, f32 arg2)
    {
        return stub<member_func_t<void, gizPathspline, class dgPath*, f32>>(0x57A0E0, this, arg1, arg2);
    }

    // 0x57A100 | ?Compute@gizPathspline@@IAEXAAVVector3@@000@Z
    inline void Compute(class Vector3& arg1, class Vector3& arg2, class Vector3& arg3, class Vector3& arg4)
    {
        return stub<member_func_t<void, gizPathspline, class Vector3&, class Vector3&, class Vector3&, class Vector3&>>(
            0x57A100, this, arg1, arg2, arg3, arg4);
    }

    // 0x57A370 | ?Solve@gizPathspline@@IAEXAAVVector3@@0M@Z
    inline void Solve(class Vector3& arg1, class Vector3& arg2, f32 arg3)
    {
        return stub<member_func_t<void, gizPathspline, class Vector3&, class Vector3&, f32>>(
            0x57A370, this, arg1, arg2, arg3);
    }

    // 0x57A410 | ?Update@gizPathspline@@QAEXAAVVector3@@0M@Z
    inline void Update(class Vector3& arg1, class Vector3& arg2, f32 arg3)
    {
        return stub<member_func_t<void, gizPathspline, class Vector3&, class Vector3&, f32>>(
            0x57A410, this, arg1, arg2, arg3);
    }

    // 0x57A440 | ?UpdateRatio@gizPathspline@@QAEXAAVVector3@@0M@Z
    inline void UpdateRatio(class Vector3& arg1, class Vector3& arg2, f32 arg3)
    {
        return stub<member_func_t<void, gizPathspline, class Vector3&, class Vector3&, f32>>(
            0x57A440, this, arg1, arg2, arg3);
    }

    // 0x57A520 | ?GetCurrRatio@gizPathspline@@QAEMXZ
    inline f32 GetCurrRatio()
    {
        return stub<member_func_t<f32, gizPathspline>>(0x57A520, this);
    }

    // 0x57A530 | ?ComputePath@gizPathspline@@IAEXHHH@Z
    inline void ComputePath(i32 arg1, i32 arg2, i32 arg3)
    {
        return stub<member_func_t<void, gizPathspline, i32, i32, i32>>(0x57A530, this, arg1, arg2, arg3);
    }

    // 0x57A6D0 | ?IncrementPath@gizPathspline@@IAEXXZ
    inline void IncrementPath()
    {
        return stub<member_func_t<void, gizPathspline>>(0x57A6D0, this);
    }

    // 0x57A710 | ?DecrementPath@gizPathspline@@IAEXXZ
    inline void DecrementPath()
    {
        return stub<member_func_t<void, gizPathspline>>(0x57A710, this);
    }

    // 0x57A750 | ?GetNumVertex@gizPathspline@@QAEHXZ
    inline i32 GetNumVertex()
    {
        return stub<member_func_t<i32, gizPathspline>>(0x57A750, this);
    }

    // 0x57A760 | ?SetSpeed@gizPathspline@@QAEXM@Z
    inline void SetSpeed(f32 arg1)
    {
        return stub<member_func_t<void, gizPathspline, f32>>(0x57A760, this, arg1);
    }

    // 0x57A780 | ?GetVertex@gizPathspline@@QAEAAVVector3@@H@Z
    inline class Vector3& GetVertex(i32 arg1)
    {
        return stub<member_func_t<class Vector3&, gizPathspline, i32>>(0x57A780, this, arg1);
    }
};