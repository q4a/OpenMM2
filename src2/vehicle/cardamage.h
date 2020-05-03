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

#include "node/node.h"

/*
    vehicle:cardamage

    0x4CA380 | public: __thiscall vehCarDamage::vehCarDamage(void) | ??0vehCarDamage@@QAE@XZ
    0x4CA530 | public: virtual __thiscall vehCarDamage::~vehCarDamage(void) | ??1vehCarDamage@@UAE@XZ
    0x4CA5F0 | public: virtual char const * __thiscall vehCarDamage::GetDirName(void) | ?GetDirName@vehCarDamage@@UAEPBDXZ
    0x4CA600 | public: void __thiscall vehCarDamage::Init(class vehCar *,char const *) | ?Init@vehCarDamage@@QAEXPAVvehCar@@PBD@Z
    0x4CA8D0 | private: void __thiscall vehCarDamage::SpewSmoke(class asParticles *,float *,class Vector3 &,float) | ?SpewSmoke@vehCarDamage@@AAEXPAVasParticles@@PAMAAVVector3@@M@Z
    0x4CAA40 | public: virtual void __thiscall vehCarDamage::Update(void) | ?Update@vehCarDamage@@UAEXXZ
    0x4CAE60 | public: virtual void __thiscall vehCarDamage::Reset(void) | ?Reset@vehCarDamage@@UAEXXZ
    0x4CAE80 | public: void __thiscall vehCarDamage::ClearDamage(void) | ?ClearDamage@vehCarDamage@@QAEXXZ
    0x4CAEC0 | public: void __thiscall vehCarDamage::AddDamage(float) | ?AddDamage@vehCarDamage@@QAEXM@Z
    0x4CAEF0 | private: void __thiscall vehCarDamage::InsertImpact(struct ImpactCBData *,class phCollider *) | ?InsertImpact@vehCarDamage@@AAEXPAUImpactCBData@@PAVphCollider@@@Z
    0x4CB140 | private: void __thiscall vehCarDamage::ApplyImpact(struct vehDamageImpactInfo *) | ?ApplyImpact@vehCarDamage@@AAEXPAUvehDamageImpactInfo@@@Z
    0x4CB350 | public: static void __cdecl vehCarDamage::Impact(class vehCarDamage *,struct ImpactCBData *) | ?Impact@vehCarDamage@@SAXPAV1@PAUImpactCBData@@@Z
    0x4CB3E0 | public: void __thiscall vehCarDamage::SetGameCallback(class datCallback) | ?SetGameCallback@vehCarDamage@@QAEXVdatCallback@@@Z
    0x4CB400 | public: virtual void __thiscall vehCarDamage::FileIO(class datParser &) | ?FileIO@vehCarDamage@@UAEXAAVdatParser@@@Z
    public: virtual void __thiscall vehCarDamage::AddWidgets(class bkBank &) | ?AddWidgets@vehCarDamage@@UAEXAAVbkBank@@@Z
    0x4CB610 | public: virtual void * __thiscall vehCarDamage::`scalar deleting destructor'(unsigned int) | ??_GvehCarDamage@@UAEPAXI@Z
    public: virtual void * __thiscall vehCarDamage::`vector deleting destructor'(unsigned int) | ??_EvehCarDamage@@UAEPAXI@Z
    0x4CB640 | public: virtual char * __thiscall vehCarDamage::GetClassName(void) | ?GetClassName@vehCarDamage@@UAEPADXZ
    0x4CB650 | public: virtual float __thiscall vehCarDamage::GetDamageModifier(class phCollider *) | ?GetDamageModifier@vehCarDamage@@UAEMPAVphCollider@@@Z
    0x5B2C28 | const vehCarDamage::`vftable' | ??_7vehCarDamage@@6B@
    private: static float vehCarDamage::RelaxTime | ?RelaxTime@vehCarDamage@@0MA
    0x5CEE54 | private: static float vehCarDamage::ParticleMultiplier | ?ParticleMultiplier@vehCarDamage@@0MA
    0x5CEE58 | private: static bool vehCarDamage::bWobble | ?bWobble@vehCarDamage@@0_NA
    0x6AFED4 | private: static class asBirthRule * vehCarDamage::EngineSmokeRule | ?EngineSmokeRule@vehCarDamage@@0PAVasBirthRule@@A
    0x6AFED8 | private: static int vehCarDamage::EngineSmokeRuleRef | ?EngineSmokeRuleRef@vehCarDamage@@0HA
*/

class vehCarDamage : public asNode
{
    // const vehCarDamage::`vftable' @ 0x5B2C28

public:
    // 0x4CA380 | ??0vehCarDamage@@QAE@XZ
    vehCarDamage();

    // 0x4CB610 | ??_GvehCarDamage@@UAEPAXI@Z
    // 0x4CA530 | ??1vehCarDamage@@UAE@XZ
    ~vehCarDamage() override;

    // 0x4CAEC0 | ?AddDamage@vehCarDamage@@QAEXM@Z
    void AddDamage(f32 arg1);

    // 0x4CAE80 | ?ClearDamage@vehCarDamage@@QAEXXZ
    void ClearDamage();

    // 0x4CB400 | ?FileIO@vehCarDamage@@UAEXAAVdatParser@@@Z
    void FileIO(class datParser& arg1) override;

    // 0x4CB640 | ?GetClassName@vehCarDamage@@UAEPADXZ
    char* GetClassName() override;

    // 0x4CA5F0 | ?GetDirName@vehCarDamage@@UAEPBDXZ
    char const* GetDirName() override;

    // 0x4CA600 | ?Init@vehCarDamage@@QAEXPAVvehCar@@PBD@Z
    void Init(class vehCar* arg1, char const* arg2);

    // 0x4CAE60 | ?Reset@vehCarDamage@@UAEXXZ
    void Reset() override;

    // 0x4CB3E0 | ?SetGameCallback@vehCarDamage@@QAEXVdatCallback@@@Z
    void SetGameCallback(class datCallback arg1);

    // 0x4CAA40 | ?Update@vehCarDamage@@UAEXXZ
    void Update() override;

    // 0x4CB650 | ?GetDamageModifier@vehCarDamage@@UAEMPAVphCollider@@@Z
    virtual f32 GetDamageModifier(class phCollider* arg1);

    // 0x4CB350 | ?Impact@vehCarDamage@@SAXPAV1@PAUImpactCBData@@@Z
    static void Impact(class vehCarDamage* arg1, struct ImpactCBData* arg2);

private:
    // 0x4CB140 | ?ApplyImpact@vehCarDamage@@AAEXPAUvehDamageImpactInfo@@@Z
    void ApplyImpact(struct vehDamageImpactInfo* arg1);

    // 0x4CAEF0 | ?InsertImpact@vehCarDamage@@AAEXPAUImpactCBData@@PAVphCollider@@@Z
    void InsertImpact(struct ImpactCBData* arg1, class phCollider* arg2);

    // 0x4CA8D0 | ?SpewSmoke@vehCarDamage@@AAEXPAVasParticles@@PAMAAVVector3@@M@Z
    void SpewSmoke(class asParticles* arg1, f32* arg2, class Vector3& arg3, f32 arg4);

    // 0x6AFED4 | ?EngineSmokeRule@vehCarDamage@@0PAVasBirthRule@@A
    static inline extern_var(0x6AFED4, class asBirthRule*, EngineSmokeRule);

    // 0x6AFED8 | ?EngineSmokeRuleRef@vehCarDamage@@0HA
    static inline extern_var(0x6AFED8, i32, EngineSmokeRuleRef);

    // 0x5CEE54 | ?ParticleMultiplier@vehCarDamage@@0MA
    static inline extern_var(0x5CEE54, f32, ParticleMultiplier);

    // 0x5CEE58 | ?bWobble@vehCarDamage@@0_NA
    static inline extern_var(0x5CEE58, bool, bWobble);
};

check_size(vehCarDamage, 0x3A4);
