#include <estia-image.h>
#include <stddef.h>
#include "utils.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * @brief Here, you have to define functions of the pixel struct : getPixel and setPixel.
 * 
 */

pixelRGB * get_pixel(char *source_path, const unsigned int x, const unsigned int y ) {
    unsigned char *data;
    int width;
    int height;
    int channel_count;
    read_image_data(source_path, &data, &width, &height, &channel_count);

    if (x >= (unsigned int)width || y >= (unsigned int) height) {
        printf("x or y out of bound");
        return NULL ;
    }

    if (data == NULL) {
        printf("data is NULL");
        return NULL ;
    }

    return (pixelRGB *) &data[(y*width + x)*channel_count] ;
}

void print_pixel( char *filename, int x, int y ) {
    pixelRGB * pixel = get_pixel(filename, (const unsigned int) x, (const unsigned int) y) ;    

    printf("print_pixel (%d, %d): %u, %u, %u", x, y, pixel -> R,pixel -> G ,pixel -> B);
}