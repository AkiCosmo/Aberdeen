#include "stdafx.h"


int main(int argc, char **argv)
{
//	CGame game;

	// init Allegro
	if (!al_init()) {
		fprintf(stderr, "failed to initialize allegro!\n");
		return -1;
	}
	//	if (!al_init_primitives_addon()) {
	//		fprintf(stderr, "failed to initialize primitives!\n");
	//		return -1;
	//	}
	//
	al_init_font_addon(); // initialize the font addon
	al_init_ttf_addon();// initialize the ttf (True Type Font) addon

						// initialize Keyboard
	al_install_keyboard();
	// initialize mouse
	al_install_mouse();

	if (!al_init_image_addon()) {
		fprintf(stderr, "failed to initialize image addon!\n");
		return -1;
	}

	// init game class
//	if (RET_ERR == game.initGame()) {
//		return RET_ERR;
//	}

//	game.gameLoop();

//	game.exitGame();

	return 0;
}
