#include "platform.h"
#include <SDL.h>
#include <stdio.h>

static SDL_Window* window = NULL;
static SDL_Renderer* renderer = NULL;

bool platform_init(void)
{
    return true;
}

bool platform_process_events(void)
{
    return false;
}

void platform_shutdown(void)
{
}