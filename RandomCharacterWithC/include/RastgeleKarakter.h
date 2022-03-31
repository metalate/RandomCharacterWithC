#ifndef RASTGELEKARAKTER_H
#define RASTGELEKARAKTER_H
#include "Random.h"

struct RastgeleKarakter{
    Random r;
    char*(*rndMnyChr)(struct RastgeleKarakter*, int);
    char (*snt2chr)(struct RastgeleKarakter*, int, int);
    char*(*sntChrArr)(struct RastgeleKarakter*, char *);
    char*(*sentence)(struct RastgeleKarakter*, int);
    void(*destroyRastgeleKarakter)(struct RastgeleKarakter*);
};

typedef struct RastgeleKarakter* RastKart;

RastKart createRast();
char* _rndMnyChr(RastKart, int);
char _snt2chr(RastKart, int, int);
char* _sntChrArr(RastKart, char *);
char* _sentence(RastKart,int);
void _destroyRastgeleKarakter(RastKart);

#endif