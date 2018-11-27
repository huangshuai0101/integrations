//
//  main.c
//  typetest
//
//  Created by David E. Gleason on 12/29/15.
//  Copyright © 2015 David E. Gleason. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int upper = 2147483648;
    printf("upper as 'int' = %d\n", upper);
    
    unsigned int upperU = (unsigned int)upper;
    printf("upper as 'unsigned int' = %u", upperU);
    return 0;
}