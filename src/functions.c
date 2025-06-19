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
    read_image_data(image_path, &data, &l, &L, &c);
   
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

void color_invert(char*image_path){
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

void color_gray(char*image_path){
    unsigned char *data;
    int l;
    int L;
    int c;
    int i;
    int id;
    int moy = 0;
    read_image_data(image_path, &data, &l, &L, &c);
    unsigned char*data1 = malloc(l*L*c);

    for (i=0; i<l*L; i++){
        id = i*c;
        moy = (data[id]+data[id+1]+data[id+2])/3;
        data1[id + 0]= moy;
        data1[id + 1] = moy;
        data1[id + 2]= moy;
    }    
    write_image_data("./images/input/image_out.bmp", data1, l, L);
}

void color_gray_luminance(char*image_path){
    unsigned char *data;
    int l;
    int L;
    int c;
    int i;
    int id;
    int moy = 0;
    read_image_data(image_path, &data, &l, &L, &c);
    unsigned char*data1 = malloc(l*L*c);

    for (i=0; i<l*L; i++){
        id = i*c;
        moy = (0.21*data[id]+0.72*data[id+1]+0.07*data[id+2])/3;
        data1[id + 0]= moy;
        data1[id + 1] = moy;
        data1[id + 2]= moy;
    }    
    write_image_data("./images/input/image_out.bmp", data1, l, L);
}

void mirror_horizontal(char*image_path){
    unsigned char *data;
    int l,L,c;
    read_image_data(image_path,&data,&l,&L,&c);
    
    unsigned char *data_rotation = malloc(l * L * c);

    int i,id,x,y,yd,xd;
    for (y=0; y < L; y++) {
        for (x=0; x < l; x++) {
            i = (y * l + x) * c;
            xd = l - 1 - x;
            yd = y;
            id = (yd * l + xd) * c;
            data_rotation[id + 2] = data[i +2];
            data_rotation[id + 1] = data[i + 1];
            data_rotation[id] = data[i ];
        }
   }
    write_image_data("./images/input/image_out.bmp", data_rotation, l, L);
}

void mirror_vertical(char*image_path){
    unsigned char *data;
    int l,L,c;
    read_image_data(image_path,&data,&l,&L,&c);
    
    unsigned char *data_rotation = malloc(l * L * c);

    int i,id,x,y,yd,xd;
    for (y=0; y < L; y++) {
        for (x=0; x < l; x++) {
            i = (y * l + x) * c;
            xd = x;
            yd = L - 1 - y;
            id = (yd * l + xd) * c;
            data_rotation[id + 2] = data[i +2];
            data_rotation[id + 1] = data[i + 1];
            data_rotation[id] = data[i ];
        }
   }
    write_image_data("./images/input/image_out.bmp", data_rotation, l, L);
}

void mirror_total(char*image_path){
    unsigned char *data;
    int l,L,c;
    read_image_data(image_path,&data,&l,&L,&c);
    
    unsigned char *data_rotation = malloc(l * L * c);

    int i,id,x,y,yd,xd;
    for (y=0; y < L; y++) {
        for (x=0; x < l; x++) {
            i = (y * l + x) * c;
            xd = x;
            yd = L - 1 - y;
            id = (yd * l + xd) * c;
            data_rotation[id + 2] = data[i +2];
            data_rotation[id + 1] = data[i + 1];
            data_rotation[id] = data[i ];
        }
   }

   unsigned char *data_rotation2 = malloc(l * L * c);

    int i2,id2,x2,y2,yd2,xd2;
    for (y2=0; y2 < L; y2++) {
        for (x2=0; x2 < l; x2++) {
            i2 = (y2 * l + x2) * c;
            xd2 = l - 1 - x2;
            yd2 = y2;
            id2 = (yd2 * l + xd2) * c;
            data_rotation2[id2 + 2] = data_rotation[i2 +2];
            data_rotation2[id2 + 1] = data_rotation[i2 + 1];
            data_rotation2[id2] = data_rotation[i2 ];
        }
   }
    write_image_data("./images/input/image_out.bmp", data_rotation2, l, L);
}

void scale_crop(char *image_path, int xc, int yc, int lc, int Lc) {
    unsigned char *data;
    int l, L, c;
    read_image_data(image_path, &data, &l, &L, &c);

    unsigned char *data_crop = malloc(lc * Lc * c);

    int x_debut = xc - lc/2;
    int y_debut = yc - Lc/2 ;
    int id, i_crop;

    int xd,yd;
    int x_crop, y_crop;
    for (y_crop = 0; y_crop < Lc; y_crop++) {
        for (x_crop = 0; x_crop < lc; x_crop++) {
            xd = x_debut + x_crop;
            yd = y_debut + y_crop;

            if (xd >= 0 && xd < l && yd >= 0 && yd < L) {
                id = (yd * l + xd) * c;
                i_crop = (y_crop * lc + x_crop) * c;

                data_crop[i_crop]     = data[id];
                data_crop[i_crop + 1] = data[id + 1];
                data_crop[i_crop + 2] = data[id + 2];
            }
        }
    }

    write_image_data("./images/input/image_out.bmp", data_crop, lc, Lc);
}