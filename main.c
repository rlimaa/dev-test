#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ex2/ex2.c"
#include "ex3/ex3.c"
#include "ex9/ex9.c"

#define MAX_STR_SIZE 100

int main(void) {

    printf("\nTask 2\n\n");
    task2();
    printf("\n*****************************************************\n");

    printf("\nTask 3\n\n");
    printf("%s\n", task3());
    printf("\n*****************************************************\n");

    
    printf("\nTask 9\n\n");
    printf("%s\n", task9());
    printf("\n*****************************************************\n");

    return 0;
}