#pragma once

#include "stdafx.h"

class CGObjMovable :
	public CGObject

{
	friend class CGameObjects;

public:
	CGObjMovable(void);
	~CGObjMovable(void);

	ALLEGRO_BITMAP* getImage(int moveType);

protected:
	long targetX, targetY;	// target screen position
	float velocity;			// move speed

	int m_moveType;		// moving or not and kind of direction if so (see "move types" in stdafx.h)
};

