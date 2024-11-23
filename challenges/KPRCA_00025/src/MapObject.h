#ifndef MAP_OBJECT_H_
#define MAP_OBJECT_H_

#include "Buffer.h"
#include "Player.h"
#include "oo.h"

DeclareClass(MapObject, Object) char m_icon;
EndDeclareClass(MapObject, Object)

    DeclareClassFunctions(MapObject, Object)
        DeclareFunction(MapObject, int, on_collide, Player *);
DeclareFunction(MapObject, void, deserialize, Buffer *);
DeclareFunction(MapObject, void, serialize, Buffer *);
EndDeclareClassFunctions(MapObject)

    MapObject *MapObject_deserialize(Buffer *buf);

#endif
