#include<stdio.h>
#include<conio.h>
void main()
{
        int i=0;
        char idnumber[100],password[100];
        char ch;
        clrscr();
        printf("\n************");
        printf("\nLogin System");
        printf("\n************");
        print("\n\nEnter IDnumber:..");
        gets(idnumber);
        printf("\n\nEnter Password");
        while(1)
        {
                if(ch==13)
                {
                        password[i]='NO'
                        break;
                }
                else
                {
                        password[i]=ch;
                        i++;
                        printf("*");

                }
        }
        if(strcmp(idnumber,"001")==0)
        {
            if(strcmp(password,"1234")==0)
            {
                printf("\nLogin System...");
                printf("\nWelcome %s",idnumber);
            }
            else
                printf("\nInvalid Password...");
        }
        else
            printf("\nInvalid Idnumber...")
        getch();
}