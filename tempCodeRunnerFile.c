#include<stdio.h>
#include<conio.h>
#include"func.h"
#include"unity.h"
int first = 5, second = 5, third = 5;
int time;
struct node
{
    int ticketno;
    int phoneno;
    char name[100];
    char address[100];
} s;
void menu()
{
int n;
    printf("\n====================================================================\n");
    printf("\t\twelcome to railway ticket reservation\n");
    printf("====================================================================\n");
    printf("\n1.booking\n2.availability cheking\n3.cancel\n4.speed\nenter your option:");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        booking();
        break;
    case 2:
        availability();
        break;
    case 3:
        cancel();
        break;
    case 4:
        speed();
        break;
    default:
        break;
    }
    getch();
}
void booking()
{
    printf("enter your details");
    printf("\nname:");
    scanf("%s", s.name);
    printf("\nphonenumber:");
    scanf("%d", &s.phoneno);
    printf("\naddress:");
    scanf("%s", s.address);
    printf("\nticketnumber only 1-10:");
    scanf("%d", &s.ticketno);
    printf("\n Congratulations your ticket was successfully booked!!!!!!!!");
    menu();
}
void availability()
{
    int c;
     printf("\n===============================================");
    printf("\n1.TRAIN-CHERAN EXPRESS(7pm-10pm)\n");
    printf("\n");
    printf("2.TRAIN-PANDIAN EXPRESS(10.30am-1.30pm-4.30pm-8pm-11pm)\n");
    printf("\n===============================================");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        if (first > 0)
        {
            printf("seat available\n");
            first--;
        }
        else
        {
            printf("seat not available");
        }
        break;
    case 2:
        if (second > 0)
        {
            printf("seat available\n");
            second--;
        }
        else
        {
            printf("seat not available");
        }
        break;
    case 3:
        if (third> 0)
        {
            printf("seat available\n");
            third --;
        }
        else
        {
            printf("seat not available");
        }
        break;
    default:
        break;


    }
    menu();

}
void cancel()
{
    int c;
    printf("cancel\n");
    printf("which class you want to cancel");
    printf("\n1.first class\n2.second class\n3.third class\n");
    printf("enter the option");
    scanf("%d",&c);
    switch (c)
    {
    case 1:
        first++;
        break;
    case 2:
        second++;
        break;
    case 3:
        third++;
        break;
    default:
        break;
    }
    printf("ticket is canceled\n");
    menu();
}
void speed()
{
   printf("\nTime between two poles:");

   scanf("%d",&time);

   int spee;
   spee=100/time;
   printf("\nSpeed of the train is%d",spee);

}
© 2022 GitHub, Inc.
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About
