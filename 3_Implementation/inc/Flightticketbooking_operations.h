/**
 * @file Flightticketbooking_operations.h
 * @author Kaviarasu B
 * @brief Header file for Flightticketbooking application 
 *
 */

#ifndef __FLIGHTTICKETBOOKING_OPERATIONS_H__
#define __FLIGHTTICKETBOOKING_OPERATIONS_H__

#include<stdio.h>
#include"func.h"




int first=5,second=5,third=5;
struct node
{
int ticketno;
int phoneno;
char name[100];
char address[100];

}s;
void menu()
{
     int n;
printf("\n");
   printf("\n===============================================================\n");
   
printf("\n\t**** welcome to kavi's airline ticket system*****");

    printf("\n===============================================================");
printf("\t\t\n1.Reservation\t\t\n2.availability cheking\t\t\n3.cancel\n4.status\n================================================================\n\t\tenter your option:");
scanf("%d",&n);
switch(n)
{
case 1: Reservation();
    break;
case 2: availability();
    break;
case 3: cancel();
    break;
case 4: status();    
default:
       break;
}


}

void Reservation()
{
printf("enter your details");
printf("\nname:");
scanf("%s",s.name);
printf("\nphonenumber:");
scanf("%d",&s.phoneno);
printf("\naddress:");
scanf("%s",s.address);
printf("\nticketnumber only 1-10:");
scanf("%d",&s.ticketno);
menu();
}
void availability()
{
int c;

     printf("\n===============================================");
    printf("\n1.AIR INDIAN AIRLINES(8:30pm-10pm)\n");
    printf("\n");
    printf("2.INDIGO AIRLINES(12.30am-2.30pm-4.30pm-2pm-11pm)\n");
    printf("\n===============================================");
scanf("%d",&c);
switch(c)
{
case 1:if(first>0)
     {
     printf("seat available\n");
     first--;
     }
     else
     {
     printf("seat not available");
     }
     break;
case 2:   if(second>0)
     {
     printf("seat available\n");
     second--;
     }
     else
     {
     printf("seat not available");
     }
     break;
case 3:if(third>0)
     {
     printf("seat available\n");
     third--;
     }
     else
     {
     printf("seat not available");
     }
     break;
default:
     break;
}
}
void cancel()
{
int c;
printf("cancel\n");
printf("which class you want to cancel");
printf("\n1.first class\n2.second class\n3.third class\n");
printf("enter the option");
scanf("%d",c);
switch(c)
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
printf("ticket is canceled");
}
void status(){
     int b;
     printf("flight condition\n1. press 1 - TO check the flight condition.");
     printf("\nenter the option");
scanf("%d",&b);
switch(b)
{
case 1:
printf("\u2708 flight condition is good");
       break;

default:

     break;
}

}
#endif