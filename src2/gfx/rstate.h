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
    gfx:rstate

    0x4B1BB0 | public: void __thiscall gfxMaterial::Reset(void) | ?Reset@gfxMaterial@@QAEXXZ
    0x4B1C00 | public: void __thiscall gfxLight::Reset(void) | ?Reset@gfxLight@@QAEXXZ
    0x4B1C70 | private: void __thiscall gfxRenderState::Init(void) | ?Init@gfxRenderState@@AAEXXZ
    0x4B1DA0 | public: void __thiscall gfxRenderState::Default(void) | ?Default@gfxRenderState@@QAEXXZ
    0x4B2150 | public: unsigned int __thiscall gfxRenderState::LerpRGBA(unsigned int,unsigned int,float) | ?LerpRGBA@gfxRenderState@@QAEIIIM@Z
    0x4B2220 | public: void __thiscall gfxRenderState::LightEnable(int,bool) | ?LightEnable@gfxRenderState@@QAEXH_N@Z
    0x4B2270 | public: void __thiscall gfxRenderState::SetLight(int,struct gfxLight const *) | ?SetLight@gfxRenderState@@QAEXHPBUgfxLight@@@Z
    0x4B22D0 | public: void __thiscall gfxRenderState::DisableAllLights(void) | ?DisableAllLights@gfxRenderState@@QAEXXZ
    0x4B2300 | public: void __thiscall gfxRenderState::GetLight(int,struct gfxLight *) | ?GetLight@gfxRenderState@@QAEXHPAUgfxLight@@@Z
    0x4B2330 | public: void __thiscall gfxRenderState::SetTexSource(int,int) | ?SetTexSource@gfxRenderState@@QAEXHH@Z
    0x4B2350 | public: void __thiscall gfxRenderState::SetBlendSet(enum gfxBlendSet,unsigned char) | ?SetBlendSet@gfxRenderState@@QAEXW4gfxBlendSet@@E@Z
    0x4B25F0 | public: void __thiscall gfxRenderState::SetTexTransform(int,int,bool) | ?SetTexTransform@gfxRenderState@@QAEXHH_N@Z
    0x4B2620 | public: void __thiscall gfxRenderState::SetTexMipmapBias(int,float) | ?SetTexMipmapBias@gfxRenderState@@QAEXHM@Z
    0x4B2640 | public: void __thiscall gfxRenderState::SetTexMatrix(int,class Matrix44 const &) | ?SetTexMatrix@gfxRenderState@@QAEXHABVMatrix44@@@Z
    0x4B2660 | public: void __thiscall gfxRenderState::SetBlendMatrix(int,class Matrix44 const &) | ?SetBlendMatrix@gfxRenderState@@QAEXHABVMatrix44@@@Z
    0x4B2680 | public: static void __cdecl gfxRenderState::SetCard(class Vector3 const &) | ?SetCard@gfxRenderState@@SAXABVVector3@@@Z
    0x4B2750 | public: static void __cdecl gfxRenderState::SetCard(class Vector4 const &) | ?SetCard@gfxRenderState@@SAXABVVector4@@@Z
    0x4B2820 | private: static void __cdecl gfxRenderState::Regenerate(void) | ?Regenerate@gfxRenderState@@CAXXZ
    0x4B2970 | public: static void __cdecl gfxRenderState::SetCamera(class Matrix34 const &) | ?SetCamera@gfxRenderState@@SAXABVMatrix34@@@Z
    0x4B2A20 | public: static void __cdecl gfxRenderState::SetCamera(class Matrix44 const &) | ?SetCamera@gfxRenderState@@SAXABVMatrix44@@@Z
    0x4B2A80 | public: static void __cdecl gfxRenderState::_SetView(class Matrix34 const &) | ?_SetView@gfxRenderState@@SAXABVMatrix34@@@Z
    0x4B2B50 | public: static void __cdecl gfxRenderState::SetCameraFull(class Matrix34 const &) | ?SetCameraFull@gfxRenderState@@SAXABVMatrix34@@@Z
    public: static void __cdecl gfxPipeline::AddPackedColor(class bkBank &,char const *,unsigned int *) | ?AddPackedColor@gfxPipeline@@SAXAAVbkBank@@PBDPAI@Z
    public: static void __cdecl gfxPipeline::AddPackedColor(class bkBank &,char const *,unsigned int *,class datCallback &) | ?AddPackedColor@gfxPipeline@@SAXAAVbkBank@@PBDPAIAAVdatCallback@@@Z
    public: static void __cdecl gfxPipeline::AddWidgets(class bkBank &) | ?AddWidgets@gfxPipeline@@SAXAAVbkBank@@@Z
    public: void __thiscall gfxMaterial::AddWidgets(class bkBank &) | ?AddWidgets@gfxMaterial@@QAEXAAVbkBank@@@Z
    public: void __thiscall gfxLight::AddWidgets(class bkBank &) | ?AddWidgets@gfxLight@@QAEXAAVbkBank@@@Z
    public: static bool gfxRenderState::sm_EnableTextures | ?sm_EnableTextures@gfxRenderState@@2_NA
    unsigned int g_PlaneMask | ?g_PlaneMask@@3IA
    0x5CD600 | private: static int gfxRenderState::sm_MaxActiveLights | ?sm_MaxActiveLights@gfxRenderState@@0HA
    0x5CD604 | private: static int * gfxRenderState::m_TouchedMasks | ?m_TouchedMasks@gfxRenderState@@0PAHA
    bool gfxEnablePreLoad | ?gfxEnablePreLoad@@3_NA
    0x685460 | private: static class Matrix44 gfxRenderState::sm_Camera | ?sm_Camera@gfxRenderState@@0VMatrix44@@A
    0x6854A0 | class gfxRenderStateData LASTRSTATE | ?LASTRSTATE@@3VgfxRenderStateData@@A
    0x6854F0 | private: static bool gfxRenderState::sm_SupportsBlendWithOne | ?sm_SupportsBlendWithOne@gfxRenderState@@0_NA
    0x6854F8 | private: static class Matrix44 gfxRenderState::sm_Composite | ?sm_Composite@gfxRenderState@@0VMatrix44@@A
    0x685538 | private: static class Matrix44 gfxRenderState::sm_World | ?sm_World@gfxRenderState@@0VMatrix44@@A
    0x685578 | public: static struct gfxLight gfxLight::Sun | ?Sun@gfxLight@@2U1@A
    0x685620 | private: static class Matrix44 gfxRenderState::sm_FullComposite | ?sm_FullComposite@gfxRenderState@@0VMatrix44@@A
    0x685660 | private: static class Matrix44 gfxRenderState::sm_View | ?sm_View@gfxRenderState@@0VMatrix44@@A
    0x6856A0 | class gfxRenderState RSTATE | ?RSTATE@@3VgfxRenderState@@A
    0x6856F0 | public: static struct gfxMaterial gfxMaterial::FlatWhite | ?FlatWhite@gfxMaterial@@2U1@A
    0x685738 | private: static class Matrix44 gfxRenderState::sm_Modelview | ?sm_Modelview@gfxRenderState@@0VMatrix44@@A
    0x685778 | private: static int gfxRenderState::m_Touched | ?m_Touched@gfxRenderState@@0HA
    0x68577C | private: static int gfxRenderState::sm_MaxBlendMatrices | ?sm_MaxBlendMatrices@gfxRenderState@@0HA
    0x685780 | private: static int gfxRenderState::m_TouchedMask | ?m_TouchedMask@gfxRenderState@@0HA
    0x685784 | private: static int gfxRenderState::sm_MaxLights | ?sm_MaxLights@gfxRenderState@@0HA
    0x685788 | private: static int gfxRenderState::sm_MaxTextures | ?sm_MaxTextures@gfxRenderState@@0HA
    bool gfxEnableDepthComplexity | ?gfxEnableDepthComplexity@@3_NA
    bool sm_ValidateDevice | ?sm_ValidateDevice@@3_NA
*/

class gfxRenderState
{
public:
    // 0x4B1DA0 | ?Default@gfxRenderState@@QAEXXZ
    void Default();

    // 0x4B22D0 | ?DisableAllLights@gfxRenderState@@QAEXXZ
    void DisableAllLights();

    // 0x4B4C40 | ?DoFlush@gfxRenderState@@QAEXPAVgfxRenderStateData@@@Z
    void DoFlush(class gfxRenderStateData* arg1);

    // 0x4B2300 | ?GetLight@gfxRenderState@@QAEXHPAUgfxLight@@@Z
    void GetLight(i32 arg1, struct gfxLight* arg2);

    // 0x4B2150 | ?LerpRGBA@gfxRenderState@@QAEIIIM@Z
    u32 LerpRGBA(u32 arg1, u32 arg2, f32 arg3);

    // 0x4B2220 | ?LightEnable@gfxRenderState@@QAEXH_N@Z
    void LightEnable(i32 arg1, bool arg2);

    // 0x4B2660 | ?SetBlendMatrix@gfxRenderState@@QAEXHABVMatrix44@@@Z
    void SetBlendMatrix(i32 arg1, class Matrix44 const& arg2);

    // 0x4B2350 | ?SetBlendSet@gfxRenderState@@QAEXW4gfxBlendSet@@E@Z
    void SetBlendSet(enum gfxBlendSet arg1, u8 arg2);

    // 0x4B2270 | ?SetLight@gfxRenderState@@QAEXHPBUgfxLight@@@Z
    void SetLight(i32 arg1, struct gfxLight const* arg2);

    // 0x4B2640 | ?SetTexMatrix@gfxRenderState@@QAEXHABVMatrix44@@@Z
    void SetTexMatrix(i32 arg1, class Matrix44 const& arg2);

    // 0x4B2620 | ?SetTexMipmapBias@gfxRenderState@@QAEXHM@Z
    void SetTexMipmapBias(i32 arg1, f32 arg2);

    // 0x4B2330 | ?SetTexSource@gfxRenderState@@QAEXHH@Z
    void SetTexSource(i32 arg1, i32 arg2);

    // 0x4B25F0 | ?SetTexTransform@gfxRenderState@@QAEXHH_N@Z
    void SetTexTransform(i32 arg1, i32 arg2, bool arg3);

    // 0x4B2970 | ?SetCamera@gfxRenderState@@SAXABVMatrix34@@@Z
    static void SetCamera(class Matrix34 const& arg1);

    // 0x4B2A20 | ?SetCamera@gfxRenderState@@SAXABVMatrix44@@@Z
    static void SetCamera(class Matrix44 const& arg1);

    // 0x4B2B50 | ?SetCameraFull@gfxRenderState@@SAXABVMatrix34@@@Z
    static void SetCameraFull(class Matrix34 const& arg1);

    // 0x4B2680 | ?SetCard@gfxRenderState@@SAXABVVector3@@@Z
    static void SetCard(class Vector3 const& arg1);

    // 0x4B2750 | ?SetCard@gfxRenderState@@SAXABVVector4@@@Z
    static void SetCard(class Vector4 const& arg1);

    // 0x4B2A80 | ?_SetView@gfxRenderState@@SAXABVMatrix34@@@Z
    static void _SetView(class Matrix34 const& arg1);

private:
    // 0x43F480 | ?CheckSet@gfxRenderState@@AAEXAAEE@Z
    void CheckSet(u8& arg1, u8 arg2);

    // 0x4B1C70 | ?Init@gfxRenderState@@AAEXXZ
    void Init();

    // 0x4B2820 | ?Regenerate@gfxRenderState@@CAXXZ
    static void Regenerate();

    // 0x685778 | ?m_Touched@gfxRenderState@@0HA
    static inline extern_var(0x685778, i32, m_Touched);

    // 0x685780 | ?m_TouchedMask@gfxRenderState@@0HA
    static inline extern_var(0x685780, i32, m_TouchedMask);

    // 0x5CD604 | ?m_TouchedMasks@gfxRenderState@@0PAHA
    static inline extern_var(0x5CD604, i32*, m_TouchedMasks);

    // 0x685460 | ?sm_Camera@gfxRenderState@@0VMatrix44@@A
    static inline extern_var(0x685460, class Matrix44, sm_Camera);

    // 0x6854F8 | ?sm_Composite@gfxRenderState@@0VMatrix44@@A
    static inline extern_var(0x6854F8, class Matrix44, sm_Composite);

    // 0x685620 | ?sm_FullComposite@gfxRenderState@@0VMatrix44@@A
    static inline extern_var(0x685620, class Matrix44, sm_FullComposite);

    // 0x5CD600 | ?sm_MaxActiveLights@gfxRenderState@@0HA
    static inline extern_var(0x5CD600, i32, sm_MaxActiveLights);

    // 0x68577C | ?sm_MaxBlendMatrices@gfxRenderState@@0HA
    static inline extern_var(0x68577C, i32, sm_MaxBlendMatrices);

    // 0x685784 | ?sm_MaxLights@gfxRenderState@@0HA
    static inline extern_var(0x685784, i32, sm_MaxLights);

    // 0x685788 | ?sm_MaxTextures@gfxRenderState@@0HA
    static inline extern_var(0x685788, i32, sm_MaxTextures);

    // 0x685738 | ?sm_Modelview@gfxRenderState@@0VMatrix44@@A
    static inline extern_var(0x685738, class Matrix44, sm_Modelview);

    // 0x6854F0 | ?sm_SupportsBlendWithOne@gfxRenderState@@0_NA
    static inline extern_var(0x6854F0, bool, sm_SupportsBlendWithOne);

    // 0x685660 | ?sm_View@gfxRenderState@@0VMatrix44@@A
    static inline extern_var(0x685660, class Matrix44, sm_View);

    // 0x685538 | ?sm_World@gfxRenderState@@0VMatrix44@@A
    static inline extern_var(0x685538, class Matrix44, sm_World);
};

check_size(gfxRenderState, 0x0);

struct gfxMaterial
{
public:
    // 0x4B1BB0 | ?Reset@gfxMaterial@@QAEXXZ
    void Reset();

    // 0x6856F0 | ?FlatWhite@gfxMaterial@@2U1@A
    static inline extern_var(0x6856F0, struct gfxMaterial, FlatWhite);
};

check_size(gfxMaterial, 0x0);

struct gfxLight
{
public:
    // 0x4B1C00 | ?Reset@gfxLight@@QAEXXZ
    void Reset();

    // 0x685578 | ?Sun@gfxLight@@2U1@A
    static inline extern_var(0x685578, struct gfxLight, Sun);
};

check_size(gfxLight, 0x0);

// 0x6854A0 | ?LASTRSTATE@@3VgfxRenderStateData@@A
inline extern_var(0x6854A0, class gfxRenderStateData, LASTRSTATE);

// 0x6856A0 | ?RSTATE@@3VgfxRenderState@@A
inline extern_var(0x6856A0, class gfxRenderState, RSTATE);
