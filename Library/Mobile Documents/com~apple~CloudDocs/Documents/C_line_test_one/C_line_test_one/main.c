//
//  main.c
//  C_line_test_one
//
//  Created by David E. Gleason on 5/9/13.
//  Copyright (c) 2013 David E. Gleason. All rights reserved.
//

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

/* print Fahrenheit-Celsius table
 for far = 0, 20 ..., 300 */

int main()
{

    float fahr, celsius;
    float lower, upper, step;
    
    upper = 300;
    step = 20;
    
    fahr = upper;
    while (fahr <= lower) {
        celsius = (5.0/9.0) * (fahr-32.0); 
        printf("%3.0f %6.1f\n", fahr, celsius); /* d is for decimal, f for float; 3 is for number of characters */
        fahr = fahr - step;
    }
}

