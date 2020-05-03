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
    directmusic:dmusicwavebuffer

    0x518740 | public: __thiscall DMusicWaveBuffer::DMusicWaveBuffer(void) | ??0DMusicWaveBuffer@@QAE@XZ
    0x518760 | public: __thiscall DMusicWaveBuffer::~DMusicWaveBuffer(void) | ??1DMusicWaveBuffer@@QAE@XZ
    0x518770 | public: int __thiscall DMusicWaveBuffer::Create(struct IDirectMusicPort *,struct IDirectSound *) | ?Create@DMusicWaveBuffer@@QAEHPAUIDirectMusicPort@@PAUIDirectSound@@@Z
    0x518930 | public: void __thiscall DMusicWaveBuffer::SetVolume(float) | ?SetVolume@DMusicWaveBuffer@@QAEXM@Z
    0x5189E0 | public: void __thiscall DMusicWaveBuffer::SetPan(float) | ?SetPan@DMusicWaveBuffer@@QAEXM@Z
*/

class DMusicWaveBuffer
{
public:
    // 0x518740 | ??0DMusicWaveBuffer@@QAE@XZ
    DMusicWaveBuffer();

    // 0x518760 | ??1DMusicWaveBuffer@@QAE@XZ
    ~DMusicWaveBuffer();

    // 0x518770 | ?Create@DMusicWaveBuffer@@QAEHPAUIDirectMusicPort@@PAUIDirectSound@@@Z
    i32 Create(struct IDirectMusicPort* arg1, struct IDirectSound* arg2);

    // 0x5189E0 | ?SetPan@DMusicWaveBuffer@@QAEXM@Z
    void SetPan(f32 arg1);

    // 0x518930 | ?SetVolume@DMusicWaveBuffer@@QAEXM@Z
    void SetVolume(f32 arg1);
};

check_size(DMusicWaveBuffer, 0x10);