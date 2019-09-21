//
//  main.c
//  Chapter 1-10
//
//  Created by Joseph Merkel on 3/9/15.
//  Copyright (c) 2015 Joseph Merkel. All rights reserved.
//

/*
// Exercise 1-20
#include <stdio.h>
#define TAB 8


int main() {
    int c;              //input
    int nb = 0;         // number of blanks
    int pos = 1;
    while ((c = getchar()) != EOF) {
        if (c == '/t') {
            nb = TAB - (pos - 1) % TAB;
            while (nb > 0) {
                putchar(' ');
                pos++;
                nb--;
            }
        }
        else if (c == '/n') {
            putchar(c);
            pos = 1;
        }
        else {
            putchar(c);
            pos++;
        }
    }
}
*/

#include <stdio.h>
#define TAB 8
// Exercise 1-21
int main() {
    int c;              //input
    int sp= 0;         // number of spaces
    int pos = 1;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
                pos++;
                nb--;
            }
        }
        else if (c == '/n') {
            putchar(c);
            pos = 1;
        }
        else {
            putchar(c);
            pos++;
        }
    }
}