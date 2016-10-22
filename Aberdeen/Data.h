#pragma once

//#include "GameObjects.h"
#include "stdafx.h"

//extern class CResources;

class CData
{
protected:
	CResources	m_resources;
	CGameObjects m_gameObjects;

	int initGameObjects(void);

public:

	CData(void);
	~CData(void);

	int initData(void);
	CResources* getResources(void);
	void clearData(void);

	ALLEGRO_FONT* getFont(int fontID);
	CResGraphic* getGraphic(int graphicID);

	CGameObjects* getGameObjects(void);

};

