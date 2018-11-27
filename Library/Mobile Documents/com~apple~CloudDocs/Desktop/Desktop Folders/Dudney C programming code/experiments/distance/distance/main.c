//
//  main.c
//  distance
//
//  Created by Bill Dudney on 2/27/12.
//  Copyright (c) 2012 Gala Factory Software, LLC. All rights reserved.
//

#include <stdio.h>
#include <math.h>

struct Point {
  float x;
  float y;
};

typedef struct Point Point;

int main(int argc, const char * argv[]) {
  Point point = {3.0, 4.0};
  float distance = sqrt(point.x * point.x + point.y * point.y);
  printf("distance = %f\n", distance);
  
  int meaning = 42;
  int *intPtr = &meaning;
  
  printf("the value = %d the value pointed to = %d\n", meaning, *intPtr);
  
  *intPtr = 57;

  printf("the value = %d the value pointed to = %d\n", meaning, *intPtr);
  
  int moreMeaning = 19;
  intPtr = &moreMeaning;
  
  printf("the value = %d the value pointed to = %d\n", meaning, *intPtr);
  
  intPtr = 42;
  printf("the value pointed = %d", *intPtr);
  
  return 0;
}

