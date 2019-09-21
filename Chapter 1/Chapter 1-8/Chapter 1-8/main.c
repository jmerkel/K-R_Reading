//
//  main.c
//  Chapter 1-8
//
//  Created by Joseph Merkel on 3/6/15.
//  Copyright (c) 2015 Joseph Merkel. All rights reserved.
//

/*
// 1-16
#include <stdio.h>
#define MAXLINE 1000 //maximum input line size

int gtline(char s[],int lim){   // line, maxLine --> read a line into s[], return length
    int c, i, j;
    j = 0;
    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
        if (i < (lim - 2)) {
            s[j] = c;
            j++;
        }
    }
    if (c == '\n') {
        s[j] = c;
        ++i;
        ++j;
    }
    s[j] = '\0';
    return i;
}

void copy(char to[], char from[]) {     //char to, char from
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}

int main() {
    int len;    // current line length
    int max;    // Max length seen
    char line[MAXLINE];
    char longest[MAXLINE];
    
    max = 0;
    while ((len = gtline(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0) {    // there was a line
        printf("Length of longest line: %d\n", max);
        printf("%s", longest);
    }
    return 0;
}
*/

/*
// 1- 17
#include <stdio.h>
#define FLAG    80 // Line Length counter
#define MAXLINE 1000

int gtline(char s[],int lim){   // line, maxLine --> read a line into s[], return length
    int c, i, j;
    j = 0;
    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
        if (i < (lim - 2)) {
            s[j] = c;
            j++;
        }
    }
    if (c == '\n') {
        s[j] = c;
        ++i;
        ++j;
    }
    s[j] = '\0';
    return i;
}

int main () {
    int len = 0;        // Length of current line
    char line[MAXLINE];

    while ((len = gtline(line,MAXLINE)) > 0)
        if (len > FLAG) {
            printf("%s", line);
    }
}
*/

/*
// 1- 18
#include <stdio.h>
# define MAXLINE 1000

int gtline(char s[],int lim){   // line, maxLine --> read a line into s[], return length
    int c, i, j;
    j = 0;
    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
        if (i < (lim - 2)) {
            s[j] = c;
            j++;
        }
    }
    if (c == '\n') {
        s[j] = c;
        ++i;
        ++j;
    }
    s[j] = '\0';
    return i;
}

int rmove(char s[]) {
    int i = 0;
    while (s[i] != '\n')
        i++;
    i--;                    // back off from new line
    while (i >= 0 && (s[i] == ' ' || s[i] == '\t'))
        i--;
    if (i >= 0) {       //non blank?
        i++;
        s[i] = '\n';    // place new line
        i++;
        s[i] = '\0';    // terminate
    }
    return i;
}

int main () {
    char line[MAXLINE];
    
    while (gtline(line, MAXLINE) > 0) {
        if (rmove(line) > 0) {
            printf("%s", line);
        }
        return 0;
    }
}
*/
 
// Exercise 1-19
#include <stdio.h>
# define MAXLINE 1000

int gtline(char s[],int lim){   // line, maxLine --> read a line into s[], return length
    int c, i, j;
    j = 0;
    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
        if (i < (lim - 2)) {
            s[j] = c;
            j++;
        }
    }
    if (c == '\n') {
        s[j] = c;
        ++i;
        ++j;
    }
    s[j] = '\0';
    return i;
}

void reverse(char s[]) {
    int i, j;
    char temp;
    i = 0;
    j = 0;
    while (s[i] != '\0') {
        i++;
    }
    i--;
    
    if (s[i] == '\n')
        i--;
    
    while (j < i) {
        temp = s[j];
        s[j] = s[i];
        s[i] = temp;
        j++;
        i--;
    }
}

int main () {
    char line[MAXLINE];
    
    while (gtline(line, MAXLINE) > 0) {
        reverse(line);
        printf("%s", line);
    }
    return 0;
}
