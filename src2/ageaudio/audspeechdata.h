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
    ageaudio:audspeechdata

    0x513CF0 | public: __thiscall AudSpeechData::AudSpeechData(char *,float,float,bool,char *,char *) | ??0AudSpeechData@@QAE@PADMM_N00@Z
    0x513DB0 | public: __thiscall AudSpeechData::~AudSpeechData(void) | ??1AudSpeechData@@QAE@XZ
    0x513E20 | private: void __thiscall AudSpeechData::LoadOneShots(char *,char *) | ?LoadOneShots@AudSpeechData@@AAEXPAD0@Z
    0x513F70 | public: void __thiscall AudSpeechData::SetVolume(float) | ?SetVolume@AudSpeechData@@QAEXM@Z
    0x513FB0 | public: char * __thiscall AudSpeechData::GetName(int) | ?GetName@AudSpeechData@@QAEPADH@Z
    0x513FF0 | public: class AudSoundBase * __thiscall AudSpeechData::GetOneShot(int) | ?GetOneShot@AudSpeechData@@QAEPAVAudSoundBase@@H@Z
    0x514010 | public: char * __thiscall AudSpeechData::GetRandomName(void) | ?GetRandomName@AudSpeechData@@QAEPADXZ
    0x5140B0 | public: class AudSoundBase * __thiscall AudSpeechData::GetRandomOneShot(void) | ?GetRandomOneShot@AudSpeechData@@QAEPAVAudSoundBase@@XZ
*/

struct AudSpeechData
{
public:
    // 0x513CF0 | ??0AudSpeechData@@QAE@PADMM_N00@Z
    AudSpeechData(char* arg1, f32 arg2, f32 arg3, bool arg4, char* arg5, char* arg6);

    // 0x513DB0 | ??1AudSpeechData@@QAE@XZ
    ~AudSpeechData();

    // 0x513FB0 | ?GetName@AudSpeechData@@QAEPADH@Z
    char* GetName(i32 arg1);

    // 0x513FF0 | ?GetOneShot@AudSpeechData@@QAEPAVAudSoundBase@@H@Z
    class AudSoundBase* GetOneShot(i32 arg1);

    // 0x514010 | ?GetRandomName@AudSpeechData@@QAEPADXZ
    char* GetRandomName();

    // 0x5140B0 | ?GetRandomOneShot@AudSpeechData@@QAEPAVAudSoundBase@@XZ
    class AudSoundBase* GetRandomOneShot();

    // 0x513F70 | ?SetVolume@AudSpeechData@@QAEXM@Z
    void SetVolume(f32 arg1);

private:
    // 0x513E20 | ?LoadOneShots@AudSpeechData@@AAEXPAD0@Z
    void LoadOneShots(char* arg1, char* arg2);
};

check_size(AudSpeechData, 0x1C);