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

int find_start(char *buffer){
  for(int i = 0; i < 64; i++){
    if((buffer+i) == '.') return (i - 2);
  }
  printf("fail\n");
}

void data_get(char *file_name){
  img_file = fopen(file_name, "r");
  char buffer[64];
  fread(buffer, 1, 64, img_file);
  //for(int i = 0; i < 64; i++) printf("%c", buffer[i]);
  int tee = find_start(buffer);
  printf("%c\n", buffer[tee]);
}


