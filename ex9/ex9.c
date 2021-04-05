#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STR_SIZE 100


const int StrLength(char str[MAX_STR_SIZE]) {
    int size=0;
    while(str[size] != '\0'){
        size++;
    }
    return size-1;
}

int task9(void)
{
    
    char t[MAX_STR_SIZE];
    printf("Enter target string (t): ");
    fflush(stdout);
    fgets(t, sizeof t, stdin);
    
    printf("Length: %d", StrLength(t));
    return 0;
}

