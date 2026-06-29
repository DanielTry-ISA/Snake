#ifndef PLATFORM_H
#define PLATFORM_H

#include <stdbool.h>
#include <SDL.h>



bool platform_init(void);

void platform_shutdown(void);



bool platform_process_events(void);

SDL_Renderer* platform_get_renderer(void);



#endif