#ifndef MENU_PLAYER_H_INCLUDED
#define MENU_PLAYER_H_INCLUDED


void show_menu_player(ALLEGRO_BITMAP* menu_background, ALLEGRO_FONT* font, CONTROLLER_A *controller_a);
void menu_player_keydown(unsigned char *key, CONTROLLER_A* controller_a);

#endif // MENU_PLAYER_H_INCLUDED
