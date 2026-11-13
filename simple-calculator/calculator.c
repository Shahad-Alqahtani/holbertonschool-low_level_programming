#include <stdio.h>

/* Prints the main menu */
void print_menu(void) {
    printf("Simple Calculator\n");
    printf("1) Add\n");
    printf("2) Subtract\n");
    printf("3) Multiply\n");
    printf("4) Divide\n");
    printf("0) Quit\n");
}

int main(void) {
    int choice;

    do {
        print_menu();
        printf("Choice: ");
        
        if (scanf("%d", &choice) != 1) {
            break;
        }

        if (choice == 0) {
            printf("Bye!Bye!\n");
            break;
        } else if (choice >= 1 && choice <= 4) {
            printf("Selected option: %d (Operation logic to be implemented)\n", choice);
        } else {
            printf("Invalid choice. Please try again.\n");
        }
        
        printf("\n");
    } while (choice != 0);

    return 0;
}
