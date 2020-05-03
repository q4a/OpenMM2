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

#include "ageaudio/aud3dobject.h"

/*
    vehicle:aiambientvehicleaudio

    0x4CF890 | public: __thiscall aiAmbientVehicleAudio::aiAmbientVehicleAudio(void) | ??0aiAmbientVehicleAudio@@QAE@XZ
    0x4CF8E0 | public: virtual __thiscall aiAmbientVehicleAudio::~aiAmbientVehicleAudio(void) | ??1aiAmbientVehicleAudio@@UAE@XZ
    0x4CF8F0 | public: void __thiscall aiAmbientVehicleAudio::Init(char *,class Vector3 *) | ?Init@aiAmbientVehicleAudio@@QAEXPADPAVVector3@@@Z
    0x4CF9B0 | public: void __thiscall aiAmbientVehicleAudio::Reset(void) | ?Reset@aiAmbientVehicleAudio@@QAEXXZ
    0x4CF9D0 | public: virtual void __thiscall aiAmbientVehicleAudio::AssignSounds(void) | ?AssignSounds@aiAmbientVehicleAudio@@UAEXXZ
    0x4CFA50 | public: virtual void __thiscall aiAmbientVehicleAudio::UnAssignSounds(int) | ?UnAssignSounds@aiAmbientVehicleAudio@@UAEXH@Z
    0x4CFAB0 | public: bool __thiscall aiAmbientVehicleAudio::PlayAvoidanceHorn(void) | ?PlayAvoidanceHorn@aiAmbientVehicleAudio@@QAE_NXZ
    0x4CFAD0 | public: void __thiscall aiAmbientVehicleAudio::PlayImpactHorn(float) | ?PlayImpactHorn@aiAmbientVehicleAudio@@QAEXM@Z
    0x4CFAF0 | public: void __thiscall aiAmbientVehicleAudio::UpdateHorn(void) | ?UpdateHorn@aiAmbientVehicleAudio@@QAEXXZ
    0x4CFB10 | public: class AudImpact * __thiscall aiAmbientVehicleAudio::GetAudImpactPtr(void) | ?GetAudImpactPtr@aiAmbientVehicleAudio@@QAEPAVAudImpact@@XZ
    0x4CFB20 | public: virtual void __thiscall aiAmbientVehicleAudio::UpdateAudio(void) | ?UpdateAudio@aiAmbientVehicleAudio@@UAEXXZ
    0x4CFB90 | public: int __thiscall aiAmbientVehicleAudio::UpdateAudio(float) | ?UpdateAudio@aiAmbientVehicleAudio@@QAEHM@Z
    0x4CFCC0 | public: static void __cdecl aiAmbientVehicleAudio::InitStatics(void) | ?InitStatics@aiAmbientVehicleAudio@@SAXXZ
    0x4CFD00 | public: static void __cdecl aiAmbientVehicleAudio::DeallocateStatics(void) | ?DeallocateStatics@aiAmbientVehicleAudio@@SAXXZ
    0x4CFF00 | public: static void __cdecl aiAmbientVehicleAudio::UpdateStatics(float) | ?UpdateStatics@aiAmbientVehicleAudio@@SAXM@Z
    0x4CFF30 | private: static void __cdecl aiAmbientVehicleAudio::UpdateVoices(int,float) | ?UpdateVoices@aiAmbientVehicleAudio@@CAXHM@Z
    0x4CFF70 | public: static void __cdecl aiAmbientVehicleAudio::SetCSVCatString(char *) | ?SetCSVCatString@aiAmbientVehicleAudio@@SAXPAD@Z
    0x4CFFA0 | public: static void __cdecl aiAmbientVehicleAudio::LoadNumVFileChoices(char *) | ?LoadNumVFileChoices@aiAmbientVehicleAudio@@SAXPAD@Z
    0x4CFFE0 | public: void __thiscall aiAmbientVehicleAudio::EchoOn(void) | ?EchoOn@aiAmbientVehicleAudio@@QAEXXZ
    0x4D0030 | public: void __thiscall aiAmbientVehicleAudio::EchoOff(void) | ?EchoOff@aiAmbientVehicleAudio@@QAEXXZ
    0x4D0060 | private: void __thiscall aiAmbientVehicleAudio::UpdateEcho(void) | ?UpdateEcho@aiAmbientVehicleAudio@@AAEXXZ
    0x4D0090 | public: void __thiscall aiAmbientVehicleAudio::PlayImpactReaction(float) | ?PlayImpactReaction@aiAmbientVehicleAudio@@QAEXM@Z
    0x4D00B0 | public: void __thiscall aiAmbientVehicleAudio::PlayAvoidanceReaction(float) | ?PlayAvoidanceReaction@aiAmbientVehicleAudio@@QAEXM@Z
    0x4D00D0 | public: bool __thiscall aiAmbientVehicleAudio::LoadEngine(char *,char *) | ?LoadEngine@aiAmbientVehicleAudio@@QAE_NPAD0@Z
    0x4D0300 | public: bool __thiscall aiAmbientVehicleAudio::LoadHorn(char *,char *) | ?LoadHorn@aiAmbientVehicleAudio@@QAE_NPAD0@Z
    0x4D0530 | public: bool __thiscall aiAmbientVehicleAudio::LoadVoices(char *,char *,bool) | ?LoadVoices@aiAmbientVehicleAudio@@QAE_NPAD0_N@Z
    0x4D07B0 | public: bool __thiscall aiAmbientVehicleAudio::LoadImpacts(char *,char *) | ?LoadImpacts@aiAmbientVehicleAudio@@QAE_NPAD0@Z
    public: virtual void * __thiscall aiAmbientVehicleAudio::`scalar deleting destructor'(unsigned int) | ??_GaiAmbientVehicleAudio@@UAEPAXI@Z
    public: virtual void * __thiscall aiAmbientVehicleAudio::`vector deleting destructor'(unsigned int) | ??_EaiAmbientVehicleAudio@@UAEPAXI@Z
    0x4D0B00 | void __cdecl DeallocateAudioData(class aiEngineAudio * * *,int *) | ?DeallocateAudioData@@YAXPAPAPAVaiEngineAudio@@PAH@Z
    0x4D0B70 | void __cdecl DeallocateAudioData(class AudCreature * * *,int *) | ?DeallocateAudioData@@YAXPAPAPAVAudCreature@@PAH@Z
    0x4D0BE0 | void __cdecl DeallocateAudioData(class AudImpact * * *,int *) | ?DeallocateAudioData@@YAXPAPAPAVAudImpact@@PAH@Z
    0x4D0C50 | public: void * __thiscall vehHornAudio::`scalar deleting destructor'(unsigned int) | ??_GvehHornAudio@@QAEPAXI@Z
    0x5B2D74 | const aiAmbientVehicleAudio::`vftable' | ??_7aiAmbientVehicleAudio@@6B@
    0x6AFEF4 | private: static char * aiAmbientVehicleAudio::s_CSVCatString | ?s_CSVCatString@aiAmbientVehicleAudio@@0PADA
    0x6AFF08 | private: static class Aud3DManagerData<class vehHornAudio> * * aiAmbientVehicleAudio::s_ppHornAudioContainer | ?s_ppHornAudioContainer@aiAmbientVehicleAudio@@0PAPAV?$Aud3DManagerData@VvehHornAudio@@@@A
    0x6AFF0C | private: static class Aud3DManagerData<class AudCreature> * * aiAmbientVehicleAudio::s_ppAudCreatureContainer | ?s_ppAudCreatureContainer@aiAmbientVehicleAudio@@0PAPAV?$Aud3DManagerData@VAudCreature@@@@A
    0x6AFF10 | private: static class Aud3DManagerData<class aiEngineAudio> * * aiAmbientVehicleAudio::s_ppEngineAudioContainer | ?s_ppEngineAudioContainer@aiAmbientVehicleAudio@@0PAPAV?$Aud3DManagerData@VaiEngineAudio@@@@A
    0x6AFF14 | private: static class Aud3DManagerData<class AudImpact> * * aiAmbientVehicleAudio::s_ppAudImpactContainer | ?s_ppAudImpactContainer@aiAmbientVehicleAudio@@0PAPAV?$Aud3DManagerData@VAudImpact@@@@A
    0x6AFF18 | private: static int aiAmbientVehicleAudio::s_iNumHornAudioContainers | ?s_iNumHornAudioContainers@aiAmbientVehicleAudio@@0HA
    0x6AFF1C | private: static int aiAmbientVehicleAudio::s_iNumEngineAudioContainers | ?s_iNumEngineAudioContainers@aiAmbientVehicleAudio@@0HA
    0x6AFF20 | private: static int aiAmbientVehicleAudio::s_iNumAudCreatureContainers | ?s_iNumAudCreatureContainers@aiAmbientVehicleAudio@@0HA
    0x6AFF24 | private: static int aiAmbientVehicleAudio::s_iNumAudImpactContainers | ?s_iNumAudImpactContainers@aiAmbientVehicleAudio@@0HA
    0x6AFF28 | private: static int aiAmbientVehicleAudio::s_iVoiceFileNum | ?s_iVoiceFileNum@aiAmbientVehicleAudio@@0HA
    private: static float aiAmbientVehicleAudio::s_fImpactReactionTimer | ?s_fImpactReactionTimer@aiAmbientVehicleAudio@@0MA
*/

class aiAmbientVehicleAudio : public Aud3DObject
{
    // const aiAmbientVehicleAudio::`vftable' @ 0x5B2D74

public:
    // 0x4CF890 | ??0aiAmbientVehicleAudio@@QAE@XZ
    aiAmbientVehicleAudio();

    // 0x4CF8E0 | ??1aiAmbientVehicleAudio@@UAE@XZ
    ~aiAmbientVehicleAudio();

    // 0x4CF9D0 | ?AssignSounds@aiAmbientVehicleAudio@@UAEXXZ
    void AssignSounds() override;

    // 0x4D0030 | ?EchoOff@aiAmbientVehicleAudio@@QAEXXZ
    void EchoOff();

    // 0x4CFFE0 | ?EchoOn@aiAmbientVehicleAudio@@QAEXXZ
    void EchoOn();

    // 0x4CFB10 | ?GetAudImpactPtr@aiAmbientVehicleAudio@@QAEPAVAudImpact@@XZ
    class AudImpact* GetAudImpactPtr();

    // 0x4CF8F0 | ?Init@aiAmbientVehicleAudio@@QAEXPADPAVVector3@@@Z
    void Init(char* arg1, class Vector3* arg2);

    // 0x4D00D0 | ?LoadEngine@aiAmbientVehicleAudio@@QAE_NPAD0@Z
    bool LoadEngine(char* arg1, char* arg2);

    // 0x4D0300 | ?LoadHorn@aiAmbientVehicleAudio@@QAE_NPAD0@Z
    bool LoadHorn(char* arg1, char* arg2);

    // 0x4D07B0 | ?LoadImpacts@aiAmbientVehicleAudio@@QAE_NPAD0@Z
    bool LoadImpacts(char* arg1, char* arg2);

    // 0x4D0530 | ?LoadVoices@aiAmbientVehicleAudio@@QAE_NPAD0_N@Z
    bool LoadVoices(char* arg1, char* arg2, bool arg3);

    // 0x4CFAB0 | ?PlayAvoidanceHorn@aiAmbientVehicleAudio@@QAE_NXZ
    bool PlayAvoidanceHorn();

    // 0x4D00B0 | ?PlayAvoidanceReaction@aiAmbientVehicleAudio@@QAEXM@Z
    void PlayAvoidanceReaction(f32 arg1);

    // 0x4CFAD0 | ?PlayImpactHorn@aiAmbientVehicleAudio@@QAEXM@Z
    void PlayImpactHorn(f32 arg1);

    // 0x4D0090 | ?PlayImpactReaction@aiAmbientVehicleAudio@@QAEXM@Z
    void PlayImpactReaction(f32 arg1);

    // 0x4CF9B0 | ?Reset@aiAmbientVehicleAudio@@QAEXXZ
    void Reset();

    // 0x4CFA50 | ?UnAssignSounds@aiAmbientVehicleAudio@@UAEXH@Z
    void UnAssignSounds(i32 arg1) override;

    // 0x4CFB20 | ?UpdateAudio@aiAmbientVehicleAudio@@UAEXXZ
    void UpdateAudio() override;

    // 0x4CFB90 | ?UpdateAudio@aiAmbientVehicleAudio@@QAEHM@Z
    i32 UpdateAudio(f32 arg1);

    // 0x4CFAF0 | ?UpdateHorn@aiAmbientVehicleAudio@@QAEXXZ
    void UpdateHorn();

    // 0x4CFD00 | ?DeallocateStatics@aiAmbientVehicleAudio@@SAXXZ
    static void DeallocateStatics();

    // 0x4CFCC0 | ?InitStatics@aiAmbientVehicleAudio@@SAXXZ
    static void InitStatics();

    // 0x4CFFA0 | ?LoadNumVFileChoices@aiAmbientVehicleAudio@@SAXPAD@Z
    static void LoadNumVFileChoices(char* arg1);

    // 0x4CFF70 | ?SetCSVCatString@aiAmbientVehicleAudio@@SAXPAD@Z
    static void SetCSVCatString(char* arg1);

    // 0x4CFF00 | ?UpdateStatics@aiAmbientVehicleAudio@@SAXM@Z
    static void UpdateStatics(f32 arg1);

private:
    // 0x4D0060 | ?UpdateEcho@aiAmbientVehicleAudio@@AAEXXZ
    void UpdateEcho();

    // 0x4CFF30 | ?UpdateVoices@aiAmbientVehicleAudio@@CAXHM@Z
    static void UpdateVoices(i32 arg1, f32 arg2);

    // 0x6AFEF4 | ?s_CSVCatString@aiAmbientVehicleAudio@@0PADA
    static inline extern_var(0x6AFEF4, char*, s_CSVCatString);

    // 0x6AFF20 | ?s_iNumAudCreatureContainers@aiAmbientVehicleAudio@@0HA
    static inline extern_var(0x6AFF20, i32, s_iNumAudCreatureContainers);

    // 0x6AFF24 | ?s_iNumAudImpactContainers@aiAmbientVehicleAudio@@0HA
    static inline extern_var(0x6AFF24, i32, s_iNumAudImpactContainers);

    // 0x6AFF1C | ?s_iNumEngineAudioContainers@aiAmbientVehicleAudio@@0HA
    static inline extern_var(0x6AFF1C, i32, s_iNumEngineAudioContainers);

    // 0x6AFF18 | ?s_iNumHornAudioContainers@aiAmbientVehicleAudio@@0HA
    static inline extern_var(0x6AFF18, i32, s_iNumHornAudioContainers);

    // 0x6AFF28 | ?s_iVoiceFileNum@aiAmbientVehicleAudio@@0HA
    static inline extern_var(0x6AFF28, i32, s_iVoiceFileNum);

    // 0x6AFF0C | ?s_ppAudCreatureContainer@aiAmbientVehicleAudio@@0PAPAV?$Aud3DManagerData@VAudCreature@@@@A
    static inline extern_var(0x6AFF0C, class Aud3DManagerData<class AudCreature>**, s_ppAudCreatureContainer);

    // 0x6AFF14 | ?s_ppAudImpactContainer@aiAmbientVehicleAudio@@0PAPAV?$Aud3DManagerData@VAudImpact@@@@A
    static inline extern_var(0x6AFF14, class Aud3DManagerData<class AudImpact>**, s_ppAudImpactContainer);

    // 0x6AFF10 | ?s_ppEngineAudioContainer@aiAmbientVehicleAudio@@0PAPAV?$Aud3DManagerData@VaiEngineAudio@@@@A
    static inline extern_var(0x6AFF10, class Aud3DManagerData<class aiEngineAudio>**, s_ppEngineAudioContainer);

    // 0x6AFF08 | ?s_ppHornAudioContainer@aiAmbientVehicleAudio@@0PAPAV?$Aud3DManagerData@VvehHornAudio@@@@A
    static inline extern_var(0x6AFF08, class Aud3DManagerData<class vehHornAudio>**, s_ppHornAudioContainer);
};

check_size(aiAmbientVehicleAudio, 0x0);

// 0x4D0B70 | ?DeallocateAudioData@@YAXPAPAPAVAudCreature@@PAH@Z
void DeallocateAudioData(class AudCreature*** arg1, i32* arg2);

// 0x4D0BE0 | ?DeallocateAudioData@@YAXPAPAPAVAudImpact@@PAH@Z
void DeallocateAudioData(class AudImpact*** arg1, i32* arg2);

// 0x4D0B00 | ?DeallocateAudioData@@YAXPAPAPAVaiEngineAudio@@PAH@Z
void DeallocateAudioData(class aiEngineAudio*** arg1, i32* arg2);