#include "event.h"

bool MacedemiaEventIsInCategory(MacademiaEvent *e, EventCategory category) {
    return e->categoryflags & category;
}

const char *MacademiaEventGetName(MacademiaEvent *e) {
    e->getName(e);
}

const char *MacademiaEventToString(MacademiaEvent *e) {
    e->toString(e);
}