//
//  main.c
//  Counting Words
//
//  Created by David E. Gleason on 5/12/13.
//  Copyright (c) 2013 David E. Gleason. All rights reserved.
//

#include <stdio.h>

#define IN 1   /*inside a word */
#define OUT 0 /* outside a word */

/* count lines, words and characters in input */

int main(int argc, const char * argv[])
{

    int c, nl, nw, nc, state;
    
    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c =='\n')
            ++nl;
        if (c == '  ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);
 
}

