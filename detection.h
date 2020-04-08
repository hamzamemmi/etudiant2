#ifndef entite_H_INCLUDED
#define entite_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <stdbool.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>
typedef struct
{	
 SDL_Surface *perso;
 SDL_Rect posperso;
 SDL_Rect anime_perso[16];
 int frameNumber, frameTimer;
}perso;

typedef struct {
SDL_Surface *entity ; 
SDL_Rect pos_entity;
SDL_Rect anim_entity[70];
int cont_entity;
int type;
int col;
}entity ;


void detection_collision(perso *p, entity* e);


#endif 

