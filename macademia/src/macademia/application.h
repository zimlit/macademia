#ifndef MACADEMIA_APPLICATION_H
#define MACADEMIA_APPLICATION_H

typedef struct {

} MacademiaApplication;

void MacademiaApplicationInit(MacademiaApplication *a);
void MacademiaApplicationRun(MacademiaApplication *a);
void MacademiaApplicationFree(MacademiaApplication *a);

#endif // !MACADEMIA_APPLICATION_H
