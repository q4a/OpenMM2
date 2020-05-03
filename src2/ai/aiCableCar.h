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

#include "aiVehicle.h"
#include "banger/banger.h"

/*
    ai:aiCableCar

    0x53F700 | public: __thiscall aiCableCar::aiCableCar(void) | ??0aiCableCar@@QAE@XZ
    0x53F780 | public: __thiscall aiCableCar::~aiCableCar(void) | ??1aiCableCar@@QAE@XZ
    0x53F7E0 | public: void __thiscall aiCableCar::Init(char *,int,int,short) | ?Init@aiCableCar@@QAEXPADHHF@Z
    0x53F990 | public: virtual void __thiscall aiCableCar::Reset(void) | ?Reset@aiCableCar@@UAEXXZ
    0x53FBD0 | public: virtual void __thiscall aiCableCar::Update(void) | ?Update@aiCableCar@@UAEXXZ
    0x53FCD0 | private: bool __thiscall aiCableCar::DetermineNextLink(class aiPath *,class aiPath * *,short,short *) | ?DetermineNextLink@aiCableCar@@AAE_NPAVaiPath@@PAPAV2@FPAF@Z
    0x53FF50 | private: void __thiscall aiCableCar::SolvePositionAndOrientation(void) | ?SolvePositionAndOrientation@aiCableCar@@AAEXXZ
    0x540580 | private: void __thiscall aiCableCar::SolveVelocity(void) | ?SolveVelocity@aiCableCar@@AAEXXZ
    0x5407B0 | private: bool __thiscall aiCableCar::CheckForObstacles(float *) | ?CheckForObstacles@aiCableCar@@AAE_NPAM@Z
    0x540A20 | private: bool __thiscall aiCableCar::OkayToEnterIntersection(float) | ?OkayToEnterIntersection@aiCableCar@@AAE_NM@Z
    0x540B90 | private: float __thiscall aiCableCar::DistanceToIntersection(void) | ?DistanceToIntersection@aiCableCar@@AAEMXZ
    0x540BF0 | private: void __thiscall aiCableCar::SolveRailType(void) | ?SolveRailType@aiCableCar@@AAEXXZ
    0x5410E0 | public: virtual int __thiscall aiCableCar::CurrentRoadIdx(class aiPath * *,bool * const,int *) | ?CurrentRoadIdx@aiCableCar@@UAEHPAPAVaiPath@@QA_NPAH@Z
    0x5411F0 | public: virtual int __thiscall aiCableCar::CurrentRdVert(void) | ?CurrentRdVert@aiCableCar@@UAEHXZ
    0x541210 | private: void __thiscall aiCableCar::UpdateObstacleMap(void) | ?UpdateObstacleMap@aiCableCar@@AAEXXZ
    0x5414D0 | public: void __thiscall aiCableCar::DetermineSister(void) | ?DetermineSister@aiCableCar@@QAEXXZ
    0x5415A0 | public: virtual void __thiscall aiCableCar::DrawId(void) | ?DrawId@aiCableCar@@UAEXXZ
    0x5415B0 | public: virtual class Matrix34 const & __thiscall aiCableCarInstance::GetMatrix(class Matrix34 &) | ?GetMatrix@aiCableCarInstance@@UAEABVMatrix34@@AAV2@@Z
    0x5415C0 | public: virtual void __thiscall aiCableCarInstance::SetMatrix(class Matrix34 const &) | ?SetMatrix@aiCableCarInstance@@UAEXABVMatrix34@@@Z
    0x5415E0 | public: virtual class Vector3 const & __thiscall aiCableCarInstance::GetVelocity(void) | ?GetVelocity@aiCableCarInstance@@UAEABVVector3@@XZ
    0x541650 | public: virtual class Vector3 const & __thiscall aiCableCarInstance::GetPosition(void) | ?GetPosition@aiCableCarInstance@@UAEABVVector3@@XZ
    0x541660 | public: virtual unsigned int __thiscall aiCableCarInstance::SizeOf(void) | ?SizeOf@aiCableCarInstance@@UAEIXZ
    0x541670 | public: virtual void __thiscall aiCableCarInstance::ImpactCB(class dgHitBangerInstance *) | ?ImpactCB@aiCableCarInstance@@UAEXPAVdgHitBangerInstance@@@Z
    0x541680 | public: virtual void __thiscall aiCableCarInstance::Draw(int) | ?Draw@aiCableCarInstance@@UAEXH@Z
    0x541770 | public: class Vector3 __thiscall Vector3::operator%(class Vector3 const &) const | ??LVector3@@QBE?AV0@ABV0@@Z
    0x5417D0 | public: virtual int __thiscall aiCableCar::Type(void) | ?Type@aiCableCar@@UAEHXZ
    0x5417E0 | public: virtual float __thiscall aiCableCar::Speed(void) | ?Speed@aiCableCar@@UAEMXZ
    0x5417F0 | public: virtual int __thiscall aiCableCar::CurrentLane(void) | ?CurrentLane@aiCableCar@@UAEHXZ
    0x541800 | public: virtual float __thiscall aiCableCar::FrontBumperDistance(void) | ?FrontBumperDistance@aiCableCar@@UAEMXZ
    0x541810 | public: virtual float __thiscall aiCableCar::BackBumperDistance(void) | ?BackBumperDistance@aiCableCar@@UAEMXZ
    0x541820 | public: virtual float __thiscall aiCableCar::LSideDistance(void) | ?LSideDistance@aiCableCar@@UAEMXZ
    0x541830 | public: virtual float __thiscall aiCableCar::RSideDistance(void) | ?RSideDistance@aiCableCar@@UAEMXZ
    0x541840 | public: virtual void __thiscall aiCableCar::Position(class Vector3 &) | ?Position@aiCableCar@@UAEXAAVVector3@@@Z
    0x541860 | public: virtual class Matrix34 & __thiscall aiCableCar::GetMatrix(void) | ?GetMatrix@aiCableCar@@UAEAAVMatrix34@@XZ
    0x541870 | public: virtual int __thiscall aiCableCar::CurrentRoadId(void) | ?CurrentRoadId@aiCableCar@@UAEHXZ
    public: __thiscall dgUnhitBangerInstance::dgUnhitBangerInstance(void) | ??0dgUnhitBangerInstance@@QAE@XZ
    public: virtual unsigned int __thiscall dgUnhitBangerInstance::SizeOf(void) | ?SizeOf@dgUnhitBangerInstance@@UAEIXZ
    0x5418A0 | public: __thiscall dgUnhitYBangerInstance::~dgUnhitYBangerInstance(void) | ??1dgUnhitYBangerInstance@@QAE@XZ
    public: __thiscall dgUnhitBangerInstance::~dgUnhitBangerInstance(void) | ??1dgUnhitBangerInstance@@QAE@XZ
    0x5B5604 | const aiCableCar::`vftable' | ??_7aiCableCar@@6B@
    0x5B5658 | const aiCableCarInstance::`vftable' | ??_7aiCableCarInstance@@6B@
    const dgUnhitBangerInstance::`vftable' | ??_7dgUnhitBangerInstance@@6B@
*/

class aiCableCar : public aiVehicle
{
    // const aiCableCar::`vftable' @ 0x5B5604

public:
    // 0x53F700 | ??0aiCableCar@@QAE@XZ
    aiCableCar();

    // 0x53F780 | ??1aiCableCar@@QAE@XZ
    // 0x53BF40 | ??_EaiCableCar@@QAEPAXI@Z
    ~aiCableCar();

    // 0x541810 | ?BackBumperDistance@aiCableCar@@UAEMXZ
    f32 BackBumperDistance() override;

    // 0x5417F0 | ?CurrentLane@aiCableCar@@UAEHXZ
    i32 CurrentLane() override;

    // 0x5411F0 | ?CurrentRdVert@aiCableCar@@UAEHXZ
    i32 CurrentRdVert() override;

    // 0x541870 | ?CurrentRoadId@aiCableCar@@UAEHXZ
    i32 CurrentRoadId() override;

    // 0x5410E0 | ?CurrentRoadIdx@aiCableCar@@UAEHPAPAVaiPath@@QA_NPAH@Z
    i32 CurrentRoadIdx(class aiPath** arg1, bool* const arg2, i32* arg3) override;

    // 0x5414D0 | ?DetermineSister@aiCableCar@@QAEXXZ
    void DetermineSister();

    // 0x5415A0 | ?DrawId@aiCableCar@@UAEXXZ
    void DrawId() override;

    // 0x541800 | ?FrontBumperDistance@aiCableCar@@UAEMXZ
    f32 FrontBumperDistance() override;

    // 0x541860 | ?GetMatrix@aiCableCar@@UAEAAVMatrix34@@XZ
    class Matrix34& GetMatrix() override;

    // 0x53F7E0 | ?Init@aiCableCar@@QAEXPADHHF@Z
    void Init(char* arg1, i32 arg2, i32 arg3, i16 arg4);

    // 0x541820 | ?LSideDistance@aiCableCar@@UAEMXZ
    f32 LSideDistance() override;

    // 0x541840 | ?Position@aiCableCar@@UAEXAAVVector3@@@Z
    void Position(class Vector3& arg1) override;

    // 0x541830 | ?RSideDistance@aiCableCar@@UAEMXZ
    f32 RSideDistance() override;

    // 0x53F990 | ?Reset@aiCableCar@@UAEXXZ
    void Reset() override;

    // 0x5417E0 | ?Speed@aiCableCar@@UAEMXZ
    f32 Speed() override;

    // 0x5417D0 | ?Type@aiCableCar@@UAEHXZ
    i32 Type() override;

    // 0x53FBD0 | ?Update@aiCableCar@@UAEXXZ
    void Update() override;

private:
    // 0x5407B0 | ?CheckForObstacles@aiCableCar@@AAE_NPAM@Z
    bool CheckForObstacles(f32* arg1);

    // 0x53FCD0 | ?DetermineNextLink@aiCableCar@@AAE_NPAVaiPath@@PAPAV2@FPAF@Z
    bool DetermineNextLink(class aiPath* arg1, class aiPath** arg2, i16 arg3, i16* arg4);

    // 0x540B90 | ?DistanceToIntersection@aiCableCar@@AAEMXZ
    f32 DistanceToIntersection();

    // 0x540A20 | ?OkayToEnterIntersection@aiCableCar@@AAE_NM@Z
    bool OkayToEnterIntersection(f32 arg1);

    // 0x53FF50 | ?SolvePositionAndOrientation@aiCableCar@@AAEXXZ
    void SolvePositionAndOrientation();

    // 0x540BF0 | ?SolveRailType@aiCableCar@@AAEXXZ
    void SolveRailType();

    // 0x540580 | ?SolveVelocity@aiCableCar@@AAEXXZ
    void SolveVelocity();

    // 0x541210 | ?UpdateObstacleMap@aiCableCar@@AAEXXZ
    void UpdateObstacleMap();
};

check_size(aiCableCar, 0x184);

class aiCableCarInstance : public dgUnhitBangerInstance
{
    // const aiCableCarInstance::`vftable' @ 0x5B5658

public:
    // 0x541680 | ?Draw@aiCableCarInstance@@UAEXH@Z
    void Draw(i32 arg1) override;

    // 0x5415B0 | ?GetMatrix@aiCableCarInstance@@UAEABVMatrix34@@AAV2@@Z
    class Matrix34 const& GetMatrix(class Matrix34& arg1) override;

    // 0x541650 | ?GetPosition@aiCableCarInstance@@UAEABVVector3@@XZ
    class Vector3 const& GetPosition() override;

    // 0x5415E0 | ?GetVelocity@aiCableCarInstance@@UAEABVVector3@@XZ
    class Vector3 const& GetVelocity() override;

    // 0x541670 | ?ImpactCB@aiCableCarInstance@@UAEXPAVdgHitBangerInstance@@@Z
    void ImpactCB(class dgHitBangerInstance* arg1) override;

    // 0x5415C0 | ?SetMatrix@aiCableCarInstance@@UAEXABVMatrix34@@@Z
    void SetMatrix(class Matrix34 const& arg1) override;

    // 0x541660 | ?SizeOf@aiCableCarInstance@@UAEIXZ
    u32 SizeOf() override;
};

check_size(aiCableCarInstance, 0x0);
