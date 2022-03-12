#include <engine/shared/config.h>
#include "gamecontext.h"
#include <stdio.h>

void CGameContext::ExecuteCommand(int ClientID, const char* pCmd){
    CPlayer* pPlayer = m_apPlayers[ClientID];
    pCmd ++; // Skip the '/'
    if(!str_comp_nocase(pCmd,"cmdlist"))
    {
        SendChatTarget(ClientID, "----cmdlist----");
        SendChatTarget(ClientID, "/info - Informations about the mod");
    }
    else if(!str_comp_nocase(pCmd,"info"))
    {
            SendChatTarget(ClientID, "----info----");
            SendChatTarget(ClientID, "The mod modified from binf mod");
            SendChatTarget(ClientID, "It made by ErrorDreemurr");
    }
}