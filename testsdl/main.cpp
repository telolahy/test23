#include <exception>
#include <string>
#include <iostream>
#include <SDL.h>
#include <stdio.h>



int main( int argc, char * argv[] )
{
    if (SDL_Init(SDL_INIT_VIDEO) == -1) // D�marrage de la SDL. Si erreur :
    {
        fprintf(stderr, "Erreur d'initialisation de la SDL : %s\n",SDL_GetError()); // �criture de l'erreur
        exit(EXIT_FAILURE); // On quitte le programme
    }
    SDL_Quit();
    return EXIT_SUCCESS;
}
