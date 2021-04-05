#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_STR_SIZE 100

const char *CopyToIdx(char str[MAX_STR_SIZE], int idx) {
    int i=0;
    static char res[MAX_STR_SIZE];
    for(i=0; i<idx; i++) {
        res[i] = str[i];
    }
    return res;
}

const char *RemoveSpaces(char str[MAX_STR_SIZE]) {
    static char res[MAX_STR_SIZE] = "";
    int i;
    for(i=0; i < strlen(str); i++) {
        if(str[i] != ' ') {
            sprintf(res, "%c", str[i]);
        }
    }
    return res;
}

bool ConcatRemove(char sArg[MAX_STR_SIZE], char tArg[MAX_STR_SIZE], int k) {
    char s[MAX_STR_SIZE] = "";
    char t[MAX_STR_SIZE] = "";
    sprintf(s, "%s", RemoveSpaces(sArg));
    sprintf(t, "%s", RemoveSpaces(tArg));
    
    int sLen = strlen(s);
    int tLen = strlen(t);
    int nOp = 0;
    int count = 0;
    char sTemp[MAX_STR_SIZE] = "";
    
    for(count = 0; count < tLen; count++) {
        if(s[count] != t[count]) {
            sprintf(sTemp, "%s", CopyToIdx(s, count));
            nOp = tLen - count; // One operation for each removal
            break;
        }
    }
    
    if(strlen(sTemp) == 0) {
        strcpy(sTemp, s);
    }
    
    while(strlen(sTemp)!= tLen) {
        sprintf(sTemp, "%s%c", sTemp, t[strlen(sTemp)]);
        nOp++; // One operation for each concat
    }
    
    return nOp <= k; 
    // Is always possible to convert one string into another, the contraint is the number of operations
    // if the number of operations necessary to convert one string into another is greater than the number specified
    // true is returned
    
}

char * task3(void)
{    
    char s[MAX_STR_SIZE], t[MAX_STR_SIZE];
    int k;

    printf("Enter source string (s): ");
    fflush(stdout);
    fgets(s, sizeof s, stdin);

    printf("Enter target string (t): ");
    fflush(stdout);
    fgets(t, sizeof t, stdin);

    printf("Enter the number of operations (k): ");
    scanf("%d", &k);

    if(ConcatRemove(s, t, k)) {
        return "yes\n";
    }
    return "no\n";
}

