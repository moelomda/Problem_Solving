#include <stdio.h>
#include <stdlib.h> // Include this header for system()

int main() {
    int choice;
    int menuVisible = 1; // Variable to track whether the menu is visible or not

    while (1) {
        system("cls"); // Clear the screen (Windows) or use "clear" for Unix-based systems

        if (menuVisible) {
            printf("Menu:\n");
            printf("1. New\n");
            printf("2. Display\n");
            printf("3. Exit\n");
        }

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("You chose New.\n");
                menuVisible = 0; // Hide the menu after choosing "New"
                break;
            case 2:
                printf("You chose Display.\n");
                menuVisible = 0; // Hide the menu after choosing "Display"
                break;
            case 3:
                printf("You chose Exit. Exiting the program.\n");
                return 0; // Exit the program
            default:
                printf("Invalid choice. Please choose 1, 2, or 3.\n");
                getchar(); // Wait for a key press before continuing
                continue; // Skip the menu update if the choice is invalid
        }
    }

    return 0;
}
