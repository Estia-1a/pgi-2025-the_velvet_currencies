#include <estia-image.h>
#include <stddef.h>
#include "functions.h"
#include <stdlib.h>
#include <stdio.h>

void min_component(char *image) {
    
}

void max_pixel(char *image_path) {
    unsigned char *data;
    int x,y;
    int l,L,c;
   
    int somme;
    int i;
    int r, g, b;

    int lol;  
    int max_somme = 0;
    int max_i = 0;

    for (i=0; i<l*L;i++){
        lol = i*c;
        r = data[lol];
        g = data[lol +1];
        b = data[lol +2];
        somme = r+g+b;

        if (somme>max_somme){
            max_somme = somme;
            max_i = lol;
        }
    }
    int a = max_i/c;
    x = a%L;
    y = a/L;
    printf("max_pixel(%d, %d): %d, %d, %d\n",x,y,data[max_i],data[max_i+1],data[max_i+2]);
}
