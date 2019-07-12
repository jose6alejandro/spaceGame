#include "../include/player.h"

void playerLoad(){

	player.texture = sfTexture_createFromFile("assets/nave.png", NULL);
	player.sprite = sfSprite_create();
	sfSprite_setTexture(player.sprite, player.texture, sfTrue);

	player.vectorPosition.x = 450;
	player.vectorPosition.y = 400;
	sfSprite_setPosition(player.sprite, player.vectorPosition);
	    
	player.vectorScale.x = 0.4;
	player.vectorScale.y = 0.4;
	//sfSprite_setScale(player.sprite, vectorScale);
	sfSprite_scale(player.sprite, player.vectorScale);

	player.vectorOrigin.x = sfTexture_getSize(player.texture).x/2; 
	player.vectorOrigin.y = sfTexture_getSize(player.texture).y/2;
	sfSprite_setOrigin(player.sprite, player.vectorOrigin);
	
	//sfSprite_setRotation(player.sprite, 10);
	//sfSprite_setColor(player.sprite, sfColor_fromRGBA(250, 250, 250, 250));
}

void playerMove(int x, int y){
    player.vectorPosition.x = x; 
    player.vectorPosition.y = y;    
    sfSprite_move(player.sprite, (player.vectorPosition));
}

void playerhandleInput(){
	if(sfKeyboard_isKeyPressed(sfKeyUp) || sfKeyboard_isKeyPressed(sfKeyW))
        playerMove(0, -1);

    if(sfKeyboard_isKeyPressed(sfKeyDown) || sfKeyboard_isKeyPressed(sfKeyS))
        playerMove(0, 1);

    if(sfKeyboard_isKeyPressed(sfKeyLeft) || sfKeyboard_isKeyPressed(sfKeyA))
        playerMove(-1, 0);

    if(sfKeyboard_isKeyPressed(sfKeyRight) || sfKeyboard_isKeyPressed(sfKeyD))
        playerMove(1, 0);
}
