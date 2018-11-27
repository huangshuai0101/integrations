//
//  Vector.c
//  vector
//
//  Created by Bill Dudney on 3/5/12.
//  Copyright (c) 2012 Gala Factory Software, LLC. All rights reserved.
//

#include <math.h>
#include "Vector.h"

float VectorLength(Vector vector) {
  return sqrt(vector.x * vector.x + vector.y * vector.y);
}
