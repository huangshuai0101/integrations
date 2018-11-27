//
//  main.c
//  vector
//
//  Created by Bill Dudney on 2/29/12.
//  Copyright (c) 2012 Gala Factory Software, LLC. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct Vector {
  float x;
  float y;
};

typedef struct Vector Vector;

int main(int argc, const char * argv[]) {
  Vector vector[3] = { {8.0, 15.0}, {5.0, 12.0}, {3.0, 4.0} };

  int vectorCount = 3;
  Vector *vectors = NULL;
  
  vectors = (Vector *)calloc(vectorCount, sizeof(Vector));
  vectors[0].x = 8.0;
  vectors[0].y = 15.0;
  vectors[1].x = 5.0;
  vectors[1].y = 12.0;
  vectors[2].x = 3.0;
  vectors[2].y = 4.0;
  
  int swapped = 0;
  do {
    swapped = 0;
    for(int i = 1;i < vectorCount;i++) {
      float lengthA = sqrt(vector[i-1].x * vector[i-1].x + 
                           vector[i-1].y * vector[i-1].y);
      float lengthB = sqrt(vector[i].x * vector[i].x + 
                           vector[i].y * vector[i].y);
      if(lengthA > lengthB) {
        // swap a and b
        Vector a = vector[i - 1];
        vector[i - 1] = vector[i];
        vector[i] = a;
        swapped = 1;
      }
    }
  } while(swapped);
  
  for(int i = 0;i < vectorCount;i++) {
    printf("length[%d] = %f\n", i, sqrt(vector[i].x * vector[i].x + vector[i].y * vector[i].y));
  }
  
  return 0;
}

