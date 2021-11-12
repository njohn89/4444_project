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
  
  system("./img_parse Test_xRay/person1_virus_6.jpeg > data/sick1.dat");
  system("./img_parse Test_xRay/person1_virus_7.jpeg > data/sick2.dat");
  system("./img_parse Test_xRay/person1_virus_8.jpeg > data/sick3.dat");
  system("./img_parse Test_xRay/person1_virus_9.jpeg > data/sick4.dat");
  system("./img_parse Test_xRay/person1_virus_11.jpeg > data/sick5.dat");
  system("./img_parse Test_xRay/person1_virus_12.jpeg > data/sick6.dat");
  
  
  
  
  return 0;
}
