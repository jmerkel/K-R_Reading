//
//  main.c
//  Chapter 1-5-4
//
//  Created by Joseph Merkel on 3/2/15.
//  Copyright (c) 2015 Joseph Merkel. All rights reserved.
//

/*
// Exercise 1-12
#include <stdio.h>
int main() {
#define     IN      1    // inside word
#define     OUT     0
    int c, state;
    state = OUT;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
            printf("\n");
        }
        else if (state == IN)
            putchar(c);
        else if (state == OUT) {
            state = IN;
            putchar(c);
        }
    }
}

// I would test the word count program by using different combinations of characters, actions (like tab).
// I would also try using no input, 1 one character words, 2 one character words, and words starting after multiple spaces
// Uncommon/ poorly formated text would be the most likely uncover bugs

*/

/*
// Chapter 1.6
#include <stdio.h>
int main() {
    int c, i, nwhite, nother;
    int ndigit[10];
    
    nwhite = nother = 0;
    for (i = 0; i < 10; ++i) {
        ndigit[i] = 0;
    }
    
    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9')
            ++ndigit[c - '0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;
    }
    printf("digits = ");
    for (i = 0; i < 10; ++i)
        printf(" %d", ndigit[i]);
    printf(", white space = %d, other = %d\n",
           nwhite, nother);
}
 */

/*
//Exercise 1-13
#include <stdio.h>
int main() {
#define     IN      1    // inside word
#define     OUT     0
    int c, state;
    int table[7];
    int counter = 0;
    
    for (int i = 0; i <= 6; i++)
        table[i] = 0;
    state = OUT;
    
    while ((c = getchar()) != EOF ) {
        if (c == ' ' || c == '\n' || c == '\t' || c == '.' || c == ',') {
            state = OUT;
            if  (counter <= 6)
                table[counter - 1]++;
            else
                table[6]++;
            counter = 0;
        }
        
        else if (state == IN) {
            counter++;
        }
        
        else if (state == OUT) {
            state = IN;
            counter++;
        }
    }
    for (int i = 0; i <= 5; i++) {
        counter = table[i];
        printf("Length %d : ",(i+1));
        while (counter > 0) {
            printf("x");
            counter--;
        }
        printf("\n");
        
    }
    printf("Length 7+: ");
    counter = table[6];
    while (counter > 0) {
        printf("x");
        counter--;
    }
    printf("\n");
}
*/

/*
//Exercise 1-14
#include <stdio.h>
int main() {
#define     ALPHA 26 // Character Alphabet
    
    int c, i;
    int table[26];
    int counter = 0;
    
    for (i = 0; i < ALPHA; i++)
        table[i] = 0;
    
    while ((c = getchar()) != EOF ) {
        if (c <= 'Z' && c >= 'A') {
            table[c -'A']++;
        }
        else if (c <= 'z' && c >= 'a') {
            table[c - 'a']++;
        }
    }
    
    for (i = 0; i < ALPHA; i++) {
        putchar('A'+i);
        printf(": ");
        
        counter = table[i];
        while (counter > 0) {
            printf("x");
            counter--;
        }
        printf("\n");
    }
}
 */

//Exercise 1-15
#include <stdio.h>
float cels(float F) {
    return (5.0/9.0) * (F-32);
}

int main() {
    float F;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    F = lower;
    printf("F\t\tC\n");
    while (F <= upper) {
        printf("%3.0f\t%6.1f\n",F, cels(F));
        F = F + step;
    }
}







