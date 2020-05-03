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
    banger:tree

    0x442B00 | public: __thiscall dgTreeRenderer::dgTreeRenderer(void) | ??0dgTreeRenderer@@QAE@XZ
    0x442B20 | public: void __thiscall dgTreeRenderer::AddTree(class dgBangerInstance *,int) | ?AddTree@dgTreeRenderer@@QAEXPAVdgBangerInstance@@H@Z
    0x442B50 | public: void __thiscall dgTreeRenderer::RenderTrees(void) | ?RenderTrees@dgTreeRenderer@@QAEXXZ
    0x627680 | private: static class dgTreeRenderer * dgTreeRenderer::sm_Instance | ?sm_Instance@dgTreeRenderer@@0PAV1@A
*/

class dgTreeRenderer
{
public:
    // 0x442B00 | ??0dgTreeRenderer@@QAE@XZ
    dgTreeRenderer();

    // 0x442B20 | ?AddTree@dgTreeRenderer@@QAEXPAVdgBangerInstance@@H@Z
    void AddTree(class dgBangerInstance* arg1, i32 arg2);

    // 0x442B50 | ?RenderTrees@dgTreeRenderer@@QAEXXZ
    void RenderTrees();

private:
    // 0x627680 | ?sm_Instance@dgTreeRenderer@@0PAV1@A
    static inline extern_var(0x627680, class dgTreeRenderer*, sm_Instance);
};

check_size(dgTreeRenderer, 0x0);