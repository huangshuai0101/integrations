//
//  main.c
//  first
//
//  Created by Bill Dudney on 2/27/12.
//  Copyright (c) 2012 Gala Factory Software, LLC. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct  {
  float x;
  float y;
  float w;
  float h;
} Rectangle;

float RectanglesArea(Rectangle r[], int count) {
  r[0].x = 300.0;
  return 10.0;
}

float RectangleArea(Rectangle r) {
  return r.w * r.h;
}

void printRectangle(Rectangle r) {
  printf("{{%f, %f}, {%f, %f}}\n", r.x, r.y, r.w, r.h);
}

int main(int argc, const char * argv[]) {
  Rectangle rects[2];
  rects[0].x = 1345e-5;
  rects[0].y = 1795e-5;
  rects[0].w = 2342e-5;
  rects[0].h = 3322e-5;
  rects[1].x = 20.0;
  rects[1].y = 10.0;
  rects[1].w = 15.0;
  rects[1].h = 0;
  
  char *akbey = "zibye";
  strlen(akbey);
  
  char *bip[5] = {"AAAA", "AAAB", "AABA", "ABAA", "BAAA"};
  for(int i = 0;i < 5;i++) {
    int *bop = (int*)bip[i];
    printf("%d\n", *bop);
  }
  
  
  char gak[] = "AAAABAAACAAADAAA"; 
  printf("gak = %s\n", gak);
  
  int biay[5] = {1094795585, 1094795586, 1094795587, 1094795588, 0};
  printf("biay = %s\n", (char *)biay);
  
  Rectangle *zip = (Rectangle *)gak;
  printRectangle(*zip);
  for(int k = 0;k < 65;k++) {
    printf("k = %d ascii = %c\n", k, (char)k);
  }
//  
//  
//  printRectangle(rects[0]);
//  printRectangle(rects[1]);
//  
//  float gak = RectanglesArea(rects, 2);
//  printRectangle(rects[0]);
//  
//  Rectangle aRect;
//  aRect.x = 10.0;
//  aRect.y = 10.0;
//  aRect.w = 100.0;
//  aRect.h = 100.0;
//
//  printf("area = %f\n", RectangleArea(aRect));
//  printRectangle(aRect);
  
  return 0;
}
