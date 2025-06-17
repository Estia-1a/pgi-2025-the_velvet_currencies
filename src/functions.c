#include <estia-image.h>
#include <stddef.h>
#include "functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* min pixel*/










/* max pixel*/
void max_pixel(char *image_path) {
    unsigned char *data;
    int x,y;
    int l,L,c;
    read_image_data(image_path,&data,&l,&L,&c);
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









/* max component*/









/* min component*/
void min_component(char *source_path, char *color){
    unsigned char *data;
    int w;
    int h;
    int n;
    read_image_data(source_path, &data, &w, &h, &n);
    int x,y ;
    int j=0, min = 255;
    int min_x = 0;
    int min_y = 0;

    if (strcmp( color, "R")==0) {
        j = 0 ;
    }
    if (strcmp( color, "G")==0) {
        j = 1 ;
    }
    if (strcmp( color, "B")==0) {
        j = 2 ; 
    }
    for (y=0 ; y<h ; y++) {
        for (x=0 ; x<w ; x++) {
            if (data[(y*w+x)*n+j] < min) {
                min = data[(y*w+x)*n+j];
                min_x = x;
                min_y = y;
            }
        }
    }
    printf("min_component %s : (%d,%d)", color, min_x, min_y);
}

void color_invert(const char*image_path){
    unsigned char *data;
    int l,L,c;
    read_image_data(image_path,&data,&l,&L,&c);
 
    int i,x,y;
    for (y=0; y < L; y++) {
        for (x=0; x < l; x++) {
            i = (y * L + x) * c;
            data[i] = 255 - data[i];
            data[i + 1] = 255 - data[i + 1];
            data[i + 2] = 255 - data[i + 2];
        }
   }
    write_image_data("./images/input/image_out.bmp", data, l, L);
}