#ifndef BATTLE_H_
#define BATTLE_H_

#include "Array.h"
#include "Player.h"
#include "oo.h"

DeclareClass(Battle, Object) Array *m_enemy_team;

int m_can_capture;
int m_can_retreat;
EndDeclareClass(Battle, Object)

    DeclareClassFunctions(Battle, Object)
        DeclareFunction(Battle, int, run, Player *);
EndDeclareClassFunctions(Battle)

#endif
