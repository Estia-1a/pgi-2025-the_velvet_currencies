#include <estia-image.h>
#include <stdio.h>

#include "features.h"
#include "utils.h"

/**
 * @brief Here, you have to code features of the project.
 * Do not forget to commit regurlarly your changes.
 * Your commit messages must contain "#n" with: n = number of the corresponding feature issue.
 * When the feature is totally implemented, your commit message must contain "close #n".
 */

void helloWorld() {
    printf("Hello World !");
}

void first_pixel(char *image) {
    unsigned char *data;
    int width;
    int height;
    int channel_count;
    read_image_data(image, &data, &width, &height, &channel_count);
    printf("first_pixel %d %d %d",data[0],data[1],data[2]);

}

void dimension(char *source_path) {
    unsigned char *data;
    int w;
    int h;
    int n;
    read_image_data(source_path, &data, &w, &h, &n);
    printf("%d , %d",w,h);
}

void tenth_pixel(char *source_path) {
    unsigned char *data;
    int w;
    int h;
    int n;
    read_image_data(source_path, &data, &w, &h, &n);
    printf("tenth_pixel: %d,%d,%d\n",data[29],data[30],data[31]);
    
     

}

void min_pixel(char *image) {
    unsigned char *data;
    int w;
    int h;
    int n;
    int r;
    int g;
    int b;
    int nouvelle_valeur=0;
    read_image_data(image, &data, &w, &h, &n);

    int valeur_min= 255+255+255;
    int valeur_i=0;
    int id = 0;

    for (int i=0;i< w*h;i++) {
        id = i*n;
        r=data[id];
        g=data[id+1];
        b=data[id+2];
        nouvelle_valeur=r+g+b;

        if (nouvelle_valeur<valeur_min) {
            valeur_min =nouvelle_valeur;
            valeur_i=i;
        }
    }

    int y; 
    int x;

    y=valeur_i/w; 
    x=valeur_i%w;


    r= data[valeur_i*n];
    g= data[valeur_i*n+1];
    b= data[valeur_i*n+2];

    printf("min_pixel(%d,%d): %d,%d,%d\n",x,y,r,g,b);
} 