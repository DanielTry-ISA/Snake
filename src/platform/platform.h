#ifndef PLATFORM_H
#define PLATFORM_H

#include <stdbool.h>


bool platform_init(void);

void platform_shutdown(void);

void platform_begin_frame(void);

void platform_end_frame(void);

bool platform_process_events(void);

#endif