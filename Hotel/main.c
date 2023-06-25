#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include "login.h"// User-defined header file for login functionality
#include "add.h" // User-defined header file for adding customer details
#include "list.h"// User-defined header file for viewing customer records
#include "delete1.h"// User-defined header file for deleting a customer record
#include "search.h"// User-defined header file for searching a customer record
#include "edit.h" // User-defined header file for editing a customer record
#include "exit.h"// User-defined header file for exiting a customer record


int main()
{
    int i = 0;

    time_t t;
    time(&t);
    char customername;
    char choice;

    system("cls");
    printf("\t\t*********************************************\n");
    printf("\t\t*                                           *\n");
    printf("\t\t*       ----------------------------        *\n");
    printf("\t\t*         HOTEL MANAGEMENT SYSTEM           *\n");
    printf("\t\t*       ----------------------------        *\n");
    printf("\t\t*                                           *\n");
    printf("\t\t*                                           *\n");
    printf("\t\t*                                           *\n");
    printf("\t\t*********************************************\n\n\n");
    printf("                                  _._\n");
    printf("                               .-~ | ~-.\n");
    printf("                               |   |   |\n");
    printf("                               |  _:_  |                    .-:~--.._\n");
    printf("                             .-'~~ | ~~'-.                .~  |      |\n");
    printf("            _.-~:.           |     |     |                |   |      |\n");
    printf("           |    | `.         |     |     |                |   |      |\n");
    printf("  _..--~:-.|    |  |         |     |     |                |   |      |\n");
    printf(" |      |  ~.   |  |         |  __.:.__  |                |   |      |\n");
    printf(" |      |   |   |  |       .-'~~   |   ~~'-.              |   |      |\n");
    printf(" |      *   |  _|.--~:-.   |       |       |         .:~-.|   |      |\n");
    printf(" |      H   | |      |  ~. |       |   _.-:~--._   .' |   |   |      |\n");
    printf(" |      O   | |      |   | |       |  |   |     |  |  |   |   |      |\n");
    printf(" |      T   | |      |   | |       |  |   |     |  |  |   |   |      |\n");
    printf(" |      E   | |      |   | |       |  |   |     |  |  |   |   |      |\n");
    printf(" |      L   | |      |   | |       |  |   |     |  |  |   |   |      |\n");
    printf(" |      *   | |      |   | |       |  |   |     |  |  |   |   |      |\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\t\t  ------------------------------------------   \n");
    printf("\t\t      +++++++++++++++++++++++++++++++++      \n");
    printf("\t\t      +     Welcome to our Hotel!     +      \n");
    printf("\t\t      +                               +      \n");
    printf("\t\t      +++++++++++++++++++++++++++++++++      \n");
    printf("\t\t                                             \n");
    printf("\t\t  ------------------------------------------\n");
    printf("\t\t  ##########################################\n");
    printf("\t\t          Please enjoy your stay!             \n");
    printf("\t\t  ##########################################\n");


    for (i = 0; i < 80; i++)
        printf("-");
    printf("\nCurrent date and time: %s", ctime(&t));
    for (i = 0; i < 80; i++)
        printf("-");
    sleep(10);
    login();
    system("cls");
    while (1)
    {
        system("cls");

        for (i = 0; i < 80; i++)
            printf("-");
        printf("\n");
        printf("  ******************************  |MAIN MENU|  ***************************** \n");
        for (i = 0; i < 80; i++)
            printf("-");
        printf("\n");
        printf("\t\t *Please enter your choice for menu*:");
        printf("\n\n");
        printf(" \n Enter 1 -> Book a room");
        printf("\n------------------------");
        printf(" \n Enter 2 -> View Customer Record");
        printf("\n------------------------");
        printf(" \n Enter 3 -> Delete Customer Record");
        printf("\n------------------------");
        printf(" \n Enter 4 -> Search Customer Record");
        printf("\n------------------------");
        printf(" \n Enter 5 -> Edit Record");
        printf("\n------------------------");
        printf(" \n Enter 6 -> Exit");
        printf("\n");
        for (i = 0; i < 80; i++)
            printf("-");
        printf("\nCurrent date and time : %s",ctime(&t));
	    for(i=0;i<80;i++)
		printf("-");

		choice=getche();
		choice=toupper(choice);


        switch (choice)
        {
        case '1':
            add();
            break;
        case '2':
            list();
            break;
        case '3':
            delete();
            break;
        case '4':
            search();
            break;
        case '5':
            edit();
            break;
        case '6':
                exitProgram(); // Recursive function call
                break;
            default:
                printf("\n\n\t Invalid choice! Please try again.");
                getch();
        }
    }


}



















