#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"


//(char const *filename, int *x, int *y, int *channels_in_file, int desired_channels);


int main(int argc, char *argv[]) {
    int width, height, bpp;

    uint8_t* rgb_image = stbi_load("juicy.png", &width, &height, &bpp, 3);
    

    stbi_image_free(rgb_image);

    return 0;
}