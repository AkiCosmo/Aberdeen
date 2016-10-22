#pragma once

#include "stdafx.h"

class CData;

class CGameObjects
{

protected:
	vector <CGObject*> m_gameObjects;

	long m_selectedObjectID;	// which object is currently selected on the screen

public:
	CGameObjects(void);
	~CGameObjects(void);

	int initGameObjects(CData* gameData);
	void clearGameObjects(void);

	vector <CGObject*>* getGameObjectList(void);
};

