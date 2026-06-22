#include "application.h"
#include <stdio.h>
#include "../platform/platform.h"

int application_run(void){

    if(!platform_init())
    {
        return 1;
    }
    bool running = true;
    while(running){
        printf("Si funciona");
        running = platform_process_events();
    }

    platform_shutdown();

    return 0;
}