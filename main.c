#include <stdio.h>




int main(void){
    int choice;
    printf("Welcome to the Password Manager!\n");
    printf("Please choose an option:\n");

    do{

    printf("1. Open a password Vault\n");
    printf("2. Create a new password Vault\n");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            printf("Opening an existing password Vault...\n");
            // Code to open an existing vault would go here
            break;
        case 2:
            printf("Creating a new password Vault...\n");
            // Code to create a new vault would go here
            break;
        default:
            printf("Invalid choice. Please try again.\n");

    }
}


}