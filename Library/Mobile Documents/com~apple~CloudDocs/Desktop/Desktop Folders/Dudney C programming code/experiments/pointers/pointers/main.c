//
//  main.c
//  pointers
//
//  Created by Bill Dudney on 3/1/12.
//  Copyright (c) 2012 Gala Factory Software, LLC. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
  int meaning = 42;
  int *intPtr = &meaning;
  printf("the value = %d the value pointed to = %d\n", meaning, *intPtr);
  *intPtr = 57;
  printf("the value = %d the value pointed to = %d\n", meaning, *intPtr);
  int newValue = meaning * *intPtr;
  printf("newValue = %d\n", newValue);
  meaning = 13;
  printf("the value = %d the value pointed to = %d\n", meaning, *intPtr);
  return 0;
}