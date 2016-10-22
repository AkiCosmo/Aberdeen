#include "stdafx.h"

bool CUI::init()
{
	int iRet = RET_OKAY;

	m_display = NULL;

	iRet = initDisplay();
	
	return iRet;
}
          
void CUI::clearUI()
{
	if (m_display) {
		al_destroy_display(m_display);
	}

	return;
}

int CUI::initDisplay(void) {

	int iRet = RET_OKAY;

	m_display = al_create_display(1000, 700);

	if (!m_display) {
		fprintf(stderr, "failed to create display!\n");
		iRet = RET_ERR;
	}

	return iRet;
}

//	***** clearScreen ********************
// clear all local objects - should be called at game exit
//
// gameData -> pointer to central game data instance
// ***************************************
//void CUI::clearScreen(void) {
//
//	//m_mainMap.clearMap();
//
//	if (m_display) {
//		al_destroy_display(m_display);
//	}
//
//}

ALLEGRO_DISPLAY* CUI::getDisplay(void) {
	return m_display;
}

void CUI::draw(CData *gameData) {

	al_set_target_bitmap(al_get_backbuffer(m_display));

	al_clear_to_color(al_map_rgb(0, 0, 0));

	//m_mainMap.draw(m_display, gameData);

	al_flip_display();
}

CGameEvent* CUI::processEvent(CGameEvent *gameEvent) {

	switch (gameEvent->getEventType()) {
	case MOUSEBUTTON_DOWN:
		// mousebutton pressed
		// curerntly we only have a map on the screen, so the map should hande it
		//m_mainMap.processEvent(gameEvent);
		break;
	}
	return NULL;
}