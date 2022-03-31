#include "Random.h"
#include "RastgeleKarakter.h"

int main(){
    
    int word = 4;
	char character[] = "axfr";

    RastKart rs = createRast();

    printf("Rastgele Karakter : %c\n",rs->r->randChar(rs->r));
    printf("Rastgele Karakter : %c\n",rs->r->randChar(rs->r));
    printf("Rastgele Karakter : %c\n",rs->r->randChar(rs->r));
    printf("Rastgele Karakter : %c\n",rs->r->randChar(rs->r));
    printf("Rastgele Karakter : %c\n",rs->r->randChar(rs->r));
    printf("Rastgele Karakter : %c\n",rs->r->randChar(rs->r));
    printf("Rastgele Karakter : %c\n",rs->r->randChar(rs->r));
    printf("Rastgele Karakter : %c\n",rs->r->randChar(rs->r));
    printf("Rastgele Karakter : %c\n",rs->r->randChar(rs->r));
    printf("Rastgele Karakter : %c\n",rs->r->randChar(rs->r));
    printf("\n");
	printf("Rastgele 3 Karakter : %s\n",rs->rndMnyChr(rs,3));
    printf("Rastgele 3 Karakter : %s\n",rs->rndMnyChr(rs,3));
    printf("Rastgele 3 Karakter : %s\n",rs->rndMnyChr(rs,3));
    printf("Rastgele 3 Karakter : %s\n",rs->rndMnyChr(rs,3));
    printf("Rastgele 3 Karakter : %s\n",rs->rndMnyChr(rs,3));
    printf("Rastgele 3 Karakter : %s\n",rs->rndMnyChr(rs,3));
    printf("Rastgele 3 Karakter : %s\n",rs->rndMnyChr(rs,3));
    printf("Rastgele 3 Karakter : %s\n",rs->rndMnyChr(rs,3));
    printf("Rastgele 3 Karakter : %s\n",rs->rndMnyChr(rs,3));
    printf("Rastgele 3 Karakter : %s\n",rs->rndMnyChr(rs,3)); 
    printf("\n");
	printf("Verilen 2 Karakter (a,k) : %c\n",rs->snt2chr(rs,'a','k'));
    printf("Verilen 2 Karakter (a,k) : %c\n",rs->snt2chr(rs,'a','k'));
    printf("Verilen 2 Karakter (a,k) : %c\n",rs->snt2chr(rs,'a','k'));
    printf("Verilen 2 Karakter (a,k) : %c\n",rs->snt2chr(rs,'a','k'));
    printf("Verilen 2 Karakter (a,k) : %c\n",rs->snt2chr(rs,'a','k'));
    printf("Verilen 2 Karakter (a,k) : %c\n",rs->snt2chr(rs,'a','k'));
    printf("Verilen 2 Karakter (a,k) : %c\n",rs->snt2chr(rs,'a','k'));
    printf("Verilen 2 Karakter (a,k) : %c\n",rs->snt2chr(rs,'a','k'));
    printf("Verilen 2 Karakter (a,k) : %c\n",rs->snt2chr(rs,'a','k'));
    printf("Verilen 2 Karakter (a,k) : %c\n",rs->snt2chr(rs,'a','k')); 
    printf("\n");
	printf("Belirtilen Karakterler (a,x,f,r) : %s\n",rs->sntChrArr(rs,character));
    printf("Belirtilen Karakterler (a,x,f,r) : %s\n",rs->sntChrArr(rs,character));
    printf("Belirtilen Karakterler (a,x,f,r) : %s\n",rs->sntChrArr(rs,character));
    printf("Belirtilen Karakterler (a,x,f,r) : %s\n",rs->sntChrArr(rs,character));
    printf("Belirtilen Karakterler (a,x,f,r) : %s\n",rs->sntChrArr(rs,character));
    printf("Belirtilen Karakterler (a,x,f,r) : %s\n",rs->sntChrArr(rs,character));
    printf("Belirtilen Karakterler (a,x,f,r) : %s\n",rs->sntChrArr(rs,character));
    printf("Belirtilen Karakterler (a,x,f,r) : %s\n",rs->sntChrArr(rs,character));
    printf("Belirtilen Karakterler (a,x,f,r) : %s\n",rs->sntChrArr(rs,character));
    printf("Belirtilen Karakterler (a,x,f,r) : %s\n",rs->sntChrArr(rs,character)); 
    printf("\n");
	printf("Rastgele Cumle : %s\n",rs->sentence(rs,word));
    printf("Rastgele Cumle : %s\n",rs->sentence(rs,word));
    printf("Rastgele Cumle : %s\n",rs->sentence(rs,word));
    printf("Rastgele Cumle : %s\n",rs->sentence(rs,word));
    printf("Rastgele Cumle : %s\n",rs->sentence(rs,word));
    printf("Rastgele Cumle : %s\n",rs->sentence(rs,word));
    printf("Rastgele Cumle : %s\n",rs->sentence(rs,word));
    printf("Rastgele Cumle : %s\n",rs->sentence(rs,word));
    printf("Rastgele Cumle : %s\n",rs->sentence(rs,word));
    printf("Rastgele Cumle : %s\n",rs->sentence(rs,word)); 

    rs->destroyRastgeleKarakter(rs);

    return 0;
}