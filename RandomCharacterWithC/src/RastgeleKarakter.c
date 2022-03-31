#include "RastgeleKarakter.h"

RastKart createRast(){
    RastKart rs;
    rs = (RastKart)malloc(sizeof(struct RastgeleKarakter));
    rs->r = createRandom();
    rs->rndMnyChr = &_rndMnyChr;
    rs->snt2chr = &_snt2chr;
    rs->sntChrArr = &_sntChrArr;
    rs->sentence = &_sentence;
    rs->destroyRastgeleKarakter = &_destroyRastgeleKarakter;
	return rs;
}

char *_rndMnyChr(RastKart rs, int count){
	char *charArray = malloc(sizeof(char) * count);
	int temp = 0;
	for(int i = 0; i < count; i++){
		temp = _randChar(rs->r);
		charArray[i] = temp;
	}
	return charArray;
}

char _snt2chr(RastKart rs, int v1, int v2){
    int temp = 0;
	while(1){
		temp = (_numb(rs->r) % v2);
		if(temp >= v1) break;
	}
	char ctemp = temp;
	return ctemp;
}

char *_sntChrArr(RastKart rs,char *characters){
	int temp = 0;
	int total = strlen(characters);
	char *charArray = malloc(sizeof(char) * total);
	int count = ((_numb(rs->r)) % 10);
	
	while(1){
		if(count < 1){
			count = ((_numb(rs->r)) % 10);
		}
		else break;
	}
	
	for(int i = 0; i < count; i++){
		temp = ((_numb(rs->r)) % total);
		charArray[i] = characters[temp];
	}
	
	return charArray;
}

char *_sentence(RastKart rs,int word){
	int s = 0, x = 0;
    int space = (word - 1);
    int size = space + 10;
    int wordLength = (size / word);
    char *sentence = malloc(sizeof(char) * size);
    while(s < space){
        for(int i = 0; i < wordLength; i++){
            if(x > size) break;
            sentence[x] = _randChar(rs->r);
            x++;
        }
        sentence[x] = ' ';
        s++;
    }
    return sentence;
}

void _destroyRastgeleKarakter(RastKart rs){
    if(rs == NULL) return;
    if(rs->r != NULL)
        _destroyRandom(rs->r);
    free(rs);
}