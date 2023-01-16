//suck my cock daniel
#include <stdio.h>

int selection (char input) {
    printf("How to create a program? \n");

    do {
        printf("Choose one of the two options: A or B: ");
        scanf("%c", selection);
        if( selection == 'A' || selection == 'B') {
            printf("Lmao sonnnn I don't have an idea at all on how to program anything... \n");
            break;
        } else if ( selection == 'B' || selection == 'b') {
            printf("What you still doing here? \n");
            break; 
        } else {
            printf("Invalid command. \n");
        }
    } while (1);
    return input;
}

int main () {
    char input = selection(input);

    return 0;
}