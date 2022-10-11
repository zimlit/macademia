#include <macademia/application.h>
#include <macademia/events/event.h>

int main() {
    MacademiaApplication a;
    MacademiaApplicationInit(&a);
    MacademiaApplicationRun(&a);
    MacademiaApplicationFree(&a);
}