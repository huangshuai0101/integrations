//
//  main.c
//  vector
//
//  Created by Bill Dudney on 2/29/12.
//  Copyright (c) 2012 Gala Factory Software, LLC. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include "Vector.h"

int main(int argc, const char * argv[]) {
  Vector vector = {3.0, 4.0};
  float length = VectorLength(vector);
  printf("length = %f\n", length);
  return 0;
}

