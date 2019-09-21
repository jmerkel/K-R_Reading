//
//  main.c
//  Chapter 1-1
//
//  Created by Joseph Merkel on 2/24/15.
//  Copyright (c) 2015 Joseph Merkel. All rights reserved.
//


/*
// tutorial
#include <stdio.h>
main() {
    printf("Hello World \n");
    printf("Alyssa is cute\n");
}
 */

/*
 // 1-3
#include <stdio.h>
main() {
    float F, C;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    F = lower;
    printf("F\t\tC\n");
    while (F <= upper) {
        C = 5 * (F-32) / 9;
        printf("%3.0f\t%6.1f\n",F, C);
        F = F + step;
    }
}
*/

/*
// 1-4
#include <stdio.h>
main() {
    float F, C;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    
    C = lower;
    printf("C\t\tF\n");
    while (C <= upper) {
        F = (9 * C) / 5 + 32;
        printf("%3.0f\t%6.1f\n", C, F);
        C += step;
    }
}
*/

/*
#include <stdio.h>
int main() {
#define LOWER 0
#define UPPER 300
#define STEP 20
    int fahr;
    for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
        printf("%4d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
*/

/*
//Exercise 1-6, 7
#include <stdio.h>
int main() {
    int c;
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
    printf("%d", EOF);
}
*/

/*
 // 1.5.2
#include <stdio.h>
int main () {
    double nc;
    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("\n%.0f\n", nc);
}
 */

/*
//1.5.3, Exercise 1-8
#include <stdio.h>
int main () {
    int c, nl, tab, blnk;
    nl = 0;
    tab = 0;
    blnk = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++nl;
        if (c == '\t')
            tab++;
        if (c == ' ')
            blnk++;
    }
    printf("%d\n%d\n%d\n", nl, tab, blnk);
}
 */

/*
//Exercise 1-9
#include <stdio.h>
int main(){
    int last = 0;
    int c = 0;
    
    while ((c = getchar()) != EOF) {

        if (c != ' ' || last != ' ') {
            putchar(c);
        }
        last = c;
    }
}
 */


/*
// Exercise 1-10
#include <stdio.h>
int main() {
    int c = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\t')
            printf("\\t");
        if (c == '\b')
            printf("\\b");
        if (c == '\\')
            printf("\\\\");
        else
            putchar(c);
    }
}
 */




