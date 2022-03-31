#include "Random.h"

Random createRandom(){
    Random r;
    r = (Random)malloc(sizeof(struct RANDOM));
    r->alphabet = "ABCDEFGHIJKLMNOPRSTUVWXYZabcdefghijklmnoprstuvwxyz";
    r->numb = &_numb;
    r->randChar = &_randChar;
    r->destroyRandom = &_destroyRandom;
    return r;
}

long _numb(Random r){
    sleep(1);
    time_t sec = time(NULL);
    long second = sec;
    return second;
}

char _randChar(Random r){
    char str;
    while(1){
        int temp = (_numb(r) % (strlen(r->alphabet)));
        if((temp < 0) && (temp > (strlen(r->alphabet)))) continue;
        else{
            str = r->alphabet[temp];
            break;
        } 
    }
    return str;
}

void _destroyRandom(Random r){
    if(r == NULL) return;
    free(r);
}