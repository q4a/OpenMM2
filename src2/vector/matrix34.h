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
    vector:matrix34

    0x4BBF20 | public: void __thiscall Matrix34::Identity(void) | ?Identity@Matrix34@@QAEXXZ
    0x4BBF50 | public: void __thiscall Matrix34::Identity3x3(void) | ?Identity3x3@Matrix34@@QAEXXZ
    0x4BBF80 | public: void __thiscall Matrix34::Zero(void) | ?Zero@Matrix34@@QAEXXZ
    0x4BBFB0 | public: void __thiscall Matrix34::Set(class Matrix34 const &) | ?Set@Matrix34@@QAEXABV1@@Z
    0x4BC000 | public: void __thiscall Matrix34::Add(class Matrix34 const &) | ?Add@Matrix34@@QAEXABV1@@Z
    0x4BC080 | public: void __thiscall Matrix34::Add(class Matrix34 const &,class Matrix34 const &) | ?Add@Matrix34@@QAEXABV1@0@Z
    0x4BC100 | public: void __thiscall Matrix34::Add3x3(class Matrix34 const &) | ?Add3x3@Matrix34@@QAEXABV1@@Z
    0x4BC160 | public: void __thiscall Matrix34::Add3x3(class Matrix34 const &,class Matrix34 const &) | ?Add3x3@Matrix34@@QAEXABV1@0@Z
    0x4BC1C0 | public: void __thiscall Matrix34::Subtract(class Matrix34 const &) | ?Subtract@Matrix34@@QAEXABV1@@Z
    0x4BC240 | public: void __thiscall Matrix34::Subtract(class Matrix34 const &,class Matrix34 const &) | ?Subtract@Matrix34@@QAEXABV1@0@Z
    0x4BC2C0 | public: void __thiscall Matrix34::Subtract3x3(class Matrix34 const &) | ?Subtract3x3@Matrix34@@QAEXABV1@@Z
    0x4BC320 | public: void __thiscall Matrix34::Subtract3x3(class Matrix34 const &,class Matrix34 const &) | ?Subtract3x3@Matrix34@@QAEXABV1@0@Z
    0x4BC380 | public: void __thiscall Matrix34::AddScaled(class Matrix34 const &,float) | ?AddScaled@Matrix34@@QAEXABV1@M@Z
    0x4BC400 | public: void __thiscall Matrix34::Dot(class Matrix34 const &) | ?Dot@Matrix34@@QAEXABV1@@Z
    0x4BC580 | public: void __thiscall Matrix34::Dot(class Matrix34 const &,class Matrix34 const &) | ?Dot@Matrix34@@QAEXABV1@0@Z
    0x4BC6C0 | public: void __thiscall Matrix34::DotTranspose(class Matrix34 const &) | ?DotTranspose@Matrix34@@QAEXABV1@@Z
    0x4BC830 | public: void __thiscall Matrix34::DotTranspose(class Matrix34 const &,class Matrix34 const &) | ?DotTranspose@Matrix34@@QAEXABV1@0@Z
    0x4BC970 | public: void __thiscall Matrix34::Dot3x3(class Matrix34 const &) | ?Dot3x3@Matrix34@@QAEXABV1@@Z
    0x4BCA90 | public: void __thiscall Matrix34::Dot3x3(class Matrix34 const &,class Matrix34 const &) | ?Dot3x3@Matrix34@@QAEXABV1@0@Z
    0x4BCB80 | public: void __thiscall Matrix34::Dot3x3Transpose(class Matrix34 const &) | ?Dot3x3Transpose@Matrix34@@QAEXABV1@@Z
    0x4BCC80 | public: void __thiscall Matrix34::Dot3x3Transpose(class Matrix34 const &,class Matrix34 const &) | ?Dot3x3Transpose@Matrix34@@QAEXABV1@0@Z
    0x4BCD70 | public: void __thiscall Matrix34::Rotate(class Vector3 const &,float) | ?Rotate@Matrix34@@QAEXABVVector3@@M@Z
    0x4BCDA0 | public: void __thiscall Matrix34::RotateX(float) | ?RotateX@Matrix34@@QAEXM@Z
    0x4BCDD0 | public: void __thiscall Matrix34::RotateY(float) | ?RotateY@Matrix34@@QAEXM@Z
    0x4BCE00 | public: void __thiscall Matrix34::RotateZ(float) | ?RotateZ@Matrix34@@QAEXM@Z
    0x4BCE30 | public: void __thiscall Matrix34::RotateUnitAxis(class Vector3 const &,float) | ?RotateUnitAxis@Matrix34@@QAEXABVVector3@@M@Z
    0x4BCE60 | public: void __thiscall Matrix34::RotateFull(class Vector3 const &,float) | ?RotateFull@Matrix34@@QAEXABVVector3@@M@Z
    0x4BCEA0 | public: void __thiscall Matrix34::RotateFullX(float) | ?RotateFullX@Matrix34@@QAEXM@Z
    0x4BCEE0 | public: void __thiscall Matrix34::RotateFullY(float) | ?RotateFullY@Matrix34@@QAEXM@Z
    0x4BCF20 | public: void __thiscall Matrix34::RotateFullZ(float) | ?RotateFullZ@Matrix34@@QAEXM@Z
    0x4BCF60 | public: void __thiscall Matrix34::RotateFullUnitAxis(class Vector3 const &,float) | ?RotateFullUnitAxis@Matrix34@@QAEXABVVector3@@M@Z
    0x4BCFA0 | public: void __thiscall Matrix34::MakeRotate(class Vector3 const &,float) | ?MakeRotate@Matrix34@@QAEXABVVector3@@M@Z
    0x4BD100 | public: void __thiscall Matrix34::MakeRotateX(float) | ?MakeRotateX@Matrix34@@QAEXM@Z
    0x4BD140 | public: void __thiscall Matrix34::MakeRotateY(float) | ?MakeRotateY@Matrix34@@QAEXM@Z
    0x4BD180 | public: void __thiscall Matrix34::MakeRotateZ(float) | ?MakeRotateZ@Matrix34@@QAEXM@Z
    0x4BD1C0 | public: void __thiscall Matrix34::MakeRotateUnitAxis(class Vector3 const &,float) | ?MakeRotateUnitAxis@Matrix34@@QAEXABVVector3@@M@Z
    0x4BD290 | public: void __thiscall Matrix34::RotateTo(class Vector3 const &,class Vector3 const &) | ?RotateTo@Matrix34@@QAEXABVVector3@@0@Z
    0x4BD380 | public: void __thiscall Matrix34::RotateTo(class Vector3 const &,class Vector3 const &,float) | ?RotateTo@Matrix34@@QAEXABVVector3@@0M@Z
    0x4BD480 | public: class Vector3 __thiscall Matrix34::GetEulers(char const *) const | ?GetEulers@Matrix34@@QBE?AVVector3@@PBD@Z
    0x4BD6C0 | public: class Vector3 __thiscall Matrix34::GetEulers(void) const | ?GetEulers@Matrix34@@QBE?AVVector3@@XZ
    0x4BD710 | public: void __thiscall Matrix34::FromEulers(class Vector3 const &,char *) | ?FromEulers@Matrix34@@QAEXABVVector3@@PAD@Z
    0x4BD810 | public: void __thiscall Matrix34::FromEulersXYZ(class Vector3 const &) | ?FromEulersXYZ@Matrix34@@QAEXABVVector3@@@Z
    0x4BD920 | public: void __thiscall Matrix34::FromEulersXZY(class Vector3 const &) | ?FromEulersXZY@Matrix34@@QAEXABVVector3@@@Z
    0x4BDA30 | public: void __thiscall Matrix34::FromEulersYXZ(class Vector3 const &) | ?FromEulersYXZ@Matrix34@@QAEXABVVector3@@@Z
    0x4BDB50 | public: void __thiscall Matrix34::FromEulersYZX(class Vector3 const &) | ?FromEulersYZX@Matrix34@@QAEXABVVector3@@@Z
    0x4BDC60 | public: void __thiscall Matrix34::FromEulersZXY(class Vector3 const &) | ?FromEulersZXY@Matrix34@@QAEXABVVector3@@@Z
    0x4BDD70 | public: void __thiscall Matrix34::FromEulersZYX(class Vector3 const &) | ?FromEulersZYX@Matrix34@@QAEXABVVector3@@@Z
    0x4BDE80 | public: void __thiscall Matrix34::FromQuaternion(class Quaternion const &) | ?FromQuaternion@Matrix34@@QAEXABVQuaternion@@@Z
    0x4BDF40 | public: void __thiscall Matrix34::ToEulers(class Vector3 &,char *) const | ?ToEulers@Matrix34@@QBEXAAVVector3@@PAD@Z
    0x4BE040 | public: void __thiscall Matrix34::ToEulersXYZ(class Vector3 &) const | ?ToEulersXYZ@Matrix34@@QBEXAAVVector3@@@Z
    0x4BE110 | public: void __thiscall Matrix34::ToEulersXZY(class Vector3 &) const | ?ToEulersXZY@Matrix34@@QBEXAAVVector3@@@Z
    0x4BE1D0 | public: void __thiscall Matrix34::ToEulersYXZ(class Vector3 &) const | ?ToEulersYXZ@Matrix34@@QBEXAAVVector3@@@Z
    0x4BE2A0 | public: void __thiscall Matrix34::ToEulersYZX(class Vector3 &) const | ?ToEulersYZX@Matrix34@@QBEXAAVVector3@@@Z
    0x4BE360 | public: void __thiscall Matrix34::ToEulersZXY(class Vector3 &) const | ?ToEulersZXY@Matrix34@@QBEXAAVVector3@@@Z
    0x4BE430 | public: void __thiscall Matrix34::ToEulersZYX(class Vector3 &) const | ?ToEulersZYX@Matrix34@@QBEXAAVVector3@@@Z
    0x4BE500 | public: void __thiscall Matrix34::Scale(float) | ?Scale@Matrix34@@QAEXM@Z
    0x4BE560 | public: void __thiscall Matrix34::Scale(float,float,float) | ?Scale@Matrix34@@QAEXMMM@Z
    0x4BE5C0 | public: void __thiscall Matrix34::ScaleFull(float) | ?ScaleFull@Matrix34@@QAEXM@Z
    0x4BE640 | public: void __thiscall Matrix34::ScaleFull(float,float,float) | ?ScaleFull@Matrix34@@QAEXMMM@Z
    0x4BE6C0 | public: void __thiscall Matrix34::MakeScale(float) | ?MakeScale@Matrix34@@QAEXM@Z
    0x4BE6F0 | public: void __thiscall Matrix34::MakeScale(float,float,float) | ?MakeScale@Matrix34@@QAEXMMM@Z
    0x4BE720 | public: void __thiscall Matrix34::Inverse(void) | ?Inverse@Matrix34@@QAEXXZ
    0x4BE890 | public: void __thiscall Matrix34::Inverse(class Matrix34 const &) | ?Inverse@Matrix34@@QAEXABV1@@Z
    0x4BE8B0 | public: void __thiscall Matrix34::FastInverse(void) | ?FastInverse@Matrix34@@QAEXXZ
    0x4BE8E0 | public: void __thiscall Matrix34::FastInverse(class Matrix34 const &) | ?FastInverse@Matrix34@@QAEXABV1@@Z
    0x4BE990 | public: void __thiscall Matrix34::Transpose(void) | ?Transpose@Matrix34@@QAEXXZ
    0x4BE9C0 | public: void __thiscall Matrix34::Transpose(class Matrix34 const &) | ?Transpose@Matrix34@@QAEXABV1@@Z
    0x4BEA00 | public: void __thiscall Matrix34::Transpose3x4(void) | ?Transpose3x4@Matrix34@@QAEXXZ
    0x4BEA80 | public: void __thiscall Matrix34::Transpose3x4(class Matrix34 const &) | ?Transpose3x4@Matrix34@@QAEXABV1@@Z
    0x4BEB20 | public: void __thiscall Matrix34::LookAt(class Vector3 const &,class Vector3 const &) | ?LookAt@Matrix34@@QAEXABVVector3@@0@Z
    0x4BEC50 | public: void __thiscall Matrix34::PolarView(float,float,float,float) | ?PolarView@Matrix34@@QAEXMMMM@Z
    0x4BECA0 | public: void __thiscall Matrix34::GetPolar(class Vector4 *,class Vector3 *,float) const | ?GetPolar@Matrix34@@QBEXPAVVector4@@PAVVector3@@M@Z
    0x4BECE0 | public: void __thiscall Matrix34::GetLookAt(class Vector3 *,class Vector3 *,float) const | ?GetLookAt@Matrix34@@QBEXPAVVector3@@0M@Z
    0x4BED30 | public: void __thiscall Matrix34::Dot3x3CrossProdMtx(class Vector3 const &) | ?Dot3x3CrossProdMtx@Matrix34@@QAEXABVVector3@@@Z
    0x4BEDE0 | public: void __thiscall Matrix34::Dot3x3CrossProdTranspose(class Vector3 const &) | ?Dot3x3CrossProdTranspose@Matrix34@@QAEXABVVector3@@@Z
    0x4BEE90 | public: void __thiscall Matrix34::Normalize(void) | ?Normalize@Matrix34@@QAEXXZ
    0x4BF010 | public: float __thiscall Matrix34::Determinant3x3(void) const | ?Determinant3x3@Matrix34@@QBEMXZ
    0x4BF080 | public: void __thiscall Matrix34::Interpolate(class Matrix34 const &,class Matrix34 const &,float) | ?Interpolate@Matrix34@@QAEXABV1@0M@Z
    0x4BF150 | public: void __thiscall Matrix34::Print(char const *) const | ?Print@Matrix34@@QBEXPBD@Z
    0x4BF1F0 | public: class Vector3 __thiscall Matrix34::SolveSVD(class Vector3 const &) const | ?SolveSVD@Matrix34@@QBE?AVVector3@@ABV2@@Z
    0x4BFD60 | public: void __thiscall Matrix34::Transform4(class Vector3 const *,class Vector4 *,int) const | ?Transform4@Matrix34@@QBEXPBVVector3@@PAVVector4@@H@Z
    0x6A3AC8 | public: static class Matrix34 const Matrix34::I | ?I@Matrix34@@2V1@B
*/

class Matrix34
{
public:
    // 0x4BC000 | ?Add@Matrix34@@QAEXABV1@@Z
    void Add(class Matrix34 const& arg1);

    // 0x4BC080 | ?Add@Matrix34@@QAEXABV1@0@Z
    void Add(class Matrix34 const& arg1, class Matrix34 const& arg2);

    // 0x4BC100 | ?Add3x3@Matrix34@@QAEXABV1@@Z
    void Add3x3(class Matrix34 const& arg1);

    // 0x4BC160 | ?Add3x3@Matrix34@@QAEXABV1@0@Z
    void Add3x3(class Matrix34 const& arg1, class Matrix34 const& arg2);

    // 0x4BC380 | ?AddScaled@Matrix34@@QAEXABV1@M@Z
    void AddScaled(class Matrix34 const& arg1, f32 arg2);

    // 0x4BF010 | ?Determinant3x3@Matrix34@@QBEMXZ
    f32 Determinant3x3();

    // 0x4BC400 | ?Dot@Matrix34@@QAEXABV1@@Z
    void Dot(class Matrix34 const& arg1);

    // 0x4BC580 | ?Dot@Matrix34@@QAEXABV1@0@Z
    void Dot(class Matrix34 const& arg1, class Matrix34 const& arg2);

    // 0x4BC970 | ?Dot3x3@Matrix34@@QAEXABV1@@Z
    void Dot3x3(class Matrix34 const& arg1);

    // 0x4BCA90 | ?Dot3x3@Matrix34@@QAEXABV1@0@Z
    void Dot3x3(class Matrix34 const& arg1, class Matrix34 const& arg2);

    // 0x4BED30 | ?Dot3x3CrossProdMtx@Matrix34@@QAEXABVVector3@@@Z
    void Dot3x3CrossProdMtx(class Vector3 const& arg1);

    // 0x4BEDE0 | ?Dot3x3CrossProdTranspose@Matrix34@@QAEXABVVector3@@@Z
    void Dot3x3CrossProdTranspose(class Vector3 const& arg1);

    // 0x4BCB80 | ?Dot3x3Transpose@Matrix34@@QAEXABV1@@Z
    void Dot3x3Transpose(class Matrix34 const& arg1);

    // 0x4BCC80 | ?Dot3x3Transpose@Matrix34@@QAEXABV1@0@Z
    void Dot3x3Transpose(class Matrix34 const& arg1, class Matrix34 const& arg2);

    // 0x4BC6C0 | ?DotTranspose@Matrix34@@QAEXABV1@@Z
    void DotTranspose(class Matrix34 const& arg1);

    // 0x4BC830 | ?DotTranspose@Matrix34@@QAEXABV1@0@Z
    void DotTranspose(class Matrix34 const& arg1, class Matrix34 const& arg2);

    // 0x4BE8B0 | ?FastInverse@Matrix34@@QAEXXZ
    void FastInverse();

    // 0x4BE8E0 | ?FastInverse@Matrix34@@QAEXABV1@@Z
    void FastInverse(class Matrix34 const& arg1);

    // 0x4BD710 | ?FromEulers@Matrix34@@QAEXABVVector3@@PAD@Z
    void FromEulers(class Vector3 const& arg1, char* arg2);

    // 0x4BD810 | ?FromEulersXYZ@Matrix34@@QAEXABVVector3@@@Z
    void FromEulersXYZ(class Vector3 const& arg1);

    // 0x4BD920 | ?FromEulersXZY@Matrix34@@QAEXABVVector3@@@Z
    void FromEulersXZY(class Vector3 const& arg1);

    // 0x4BDA30 | ?FromEulersYXZ@Matrix34@@QAEXABVVector3@@@Z
    void FromEulersYXZ(class Vector3 const& arg1);

    // 0x4BDB50 | ?FromEulersYZX@Matrix34@@QAEXABVVector3@@@Z
    void FromEulersYZX(class Vector3 const& arg1);

    // 0x4BDC60 | ?FromEulersZXY@Matrix34@@QAEXABVVector3@@@Z
    void FromEulersZXY(class Vector3 const& arg1);

    // 0x4BDD70 | ?FromEulersZYX@Matrix34@@QAEXABVVector3@@@Z
    void FromEulersZYX(class Vector3 const& arg1);

    // 0x4BDE80 | ?FromQuaternion@Matrix34@@QAEXABVQuaternion@@@Z
    void FromQuaternion(class Quaternion const& arg1);

    // 0x4BD6C0 | ?GetEulers@Matrix34@@QBE?AVVector3@@XZ
    class Vector3 GetEulers();

    // 0x4BD480 | ?GetEulers@Matrix34@@QBE?AVVector3@@PBD@Z
    class Vector3 GetEulers(char const* arg1);

    // 0x4BECE0 | ?GetLookAt@Matrix34@@QBEXPAVVector3@@0M@Z
    void GetLookAt(class Vector3* arg1, class Vector3* arg2, f32 arg3);

    // 0x4BECA0 | ?GetPolar@Matrix34@@QBEXPAVVector4@@PAVVector3@@M@Z
    void GetPolar(class Vector4* arg1, class Vector3* arg2, f32 arg3);

    // 0x4BBF20 | ?Identity@Matrix34@@QAEXXZ
    void Identity();

    // 0x4BBF50 | ?Identity3x3@Matrix34@@QAEXXZ
    void Identity3x3();

    // 0x4BF080 | ?Interpolate@Matrix34@@QAEXABV1@0M@Z
    void Interpolate(class Matrix34 const& arg1, class Matrix34 const& arg2, f32 arg3);

    // 0x4BE720 | ?Inverse@Matrix34@@QAEXXZ
    void Inverse();

    // 0x4BE890 | ?Inverse@Matrix34@@QAEXABV1@@Z
    void Inverse(class Matrix34 const& arg1);

    // 0x4BEB20 | ?LookAt@Matrix34@@QAEXABVVector3@@0@Z
    void LookAt(class Vector3 const& arg1, class Vector3 const& arg2);

    // 0x4BCFA0 | ?MakeRotate@Matrix34@@QAEXABVVector3@@M@Z
    void MakeRotate(class Vector3 const& arg1, f32 arg2);

    // 0x4BD1C0 | ?MakeRotateUnitAxis@Matrix34@@QAEXABVVector3@@M@Z
    void MakeRotateUnitAxis(class Vector3 const& arg1, f32 arg2);

    // 0x4BD100 | ?MakeRotateX@Matrix34@@QAEXM@Z
    void MakeRotateX(f32 arg1);

    // 0x4BD140 | ?MakeRotateY@Matrix34@@QAEXM@Z
    void MakeRotateY(f32 arg1);

    // 0x4BD180 | ?MakeRotateZ@Matrix34@@QAEXM@Z
    void MakeRotateZ(f32 arg1);

    // 0x4BE6C0 | ?MakeScale@Matrix34@@QAEXM@Z
    void MakeScale(f32 arg1);

    // 0x4BE6F0 | ?MakeScale@Matrix34@@QAEXMMM@Z
    void MakeScale(f32 arg1, f32 arg2, f32 arg3);

    // 0x4BEE90 | ?Normalize@Matrix34@@QAEXXZ
    void Normalize();

    // 0x4BEC50 | ?PolarView@Matrix34@@QAEXMMMM@Z
    void PolarView(f32 arg1, f32 arg2, f32 arg3, f32 arg4);

    // 0x4BF150 | ?Print@Matrix34@@QBEXPBD@Z
    void Print(char const* arg1);

    // 0x4BCD70 | ?Rotate@Matrix34@@QAEXABVVector3@@M@Z
    void Rotate(class Vector3 const& arg1, f32 arg2);

    // 0x4BCE60 | ?RotateFull@Matrix34@@QAEXABVVector3@@M@Z
    void RotateFull(class Vector3 const& arg1, f32 arg2);

    // 0x4BCF60 | ?RotateFullUnitAxis@Matrix34@@QAEXABVVector3@@M@Z
    void RotateFullUnitAxis(class Vector3 const& arg1, f32 arg2);

    // 0x4BCEA0 | ?RotateFullX@Matrix34@@QAEXM@Z
    void RotateFullX(f32 arg1);

    // 0x4BCEE0 | ?RotateFullY@Matrix34@@QAEXM@Z
    void RotateFullY(f32 arg1);

    // 0x4BCF20 | ?RotateFullZ@Matrix34@@QAEXM@Z
    void RotateFullZ(f32 arg1);

    // 0x4BD290 | ?RotateTo@Matrix34@@QAEXABVVector3@@0@Z
    void RotateTo(class Vector3 const& arg1, class Vector3 const& arg2);

    // 0x4BD380 | ?RotateTo@Matrix34@@QAEXABVVector3@@0M@Z
    void RotateTo(class Vector3 const& arg1, class Vector3 const& arg2, f32 arg3);

    // 0x4BCE30 | ?RotateUnitAxis@Matrix34@@QAEXABVVector3@@M@Z
    void RotateUnitAxis(class Vector3 const& arg1, f32 arg2);

    // 0x4BCDA0 | ?RotateX@Matrix34@@QAEXM@Z
    void RotateX(f32 arg1);

    // 0x4BCDD0 | ?RotateY@Matrix34@@QAEXM@Z
    void RotateY(f32 arg1);

    // 0x4BCE00 | ?RotateZ@Matrix34@@QAEXM@Z
    void RotateZ(f32 arg1);

    // 0x4BE500 | ?Scale@Matrix34@@QAEXM@Z
    void Scale(f32 arg1);

    // 0x4BE560 | ?Scale@Matrix34@@QAEXMMM@Z
    void Scale(f32 arg1, f32 arg2, f32 arg3);

    // 0x4BE5C0 | ?ScaleFull@Matrix34@@QAEXM@Z
    void ScaleFull(f32 arg1);

    // 0x4BE640 | ?ScaleFull@Matrix34@@QAEXMMM@Z
    void ScaleFull(f32 arg1, f32 arg2, f32 arg3);

    // 0x4BBFB0 | ?Set@Matrix34@@QAEXABV1@@Z
    void Set(class Matrix34 const& arg1);

    // 0x4BF1F0 | ?SolveSVD@Matrix34@@QBE?AVVector3@@ABV2@@Z
    class Vector3 SolveSVD(class Vector3 const& arg1);

    // 0x4BC1C0 | ?Subtract@Matrix34@@QAEXABV1@@Z
    void Subtract(class Matrix34 const& arg1);

    // 0x4BC240 | ?Subtract@Matrix34@@QAEXABV1@0@Z
    void Subtract(class Matrix34 const& arg1, class Matrix34 const& arg2);

    // 0x4BC2C0 | ?Subtract3x3@Matrix34@@QAEXABV1@@Z
    void Subtract3x3(class Matrix34 const& arg1);

    // 0x4BC320 | ?Subtract3x3@Matrix34@@QAEXABV1@0@Z
    void Subtract3x3(class Matrix34 const& arg1, class Matrix34 const& arg2);

    // 0x4BDF40 | ?ToEulers@Matrix34@@QBEXAAVVector3@@PAD@Z
    void ToEulers(class Vector3& arg1, char* arg2);

    // 0x4BE040 | ?ToEulersXYZ@Matrix34@@QBEXAAVVector3@@@Z
    void ToEulersXYZ(class Vector3& arg1);

    // 0x4BE110 | ?ToEulersXZY@Matrix34@@QBEXAAVVector3@@@Z
    void ToEulersXZY(class Vector3& arg1);

    // 0x4BE1D0 | ?ToEulersYXZ@Matrix34@@QBEXAAVVector3@@@Z
    void ToEulersYXZ(class Vector3& arg1);

    // 0x4BE2A0 | ?ToEulersYZX@Matrix34@@QBEXAAVVector3@@@Z
    void ToEulersYZX(class Vector3& arg1);

    // 0x4BE360 | ?ToEulersZXY@Matrix34@@QBEXAAVVector3@@@Z
    void ToEulersZXY(class Vector3& arg1);

    // 0x4BE430 | ?ToEulersZYX@Matrix34@@QBEXAAVVector3@@@Z
    void ToEulersZYX(class Vector3& arg1);

    // 0x46EDA0 | ?Transform@Matrix34@@QBEXABVVector3@@AAV2@@Z
    void Transform(class Vector3 const& arg1, class Vector3& arg2);

    // 0x4BFD60 | ?Transform4@Matrix34@@QBEXPBVVector3@@PAVVector4@@H@Z
    void Transform4(class Vector3 const* arg1, class Vector4* arg2, i32 arg3);

    // 0x4BE990 | ?Transpose@Matrix34@@QAEXXZ
    void Transpose();

    // 0x4BE9C0 | ?Transpose@Matrix34@@QAEXABV1@@Z
    void Transpose(class Matrix34 const& arg1);

    // 0x4BEA00 | ?Transpose3x4@Matrix34@@QAEXXZ
    void Transpose3x4();

    // 0x4BEA80 | ?Transpose3x4@Matrix34@@QAEXABV1@@Z
    void Transpose3x4(class Matrix34 const& arg1);

    // 0x4BBF80 | ?Zero@Matrix34@@QAEXXZ
    void Zero();

    // 0x6A3AC8 | ?I@Matrix34@@2V1@B
    static inline extern_var(0x6A3AC8, class Matrix34 const, I);
};

check_size(Matrix34, 0x0);