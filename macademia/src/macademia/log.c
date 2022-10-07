#include "log.h"

#include <stdarg.h>
#include <stdio.h>

void printColor(Color c, const char *format, va_list args) {
    #ifdef MA_UNIX

    switch (c) {
    case COLOR_WHITE: break;
    case COLOR_YELLOW: {
        printf("\e[33m");
        break;
    }
    case COLOR_RED: {
        printf("\e[31m");
        break;
    }
    case COLOR_GREEN: {
        printf("\e[32m");
        break;
    }
    }

    vprintf(format, args);

    printf("\e[0m");
    fflush(stdout);
    #endif
}

void info(const char *format, ...) {
    va_list args;
    va_start(args, format);

    printColor(COLOR_GREEN, format, args);

    va_end(args);
}
void warn(const char *format, ...) {
    va_list args;
    va_start(args, format);

    printColor(COLOR_YELLOW, format, args);

    va_end(args);
}
void error(const char *format, ...) {
    va_list args;
    va_start(args, format);

    printColor(COLOR_RED, format, args);

    va_end(args);
}