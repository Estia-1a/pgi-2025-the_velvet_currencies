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

void max_component(char *image, char *RGB) {
    unsigned char *data;
    int value_max=-1;
    int x=0;
    int x_max=0;
    int y=0;
    int y_max=0;
    int max=0;
    int data;
    int j;
    int w;
    int h;
    int n;
    read_image_data(image, &data, &w, &h, &n);
    if (RGB == 'R'){
        j=0;}
    else if (RGB == 'G'){
        j=1;}
    else if (RGB == 'B'){
        j=2;};
    for (int y=0; y < h; y++) {
        for (int x=0; x < w; x++) {
            if (data[(y*w+x)*n+j]>max){
                data[(y*w+x)*n+j]=max;
                x_max=x;
                y_max=y;
            }
        }
    }
    printf("max_component %c (%d, %d): %d\n", RGB, x_max, y_max, max);
}
