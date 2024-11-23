#ifndef TREASURE_OBJECT_H_
#define TREASURE_OBJECT_H_

#include "MapObject.h"
#include "oo.h"

DeclareClass(TreasureObject, MapObject) unsigned int m_value;
EndDeclareClass(TreasureObject, MapObject)

    DeclareClassFunctions(TreasureObject, MapObject)
        EndDeclareClassFunctions(TreasureObject)

#endif
