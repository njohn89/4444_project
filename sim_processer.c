#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "data_struc.c"


int main(void){
  basic_info clear1;
  
  clear1 = load_basic_info("data/clear1.dat");
 
  data_get("data/clear1.dat");

  
  return 0;
  
}
