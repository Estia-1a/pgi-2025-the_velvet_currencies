#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <estia-image.h>
#include <getopt.h>

#include "features.h"
#include "utils.h"
#include "argsparse.h"

int main(int argc, char **argv) {
  /*To use debug mode: 
   - add --debug: freud.exe --debug -f images/input/image.jpeg
   or 
   - Simply run your compiled project with start button on the blue menu bar at the bottom of the VS Code window.
   */

  /*DO NOT EDIT THIS PART*/
  Config configuration ;
  parse_arguments( argc, argv, &configuration ) ;
  check_debug_mode(configuration);
  check_file();
  /* END */

  /* Use "if ( strncmp( command, <commandname>, 9 ) == 0 )" to check if your <commandname> is called by program.*/
  /* Example with helloworld command
   * If helloworld is a called command: freud.exe -f images/input/image.jpeg -c helloworld 
   */
  if ( strncmp( configuration.command, "helloworld", 10 ) == 0 ) {
    /* helloworld() function is defined in feature.h and implemented in feature.c */
    helloWorld();
  }
  /*
   * TO COMPLETE
   */
  if ( strncmp( configuration.command, "first_pixel", 12 ) == 0 ) {
    /* helloworld() function is defined in feature.h and implemented in feature.c */
    first_pixel(configuration.filenames[0]);
  }
  
  if ( strncmp( configuration.command, "dimension", 9 ) == 0 ) {
    /* dimension() function is defined in feature.h and implemented in feature.c */
    dimension( configuration.filenames[0] );
  }
  if ( strncmp( configuration.command, "tenth_pixel", 11 ) == 0 ) {
    /* tenth_pixel() function is defined in feature.h and implemented in feature.c */
    tenth_pixel( configuration.filenames[0] );
  }
    if ( strncmp( configuration.command, "max_component", 13 ) == 0 ) {
    /* max_component() function is defined in feature.h and implemented in feature.c */
    max_component( configuration.filenames[0],argv[5] );
  }
   if ( strncmp( configuration.command, "color_red", 9 ) == 0 ) {
    /* color_red() function is defined in feature.h and implemented in feature.c */
    color_red( configuration.filenames[0] );
   }
    if ( strncmp( configuration.command, "color_green", 11 ) == 0 ) {
    /* color_green() function is defined in feature.h and implemented in feature.c */
    color_green( configuration.filenames[0] );
   }
     if ( strncmp( configuration.command, "color_blue", 10 ) == 0 ) {
    /* color_blue() function is defined in feature.h and implemented in feature.c */
    color_blue( configuration.filenames[0] );
   }
   if ( strncmp( configuration.command, "rotate_cw", 9 ) == 0 ) {
    /* rotate_cw() function is defined in feature.h and implemented in feature.c */
    rotate_cw( configuration.filenames[0] );
   }
  return 0;
}
