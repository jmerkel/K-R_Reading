//
//  main.c
//  Chapter 2-6
//
//  Created by Joseph Merkel on 3/18/15.
//  Copyright (c) 2015 Joseph Merkel. All rights reserved.
//



// Exercise 2-6 (STUPID)
#include <stdio.h>
 // Pos#: 7 6 5 4 3 2 1 0
 // Bit#: 1 0 1 0 1 0 1 1      x
 // Bit#: 1 0 1 0 1 0 1 0      y

int setbits(int x, int p, int n, int y) {
    return x & ~(~(~0 << n) << (p+1-n)) |
    (y & ~(~0 << n)) << (p+1-n);
}

int main() {
    int x = 0xAB; // 1010 1011
    int p = 5;
    int n = 3;
    int y = 0xAA; // 1010 1010
    printf("%x\n", setbits(x, p, n, y));
}


/*
//Exercise 2-7
#include <stdio.h>
int invert(int x, int p, int n) {
    // x = 1010 1011
    // x = 0101 0100
    // x = 1000 0000
    // x = 0010 1011
    // x = 1101 0100
    return ~(~(x) & (x << (p + 1 - n)));
}

int main () {
    int x;
    int p = 5;
    int n = 3;
    invert(x, p, n);
}
*/

//Exercise 2-8
