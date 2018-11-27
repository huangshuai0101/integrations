//
//  runtime.c
//  vector
//
//  Created by Bill Dudney on 9/28/12.
//  Copyright (c) 2012 Gala Factory Software, LLC. All rights reserved.
//

#include <stdio.h>
#include <stdarg.h>
#include "Vector.h"
#include "runtime.h"

void * gfsMessageSend(VectorRef self, char * _cmd, ...) {
  SINGLE_FLOAT impl = VectorSetX;
  va_list args;
  va_start(args, _cmd);
  float value = (float)va_arg(args, double);
  impl(self, _cmd, value);
  return NULL;
}