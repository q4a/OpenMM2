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
    vehicle:caraudiocontainer

    0x4D0C80 | public: static void __cdecl vehCarAudioContainer::SetSirenCSVName(char const *) | ?SetSirenCSVName@vehCarAudioContainer@@SAXPBD@Z
    0x4D0CB0 | public: static void __cdecl vehCarAudioContainer::RegisterTypes(char const *) | ?RegisterTypes@vehCarAudioContainer@@SAXPBD@Z
    0x4D0E30 | private: static void __cdecl vehCarAudioContainer::RegisterSemiNames(class Stream *,char *) | ?RegisterSemiNames@vehCarAudioContainer@@CAXPAVStream@@PAD@Z
    0x4D0F10 | private: static void __cdecl vehCarAudioContainer::RegisterPoliceNames(class Stream *,char *) | ?RegisterPoliceNames@vehCarAudioContainer@@CAXPAVStream@@PAD@Z
    0x4D0FF0 | public: static void __cdecl vehCarAudioContainer::InitStatics(void) | ?InitStatics@vehCarAudioContainer@@SAXXZ
    0x4D1020 | public: static void __cdecl vehCarAudioContainer::DeallocateStatics(void) | ?DeallocateStatics@vehCarAudioContainer@@SAXXZ
    0x4D10F0 | public: __thiscall vehCarAudioContainer::vehCarAudioContainer(void) | ??0vehCarAudioContainer@@QAE@XZ
    0x4D1110 | public: __thiscall vehCarAudioContainer::vehCarAudioContainer(char const *,class vehCarSim *,class vehCarDamage *,int) | ??0vehCarAudioContainer@@QAE@PBDPAVvehCarSim@@PAVvehCarDamage@@H@Z
    0x4D11D0 | public: void __thiscall vehCarAudioContainer::Init(char const *,class vehCarSim *,class vehCarDamage *,int) | ?Init@vehCarAudioContainer@@QAEXPBDPAVvehCarSim@@PAVvehCarDamage@@H@Z
    0x4D12E0 | public: void __thiscall vehCarAudioContainer::InitPolice(char const *,class vehCarSim *,class vehCarDamage *,int) | ?InitPolice@vehCarAudioContainer@@QAEXPBDPAVvehCarSim@@PAVvehCarDamage@@H@Z
    0x4D13D0 | public: void __thiscall vehCarAudioContainer::InitSemi(char const *,class vehCarSim *,class vehCarDamage *,int) | ?InitSemi@vehCarAudioContainer@@QAEXPBDPAVvehCarSim@@PAVvehCarDamage@@H@Z
    0x4D14E0 | public: void __thiscall vehCarAudioContainer::InitNitro(char const *,class vehCarSim *,class vehCarDamage *,int) | ?InitNitro@vehCarAudioContainer@@QAEXPBDPAVvehCarSim@@PAVvehCarDamage@@H@Z
    0x4D15F0 | public: __thiscall vehCarAudioContainer::~vehCarAudioContainer(void) | ??1vehCarAudioContainer@@QAE@XZ
    0x4D1660 | public: void __thiscall vehCarAudioContainer::Set2DPan(float) | ?Set2DPan@vehCarAudioContainer@@QAEXM@Z
    0x4D16C0 | public: bool __thiscall vehCarAudioContainer::Is3D(void) | ?Is3D@vehCarAudioContainer@@QAE_NXZ
    0x4D16F0 | public: bool __thiscall vehCarAudioContainer::IsAirBorne(void) | ?IsAirBorne@vehCarAudioContainer@@QAE_NXZ
    0x4D1730 | public: class AudImpact * __thiscall vehCarAudioContainer::GetAudImpactPtr(void) | ?GetAudImpactPtr@vehCarAudioContainer@@QAEPAVAudImpact@@XZ
    0x4D1770 | public: class vehCarAudio * __thiscall vehCarAudioContainer::GetCarAudioPtr(void) | ?GetCarAudioPtr@vehCarAudioContainer@@QAEPAVvehCarAudio@@XZ
    0x4D1780 | public: class vehNitroCarAudio * __thiscall vehCarAudioContainer::GetNitroCarAudioPtr(void) | ?GetNitroCarAudioPtr@vehCarAudioContainer@@QAEPAVvehNitroCarAudio@@XZ
    0x4D1790 | public: class vehPoliceCarAudio * __thiscall vehCarAudioContainer::GetPoliceCarAudioPtr(void) | ?GetPoliceCarAudioPtr@vehCarAudioContainer@@QAEPAVvehPoliceCarAudio@@XZ
    0x4D17A0 | public: class vehSemiCarAudio * __thiscall vehCarAudioContainer::GetSemiCarAudioPtr(void) | ?GetSemiCarAudioPtr@vehCarAudioContainer@@QAEPAVvehSemiCarAudio@@XZ
    0x4D17B0 | public: bool __thiscall vehCarAudioContainer::IsPlayer(void) | ?IsPlayer@vehCarAudioContainer@@QAE_NXZ
    0x4D17C0 | public: void __thiscall vehCarAudioContainer::PlayHorn(void) | ?PlayHorn@vehCarAudioContainer@@QAEXXZ
    0x4D1800 | public: void __thiscall vehCarAudioContainer::StopHorn(void) | ?StopHorn@vehCarAudioContainer@@QAEXXZ
    0x4D1840 | public: void __thiscall vehCarAudioContainer::Set3D(bool) | ?Set3D@vehCarAudioContainer@@QAEX_N@Z
    0x4D1890 | public: void __thiscall vehCarAudioContainer::PlayNitro(void) | ?PlayNitro@vehCarAudioContainer@@QAEXXZ
    0x4D18A0 | public: void __thiscall vehCarAudioContainer::StopNitro(void) | ?StopNitro@vehCarAudioContainer@@QAEXXZ
    0x4D18B0 | public: void __thiscall vehCarAudioContainer::StartSiren(void) | ?StartSiren@vehCarAudioContainer@@QAEXXZ
    0x4D18C0 | public: void __thiscall vehCarAudioContainer::StopSiren(void) | ?StopSiren@vehCarAudioContainer@@QAEXXZ
    0x4D18D0 | public: void __thiscall vehCarAudioContainer::RemoveNetVehicleAudio(void) | ?RemoveNetVehicleAudio@vehCarAudioContainer@@QAEXXZ
    0x4D1910 | public: void __thiscall vehCarAudioContainer::SilenceEngine(int) | ?SilenceEngine@vehCarAudioContainer@@QAEXH@Z
    0x4D1980 | public: void __thiscall vehCarAudioContainer::Update(void) | ?Update@vehCarAudioContainer@@QAEXXZ
    0x4D19C0 | public: void __thiscall vehCarAudioContainer::Reset(void) | ?Reset@vehCarAudioContainer@@QAEXXZ
    0x4D1A00 | public: static bool __cdecl vehCarAudioContainer::IsSemiOrBus(char const *) | ?IsSemiOrBus@vehCarAudioContainer@@SA_NPBD@Z
    0x4D1A70 | public: static bool __cdecl vehCarAudioContainer::IsPolice(char const *) | ?IsPolice@vehCarAudioContainer@@SA_NPBD@Z
    0x6AFF34 | private: static int vehCarAudioContainer::s_iNumPoliceNames | ?s_iNumPoliceNames@vehCarAudioContainer@@0HA
    0x6AFF38 | private: static int vehCarAudioContainer::s_iNumSemiNames | ?s_iNumSemiNames@vehCarAudioContainer@@0HA
    0x6AFF40 | private: static char * vehCarAudioContainer::s_acSirenCSVName | ?s_acSirenCSVName@vehCarAudioContainer@@0PADA
    0x6AFFA0 | private: static bool vehCarAudioContainer::s_bTypesRegistered | ?s_bTypesRegistered@vehCarAudioContainer@@0_NA
    0x6AFFA1 | private: static bool vehCarAudioContainer::s_bAlwaysNitro | ?s_bAlwaysNitro@vehCarAudioContainer@@0_NA
    0x6AFFA4 | private: static char * * vehCarAudioContainer::s_ppSemiName | ?s_ppSemiName@vehCarAudioContainer@@0PAPADA
    0x6AFFA8 | private: static char * * vehCarAudioContainer::s_ppPoliceName | ?s_ppPoliceName@vehCarAudioContainer@@0PAPADA
*/

class vehCarAudioContainer
{
public:
    // 0x4D10F0 | ??0vehCarAudioContainer@@QAE@XZ
    vehCarAudioContainer();

    // 0x4D1110 | ??0vehCarAudioContainer@@QAE@PBDPAVvehCarSim@@PAVvehCarDamage@@H@Z
    vehCarAudioContainer(char const* arg1, class vehCarSim* arg2, class vehCarDamage* arg3, i32 arg4);

    // 0x4D15F0 | ??1vehCarAudioContainer@@QAE@XZ
    ~vehCarAudioContainer();

    // 0x4D1730 | ?GetAudImpactPtr@vehCarAudioContainer@@QAEPAVAudImpact@@XZ
    class AudImpact* GetAudImpactPtr();

    // 0x4D1770 | ?GetCarAudioPtr@vehCarAudioContainer@@QAEPAVvehCarAudio@@XZ
    class vehCarAudio* GetCarAudioPtr();

    // 0x4D1780 | ?GetNitroCarAudioPtr@vehCarAudioContainer@@QAEPAVvehNitroCarAudio@@XZ
    class vehNitroCarAudio* GetNitroCarAudioPtr();

    // 0x4D1790 | ?GetPoliceCarAudioPtr@vehCarAudioContainer@@QAEPAVvehPoliceCarAudio@@XZ
    class vehPoliceCarAudio* GetPoliceCarAudioPtr();

    // 0x4D17A0 | ?GetSemiCarAudioPtr@vehCarAudioContainer@@QAEPAVvehSemiCarAudio@@XZ
    class vehSemiCarAudio* GetSemiCarAudioPtr();

    // 0x4D11D0 | ?Init@vehCarAudioContainer@@QAEXPBDPAVvehCarSim@@PAVvehCarDamage@@H@Z
    void Init(char const* arg1, class vehCarSim* arg2, class vehCarDamage* arg3, i32 arg4);

    // 0x4D14E0 | ?InitNitro@vehCarAudioContainer@@QAEXPBDPAVvehCarSim@@PAVvehCarDamage@@H@Z
    void InitNitro(char const* arg1, class vehCarSim* arg2, class vehCarDamage* arg3, i32 arg4);

    // 0x4D12E0 | ?InitPolice@vehCarAudioContainer@@QAEXPBDPAVvehCarSim@@PAVvehCarDamage@@H@Z
    void InitPolice(char const* arg1, class vehCarSim* arg2, class vehCarDamage* arg3, i32 arg4);

    // 0x4D13D0 | ?InitSemi@vehCarAudioContainer@@QAEXPBDPAVvehCarSim@@PAVvehCarDamage@@H@Z
    void InitSemi(char const* arg1, class vehCarSim* arg2, class vehCarDamage* arg3, i32 arg4);

    // 0x4D16C0 | ?Is3D@vehCarAudioContainer@@QAE_NXZ
    bool Is3D();

    // 0x4D16F0 | ?IsAirBorne@vehCarAudioContainer@@QAE_NXZ
    bool IsAirBorne();

    // 0x4D17B0 | ?IsPlayer@vehCarAudioContainer@@QAE_NXZ
    bool IsPlayer();

    // 0x4D17C0 | ?PlayHorn@vehCarAudioContainer@@QAEXXZ
    void PlayHorn();

    // 0x4D1890 | ?PlayNitro@vehCarAudioContainer@@QAEXXZ
    void PlayNitro();

    // 0x4D18D0 | ?RemoveNetVehicleAudio@vehCarAudioContainer@@QAEXXZ
    void RemoveNetVehicleAudio();

    // 0x4D19C0 | ?Reset@vehCarAudioContainer@@QAEXXZ
    void Reset();

    // 0x4D1660 | ?Set2DPan@vehCarAudioContainer@@QAEXM@Z
    void Set2DPan(f32 arg1);

    // 0x4D1840 | ?Set3D@vehCarAudioContainer@@QAEX_N@Z
    void Set3D(bool arg1);

    // 0x4D1910 | ?SilenceEngine@vehCarAudioContainer@@QAEXH@Z
    void SilenceEngine(i32 arg1);

    // 0x4D18B0 | ?StartSiren@vehCarAudioContainer@@QAEXXZ
    void StartSiren();

    // 0x4D1800 | ?StopHorn@vehCarAudioContainer@@QAEXXZ
    void StopHorn();

    // 0x4D18A0 | ?StopNitro@vehCarAudioContainer@@QAEXXZ
    void StopNitro();

    // 0x4D18C0 | ?StopSiren@vehCarAudioContainer@@QAEXXZ
    void StopSiren();

    // 0x4D1980 | ?Update@vehCarAudioContainer@@QAEXXZ
    void Update();

    // 0x4D1020 | ?DeallocateStatics@vehCarAudioContainer@@SAXXZ
    static void DeallocateStatics();

    // 0x4D0FF0 | ?InitStatics@vehCarAudioContainer@@SAXXZ
    static void InitStatics();

    // 0x4D1A70 | ?IsPolice@vehCarAudioContainer@@SA_NPBD@Z
    static bool IsPolice(char const* arg1);

    // 0x4D1A00 | ?IsSemiOrBus@vehCarAudioContainer@@SA_NPBD@Z
    static bool IsSemiOrBus(char const* arg1);

    // 0x4D0CB0 | ?RegisterTypes@vehCarAudioContainer@@SAXPBD@Z
    static void RegisterTypes(char const* arg1);

    // 0x4D0C80 | ?SetSirenCSVName@vehCarAudioContainer@@SAXPBD@Z
    static void SetSirenCSVName(char const* arg1);

private:
    // 0x4D0F10 | ?RegisterPoliceNames@vehCarAudioContainer@@CAXPAVStream@@PAD@Z
    static void RegisterPoliceNames(class Stream* arg1, char* arg2);

    // 0x4D0E30 | ?RegisterSemiNames@vehCarAudioContainer@@CAXPAVStream@@PAD@Z
    static void RegisterSemiNames(class Stream* arg1, char* arg2);

    // 0x6AFF40 | ?s_acSirenCSVName@vehCarAudioContainer@@0PADA
    static inline extern_var(0x6AFF40, char*, s_acSirenCSVName);

    // 0x6AFFA1 | ?s_bAlwaysNitro@vehCarAudioContainer@@0_NA
    static inline extern_var(0x6AFFA1, bool, s_bAlwaysNitro);

    // 0x6AFFA0 | ?s_bTypesRegistered@vehCarAudioContainer@@0_NA
    static inline extern_var(0x6AFFA0, bool, s_bTypesRegistered);

    // 0x6AFF34 | ?s_iNumPoliceNames@vehCarAudioContainer@@0HA
    static inline extern_var(0x6AFF34, i32, s_iNumPoliceNames);

    // 0x6AFF38 | ?s_iNumSemiNames@vehCarAudioContainer@@0HA
    static inline extern_var(0x6AFF38, i32, s_iNumSemiNames);

    // 0x6AFFA8 | ?s_ppPoliceName@vehCarAudioContainer@@0PAPADA
    static inline extern_var(0x6AFFA8, char**, s_ppPoliceName);

    // 0x6AFFA4 | ?s_ppSemiName@vehCarAudioContainer@@0PAPADA
    static inline extern_var(0x6AFFA4, char**, s_ppSemiName);
};

check_size(vehCarAudioContainer, 0x18);