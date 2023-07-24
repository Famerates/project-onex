#include <stdio.h>
#include <string.h>

typedef struct clearance
{
    /* data */
    int clear;
} cstate;

int main(void) {
    menu();



    printf("\nstopping program\n");
//    printf("debug code 12");
    sleep(3);
    return 0;
}
int menu() {
    cstate clearance;
    if (clearance.clear == 1) {
        printf("all clear");
//        printf("debug code 3");
    }
    else if (clearance.clear == 0) {
        login();
//        printf("debug code 0");
    }
    else {
        printf("stopping program");
        sleep(3);
//        printf("debug code 1");
        return 0;
    }
    
//    printf("stopping program");
//    printf("debug code 5");
//    sleep(3);
    return 0;
}



int login() {
    cstate clearance;
    int count;
//    printf("debug code 6");
    for(count = 1; count == 1;) {
//        printf("debug code 7");
        printf("\nType password to continue: ");
        char choice[16];
        char inputInitial[64];
        char no[] = "n";
        char pass[] = "password";
        scanf("%64s", inputInitial);
        int passcheck = strcmp(pass, inputInitial);
        if (passcheck == 0) {
            printf("\nPassword is correct\n");
            clearance.clear = 1;
//            printf("debug code 8");
            break;
        }
        else {
            printf("\nPassword is incorrect\n");
//            printf("debug code 9");
            clearance.clear = 0;
            printf("Would you like to try again? [y/n] :");
            scanf("%s", choice);
            if (0 == stricmp(choice, no)) {
                clearance.clear = 3;
//                printf("debug code 10");
                break;
            }
        }
    }
//    printf("debug code 11");
    return 0;
}