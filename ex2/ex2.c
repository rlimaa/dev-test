#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for(i=1; i<101; i++) {
        char str[6] = "";
        if(i%3 == 0) {
            strcat(str, "Foo");
        }
        if(i%5 == 0) {
            strcat(str, "Baa");
        }
        if(strlen(str) == 0) {
            sprintf(str, "%d", i);
        }
        printf("%s\n", str);
    }
    
    return 0;
}