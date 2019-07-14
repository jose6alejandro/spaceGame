#ifndef _TEXT_H
#define _TEXT_H

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <string.h>
#include "definition.h"

typedef struct{

    sfFont* font;
    sfText* text;
    sfText* text2;
    sfText* text3;
    sfText* text4;

    sfVector2f  vectorPosition,
                vectorScale,
                vectorOrigin;

}Text; 

Text textFont;
char timeString [3];

void textMenuLoad(sfRenderWindow*);
void textLoad(sfRenderWindow*, unsigned int);
void textConfig(sfRenderWindow*, sfText*,
				const char*, unsigned int,
				unsigned int, sfColor, unsigned int);

#endif //_TEXT_H