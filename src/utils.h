#ifndef UTILS_H
#define UTILS_H

/**
 * @brief Here, you have to define pixelRGB struct and its functions:
 * - pixel* getPixel( unsigned char* data, const unsigned int width, const unsigned int height, const unsigned int n, const unsigned int x, const unsigned int y );
 * - void setPixel( unsigned char* data, const unsigned int width, const unsigned int height, const unsigned int n, const unsigned int x, const unsigned int y, pixelRGB* pixel);
 *
*/

typedef struct _pixelRGB {
  /*
   * TO COMPLETE
   */
   unsigned char R ;
   unsigned char G ;
   unsigned char B ; 
} pixelRGB ;

pixelRGB * get_pixel( char *source_path, const unsigned int x, const unsigned int y );
void print_pixel( char *filename, int x, int y );

#endif
