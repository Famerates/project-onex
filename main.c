#include <stdio.h>
#include <string.h>

int main() {
    printf("\nType password to continue: ");
    char inputInitial[64];
    char pass[] = "password";
    scanf("%64s", inputInitial);
    int passcheck = strcmp(pass, inputInitial);
    if (passcheck == 0) {
        printf("\nPassword is correct\n");
    }
    else {
        printf("\nPassword is incorrect\n");
    }
    
    printf("stopping program");
    sleep(3);
    return 0;
}