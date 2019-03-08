#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fonctions.h"



int main(int argc, char**argv[])

{
    SDL_Surface *ecran = NULL, *fond= NULL, *objet = NULL;

    SDL_Rect positionfond, positionobjet;


    positionobjet.x = 295;

    positionobjet.y = 250;

    positionfond.x = 0;

    positionfond.y = 0;



SDL_Init(SDL_INIT_VIDEO);


ecran = SDL_SetVideoMode(1500,600,32, SDL_HWSURFACE);
fond = IMG_Load("128.jpg");
 objet = IMG_Load("per.png");


 int continuer = 1;

while(continuer)

 {
        SDL_Event event;
        SDL_WaitEvent(&event);

        switch(event.type)

 {
            case SDL_KEYDOWN:

     switch(event.key.keysym.sym)

 {
            case SDLK_ESCAPE:
            continuer = 0;

           break;
        }

  break;
        }


 SDL_FillRect (ecran, NULL, SDL_MapRGB(ecran->format, 255,255,255));

    SDL_BlitSurface(fond, NULL, ecran, &positionfond);

       SDL_BlitSurface(objet, NULL, fond, &positionobjet);
        SDL_Flip(ecran);
        SDL_Flip(fond);
        SDL_Flip(objet);
    }

SDL_FreeSurface(objet);
SDL_FreeSurface(fond);

  SDL_Quit;


return EXIT_SUCCESS;
}

