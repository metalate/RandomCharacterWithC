#ifndef RANDOM_H
#define RANDOM_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#include <unistd.h>
#include <windows.h>

struct RANDOM{
    char* alphabet;
    long(*numb)(struct RANDOM*);
    char(*randChar)(struct RANDOM*);
    void(*destroyRandom)(struct RANDOM*);
};

typedef struct RANDOM* Random;

Random createRandom();
long _numb(Random);
char _randChar(Random);
void _destroyRandom(Random);

#endif