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
    mmnetwork:network

    0x56FCD0 | public: __thiscall asNetwork::asNetwork(void) | ??0asNetwork@@QAE@XZ
    0x56FD70 | public: __thiscall asNetwork::~asNetwork(void) | ??1asNetwork@@QAE@XZ
    0x56FDC0 | public: int __thiscall asNetwork::Initialize(int,int,int) | ?Initialize@asNetwork@@QAEHHHH@Z
    0x56FE20 | public: int __thiscall asNetwork::InitializeLobby(int,int) | ?InitializeLobby@asNetwork@@QAEHHH@Z
    0x56FE90 | public: void __thiscall asNetwork::WaitForLobbyConnection(int) | ?WaitForLobbyConnection@asNetwork@@QAEXH@Z
    0x56FEF0 | public: int __thiscall asNetwork::JoinLobbySession(void) | ?JoinLobbySession@asNetwork@@QAEHXZ
    0x5700E0 | public: void __thiscall asNetwork::SendLobbyProperty(void *,int) | ?SendLobbyProperty@asNetwork@@QAEXPAXH@Z
    0x5701C0 | public: void __thiscall asNetwork::Logout(void) | ?Logout@asNetwork@@QAEXXZ
    0x5702C0 | public: void __thiscall asNetwork::Deallocate(void) | ?Deallocate@asNetwork@@QAEXXZ
    0x570300 | public: int __thiscall asNetwork::CreateInterface(void) | ?CreateInterface@asNetwork@@QAEHXZ
    0x570320 | public: int __thiscall asNetwork::GetNetworkCaps(void) | ?GetNetworkCaps@asNetwork@@QAEHXZ
    0x5703D0 | public: void __thiscall asNetwork::GetProtocols(void) | ?GetProtocols@asNetwork@@QAEXXZ
    0x570400 | public: int __thiscall asNetwork::SetProtocol(int,struct NETCOMMPACK *) | ?SetProtocol@asNetwork@@QAEHHPAUNETCOMMPACK@@@Z
    0x570760 | public: int __thiscall asNetwork::SetProtocol(int) | ?SetProtocol@asNetwork@@QAEHH@Z
    0x570870 | public: void __thiscall asNetwork::Disconnect(void) | ?Disconnect@asNetwork@@QAEXXZ
    0x5708C0 | public: char * __thiscall asNetwork::GetEnumProtocol(int) | ?GetEnumProtocol@asNetwork@@QAEPADH@Z
    0x5708F0 | public: int __thiscall asNetwork::GetNumProtocols(void) | ?GetNumProtocols@asNetwork@@QAEHXZ
    0x570900 | public: int __thiscall asNetwork::CreatePlayer(char *,void *,int) | ?CreatePlayer@asNetwork@@QAEHPADPAXH@Z
    0x5709C0 | public: void __thiscall asNetwork::DestroyPlayer(void) | ?DestroyPlayer@asNetwork@@QAEXXZ
    0x570A30 | public: int __thiscall asNetwork::GetPlayers(struct _GUID *) | ?GetPlayers@asNetwork@@QAEHPAU_GUID@@@Z
    0x570A60 | public: char * __thiscall asNetwork::GetEnumPlayer(int) | ?GetEnumPlayer@asNetwork@@QAEPADH@Z
    0x570A90 | public: unsigned long __thiscall asNetwork::GetPlayerID(int) | ?GetPlayerID@asNetwork@@QAEKH@Z
    0x570AD0 | public: int __thiscall asNetwork::GetNumPlayers(void) | ?GetNumPlayers@asNetwork@@QAEHXZ
    0x570B90 | public: char * __thiscall asNetwork::GetPlayerName(unsigned long) | ?GetPlayerName@asNetwork@@QAEPADK@Z
    0x570C60 | public: int __thiscall asNetwork::GetPlayerName(unsigned long,char *) | ?GetPlayerName@asNetwork@@QAEHKPAD@Z
    0x570D70 | public: void __thiscall asNetwork::SetPlayerData(unsigned long,void *,int) | ?SetPlayerData@asNetwork@@QAEXKPAXH@Z
    0x570E10 | public: int __thiscall asNetwork::GetEnumPlayerData(int,void *,int) | ?GetEnumPlayerData@asNetwork@@QAEHHPAXH@Z
    0x570EE0 | public: int __thiscall asNetwork::GetPlayerData(unsigned long,void *,int) | ?GetPlayerData@asNetwork@@QAEHKPAXH@Z
    0x570F90 | public: unsigned long __thiscall asNetwork::Ping(unsigned long) | ?Ping@asNetwork@@QAEKK@Z
    0x571070 | public: int __thiscall asNetwork::CreateSession(char *,char *,int,struct NETSESSION_DESC *) | ?CreateSession@asNetwork@@QAEHPAD0HPAUNETSESSION_DESC@@@Z
    0x571170 | public: int __thiscall asNetwork::JoinSession(char *,struct _GUID *,char *) | ?JoinSession@asNetwork@@QAEHPADPAU_GUID@@0@Z
    0x571550 | public: void __thiscall asNetwork::CloseSession(void) | ?CloseSession@asNetwork@@QAEXXZ
    0x571590 | public: char * __thiscall asNetwork::GetEnumSession(int) | ?GetEnumSession@asNetwork@@QAEPADH@Z
    0x5715C0 | public: int __thiscall asNetwork::GetEnumSessionID(int) | ?GetEnumSessionID@asNetwork@@QAEHH@Z
    0x5715F0 | public: int __thiscall asNetwork::GetNumSessions(void) | ?GetNumSessions@asNetwork@@QAEHXZ
    0x571600 | public: void __thiscall asNetwork::SealSession(void) | ?SealSession@asNetwork@@QAEXXZ
    0x571700 | public: void __thiscall asNetwork::UnSealSession(void) | ?UnSealSession@asNetwork@@QAEXXZ
    0x571800 | public: void __thiscall asNetwork::GetSessionData(struct NETSESSION_DESC *) | ?GetSessionData@asNetwork@@QAEXPAUNETSESSION_DESC@@@Z
    0x5718E0 | public: void __thiscall asNetwork::SetSessionData(struct NETSESSION_DESC *,char *) | ?SetSessionData@asNetwork@@QAEXPAUNETSESSION_DESC@@PAD@Z
    0x571A00 | public: int __thiscall asNetwork::GetSessionsSynch(int) | ?GetSessionsSynch@asNetwork@@QAEHH@Z
    0x571AB0 | public: void __thiscall asNetwork::GetSessionsAsynch(void) | ?GetSessionsAsynch@asNetwork@@QAEXXZ
    0x571B10 | public: void __thiscall asNetwork::StopSessionsAsynch(void) | ?StopSessionsAsynch@asNetwork@@QAEXXZ
    0x571B90 | public: int __thiscall asNetwork::PollLobby(void) | ?PollLobby@asNetwork@@QAEHXZ
    0x571C30 | public: int __thiscall asNetwork::Update(void) | ?Update@asNetwork@@QAEHXZ
    0x571D50 | public: void __thiscall asNetwork::HandleAppMessage(struct NET_TXHEAD *,unsigned long,unsigned long) | ?HandleAppMessage@asNetwork@@QAEXPAUNET_TXHEAD@@KK@Z
    0x571D90 | public: void __thiscall asNetwork::HandleSysMessage(struct DPMSG_GENERIC *) | ?HandleSysMessage@asNetwork@@QAEXPAUDPMSG_GENERIC@@@Z
    0x572090 | public: void __thiscall asNetwork::GetMessageQueue(unsigned long,unsigned long,unsigned int &,unsigned int &,int) | ?GetMessageQueue@asNetwork@@QAEXKKAAI0H@Z
    0x5720E0 | public: void __thiscall asNetwork::DumpRxQueueInfo(void) | ?DumpRxQueueInfo@asNetwork@@QAEXXZ
    0x572100 | public: void __thiscall asNetwork::DumpTxQueueInfo(void) | ?DumpTxQueueInfo@asNetwork@@QAEXXZ
    public: void __thiscall asNetwork::SetRxTime(float) | ?SetRxTime@asNetwork@@QAEXM@Z
    public: void __thiscall asNetwork::SetTxTime(float) | ?SetTxTime@asNetwork@@QAEXM@Z
    0x572120 | public: void __thiscall asNetwork::ChatMessage(unsigned long,char *) | ?ChatMessage@asNetwork@@QAEXKPAD@Z
    0x572200 | public: int __thiscall asNetwork::Send(unsigned long,int,void *,unsigned long,int) | ?Send@asNetwork@@QAEHKHPAXKH@Z
    0x5723F0 | public: int __thiscall asNetwork::GetMyLogicalIndex(void) | ?GetMyLogicalIndex@asNetwork@@QAEHXZ
    0x572430 | public: int __thiscall asNetwork::GetGameVersion(int) | ?GetGameVersion@asNetwork@@QAEHH@Z
    0x572460 | public: int __thiscall asNetwork::GetEnumSessionStatus(int) | ?GetEnumSessionStatus@asNetwork@@QAEHH@Z
    0x572490 | public: int __thiscall asNetwork::GetEnumSessionLock(int) | ?GetEnumSessionLock@asNetwork@@QAEHH@Z
    0x5724C0 | public: void __thiscall asNetwork::SetEnumSessionLock(int,int) | ?SetEnumSessionLock@asNetwork@@QAEXHH@Z
    0x5724E0 | public: void __thiscall asNetwork::SetTime(float) | ?SetTime@asNetwork@@QAEXM@Z
    0x572500 | public: float __thiscall asNetwork::GetTime(void) | ?GetTime@asNetwork@@QAEMXZ
    0x572540 | public: float __thiscall asNetwork::GetTicks(void) | ?GetTicks@asNetwork@@QAEMXZ
    0x572580 | int __stdcall EnumSessionCallback(struct DPSESSIONDESC2 const *,unsigned long *,unsigned long,void *) | ?EnumSessionCallback@@YGHPBUDPSESSIONDESC2@@PAKKPAX@Z
    0x572640 | int __stdcall EnumConnectionsCallback(struct _GUID const *,void *,unsigned long,struct DPNAME const *,unsigned long,void *) | ?EnumConnectionsCallback@@YGHPBU_GUID@@PAXKPBUDPNAME@@K1@Z
    0x5726D0 | int __stdcall EnumPlayersCallback(unsigned long,unsigned long,struct DPNAME const *,unsigned long,void *) | ?EnumPlayersCallback@@YGHKKPBUDPNAME@@KPAX@Z
    0x572730 | public: int __thiscall asNetwork::JoinSession(int,char *) | ?JoinSession@asNetwork@@QAEHHPAD@Z
    0x5727B0 | public: int __thiscall asNetwork::GetNumModems(void) | ?GetNumModems@asNetwork@@QAEHXZ
    0x5727C0 | public: char * __thiscall asNetwork::GetEnumModem(int) | ?GetEnumModem@asNetwork@@QAEPADH@Z
    0x5727F0 | public: int __thiscall asNetwork::QueryModems(void) | ?QueryModems@asNetwork@@QAEHXZ
    0x572920 | int __stdcall EnumModemAddress(struct _GUID const &,unsigned long,void const *,void *) | ?EnumModemAddress@@YGHABU_GUID@@KPBXPAX@Z
    public: __thiscall netStats::netStats(void) | ??0netStats@@QAE@XZ
    public: virtual __thiscall netStats::~netStats(void) | ??1netStats@@UAE@XZ
    public: virtual void __thiscall netStats::Stats(void) | ?Stats@netStats@@UAEXXZ
    public: virtual void __thiscall netStats::Cull(void) | ?Cull@netStats@@UAEXXZ
    public: virtual void * __thiscall netStats::`vector deleting destructor'(unsigned int) | ??_EnetStats@@UAEPAXI@Z
    public: virtual void * __thiscall netStats::`scalar deleting destructor'(unsigned int) | ??_GnetStats@@UAEPAXI@Z
    0x5B5C88 | _MM2_GUID
    0x5B5C98 | _MM2_ZONESCORE_GUID
    const netStats::`vftable' | ??_7netStats@@6B@
    0x6B3968 | class asNetwork NETMGR | ?NETMGR@@3VasNetwork@@A
    0x6B39E0 | unsigned char * SEND_BUFFER | ?SEND_BUFFER@@3PAEA
*/

class asNetwork
{
public:
    // 0x56FCD0 | ??0asNetwork@@QAE@XZ
    asNetwork();

    // 0x56FD70 | ??1asNetwork@@QAE@XZ
    ~asNetwork();

    // 0x572120 | ?ChatMessage@asNetwork@@QAEXKPAD@Z
    void ChatMessage(u32 arg1, char* arg2);

    // 0x571550 | ?CloseSession@asNetwork@@QAEXXZ
    void CloseSession();

    // 0x570300 | ?CreateInterface@asNetwork@@QAEHXZ
    i32 CreateInterface();

    // 0x570900 | ?CreatePlayer@asNetwork@@QAEHPADPAXH@Z
    i32 CreatePlayer(char* arg1, void* arg2, i32 arg3);

    // 0x571070 | ?CreateSession@asNetwork@@QAEHPAD0HPAUNETSESSION_DESC@@@Z
    i32 CreateSession(char* arg1, char* arg2, i32 arg3, struct NETSESSION_DESC* arg4);

    // 0x5702C0 | ?Deallocate@asNetwork@@QAEXXZ
    void Deallocate();

    // 0x5709C0 | ?DestroyPlayer@asNetwork@@QAEXXZ
    void DestroyPlayer();

    // 0x570870 | ?Disconnect@asNetwork@@QAEXXZ
    void Disconnect();

    // 0x5720E0 | ?DumpRxQueueInfo@asNetwork@@QAEXXZ
    void DumpRxQueueInfo();

    // 0x572100 | ?DumpTxQueueInfo@asNetwork@@QAEXXZ
    void DumpTxQueueInfo();

    // 0x5727C0 | ?GetEnumModem@asNetwork@@QAEPADH@Z
    char* GetEnumModem(i32 arg1);

    // 0x570A60 | ?GetEnumPlayer@asNetwork@@QAEPADH@Z
    char* GetEnumPlayer(i32 arg1);

    // 0x570E10 | ?GetEnumPlayerData@asNetwork@@QAEHHPAXH@Z
    i32 GetEnumPlayerData(i32 arg1, void* arg2, i32 arg3);

    // 0x5708C0 | ?GetEnumProtocol@asNetwork@@QAEPADH@Z
    char* GetEnumProtocol(i32 arg1);

    // 0x571590 | ?GetEnumSession@asNetwork@@QAEPADH@Z
    char* GetEnumSession(i32 arg1);

    // 0x5715C0 | ?GetEnumSessionID@asNetwork@@QAEHH@Z
    i32 GetEnumSessionID(i32 arg1);

    // 0x572490 | ?GetEnumSessionLock@asNetwork@@QAEHH@Z
    i32 GetEnumSessionLock(i32 arg1);

    // 0x572460 | ?GetEnumSessionStatus@asNetwork@@QAEHH@Z
    i32 GetEnumSessionStatus(i32 arg1);

    // 0x572430 | ?GetGameVersion@asNetwork@@QAEHH@Z
    i32 GetGameVersion(i32 arg1);

    // 0x572090 | ?GetMessageQueue@asNetwork@@QAEXKKAAI0H@Z
    void GetMessageQueue(u32 arg1, u32 arg2, u32& arg3, u32& arg4, i32 arg5);

    // 0x5723F0 | ?GetMyLogicalIndex@asNetwork@@QAEHXZ
    i32 GetMyLogicalIndex();

    // 0x570320 | ?GetNetworkCaps@asNetwork@@QAEHXZ
    i32 GetNetworkCaps();

    // 0x5727B0 | ?GetNumModems@asNetwork@@QAEHXZ
    i32 GetNumModems();

    // 0x570AD0 | ?GetNumPlayers@asNetwork@@QAEHXZ
    i32 GetNumPlayers();

    // 0x5708F0 | ?GetNumProtocols@asNetwork@@QAEHXZ
    i32 GetNumProtocols();

    // 0x5715F0 | ?GetNumSessions@asNetwork@@QAEHXZ
    i32 GetNumSessions();

    // 0x570EE0 | ?GetPlayerData@asNetwork@@QAEHKPAXH@Z
    i32 GetPlayerData(u32 arg1, void* arg2, i32 arg3);

    // 0x570A90 | ?GetPlayerID@asNetwork@@QAEKH@Z
    u32 GetPlayerID(i32 arg1);

    // 0x570B90 | ?GetPlayerName@asNetwork@@QAEPADK@Z
    char* GetPlayerName(u32 arg1);

    // 0x570C60 | ?GetPlayerName@asNetwork@@QAEHKPAD@Z
    i32 GetPlayerName(u32 arg1, char* arg2);

    // 0x570A30 | ?GetPlayers@asNetwork@@QAEHPAU_GUID@@@Z
    i32 GetPlayers(struct _GUID* arg1);

    // 0x5703D0 | ?GetProtocols@asNetwork@@QAEXXZ
    void GetProtocols();

    // 0x571800 | ?GetSessionData@asNetwork@@QAEXPAUNETSESSION_DESC@@@Z
    void GetSessionData(struct NETSESSION_DESC* arg1);

    // 0x571AB0 | ?GetSessionsAsynch@asNetwork@@QAEXXZ
    void GetSessionsAsynch();

    // 0x571A00 | ?GetSessionsSynch@asNetwork@@QAEHH@Z
    i32 GetSessionsSynch(i32 arg1);

    // 0x572540 | ?GetTicks@asNetwork@@QAEMXZ
    f32 GetTicks();

    // 0x572500 | ?GetTime@asNetwork@@QAEMXZ
    f32 GetTime();

    // 0x571D50 | ?HandleAppMessage@asNetwork@@QAEXPAUNET_TXHEAD@@KK@Z
    void HandleAppMessage(struct NET_TXHEAD* arg1, u32 arg2, u32 arg3);

    // 0x571D90 | ?HandleSysMessage@asNetwork@@QAEXPAUDPMSG_GENERIC@@@Z
    void HandleSysMessage(struct DPMSG_GENERIC* arg1);

    // 0x56FDC0 | ?Initialize@asNetwork@@QAEHHHH@Z
    i32 Initialize(i32 arg1, i32 arg2, i32 arg3);

    // 0x56FE20 | ?InitializeLobby@asNetwork@@QAEHHH@Z
    i32 InitializeLobby(i32 arg1, i32 arg2);

    // 0x56FEF0 | ?JoinLobbySession@asNetwork@@QAEHXZ
    i32 JoinLobbySession();

    // 0x572730 | ?JoinSession@asNetwork@@QAEHHPAD@Z
    i32 JoinSession(i32 arg1, char* arg2);

    // 0x571170 | ?JoinSession@asNetwork@@QAEHPADPAU_GUID@@0@Z
    i32 JoinSession(char* arg1, struct _GUID* arg2, char* arg3);

    // 0x5701C0 | ?Logout@asNetwork@@QAEXXZ
    void Logout();

    // 0x570F90 | ?Ping@asNetwork@@QAEKK@Z
    u32 Ping(u32 arg1);

    // 0x571B90 | ?PollLobby@asNetwork@@QAEHXZ
    i32 PollLobby();

    // 0x5727F0 | ?QueryModems@asNetwork@@QAEHXZ
    i32 QueryModems();

    // 0x571600 | ?SealSession@asNetwork@@QAEXXZ
    void SealSession();

    // 0x572200 | ?Send@asNetwork@@QAEHKHPAXKH@Z
    i32 Send(u32 arg1, i32 arg2, void* arg3, u32 arg4, i32 arg5);

    // 0x5700E0 | ?SendLobbyProperty@asNetwork@@QAEXPAXH@Z
    void SendLobbyProperty(void* arg1, i32 arg2);

    // 0x5724C0 | ?SetEnumSessionLock@asNetwork@@QAEXHH@Z
    void SetEnumSessionLock(i32 arg1, i32 arg2);

    // 0x570D70 | ?SetPlayerData@asNetwork@@QAEXKPAXH@Z
    void SetPlayerData(u32 arg1, void* arg2, i32 arg3);

    // 0x570760 | ?SetProtocol@asNetwork@@QAEHH@Z
    i32 SetProtocol(i32 arg1);

    // 0x570400 | ?SetProtocol@asNetwork@@QAEHHPAUNETCOMMPACK@@@Z
    i32 SetProtocol(i32 arg1, struct NETCOMMPACK* arg2);

    // 0x5718E0 | ?SetSessionData@asNetwork@@QAEXPAUNETSESSION_DESC@@PAD@Z
    void SetSessionData(struct NETSESSION_DESC* arg1, char* arg2);

    // 0x5724E0 | ?SetTime@asNetwork@@QAEXM@Z
    void SetTime(f32 arg1);

    // 0x571B10 | ?StopSessionsAsynch@asNetwork@@QAEXXZ
    void StopSessionsAsynch();

    // 0x571700 | ?UnSealSession@asNetwork@@QAEXXZ
    void UnSealSession();

    // 0x571C30 | ?Update@asNetwork@@QAEHXZ
    i32 Update();

    // 0x56FE90 | ?WaitForLobbyConnection@asNetwork@@QAEXH@Z
    void WaitForLobbyConnection(i32 arg1);
};

check_size(asNetwork, 0x0);

// 0x572640 | ?EnumConnectionsCallback@@YGHPBU_GUID@@PAXKPBUDPNAME@@K1@Z
i32 __stdcall EnumConnectionsCallback(
    struct _GUID const* arg1, void* arg2, u32 arg3, struct DPNAME const* arg4, u32 arg5, void* arg6);

// 0x572920 | ?EnumModemAddress@@YGHABU_GUID@@KPBXPAX@Z
i32 __stdcall EnumModemAddress(struct _GUID const& arg1, u32 arg2, void const* arg3, void* arg4);

// 0x5726D0 | ?EnumPlayersCallback@@YGHKKPBUDPNAME@@KPAX@Z
i32 __stdcall EnumPlayersCallback(u32 arg1, u32 arg2, struct DPNAME const* arg3, u32 arg4, void* arg5);

// 0x572580 | ?EnumSessionCallback@@YGHPBUDPSESSIONDESC2@@PAKKPAX@Z
i32 __stdcall EnumSessionCallback(struct DPSESSIONDESC2 const* arg1, u32* arg2, u32 arg3, void* arg4);

// 0x6B3968 | ?NETMGR@@3VasNetwork@@A
inline extern_var(0x6B3968, class asNetwork, NETMGR);

// 0x6B39E0 | ?SEND_BUFFER@@3PAEA
inline extern_var(0x6B39E0, u8*, SEND_BUFFER);

// 0x5B5C88 | _MM2_GUID (Skipped: void)

// 0x5B5C98 | _MM2_ZONESCORE_GUID (Skipped: void)
