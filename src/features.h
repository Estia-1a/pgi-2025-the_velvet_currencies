#ifndef FEATURES_H
#define FEATURES_H



void helloWorld();
void first_pixel(char *image);
void dimension(char *source_path);
void tenth_pixel(char *source_path);
void second_line(char *source_path);
void tenth_pixel(char *source_path);
void second_line(char *source_path);
void min_pixel(char *image);
void max_pixel(char *image_path);
void max_component(char *image, char *RGB);
void min_component(char *image, char *color);
void color_red(char *image);
void color_green(char *image);
void color_blue(char *image);
void color_invert(char *image_path);
void color_gray_luminance(char*image_path);
void color_gray(char*image_path);
void mirror_horizontal(char*image_path);
void mirror_vertical(char*image_path);
void mirror_total(char*image_path);
void scale_crop(char *image_path, int xc, int yc, int lc, int Lc);
void stat_report(char *image_path);
#endif
