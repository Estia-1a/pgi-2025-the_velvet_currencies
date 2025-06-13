#include <estia-image.h>
#include <stddef.h>
#include "functions.h"
#include <stdlib.h>
#include <stdio.h>


/* min pixel*/










/* max pixel*/









/* max component*/









/* min component*/
void min_component(char *source_path, char color){
    unsigned char *data;
    int w;
    int h;
    int n;
    read_image_data(source_path, &data, &w, &h, &n);
    int x,y ;
    int j, min = 255;
    int min_x = 0;
    int min_y = 0;

    if (color == 'R') {
        j = 0 ;
    }
    if (color == 'G') {
        j = 1 ;
    }
    if (color == 'B') {
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
    printf("min_component %d : (%d,%d)", color, min_x, min_y);
}