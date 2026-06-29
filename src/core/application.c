#include "application.h"
#include "../renderer/renderer.h"
#include <stdio.h>
#include "../platform/platform.h"

int application_run(void){

   if (!platform_init())
    {
        return 1;
    }

    if(!renderer_init()){
        platform_shutdown();
        return 1;
    }

    bool running = true;

    while (running)
    {
        running = platform_process_events();

        renderer_begin_frame();
        /*Render del juego*/

        renderer_end_frame();
    }

    platform_shutdown();

    renderer_shutdown();

    return 0;
}