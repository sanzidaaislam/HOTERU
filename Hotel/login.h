#ifndef LOGIN_H_INCLUDED
#define LOGIN_H_INCLUDED

void login()
{
    int a = 0, i = 0;
    char uname[10], c = ' ';
    char psword[10], code[10];
    char user[10] = "sanzida";// Sample username
    char pass[10] = "key123";// Sample password
    do
    {
        system("cls");

        printf("\n             **************************  LOGIN FORM  **************************  ");
        printf(" \n                                     ENTER USERNAME:-");
        scanf("%s", uname);
        printf(" \n                                     ENTER PASSWORD:-");
        while (i < 10)
        {
            psword[i] = getch();
            c = psword[i];
            if (c == 13)
                break;
            else
                printf("*");
            i++;
        }
        psword[i] = '\0';

        i = 0;

        if (strcmp(uname, user) == 0 && strcmp(psword, pass) == 0)
        {
            printf("  \n\n\n       WELCOME !!!! LOGIN IS SUCCESSFUL");

            break;
        }
        else
        {
            printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL");
            a++;

            getch();
        }
    } while (a <= 2);
    if (a > 2)
    {
        printf("\nSorry you have entered the wrong username and password for three times!!!");

        getch();
        main();

    }
    system("cls");
}

#endif // LOGIN_H_INCLUDED
