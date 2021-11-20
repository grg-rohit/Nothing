#include <stdio.h> 
#include <stdlib.h>
#include "busexpress.c"
#include <conio.h>
extern void busExpress();
//bus number
int busNo;
int main(){
    char destination[50];
    int option;
    int i,j;

    system("cls");
    printf("\n\n\t\t\t:::::::::::::::::::::::::::::::::\n");
    printf("\t\t\t\tBUS RESERVATION\n");
    printf("\t\t\t:::::::::::::::::::::::::::::::::\n");
    char *destination_ptr[4] = {"aa", "bb", "c", "da"};

    printf("Services available in: ");
    printf("\n");
    for(i=0; i<4; i++){
        j = i;
        printf("%d ", ++j);
        printf("%s-----", buses[i]);
        puts(destination_ptr[i]); 
    }


    printf("Select your destination: ");
    scanf("%d", &option);

    switch (option){
        case 1:
            bus1();
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        default:
            printf("Service not availabe!");
    }

}


bus1(){
    int i;

    //pointer for bus, ticket and seat    
    FILE *fbusptr, *fticketptr, *fseatsptr;
    char name[20]; 
    int tickets;

    char tempname[33][10]={"Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty "};
    printf("Available seats: \n");

    for(i=0; i<34; i++){
        printf("%d %s\n", ++i, tempname[i]);
    }
    getch();
    system("cls");

    fbusptr = fopen("bus1.txt", "w+");
    fticketptr = fopen("ticket.txt", "w+");
    fseatptr = fopen("fseatptr.txt", "w+");
 

    printf("Enter name: ");
    scanf("%*c %[^\n]s", &name);
    fprintf(fptr, "%s", name);

    printf("Enter number of tickets: ");
    scanf("%d",&tickets);
    fprintf(fticketptr,"%s")


    
    
    fclose(fptr);

}

