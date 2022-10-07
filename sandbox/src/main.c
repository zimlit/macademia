#include <macademia/application.h>

int main() {
    MacademiaApplication a;
    MacademiaApplicationInit(&a);
    MacademiaApplicationRun(&a);
    MacademiaApplicationFree(&a);
}