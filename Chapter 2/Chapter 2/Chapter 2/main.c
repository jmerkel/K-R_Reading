//
//  main.c
//  Chapter 2
//
//  Created by Joseph Merkel on 3/9/15.
//  Copyright (c) 2015 Joseph Merkel. All rights reserved.
//

//Exercise 2-1
// Print range of Char, Short, int, long        -- Signed
// Print range of sChar, sShort, sInt, sLong    -- uigned


/*
#include <stdio.h>
#include <limits.h>
int main() {
    // Signed
    printf("Char min: %d \n", SCHAR_MIN);
    printf("Char max: %d \n", SCHAR_MAX);
    printf("Short min: %d \n", SHRT_MIN);
    printf("Short max: %d \n", SHRT_MAX);
    printf("Int min: %d \n", INT_MIN);
    printf("Int max: %d \n", INT_MAX);
    printf("Long min: %ld \n", LONG_MIN);
    printf("Long max: %ld \n\n", LONG_MAX);
    
    //Unsigned
    printf("Char max: %u \n", UCHAR_MAX);
    printf("Short max: %u \n", USHRT_MAX);
    printf("Int max: %u \n", UINT_MAX);
    printf("Long max: %lu \n", ULONG_MAX);
}
*/

/*
// Exercise 2-2
#include <stdio.h>
int main() {
    int i = 0;
    int lim, c;
    int s[10];
    
    while (i < (lim - 1)) {
        if ((c = getchar()) != '\n') {
            if (c != EOF) {
                s[i] = c;
                i++;
            }
        }
    }
}
*/

/*
// Exercise 2-3 v2
#include <stdio.h>
#include <ctype.h>

int htoi(int c) {
    int hex = 0;
    
    if (c >= '0' && c <= '9')
        return c - '0';
    else if ((c >= 'A') && (c <= 'F'))
        return c - 'A' + 10;
    else if ((c >= 'a') && (c <= 'f'))
        return c - 'a' + 10;
    else
        return hex = -1;
}

void gtline(char s[]) {
    int c;      // c is the input
    int i;
    printf("Enter a Hexidecimal Line & hit \"ENTER\" to exit: \n");
    for (i = 0; ((c = getchar()) != EOF && c != '\n'); i++)  {
        s[i] = htoi(c);
    }
    s[i] = '\0';
}



int main() {
    char line[68];
    
    gtline(line);
    for (int i = 0; line[i] != '\0'; i++) {
        printf("%d ", line[i]);
    }
    printf("\n");
}
*/

/*
// Exercise 2-4
#include <stdio.h>
const int MAXLINE = 100;

void squeeze(char s1[],char s2[]) {
    int i, j, k;
    
    for (i = k = 0; s1[i] != '\0'; i++) {
        for (j = 0; s2[j] != '\0'; j++) {
            if (s1[i] == s2[j]) {
                i++;
                j = 0;
            }
        }
        s1[k++] = s1[i];
    }
    s1[k] = '\0';
}

int main() {
    char s1[MAXLINE] = "Hello World!";
    char s2[MAXLINE] = "My name is Joe";
    
    squeeze(s1,s2);
    
    for (int i = 0; s1[i] != '\0'; i++) {
        printf("%c", s1[i]);
    }
    printf("\n");
}
 */

/*
// Exercise 2-5
#include <stdio.h>
const int MAXLINE = 100;

void any(char s1[], char s2[]) {
    int i, j;     //Counter, Counter, Location
    
    for (j = 0; s2[j] != '\0'; j++) {
        for (i = 0; s1[i] != '\0'; i++) {
            if (s2[j] == s1[i]) {
                printf("%d ", i);
                break;
            }
            
        }
        if (s1[i] == '\0')
            printf("-1 ");
    }
}

int main() {
    char s1[MAXLINE] = "Hello World!";
    char s2[MAXLINE] = "Joe";
    
    any(s1,s2);
    printf("\n");
}
*/



