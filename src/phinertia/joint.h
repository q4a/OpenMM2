/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2019 Brick

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
    phinertia:joint

    0x595B90 | public: __thiscall phJoint::phJoint(void) | ??0phJoint@@QAE@XZ
    0x595BE0 | public: __thiscall phJoint::phJoint(class phInertialCS *,class phInertialCS *,class Vector3 const &,class Vector3 const &) | ??0phJoint@@QAE@PAVphInertialCS@@0ABVVector3@@1@Z
    0x595C10 | public: __thiscall phJoint::phJoint(class phInertialCS *,class phInertialCS *,class Vector3 const &) | ??0phJoint@@QAE@PAVphInertialCS@@0ABVVector3@@@Z
    0x595C40 | public: void __thiscall phJoint::Init(class phInertialCS *,class phInertialCS *,class Vector3 const &) | ?Init@phJoint@@QAEXPAVphInertialCS@@0ABVVector3@@@Z
    0x595D10 | public: void __thiscall phJoint::Init(class phInertialCS *,class phInertialCS *,class Vector3 const &,class Vector3 const &) | ?Init@phJoint@@QAEXPAVphInertialCS@@0ABVVector3@@1@Z
    0x595DB0 | public: void __thiscall phJoint::Reset(void) | ?Reset@phJoint@@QAEXXZ
    0x595DD0 | public: void __thiscall phJoint::Update(void) | ?Update@phJoint@@QAEXXZ
    0x595DF0 | public: virtual void __thiscall phJoint::ComputeInvMassMatrix(void) | ?ComputeInvMassMatrix@phJoint@@UAEXXZ
    0x595E90 | public: virtual void __thiscall phJoint::ComputeInvMassMatrix(class phInertialCS *,class Matrix34 &,class Vector3 const &) const | ?ComputeInvMassMatrix@phJoint@@UBEXPAVphInertialCS@@AAVMatrix34@@ABVVector3@@@Z
    0x595EA0 | public: virtual void __thiscall phJoint::ComputeJointForce(void) | ?ComputeJointForce@phJoint@@UAEXXZ
    0x5960C0 | public: virtual void __thiscall phJoint::ComputeJointPush(void) | ?ComputeJointPush@phJoint@@UAEXXZ
    public: virtual void __thiscall phJoint::DrawPhysics(class Vector3 const &) const | ?DrawPhysics@phJoint@@UBEXABVVector3@@@Z
    public: void __thiscall phJoint::AddWidgets(class bkBank *) | ?AddWidgets@phJoint@@QAEXPAVbkBank@@@Z
    0x5961F0 | public: virtual bool __thiscall phJoint::IsBroken(void) const | ?IsBroken@phJoint@@UBE_NXZ
    0x5B8690 | const phJoint::`vftable' | ??_7phJoint@@6B@
*/

// #include "hooking.h"
