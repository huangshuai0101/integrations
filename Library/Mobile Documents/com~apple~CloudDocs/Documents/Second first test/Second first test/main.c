//
//  main.c
//  Second first test
//
//  Created by David E. Gleason on 5/12/13.
//  Copyright (c) 2013 David E. Gleason. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])

{
    int fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    /* lower limit of temperature scale */
    /* upper limit */
    /* step size */
    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    } }

