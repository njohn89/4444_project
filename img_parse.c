#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <unistd.h>
#include <string>

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

//(char const *filename, int *x, int *y, int *channels_in_file, int desired_channels);
//STBIDEF stbi_us *stbi_load_16_from_memory   (stbi_uc const *buffer, int len, int *x, int *y, int *channels_in_file, int desired_channels);





int main(int argc, char *argv[]) {
  int width, height, bpp;
  unsigned char  *buffer;
  
  uint8_t* xray = stbi_load(argv[1], &width, &height, &bpp, 3);
  
  
  size_t img_size = width * height * bpp;
  int line_break = 1;

  for(unsigned char *p = xray; p != xray + img_size; p += bpp, line_break++){
    if(line_break % 8 == 0 )printf("%u.", *p);
    if((line_break % width == 0)) printf("\n");
  }

  stbi_image_free(xray);
  return 0;
}
