#include <stdio.h>
#include "renderer.h"
#include <SDL.h>
#include "../platform/platform.h"


static SDL_Renderer* renderer = NULL;


bool renderer_init(){
    renderer = platform_get_renderer();
    
    
    


    return renderer != NULL;
}

void renderer_begin_frame(void)
{
    SDL_SetRenderDrawColor(renderer, 0,0,0,255);
    SDL_RenderClear(renderer); 

}

void renderer_end_frame(void)
{
    SDL_RenderPresent(renderer);
}

void renderer_shutdown(void)
{
    renderer = NULL;
}
