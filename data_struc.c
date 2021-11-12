#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <unistd.h>
#define WIDTH 1080


typedef struct Basic_Img_Info{
  int height, width, size;
} basic_info;



FILE *img_file;
basic_info load_basic_info(char *file_name){
  basic_info *this_file;
  this_file = (basic_info *) malloc(sizeof(int) * 4);
  img_file = fopen(file_name, "r");
  fseek(img_file, 8, SEEK_SET);
  char buffer[4];
  fread(buffer, 1, 4, img_file);
  this_file->height = atoi(buffer);
  fseek(img_file, 20, SEEK_SET);
  fread(buffer, 1, 4, img_file);
  this_file->width = atoi(buffer);
  
  printf("%li\n", sizeof(*img_file));

  fclose(img_file);
  return *this_file;
  
  
}

int main(void){
  basic_info clear1;
  
  clear1 = load_basic_info("data/clear1.dat");
  printf("%i\n", clear1.height);
  printf("%i\n", clear1.width);
  return 0;
  
}
