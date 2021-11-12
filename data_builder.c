#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main(int argc, char *argv[]){
  system("./img_parse Test_xRay/clean_xray_one.jpeg > data/clear1.dat");
  system("./img_parse Test_xRay/IM-0003-0001.jpeg > data/clear2.dat");
  system("./img_parse Test_xRay/IM-0005-0001.jpeg > data/clear3.dat");
  system("./img_parse Test_xRay/IM-0006-0001.jpeg > data/clear4.dat");
  system("./img_parse Test_xRay/IM-0007-0001.jpeg > data/clear5.dat");
  system("./img_parse Test_xRay/IM-0009-0001.jpeg > data/clear6.dat");
  
  return 0;
}
