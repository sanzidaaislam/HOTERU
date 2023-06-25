#ifndef EXIT_H_INCLUDED
#define EXIT_H_INCLUDED

void exitProgram() {
    char confirm;

    system("cls");
    printf("\n\n\t Are you sure you want to exit? (Y/N): ");
    confirm = getche();

    if (confirm == 'Y' || confirm == 'y') {
        printf("\n\n\t Thank you for using our program!");
        getch();
        login(); // Return to login screen
    } else if (confirm == 'N' || confirm == 'n') {
        return; // Recursive call to main menu
    } else {
        printf("\n\n\t Invalid input! Please try again.");
        getch();
        exitProgram(); // Recursive call to exit function
    }
}

#endif // EXIT_H_INCLUDED
