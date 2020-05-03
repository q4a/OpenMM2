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

#include "cullable.h"

/*
    node:node

    0x4A0CE0 | public: __thiscall asNode::asNode(void) | ??0asNode@@QAE@XZ
    0x4A0D00 | public: virtual __thiscall asNode::~asNode(void) | ??1asNode@@UAE@XZ
    0x4A0D70 | public: void __thiscall asNode::SetName(char const *) | ?SetName@asNode@@QAEXPBD@Z
    0x4A0DA0 | public: virtual char const * __thiscall asNode::GetDirName(void) | ?GetDirName@asNode@@UAEPBDXZ
    0x4A0DB0 | public: virtual void __thiscall asNode::Update(void) | ?Update@asNode@@UAEXXZ
    0x4A0DD0 | public: virtual void __thiscall asNode::UpdatePaused(void) | ?UpdatePaused@asNode@@UAEXXZ
    0x4A0E10 | public: virtual void __thiscall asNode::Reset(void) | ?Reset@asNode@@UAEXXZ
    0x4A0E30 | public: virtual void __thiscall asNode::ResChange(int,int) | ?ResChange@asNode@@UAEXHH@Z
    0x4A0E60 | public: int __thiscall asNode::AddChild(class asNode *) | ?AddChild@asNode@@QAEHPAV1@@Z
    0x4A0EE0 | public: int __thiscall asNode::InsertChild(int,class asNode *) | ?InsertChild@asNode@@QAEHHPAV1@@Z
    0x4A0F50 | public: int __thiscall asNode::RemoveChild(int) | ?RemoveChild@asNode@@QAEHH@Z
    0x4A0FD0 | public: int __thiscall asNode::RemoveChild(class asNode *) | ?RemoveChild@asNode@@QAEHPAV1@@Z
    0x4A1010 | public: void __thiscall asNode::RemoveAllChildren(void) | ?RemoveAllChildren@asNode@@QAEXXZ
    0x4A1030 | public: class asNode * __thiscall asNode::GetChild(int) | ?GetChild@asNode@@QAEPAV1@H@Z
    0x4A1060 | public: class asNode * __thiscall asNode::GetNext(void) | ?GetNext@asNode@@QAEPAV1@XZ
    0x4A1070 | public: class asNode * __thiscall asNode::GetLastChild(void) | ?GetLastChild@asNode@@QAEPAV1@XZ
    0x4A10A0 | public: int __thiscall asNode::NumChildren(void) | ?NumChildren@asNode@@QAEHXZ
    0x4A10C0 | public: void __thiscall asNode::SwitchTo(int) | ?SwitchTo@asNode@@QAEXH@Z
    0x4A1120 | public: virtual bool __thiscall asNode::Load(void) | ?Load@asNode@@UAE_NXZ
    0x4A11D0 | public: virtual bool __thiscall asNode::Save(void) | ?Save@asNode@@UAE_NXZ
    public: virtual void __thiscall asNode::AddWidgets(class bkBank &) | ?AddWidgets@asNode@@UAEXAAVbkBank@@@Z
    public: void __thiscall asNode::OpenBrowser(void) | ?OpenBrowser@asNode@@QAEXXZ
    public: virtual void * __thiscall asNode::`scalar deleting destructor'(unsigned int) | ??_GasNode@@UAEPAXI@Z
    0x4A1260 | public: virtual void * __thiscall asNode::`vector deleting destructor'(unsigned int) | ??_EasNode@@UAEPAXI@Z
    [thunk]: __thiscall `vcall'{40,{flat}}' }' | ??_9@$BCI@AE
    [thunk]: __thiscall `vcall'{44,{flat}}' }' | ??_9@$BCM@AE
    0x5B28E8 | const asNode::`vftable' | ??_7asNode@@6B@
*/

class asNode : public asCullable
{
    // const asNode::`vftable' @ 0x5B28E8

public:
    // 0x4A0CE0 | ??0asNode@@QAE@XZ
    asNode();

    // 0x4A1260 | ??_EasNode@@UAEPAXI@Z
    // 0x4A0D00 | ??1asNode@@UAE@XZ
    ~asNode() override;

    // 0x4A0E60 | ?AddChild@asNode@@QAEHPAV1@@Z
    i32 AddChild(class asNode* arg1);

    // 0x4A1030 | ?GetChild@asNode@@QAEPAV1@H@Z
    class asNode* GetChild(i32 arg1);

    // 0x403360 | ?GetClassNameA@asNode@@UAEPADXZ
    char* GetClassNameA();

    // 0x4A1070 | ?GetLastChild@asNode@@QAEPAV1@XZ
    class asNode* GetLastChild();

    // 0x4A1060 | ?GetNext@asNode@@QAEPAV1@XZ
    class asNode* GetNext();

    // 0x4A0EE0 | ?InsertChild@asNode@@QAEHHPAV1@@Z
    i32 InsertChild(i32 arg1, class asNode* arg2);

    // 0x4A10A0 | ?NumChildren@asNode@@QAEHXZ
    i32 NumChildren();

    // 0x4A1010 | ?RemoveAllChildren@asNode@@QAEXXZ
    void RemoveAllChildren();

    // 0x4A0FD0 | ?RemoveChild@asNode@@QAEHPAV1@@Z
    i32 RemoveChild(class asNode* arg1);

    // 0x4A0F50 | ?RemoveChild@asNode@@QAEHH@Z
    i32 RemoveChild(i32 arg1);

    // 0x4A0D70 | ?SetName@asNode@@QAEXPBD@Z
    void SetName(char const* arg1);

    // 0x4A10C0 | ?SwitchTo@asNode@@QAEXH@Z
    void SwitchTo(i32 arg1);

    // 0x4A0DB0 | ?Update@asNode@@UAEXXZ
    virtual void Update();

    // 0x4A0E10 | ?Reset@asNode@@UAEXXZ
    virtual void Reset();

    // 0x4A0E30 | ?ResChange@asNode@@UAEXHH@Z
    virtual void ResChange(i32 arg1, i32 arg2);

    // 0x4A0DD0 | ?UpdatePaused@asNode@@UAEXXZ
    virtual void UpdatePaused();

    // 0x403330 | ?FileIO@asNode@@UAEXAAVdatParser@@@Z
    virtual void FileIO(class datParser& arg1);

    // 0x403340 | ?AfterLoad@asNode@@UAEXXZ
    virtual void AfterLoad();

    // 0x403350 | ?BeforeSave@asNode@@UAEXXZ
    virtual void BeforeSave();

    // 0x4A11D0 | ?Save@asNode@@UAE_NXZ
    virtual bool Save();

    // 0x4A1120 | ?Load@asNode@@UAE_NXZ
    virtual bool Load();

    // 0x407B40 | ?GetClassName@asNode@@UAEPADXZ
    virtual char* GetClassName();

    // 0x4A0DA0 | ?GetDirName@asNode@@UAEPBDXZ
    virtual char const* GetDirName();
};

check_size(asNode, 0x0);
