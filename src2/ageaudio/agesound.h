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
    ageaudio:agesound

    0x50D570 | public: static void __cdecl AudSoundBase::SetAgeAudioManagerPtr(class audManager *) | ?SetAgeAudioManagerPtr@AudSoundBase@@SAXPAVaudManager@@@Z
    0x50D580 | public: __thiscall AudSoundBase::AudSoundBase(void) | ??0AudSoundBase@@QAE@XZ
    0x50D5B0 | public: __thiscall AudSoundBase::AudSoundBase(class AudSoundBase *) | ??0AudSoundBase@@QAE@PAV0@@Z
    0x50D6D0 | public: __thiscall AudSoundBase::AudSoundBase(unsigned int,int,short) | ??0AudSoundBase@@QAE@IHF@Z
    0x50D7B0 | public: virtual __thiscall AudSoundBase::~AudSoundBase(void) | ??1AudSoundBase@@UAE@XZ
    0x50D890 | public: static void __cdecl AudSoundBase::DeallocateStatics(void) | ?DeallocateStatics@AudSoundBase@@SAXXZ
    0x50D8D0 | public: void __thiscall AudSoundBase::SetSubPath(char *) | ?SetSubPath@AudSoundBase@@QAEXPAD@Z
    0x50D900 | public: void __thiscall AudSoundBase::SetExtension(char *) | ?SetExtension@AudSoundBase@@QAEXPAD@Z
    0x50D930 | public: void __thiscall AudSoundBase::GetSubPathAndExtension(char *,char *) | ?GetSubPathAndExtension@AudSoundBase@@QAEXPAD0@Z
    0x50D9C0 | public: static void __cdecl AudSoundBase::SetDefSubPath(char *) | ?SetDefSubPath@AudSoundBase@@SAXPAD@Z
    0x50D9E0 | public: static void __cdecl AudSoundBase::SetDefExtension(char *) | ?SetDefExtension@AudSoundBase@@SAXPAD@Z
    0x50DA00 | private: class audObject * __thiscall AudSoundBase::CreateDuplicateObject(int) | ?CreateDuplicateObject@AudSoundBase@@AAEPAVaudObject@@H@Z
    0x50DA30 | public: void __thiscall AudSoundBase::SetVolume(float) | ?SetVolume@AudSoundBase@@QAEXM@Z
    0x50DA90 | public: void __thiscall AudSoundBase::SetAllVolumes(float) | ?SetAllVolumes@AudSoundBase@@QAEXM@Z
    0x50DAB0 | public: void __thiscall AudSoundBase::SetFrequency(float) | ?SetFrequency@AudSoundBase@@QAEXM@Z
    0x50DB10 | public: void __thiscall AudSoundBase::SetPriority(int) | ?SetPriority@AudSoundBase@@QAEXH@Z
    0x50DB30 | public: void __thiscall AudSoundBase::SetPan(float,int) | ?SetPan@AudSoundBase@@QAEXMH@Z
    0x50DB80 | public: void __thiscall AudSoundBase::SetAllPanning(float) | ?SetAllPanning@AudSoundBase@@QAEXM@Z
    0x50DBE0 | public: virtual void __thiscall AudSoundBase::Update(void) | ?Update@AudSoundBase@@UAEXXZ
    0x50DBF0 | public: void __thiscall AudSoundBase::UpdateEcho(void) | ?UpdateEcho@AudSoundBase@@QAEXXZ
    0x50DC20 | public: void __thiscall AudSoundBase::DisableEchoEffect(void) | ?DisableEchoEffect@AudSoundBase@@QAEXXZ
    0x50DC50 | public: void __thiscall AudSoundBase::SetEffect(int) | ?SetEffect@AudSoundBase@@QAEXH@Z
    0x50DC70 | public: int __thiscall AudSoundBase::GetEffect(void) | ?GetEffect@AudSoundBase@@QAEHXZ
    0x50DC80 | public: void __thiscall AudSoundBase::DisableEffect(int) | ?DisableEffect@AudSoundBase@@QAEXH@Z
    0x50DCA0 | public: void __thiscall AudSoundBase::SetEchoEffect(void) | ?SetEchoEffect@AudSoundBase@@QAEXXZ
    0x50DD10 | private: void __thiscall AudSoundBase::SetEchoEffect(int) | ?SetEchoEffect@AudSoundBase@@AAEXH@Z
    0x50DD70 | public: void __thiscall AudSoundBase::SetEchoAttenuation(float) | ?SetEchoAttenuation@AudSoundBase@@QAEXM@Z
    0x50DDB0 | public: void __thiscall AudSoundBase::SetDelayTime(float) | ?SetDelayTime@AudSoundBase@@QAEXM@Z
    0x50DDF0 | public: void __thiscall AudSoundBase::SetRamp(float,float) | ?SetRamp@AudSoundBase@@QAEXMM@Z
    0x50DE00 | public: void __thiscall AudSoundBase::SetEchoFrequency(float,int) | ?SetEchoFrequency@AudSoundBase@@QAEXMH@Z
    0x50DE40 | public: void __thiscall AudSoundBase::SetPositionPtr(class Vector3 *) | ?SetPositionPtr@AudSoundBase@@QAEXPAVVector3@@@Z
    0x50DE90 | public: int __thiscall AudSoundBase::Load(char *,int,bool) | ?Load@AudSoundBase@@QAEHPADH_N@Z
    0x50DFA0 | private: void __thiscall AudSoundBase::AutoUpdateParamsOff(int) | ?AutoUpdateParamsOff@AudSoundBase@@AAEXH@Z
    0x50DFE0 | public: void __thiscall AudSoundBase::SetupOneShotLayerBuffers(int,float,int) | ?SetupOneShotLayerBuffers@AudSoundBase@@QAEXHMH@Z
    0x50DFF0 | public: int __thiscall AudSoundBase::ReadyOneShotLayerBuf(void) | ?ReadyOneShotLayerBuf@AudSoundBase@@QAEHXZ
    0x50E020 | public: int __thiscall AudSoundBase::AllOneShotLayersPlaying(void) | ?AllOneShotLayersPlaying@AudSoundBase@@QAEHXZ
    0x50E030 | public: static unsigned int __cdecl AudSoundBase::Get2DFlags(void) | ?Get2DFlags@AudSoundBase@@SAIXZ
    0x50E040 | public: static unsigned int __cdecl AudSoundBase::GetSoft2DFlags(void) | ?GetSoft2DFlags@AudSoundBase@@SAIXZ
    0x50E050 | public: static unsigned int __cdecl AudSoundBase::GetFreqChange2DFlags(void) | ?GetFreqChange2DFlags@AudSoundBase@@SAIXZ
    0x50E060 | public: static unsigned int __cdecl AudSoundBase::GetSoftFreqChange2DFlags(void) | ?GetSoftFreqChange2DFlags@AudSoundBase@@SAIXZ
    0x50E070 | public: static unsigned int __cdecl AudSoundBase::Get3DFlags(void) | ?Get3DFlags@AudSoundBase@@SAIXZ
    0x50E080 | public: static unsigned int __cdecl AudSoundBase::GetFreqChange3DFlags(void) | ?GetFreqChange3DFlags@AudSoundBase@@SAIXZ
    0x50E090 | public: void __thiscall AudSoundBase::PlayOnce(float,float) | ?PlayOnce@AudSoundBase@@QAEXMM@Z
    0x50E150 | public: void __thiscall AudSoundBase::PlayLoop(float,float) | ?PlayLoop@AudSoundBase@@QAEXMM@Z
    0x50E1F0 | public: void __thiscall AudSoundBase::Stop(void) | ?Stop@AudSoundBase@@QAEXXZ
    0x50E230 | public: void __thiscall AudSoundBase::PauseResume(bool) | ?PauseResume@AudSoundBase@@QAEX_N@Z
    0x50E250 | public: bool __thiscall AudSoundBase::IsPlaying(void) | ?IsPlaying@AudSoundBase@@QAE_NXZ
    0x50E2C0 | public: void __thiscall AudSoundBase::SetSoundHandleIndex(int) | ?SetSoundHandleIndex@AudSoundBase@@QAEXH@Z
    0x50E2D0 | public: int __thiscall AudSoundBase::GetSoundHandleIndex(void) | ?GetSoundHandleIndex@AudSoundBase@@QAEHXZ
    0x50E2E0 | public: void __thiscall AudSoundBase::SetPlayPosition(unsigned int) | ?SetPlayPosition@AudSoundBase@@QAEXI@Z
    0x50E2F0 | public: void __thiscall AudSoundBase::Enable3DMode(void) | ?Enable3DMode@AudSoundBase@@QAEXXZ
    0x50E300 | public: void __thiscall AudSoundBase::Disable3DMode(void) | ?Disable3DMode@AudSoundBase@@QAEXXZ
    0x50E310 | public: int __thiscall AudSoundBase::GetNumSoundHandles(void) | ?GetNumSoundHandles@AudSoundBase@@QAEHXZ
    0x50E320 | public: __thiscall AudStream::AudStream(unsigned int,int,short) | ??0AudStream@@QAE@IHF@Z
    0x50E3C0 | public: virtual __thiscall AudStream::~AudStream(void) | ??1AudStream@@UAE@XZ
    0x50E3D0 | public: void __thiscall AudStream::SetVolume(float) | ?SetVolume@AudStream@@QAEXM@Z
    0x50E3F0 | public: bool __thiscall AudStream::PlayOnce(char *) | ?PlayOnce@AudStream@@QAE_NPAD@Z
    0x50E4E0 | public: __thiscall AudMidi::AudMidi(class AudManagerBase &) | ??0AudMidi@@QAE@AAVAudManagerBase@@@Z
    0x50E590 | public: virtual __thiscall AudMidi::~AudMidi(void) | ??1AudMidi@@UAE@XZ
    0x50E610 | public: void __thiscall AudMidi::MidiZeroPointers(void) | ?MidiZeroPointers@AudMidi@@QAEXXZ
    0x50E620 | public: int __thiscall AudMidi::MidiLoad(char *,char *) | ?MidiLoad@AudMidi@@QAEHPAD0@Z
    0x50E720 | public: int __thiscall AudMidi::MidiPlay(float,float) | ?MidiPlay@AudMidi@@QAEHMM@Z
    0x50E770 | public: void __thiscall AudMidi::MidiRewind(void) | ?MidiRewind@AudMidi@@QAEXXZ
    0x50E780 | public: void __thiscall AudMidi::MidiSetTempo(float) | ?MidiSetTempo@AudMidi@@QAEXM@Z
    0x50E7A0 | public: void __thiscall AudMidi::MidiSetVolume(float) | ?MidiSetVolume@AudMidi@@QAEXM@Z
    0x50E7C0 | public: void __thiscall AudMidi::MidiPauseResume(bool) | ?MidiPauseResume@AudMidi@@QAEX_N@Z
    0x50E7E0 | public: void __thiscall AudMidi::MidiStop(void) | ?MidiStop@AudMidi@@QAEXXZ
    0x50E7F0 | public: void __thiscall AudMidi::MidiUpdate(void) | ?MidiUpdate@AudMidi@@QAEXXZ
    0x50E810 | public: __thiscall AudStreamingMusic::AudStreamingMusic(class AudManagerBase &) | ??0AudStreamingMusic@@QAE@AAVAudManagerBase@@@Z
    0x50E850 | public: virtual __thiscall AudStreamingMusic::~AudStreamingMusic(void) | ??1AudStreamingMusic@@UAE@XZ
    0x50E8A0 | public: void __thiscall AudStreamingMusic::StreamingMusicReleaseControl(void) | ?StreamingMusicReleaseControl@AudStreamingMusic@@QAEXXZ
    0x50E910 | public: int __thiscall AudStreamingMusic::StreamingMusicInit(char const *) | ?StreamingMusicInit@AudStreamingMusic@@QAEHPBD@Z
    0x50EB40 | public: int __thiscall AudStreamingMusic::StreamingMusicPlay(int,int,bool) | ?StreamingMusicPlay@AudStreamingMusic@@QAEHHH_N@Z
    0x50EC50 | public: void __thiscall AudStreamingMusic::StreamingMusicStop(void) | ?StreamingMusicStop@AudStreamingMusic@@QAEXXZ
    0x50EC60 | public: void __thiscall AudStreamingMusic::StreamingMusicUpdate(void) | ?StreamingMusicUpdate@AudStreamingMusic@@QAEXXZ
    0x50EC70 | public: void __thiscall AudStreamingMusic::StreamingMusicSetVolume(float) | ?StreamingMusicSetVolume@AudStreamingMusic@@QAEXM@Z
    public: virtual void * __thiscall AudSoundBase::`vector deleting destructor'(unsigned int) | ??_EAudSoundBase@@UAEPAXI@Z
    0x50EC90 | public: virtual void * __thiscall AudSoundBase::`scalar deleting destructor'(unsigned int) | ??_GAudSoundBase@@UAEPAXI@Z
    0x50ECC0 | public: virtual void * __thiscall AudStream::`scalar deleting destructor'(unsigned int) | ??_GAudStream@@UAEPAXI@Z
    public: virtual void * __thiscall AudStream::`vector deleting destructor'(unsigned int) | ??_EAudStream@@UAEPAXI@Z
    0x50ECF0 | public: virtual void * __thiscall AudMidi::`scalar deleting destructor'(unsigned int) | ??_GAudMidi@@UAEPAXI@Z
    public: virtual void * __thiscall AudMidi::`vector deleting destructor'(unsigned int) | ??_EAudMidi@@UAEPAXI@Z
    public: virtual void * __thiscall AudStreamingMusic::`vector deleting destructor'(unsigned int) | ??_EAudStreamingMusic@@UAEPAXI@Z
    0x50ED20 | public: virtual void * __thiscall AudStreamingMusic::`scalar deleting destructor'(unsigned int) | ??_GAudStreamingMusic@@UAEPAXI@Z
    private: static unsigned int const AudSoundBase::s_DWDefault3DCtrlFlags | ?s_DWDefault3DCtrlFlags@AudSoundBase@@0IB
    private: static unsigned int const AudSoundBase::s_DWDefault2DCtrlFlags | ?s_DWDefault2DCtrlFlags@AudSoundBase@@0IB
    private: static unsigned int const AudSoundBase::s_DWFreqChange3DCtrlFlags | ?s_DWFreqChange3DCtrlFlags@AudSoundBase@@0IB
    private: static unsigned int const AudSoundBase::s_DWFreqChange2DCtrlFlags | ?s_DWFreqChange2DCtrlFlags@AudSoundBase@@0IB
    private: static unsigned int const AudSoundBase::s_DWSoft2DCtrlFlags | ?s_DWSoft2DCtrlFlags@AudSoundBase@@0IB
    private: static unsigned int const AudSoundBase::s_DWSoftFreqChange2DCtrlFlags | ?s_DWSoftFreqChange2DCtrlFlags@AudSoundBase@@0IB
    0x5B4B48 | const AudSoundBase::`vftable' | ??_7AudSoundBase@@6B@
    0x5B4B7C | const AudStream::`vftable' | ??_7AudStream@@6B@
    0x5B4BB0 | const AudMidi::`vftable' | ??_7AudMidi@@6B@
    0x5B4BE4 | const AudStreamingMusic::`vftable' | ??_7AudStreamingMusic@@6B@
    0x6B1464 | private: static class audManager * AudSoundBase::s_pAgeAudioManager | ?s_pAgeAudioManager@AudSoundBase@@0PAVaudManager@@A
    0x6B1468 | private: static char * AudSoundBase::s_pacDefSubPath | ?s_pacDefSubPath@AudSoundBase@@0PADA
    0x6B146C | private: static char * AudSoundBase::s_pacDefExtension | ?s_pacDefExtension@AudSoundBase@@0PADA
*/

class AudSoundBase : public asNode
{
    // const AudSoundBase::`vftable' @ 0x5B4B48

public:
    // 0x50D580 | ??0AudSoundBase@@QAE@XZ
    AudSoundBase();

    // 0x50D5B0 | ??0AudSoundBase@@QAE@PAV0@@Z
    AudSoundBase(class AudSoundBase* arg1);

    // 0x50D6D0 | ??0AudSoundBase@@QAE@IHF@Z
    AudSoundBase(u32 arg1, i32 arg2, i16 arg3);

    // 0x50EC90 | ??_GAudSoundBase@@UAEPAXI@Z
    // 0x50D7B0 | ??1AudSoundBase@@UAE@XZ
    ~AudSoundBase() override;

    // 0x50E020 | ?AllOneShotLayersPlaying@AudSoundBase@@QAEHXZ
    i32 AllOneShotLayersPlaying();

    // 0x50E300 | ?Disable3DMode@AudSoundBase@@QAEXXZ
    void Disable3DMode();

    // 0x50DC20 | ?DisableEchoEffect@AudSoundBase@@QAEXXZ
    void DisableEchoEffect();

    // 0x50DC80 | ?DisableEffect@AudSoundBase@@QAEXH@Z
    void DisableEffect(i32 arg1);

    // 0x50E2F0 | ?Enable3DMode@AudSoundBase@@QAEXXZ
    void Enable3DMode();

    // 0x50DC70 | ?GetEffect@AudSoundBase@@QAEHXZ
    i32 GetEffect();

    // 0x50E310 | ?GetNumSoundHandles@AudSoundBase@@QAEHXZ
    i32 GetNumSoundHandles();

    // 0x50E2D0 | ?GetSoundHandleIndex@AudSoundBase@@QAEHXZ
    i32 GetSoundHandleIndex();

    // 0x50D930 | ?GetSubPathAndExtension@AudSoundBase@@QAEXPAD0@Z
    void GetSubPathAndExtension(char* arg1, char* arg2);

    // 0x50E250 | ?IsPlaying@AudSoundBase@@QAE_NXZ
    bool IsPlaying();

    // 0x50DE90 | ?Load@AudSoundBase@@QAEHPADH_N@Z
    i32 Load(char* arg1, i32 arg2, bool arg3);

    // 0x50E230 | ?PauseResume@AudSoundBase@@QAEX_N@Z
    void PauseResume(bool arg1);

    // 0x50E150 | ?PlayLoop@AudSoundBase@@QAEXMM@Z
    void PlayLoop(f32 arg1, f32 arg2);

    // 0x50E090 | ?PlayOnce@AudSoundBase@@QAEXMM@Z
    void PlayOnce(f32 arg1, f32 arg2);

    // 0x50DFF0 | ?ReadyOneShotLayerBuf@AudSoundBase@@QAEHXZ
    i32 ReadyOneShotLayerBuf();

    // 0x50DB80 | ?SetAllPanning@AudSoundBase@@QAEXM@Z
    void SetAllPanning(f32 arg1);

    // 0x50DA90 | ?SetAllVolumes@AudSoundBase@@QAEXM@Z
    void SetAllVolumes(f32 arg1);

    // 0x50DDB0 | ?SetDelayTime@AudSoundBase@@QAEXM@Z
    void SetDelayTime(f32 arg1);

    // 0x50DD70 | ?SetEchoAttenuation@AudSoundBase@@QAEXM@Z
    void SetEchoAttenuation(f32 arg1);

    // 0x50DCA0 | ?SetEchoEffect@AudSoundBase@@QAEXXZ
    void SetEchoEffect();

    // 0x50DE00 | ?SetEchoFrequency@AudSoundBase@@QAEXMH@Z
    void SetEchoFrequency(f32 arg1, i32 arg2);

    // 0x50DC50 | ?SetEffect@AudSoundBase@@QAEXH@Z
    void SetEffect(i32 arg1);

    // 0x50D900 | ?SetExtension@AudSoundBase@@QAEXPAD@Z
    void SetExtension(char* arg1);

    // 0x50DAB0 | ?SetFrequency@AudSoundBase@@QAEXM@Z
    void SetFrequency(f32 arg1);

    // 0x50DB30 | ?SetPan@AudSoundBase@@QAEXMH@Z
    void SetPan(f32 arg1, i32 arg2);

    // 0x50E2E0 | ?SetPlayPosition@AudSoundBase@@QAEXI@Z
    void SetPlayPosition(u32 arg1);

    // 0x50DE40 | ?SetPositionPtr@AudSoundBase@@QAEXPAVVector3@@@Z
    void SetPositionPtr(class Vector3* arg1);

    // 0x50DB10 | ?SetPriority@AudSoundBase@@QAEXH@Z
    void SetPriority(i32 arg1);

    // 0x50DDF0 | ?SetRamp@AudSoundBase@@QAEXMM@Z
    void SetRamp(f32 arg1, f32 arg2);

    // 0x50E2C0 | ?SetSoundHandleIndex@AudSoundBase@@QAEXH@Z
    void SetSoundHandleIndex(i32 arg1);

    // 0x50D8D0 | ?SetSubPath@AudSoundBase@@QAEXPAD@Z
    void SetSubPath(char* arg1);

    // 0x50DA30 | ?SetVolume@AudSoundBase@@QAEXM@Z
    void SetVolume(f32 arg1);

    // 0x50DFE0 | ?SetupOneShotLayerBuffers@AudSoundBase@@QAEXHMH@Z
    void SetupOneShotLayerBuffers(i32 arg1, f32 arg2, i32 arg3);

    // 0x50E1F0 | ?Stop@AudSoundBase@@QAEXXZ
    void Stop();

    // 0x50DBE0 | ?Update@AudSoundBase@@UAEXXZ
    void Update() override;

    // 0x50DBF0 | ?UpdateEcho@AudSoundBase@@QAEXXZ
    void UpdateEcho();

    // 0x50D890 | ?DeallocateStatics@AudSoundBase@@SAXXZ
    static void DeallocateStatics();

    // 0x50E030 | ?Get2DFlags@AudSoundBase@@SAIXZ
    static u32 Get2DFlags();

    // 0x50E070 | ?Get3DFlags@AudSoundBase@@SAIXZ
    static u32 Get3DFlags();

    // 0x50E050 | ?GetFreqChange2DFlags@AudSoundBase@@SAIXZ
    static u32 GetFreqChange2DFlags();

    // 0x50E080 | ?GetFreqChange3DFlags@AudSoundBase@@SAIXZ
    static u32 GetFreqChange3DFlags();

    // 0x50E040 | ?GetSoft2DFlags@AudSoundBase@@SAIXZ
    static u32 GetSoft2DFlags();

    // 0x50E060 | ?GetSoftFreqChange2DFlags@AudSoundBase@@SAIXZ
    static u32 GetSoftFreqChange2DFlags();

    // 0x50D570 | ?SetAgeAudioManagerPtr@AudSoundBase@@SAXPAVaudManager@@@Z
    static void SetAgeAudioManagerPtr(class audManager* arg1);

    // 0x50D9E0 | ?SetDefExtension@AudSoundBase@@SAXPAD@Z
    static void SetDefExtension(char* arg1);

    // 0x50D9C0 | ?SetDefSubPath@AudSoundBase@@SAXPAD@Z
    static void SetDefSubPath(char* arg1);

private:
    // 0x50DFA0 | ?AutoUpdateParamsOff@AudSoundBase@@AAEXH@Z
    void AutoUpdateParamsOff(i32 arg1);

    // 0x50DA00 | ?CreateDuplicateObject@AudSoundBase@@AAEPAVaudObject@@H@Z
    class audObject* CreateDuplicateObject(i32 arg1);

    // 0x50DD10 | ?SetEchoEffect@AudSoundBase@@AAEXH@Z
    void SetEchoEffect(i32 arg1);

    // 0x6B1464 | ?s_pAgeAudioManager@AudSoundBase@@0PAVaudManager@@A
    static inline extern_var(0x6B1464, class audManager*, s_pAgeAudioManager);

    // 0x6B146C | ?s_pacDefExtension@AudSoundBase@@0PADA
    static inline extern_var(0x6B146C, char*, s_pacDefExtension);

    // 0x6B1468 | ?s_pacDefSubPath@AudSoundBase@@0PADA
    static inline extern_var(0x6B1468, char*, s_pacDefSubPath);
};

check_size(AudSoundBase, 0x40);

class AudStream : public AudSoundBase
{
    // const AudStream::`vftable' @ 0x5B4B7C

public:
    // 0x50E320 | ??0AudStream@@QAE@IHF@Z
    AudStream(u32 arg1, i32 arg2, i16 arg3);

    // 0x50ECC0 | ??_GAudStream@@UAEPAXI@Z
    // 0x50E3C0 | ??1AudStream@@UAE@XZ
    ~AudStream() override;

    // 0x50E3F0 | ?PlayOnce@AudStream@@QAE_NPAD@Z
    bool PlayOnce(char* arg1);

    // 0x50E3D0 | ?SetVolume@AudStream@@QAEXM@Z
    void SetVolume(f32 arg1);
};

check_size(AudStream, 0x44);

class AudMidi : public asNode
{
    // const AudMidi::`vftable' @ 0x5B4BB0

public:
    // 0x50E4E0 | ??0AudMidi@@QAE@AAVAudManagerBase@@@Z
    AudMidi(class AudManagerBase& arg1);

    // 0x50ECF0 | ??_GAudMidi@@UAEPAXI@Z
    // 0x50E590 | ??1AudMidi@@UAE@XZ
    ~AudMidi() override;

    // 0x50E620 | ?MidiLoad@AudMidi@@QAEHPAD0@Z
    i32 MidiLoad(char* arg1, char* arg2);

    // 0x50E7C0 | ?MidiPauseResume@AudMidi@@QAEX_N@Z
    void MidiPauseResume(bool arg1);

    // 0x50E720 | ?MidiPlay@AudMidi@@QAEHMM@Z
    i32 MidiPlay(f32 arg1, f32 arg2);

    // 0x50E770 | ?MidiRewind@AudMidi@@QAEXXZ
    void MidiRewind();

    // 0x50E780 | ?MidiSetTempo@AudMidi@@QAEXM@Z
    void MidiSetTempo(f32 arg1);

    // 0x50E7A0 | ?MidiSetVolume@AudMidi@@QAEXM@Z
    void MidiSetVolume(f32 arg1);

    // 0x50E7E0 | ?MidiStop@AudMidi@@QAEXXZ
    void MidiStop();

    // 0x50E7F0 | ?MidiUpdate@AudMidi@@QAEXXZ
    void MidiUpdate();

    // 0x50E610 | ?MidiZeroPointers@AudMidi@@QAEXXZ
    void MidiZeroPointers();
};

check_size(AudMidi, 0x0);

class AudStreamingMusic : public asNode
{
    // const AudStreamingMusic::`vftable' @ 0x5B4BE4

public:
    // 0x50E810 | ??0AudStreamingMusic@@QAE@AAVAudManagerBase@@@Z
    AudStreamingMusic(class AudManagerBase& arg1);

    // 0x50ED20 | ??_GAudStreamingMusic@@UAEPAXI@Z
    // 0x50E850 | ??1AudStreamingMusic@@UAE@XZ
    ~AudStreamingMusic() override;

    // 0x50E910 | ?StreamingMusicInit@AudStreamingMusic@@QAEHPBD@Z
    i32 StreamingMusicInit(char const* arg1);

    // 0x50EB40 | ?StreamingMusicPlay@AudStreamingMusic@@QAEHHH_N@Z
    i32 StreamingMusicPlay(i32 arg1, i32 arg2, bool arg3);

    // 0x50E8A0 | ?StreamingMusicReleaseControl@AudStreamingMusic@@QAEXXZ
    void StreamingMusicReleaseControl();

    // 0x50EC70 | ?StreamingMusicSetVolume@AudStreamingMusic@@QAEXM@Z
    void StreamingMusicSetVolume(f32 arg1);

    // 0x50EC50 | ?StreamingMusicStop@AudStreamingMusic@@QAEXXZ
    void StreamingMusicStop();

    // 0x50EC60 | ?StreamingMusicUpdate@AudStreamingMusic@@QAEXXZ
    void StreamingMusicUpdate();
};

check_size(AudStreamingMusic, 0x7C);