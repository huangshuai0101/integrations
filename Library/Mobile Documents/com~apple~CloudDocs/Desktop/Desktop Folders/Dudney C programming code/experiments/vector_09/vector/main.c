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
  Vector vectors[3];
  Vector *vectorPtr = vectors;
  for(int i = 0;i < 3;i++) {
    vectorPtr[i].x = 42.0 * (float)(i + 1);
    vectorPtr[i].y = 13.0 * (float)(i + 1);
  }
  float lengths[3];
  for(int i = 0;i < 3;i++) {
    lengths[i] = VectorLength(vectorPtr[i]);
  }

  for(int i = 0;i < 3;i++) {
    printf("length[i] = %f for vector[i] = {%f, %f}", lengths[i], vectors[i].x, vectors[i].y);
  }

  return 0;
}

