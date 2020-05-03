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
    phbound:collisionprim

    0x4925D0 | public: static bool __cdecl phCollisionPrim::SphereToPolygonal(class Vector3 const &,float,class phBoundPolygonal const *,class Vector3 &,class Vector3 &,float &) | ?SphereToPolygonal@phCollisionPrim@@SA_NABVVector3@@MPBVphBoundPolygonal@@AAV2@2AAM@Z
    0x492770 | public: static bool __cdecl phCollisionPrim::SphereToPolygonal(class Vector3 const &,float,class phBoundPolygonal const *,class Matrix34 const &,class Vector3 &,class Vector3 &,float &) | ?SphereToPolygonal@phCollisionPrim@@SA_NABVVector3@@MPBVphBoundPolygonal@@ABVMatrix34@@AAV2@3AAM@Z
    0x492A00 | public: static bool __cdecl phCollisionPrim::SegmentToSphere(class Vector3 const &,float,class phSegment const &,class phIntersectionPoint *) | ?SegmentToSphere@phCollisionPrim@@SA_NABVVector3@@MABVphSegment@@PAVphIntersectionPoint@@@Z
    0x492C10 | public: static bool __cdecl phCollisionPrim::SegmentSphereTest(class Vector3 const &,float,class Vector3 const &,class Vector3 const &) | ?SegmentSphereTest@phCollisionPrim@@SA_NABVVector3@@M00@Z
    0x492D00 | public: static bool __cdecl phCollisionPrim::SegmentSphereTest(class Vector3 const &,float,class phSegment const &) | ?SegmentSphereTest@phCollisionPrim@@SA_NABVVector3@@MABVphSegment@@@Z
    0x492E00 | public: static bool __cdecl phCollisionPrim::SegmentSphereTest(float,class phSegment const &) | ?SegmentSphereTest@phCollisionPrim@@SA_NMABVphSegment@@@Z
    0x492F00 | public: static bool __cdecl phCollisionPrim::SegmentSphereTest(float,class Vector3 const &,class Vector3 const &) | ?SegmentSphereTest@phCollisionPrim@@SA_NMABVVector3@@0@Z
*/

struct phCollisionPrim
{
public:
    // 0x492E00 | ?SegmentSphereTest@phCollisionPrim@@SA_NMABVphSegment@@@Z
    static bool SegmentSphereTest(f32 arg1, class phSegment const& arg2);

    // 0x492D00 | ?SegmentSphereTest@phCollisionPrim@@SA_NABVVector3@@MABVphSegment@@@Z
    static bool SegmentSphereTest(class Vector3 const& arg1, f32 arg2, class phSegment const& arg3);

    // 0x492F00 | ?SegmentSphereTest@phCollisionPrim@@SA_NMABVVector3@@0@Z
    static bool SegmentSphereTest(f32 arg1, class Vector3 const& arg2, class Vector3 const& arg3);

    // 0x492C10 | ?SegmentSphereTest@phCollisionPrim@@SA_NABVVector3@@M00@Z
    static bool SegmentSphereTest(
        class Vector3 const& arg1, f32 arg2, class Vector3 const& arg3, class Vector3 const& arg4);

    // 0x492A00 | ?SegmentToSphere@phCollisionPrim@@SA_NABVVector3@@MABVphSegment@@PAVphIntersectionPoint@@@Z
    static bool SegmentToSphere(
        class Vector3 const& arg1, f32 arg2, class phSegment const& arg3, class phIntersectionPoint* arg4);

    // 0x4925D0 | ?SphereToPolygonal@phCollisionPrim@@SA_NABVVector3@@MPBVphBoundPolygonal@@AAV2@2AAM@Z
    static bool SphereToPolygonal(class Vector3 const& arg1, f32 arg2, class phBoundPolygonal const* arg3,
        class Vector3& arg4, class Vector3& arg5, f32& arg6);

    // 0x492770 | ?SphereToPolygonal@phCollisionPrim@@SA_NABVVector3@@MPBVphBoundPolygonal@@ABVMatrix34@@AAV2@3AAM@Z
    static bool SphereToPolygonal(class Vector3 const& arg1, f32 arg2, class phBoundPolygonal const* arg3,
        class Matrix34 const& arg4, class Vector3& arg5, class Vector3& arg6, f32& arg7);
};
