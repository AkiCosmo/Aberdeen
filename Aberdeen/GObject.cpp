
#include "stdafx.h"
//#include "GObject.h"


CGObject::CGObject(void)
{
}


CGObject::~CGObject(void)
{
}

bool CGObject::isClickable()
{
	return m_clickable;
}

void CGObject::setClickable(bool clickable)
{
	m_clickable = clickable;
}

void CGObject::setIdentifier(long ID)
{
	m_Identifier = ID;
}

long CGObject::getIdentifier(void)
{
	return m_Identifier;
}

void CGObject::setGraphic(CResGraphic* graphic)
{
	if (m_graphic) {
		m_graphic = graphic;

		// redundant data to calc faster in drawing loops
		m_width = al_get_bitmap_width(m_graphic->getImage(RESG_IMG_STYLE_STD));
		m_height = al_get_bitmap_height(m_graphic->getImage(RESG_IMG_STYLE_STD));
	}
}

ALLEGRO_BITMAP* CGObject::getImage() 
{
	return m_graphic->getImage(RESG_IMG_STYLE_STD);
	// later on, the state of the objects determines witch image to return
}

void CGObject::setPos(long posX, long posY)
{
	m_posX = posX;
	m_posY = posY;
}

void CGObject::setPos(int mapPosX, int mapPosY, long posX, long posY)
{
	m_posX = posX;
	m_posY = posY;

	m_mapX = mapPosX;
	m_mapY = mapPosY;
}

long CGObject::getPosX(void)
{
	return m_posX;
}

long CGObject::getPosY(void)
{
	return m_posY;
}

int CGObject::getLevel(void) 
{
	return m_level;
}