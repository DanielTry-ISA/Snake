#include "platform.h"
#include <SDL.h>
#include <stdio.h>

static SDL_Window* window = NULL;
static SDL_Renderer* renderer = NULL;

bool platform_init(void)
{
    if (SDL_Init(SDL_INIT_VIDEO)!=0){
        printf("Error inicializando SDL: %s\n", SDL_GetError());
        return false;
    }
    window = SDL_CreateWindow("Snake Retro", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 400, SDL_WINDOW_SHOWN);
    if (window == NULL){
                printf("Error inicializando SDL: %s\n", SDL_GetError());
                SDL_Quit();
                return false;
    }
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (renderer == NULL)
    {
        printf("Error creando renderer: %s\n", SDL_GetError());

        SDL_DestroyWindow(window);
        SDL_Quit();

        return false;
    }

    return true;
}


bool platform_process_events(void)
{
    SDL_Event event;
    while (SDL_PollEvent(&event))
    {
        if(event.type == SDL_QUIT)
        {
            return false;
        }
    }
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);
    return true;
}

void platform_shutdown(void)
{
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);

    SDL_Quit();
}