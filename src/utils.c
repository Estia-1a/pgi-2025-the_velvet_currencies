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
        return NULL ;
    }

    if (data == NULL) {
        return NULL ;
    }

    return (pixelRGB *) &data[(y*width + x)*channel_count ] ;
}

void print_pixel( char *filename, int x, int y ) {
    pixelRGB * pixel = get_pixel(filename, (const unsigned int) x, (const unsigned int) y) ;    

    printf("first_pixel %d %d %d",pixel[0],pixel[1],pixel[2]);

}