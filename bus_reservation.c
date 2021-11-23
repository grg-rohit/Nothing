#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.c"
#include "busexpress.c"
#include <conio.h>
#include "booking.c"



extern void busExpress();

extern void menu();
extern int Booking();


//extern int booking();


int main(){
  int option;
  login();
  system("cls");
  menu();
  printf("Enter Your Choice: ");
  scanf("%d", &option);
  switch(option){
    case 1:
      busExpress();
      break;
    case 2:
      Booking();
      break;
    default:
      printf("Invalid option!");
      break;
  }
   
}

