#include <stdio.h>
#include "menu.c"

extern void menu();

int main(){
    int option;

    menu();
    printf("Enter Your Choice: ");
  scanf("%d", &option);
//    switch(option){
//        case 1: 
//            bus();
//            break;
//        case 2:
//            booking();
//            break;
//        case 3:
//            cancel();
//        case 4:
//            status();
//            break;
//        default:
//            printf("Invalid Option!");
//    }
}
