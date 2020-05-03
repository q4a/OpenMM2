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
    dgragdoll:linkdata

    0x5A8890 | public: __thiscall dgLinkData::dgLinkData(void) | ??0dgLinkData@@QAE@XZ
    public: void __thiscall dgLinkData::AddWidgets(class bkBank &) | ?AddWidgets@dgLinkData@@QAEXAAVbkBank@@@Z
    0x5A88E0 | public: void __thiscall dgLinkData::FileIO(class datParser &) | ?FileIO@dgLinkData@@QAEXAAVdatParser@@@Z
*/

class dgLinkData
{
public:
    // 0x5A8890 | ??0dgLinkData@@QAE@XZ
    dgLinkData();

    // 0x5A88E0 | ?FileIO@dgLinkData@@QAEXAAVdatParser@@@Z
    void FileIO(class datParser& arg1);
};

check_size(dgLinkData, 0x0);