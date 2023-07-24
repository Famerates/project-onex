#include <stdio.h>

int main() {
    printf("\nType anything and the program will type it back\n");
    char inputInitial[32];
    fgets(inputInitial, 32,stdin);
    printf("\nYou typed: %s",inputInitial,"\n");
    return 0;
}