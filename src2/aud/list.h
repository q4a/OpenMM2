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
    aud:list

    0x5A5C30 | public: void __thiscall audList::Init(void) | ?Init@audList@@QAEXXZ
    0x5A5C40 | public: class audList * __thiscall audList::LinkNext(class audList *) | ?LinkNext@audList@@QAEPAV1@PAV1@@Z
    0x5A5CB0 | public: class audList * __thiscall audList::LinkPrev(class audList *) | ?LinkPrev@audList@@QAEPAV1@PAV1@@Z
    0x5A5CD0 | public: class audList * __thiscall audList::GetNext(void) | ?GetNext@audList@@QAEPAV1@XZ
    0x5A5CE0 | public: class audList * __thiscall audList::GetPrev(void) | ?GetPrev@audList@@QAEPAV1@XZ
    0x5A5CF0 | public: class audList * __thiscall audList::SetNext(class audList *) | ?SetNext@audList@@QAEPAV1@PAV1@@Z
    0x5A5D10 | public: class audList * __thiscall audList::SetPrev(class audList *) | ?SetPrev@audList@@QAEPAV1@PAV1@@Z
    0x5A5D30 | public: bool __thiscall audList::Unlink(void) | ?Unlink@audList@@QAE_NXZ
    0x5A5D60 | public: int __thiscall audList::Count(void) | ?Count@audList@@QAEHXZ
    0x5A5D80 | public: void * __thiscall audList::FindObjectAt(int) | ?FindObjectAt@audList@@QAEPAXH@Z
    0x5A5DA0 | public: class audList * __thiscall audList::FindObject(void *) | ?FindObject@audList@@QAEPAV1@PAX@Z
    0x5A5DE0 | public: int __thiscall audList::FindObjectPos(void *) | ?FindObjectPos@audList@@QAEHPAX@Z
*/

class audList
{
public:
    // 0x5A5D60 | ?Count@audList@@QAEHXZ
    i32 Count();

    // 0x5A5DA0 | ?FindObject@audList@@QAEPAV1@PAX@Z
    class audList* FindObject(void* arg1);

    // 0x5A5D80 | ?FindObjectAt@audList@@QAEPAXH@Z
    void* FindObjectAt(i32 arg1);

    // 0x5A5DE0 | ?FindObjectPos@audList@@QAEHPAX@Z
    i32 FindObjectPos(void* arg1);

    // 0x5A5CD0 | ?GetNext@audList@@QAEPAV1@XZ
    class audList* GetNext();

    // 0x5A5CE0 | ?GetPrev@audList@@QAEPAV1@XZ
    class audList* GetPrev();

    // 0x5A5C30 | ?Init@audList@@QAEXXZ
    void Init();

    // 0x5A5C40 | ?LinkNext@audList@@QAEPAV1@PAV1@@Z
    class audList* LinkNext(class audList* arg1);

    // 0x5A5CB0 | ?LinkPrev@audList@@QAEPAV1@PAV1@@Z
    class audList* LinkPrev(class audList* arg1);

    // 0x5A5CF0 | ?SetNext@audList@@QAEPAV1@PAV1@@Z
    class audList* SetNext(class audList* arg1);

    // 0x5A5D10 | ?SetPrev@audList@@QAEPAV1@PAV1@@Z
    class audList* SetPrev(class audList* arg1);

    // 0x5A5D30 | ?Unlink@audList@@QAE_NXZ
    bool Unlink();
};

check_size(audList, 0x0);
