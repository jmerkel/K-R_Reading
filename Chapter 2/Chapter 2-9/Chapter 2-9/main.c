//
//  main.c
//  Chapter 2-9 & Chapter 3
//
//  Created by Joseph Merkel on 3/18/15.
//  Copyright (c) 2015 Joseph Merkel. All rights reserved.
//

/*
// 2-10
#include <stdio.h>

int lower (int c) {
    return c >= 'A' && c <= 'Z' ? c += 'a' - 'A' : c;
}
int main() {
    
}
*/

/*
// 3-1
int binsearch(int x, int v[], int n) {
    int low, mid, high;
    low = 0;
    high = n - 1;
    while (low <= high && x != v[mid]) {
        mid = (low + high) / 2;
        if (x < v[mid])
            high = mid - 1;
        else                    // x < mid
            low = mid + 1;
    }
    if (x == v[mid])
        return mid;
    return -1;      // no match
}

int main() {
    
}
*/

/*
// Exercise 3-2
#include <stdio.h>

void escape (char s[],char t[]) {
    int i, z;
    for (i = z = 0; s[i] != '\0'; i++) {
        switch (s[i]) {
            case '\t':
                t[z] = '\\';
                z++;
                t[z] = 't';
                z++;
                break;
                
            case '\n':
                t[z] = '\\';
                z++;
                t[z] = 'n';
                z++;
                break;
            default:
                t[z] = s[i];
                z++;
                break;
        }
        t[z] = '\0';
    }
}
void unescape (char s[], char t[]) {
    int i, z;
    for (i = z = 0; s[i] != '\0'; i++) {
        if (s[i] == '\\')
            i++;
        switch (s[i]) {
            case 't':
                t[z] = '\t';
                z++;
                break;
            case 'n':
                t[z] = '\n';
                break;
            default:
                t[z] = s[i];
                z++;
                break;
        }
        
    }
    t[z] = '\0';
    //for (z = 0; t[z] != '\0'; z++) {
    //   printf(<#const char *restrict, ...#>);
}
    
int main() {
    char s[] = "Hello \\t how are you? \\n";
    char t[50] = "";
}
*/

// Exercise 3-3
#include <stdio.h>

void expand (char s[], char t[]) {
    int i, z;
    z = 0;
    for (i = 0; s[i] != '\0'; i++) {
        // Letter range
        if (s[i] == 'a' && s[i + 1] == '-' && s[i + 2] > s[i]) {
            t[z] = s[i];
            z++;
            i += 2;
            for (;s[i] > t[z-1]; z++) {
                t[z] = (t[z-1] + 1);
            }
            i++;
        }
        // else if 0 - 9 difference {same code, but with numbers}
        t[z] = s[i];
        z++;
     }
    t[z] = '\0';
    
}
int main () {
    
}