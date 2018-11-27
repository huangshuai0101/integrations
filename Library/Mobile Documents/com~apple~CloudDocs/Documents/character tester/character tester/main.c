//
//  main.c
//  character tester
//
//  Created by David E. Gleason on 5/12/13.
//  Copyright (c) 2013 David E. Gleason. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int c, nl;
    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
    printf("%d\n", nl);
    
    }

