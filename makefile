prog: fonctions.o
	gcc fonctions.o -o prog -lSDL -lSDL_image -lSDL_ttf -lSDL_mixer -g
fonctions.o:fonctions.c
	gcc -c fonctions.c -lSDL -lSDL_image -lSDL_ttf -lSDL_mixer -g

