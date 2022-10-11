#ifndef MACADEMIA_EVENT_H
#define MACADEMIA_EVENT_H

#include "../core.h"
#include <stdbool.h>

typedef enum {
    WindowClose, WindowResize, WindowFocus, WindowLostFocus, WindowMoved,
    AppTick, AppUpdate, AppRender,
    KeyPressed, KeyReleased,
    MouseButtonPressed, MouseButtonReleased, MouseMoved, MouseScrolled
} EventType;

typedef enum { 
    EventCategoryApplication = BIT(0), 
    EventCategoryInput = BIT(1), 
    EventCategoryKeyboard = BIT(2), 
    EventCategoryMouse = BIT(4)
} EventCategory;

typedef struct MacademiaEvent {
    EventType type;
    int categoryflags;
    bool handled;
    const char *(*getName)(struct MacademiaEvent *);
    const char *(*toString)(struct MacademiaEvent *);
} MacademiaEvent;

#endif