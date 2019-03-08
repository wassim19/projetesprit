#include<stdio.h>
#include<stdlib.h>

#include <SDL/SDL.h>
#include <SDL_image.g>

#include "jeu.h"

SDL_Rect position, positionJoueur;

void jouer(SDL_Surface *ecran)
{
SDL_Surface *link[1]={NULL};
SDL_Surface *linkActuel = NULL;

SDL_Event event;
int continuer=1;
int i=0 , j=0;

//link[BAS]=IMG_Load("");//nom image;

//linkActuel=link[BAS];//Ce link est vers le bas;
position.x=0 ;      

position.y=0 ;



//SDL_Init(SDL_INIT_VIDEO);

//ecran= SDL_SetVideoMode(  ,   ,  ,  SDL_HWSURFACE);
link[BAS]=IMG_Load("");//nom image;

linkActuel=link[BAS];//Ce link est vers le bas;


while(continuer)
{
SDL_WaitEvent(&event);
switch(event.type)
{
case SDL_QUIT;
continuer=0;
break;
}
SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,255,255,255));

position.x=positionJoueur.x*TAILLE_BLOC;
position.y=positionJoueur.y*TAILLE_BLOC;
SDL_BlitSurface(   ,NULL,ecran,&position);

SDL_Flip(ecran);
} 
SDL_FreeSurface();




}




 
