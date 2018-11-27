//
//  main.c
//  typetest
//
//  Created by Bill Dudney on 3/27/12.
//  Copyright (c) 2012 Gala Factory Software, LLC. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
  int upper = 2147483647;
  // 32 bits, 4 bytes, 31 down to zero
  printf("bits of upper -> ");
  for(int i = 31;i >= 0;i--){
    int bit = (upper & (int)pow(2,i));
    printf("%c", (bit == 0 ? '0' : '1'));
    if(0 == (i % 8) && i > 0) {
      printf("-");
    }
  }
  printf("\n");

  printf("upper as 'int' = %d\n", upper);

  unsigned int upperU = (unsigned int)upper;
  printf("upper as 'unsigned int' = %u", upperU);

  return 0;
}

//float upperF = (float)upper;  
//printf("upper as 'float' = %f\n", upperF);
//printf("the bits of upper ");
