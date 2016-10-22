#pragma once

#pragma once

// STANDRD LIBS
#include <stdio.h>

// ALLEGRO LIBS
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include "allegro5/allegro_image.h"
#include "allegro5/allegro_native_dialog.h"
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>

// TEMPLATE LIBS
#include <vector>
#include <sstream>
#include <cstdlib>
#include <iostream>
#include <new>

using namespace std;

/*
// GAME DECLARATIONS
#include "ResGraphics.h" // single graphic resource
#include "Resource.h"	// graphics management [and also for sounds in the future]
#include "GObject.h"	// a single game object
#include "GObjMovable.h"	// kind of movable object
#include "GameObjects.h"	// management of all game objects
#include "Data.h"		// central game data management
#include "Tile.h"		// single Map tile
#include "GameEvent.h"	// to mamange events
#include "MainMap.h"	// Main map
#include "Screen.h"		// Game screen and all visuals
*/
#include "ResGraphics.h"
#include "Resource.h"	// graphics management [and also for sounds in the future]
#include "GameEvent.h"  // event management for all incoming events
#include "GObject.h"
#include "GameObjects.h"
#include "Data.h"		// central data objects management
#include "GObjMovable.h"
#include "UIViewBase.h" // Basic UI View - central screen object
#include "UI.h"			// UI control and objects
#include "Game.h"		// central game control, startup 

// RETRUN STATUS
#define RET_OKAY 0
#define RET_ERR -1

// MOUSE EVENTS
#define NUM_MOUSEBUTTONS	2
#define MOUSEBUTTON_DOWN	1
#define MOUSEBUTTON_UP		2
#define MOUSEBUTTONLEFT		1
#define MOUSEBUTTONRIGHT	2

// GRAPHIC IDs
#define RESG_MAPTILE		0
#define RESG_MAPTILEACTIVE	1
#define RESG_PLAYERSTD		2

// move types
#define MOVE_NONE			0
#define MOVE_LEFT			1
#define MOVE_RIGHT			2
#define MOVE_UP				3
#define MOVE_DOWN			4

#define RESG_IMG_STYLE_STD	0

// FONT IDs
#define RESFONT_STD		0

