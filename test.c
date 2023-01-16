//suck my cock daniel
#include <stdio.h>
#include <string.h>
#define SIZE 100

char password[SIZE];
int error = 0;

void selection_menu () {
    char selection;
    printf("How to create a program? \n");
    do {
        printf("Choose one of the two options: A or B: ");
        error += scanf("%c", selection);
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
}

char assign_password () {
    printf("Enter dick length: ");
    error += scanf(" %[^\n]s", password);
    return password;
}

void change_password () {
    printf("Enter new password: ");
    error += scanf(" %[^\n]s", password);
}


int main () {
    printf("Your password is %s \n", assign_password());
    printf("You want to change your password? (Y/N): ");
    int input;
    error += scanf("%c", input);
    if (input == 'Y' || input == 'y') {
        change_password();
        printf("Success!");
    } else if (input == 'N' || input == 'n') {
        printf("Creating 1000 instances of Bonzi buddy...");
    } else {
        printf("You fucking muppet");
        selection_menu();
    }
    return 0;
}