#pragma once

#include "stdafx.h"

class CGObject
{
public:
	CGObject(void);
	virtual ~CGObject(void);

	bool isClickable();		// can be selected or not
	void setClickable(bool clickable);	

	long getPosX(void);		// get screen position
	long getPosY(void);

	void setPos(long posX, long posY);
	void setPos(int mapPosX, int mapPosY, long posX, long posY);

	void setIdentifier(long ID);
	long getIdentifier(void);

	int getLevel(void);

	void setGraphic(CResGraphic* graphic);

	ALLEGRO_BITMAP* CGObject::getImage();	// get image of the current state of the object. Depends on attributes like move direction etc.

protected:
	long m_Identifier;		// fixed Identifier for specific objects like player char etc.
	bool m_clickable;		// can be selected or not
	long m_posX, m_posY;	// screen position
	int m_width, m_height;	// redundant width and height of CURRENT(!) used image -> has to updated in object logics
	int m_mapX, m_mapY;		// map position		-> do we really need that?
	int m_level;			// is drawn from level 0 up on 

	//bool m_isSelected;		// only one object can be selected at the same time -> can we store it in the object map instead of in the object itself?

	CResGraphic* m_graphic;	// image(es) for the object. 

};

