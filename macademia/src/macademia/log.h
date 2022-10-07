#ifndef MACADEMIA_LOG_H
#define MACADEMIA_LOG_H

typedef enum {
    COLOR_WHITE,
    COLOR_YELLOW,
    COLOR_RED,
    COLOR_GREEN,
} Color;

void info(const char *format, ...);
void warn(const char *format, ...);
void error(const char *format, ...);

#endif