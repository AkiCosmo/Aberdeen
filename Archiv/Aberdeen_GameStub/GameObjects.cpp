
#include "stdafx.h"



CGameObjects::CGameObjects(void)
{
}


CGameObjects::~CGameObjects(void)
{
}

int CGameObjects::initGameObjects(CData* gameData)
{
	int ret = RET_OKAY;
	
	// first we need a player char. For now we create him via coding

	try {
		CGObjMovable* object = new CGObjMovable();

		if (object) {
			object->m_graphic = gameData->getGraphic(RESG_PLAYERSTD);
			object->m_posX = 490;
			object->m_posY = 340;

			m_gameObjects.push_back(object);
		}
	}
	catch (bad_alloc& ba) {
		cerr << "bad_alloc caught: " << ba.what() << '\n';
	}

	return ret;
}

void CGameObjects::clearGameObjects(void)
{
	// kills all objects and frees memory
	vector <CGObject*>::iterator it;

	for (it = m_gameObjects.begin() ; it != m_gameObjects.end(); ++it) {
		if (*it) {
			delete *it;
		}
	}

}

vector <CGObject*>* CGameObjects::getGameObjectList(void) 
{
	return &m_gameObjects;
}