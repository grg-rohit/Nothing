#include <stdio.h> 
#include <string.h>
#include "busexpress.c"
#include <conio.h>
extern void busExpress();

int Booking(){
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
            Bus1();
            break;
        case 2:
            break;
            Bus2();
        case 3:
            break;
            Bus3();
        case 4:
            break;
        default:
            printf("Service not availabe!");
    }



}

int Bus1(){
    int i, j;

    //pointer for bus, ticket and seat    
    FILE *fbusptr, *fticketptr, *seatNoPtr;
    char name[20]; 
    int tickets, seat_no;

    char tempname[33][10]={"Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty "};
    printf("Available seats: \n");

    for(i=0; i<34; i++){
        printf("%d %s\n", ++i, tempname[i]);
    }
    getch();
    system("cls");

    fbusptr = fopen("bus1.txt", "r+");
    fticketptr = fopen("bus1Ticket.txt", "r+");
    seatNoPtr = fopen("bus1SeatNo.txt", "r+");

    if(fbusptr==NULL && fticketptr==NULL && seatNoPtr==NULL){
        fbusptr = fopen("bus1.txt", "w+");
        fticketptr = fopen("bus1Ticket.txt", "w+");
        seatNoPtr = fopen("bus1SeatNo.txt", "w+");
    }
    else{
        fbusptr = fopen("bus1.txt", "a+");
        fticketptr = fopen("bus1Ticket.txt", "a+");
        seatNoPtr = fopen("bus1SeatNo.txt", "a+");
    }

    printf("Enter name: ");
    scanf("%*c %[^\n]s", &name);
    fprintf(fbusptr, "%s\n", name);

    printf("Enter number of tickets: ");
    scanf("%d",&tickets);
    fprintf(fticketptr,"%d\n", tickets);

    for (i=0; i<tickets; i++){
        printf("Enter seat number: ");
        scanf("%d", &seat_no);
        fprintf(seatNoPtr, "%d\n", seat_no);
        strcpy(tempname[seat_no-1], name);
    }

  
   
    fclose(seatNoPtr);
    fclose(fticketptr);
    fclose(fbusptr);

    printf("\n");
    printf("Enter any key to continue.......");
    getch();
    system("cls");

}

int Bus2(){
    int i, j;

    //pointer for bus, ticket and seat    
    FILE *fbusptr, *fticketptr, *seatNoPtr;
    char name[20]; 
    int tickets, seat_no;

    char tempname[33][10]={"Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty "};
    printf("Available seats: \n");

    for(i=0; i<34; i++){
        printf("%d %s\n", ++i, tempname[i]);
    }
    getch();
    system("cls");

    fbusptr = fopen("bus2.txt", "r+");
    fticketptr = fopen("bus2Ticket.txt", "r+");
    seatNoPtr = fopen("bus2SeatNo.txt", "r+");

    if(fbusptr==NULL && fticketptr==NULL && seatNoPtr==NULL){
        fbusptr = fopen("bus2.txt", "w+");
        fticketptr = fopen("bus2Ticket.txt", "w+");
        seatNoPtr = fopen("bus2SeatNo.txt", "w+");
    }
    else{
        fbusptr = fopen("bus2.txt", "a+");
        fticketptr = fopen("bus2Ticket.txt", "a+");
        seatNoPtr = fopen("bus2SeatNo.txt", "a+");
    }

    printf("Enter name: ");
    scanf("%*c %[^\n]s", &name);
    fprintf(fbusptr, "%s\n", name);

    printf("Enter number of tickets: ");
    scanf("%d",&tickets);
    fprintf(fticketptr,"%d\n", tickets);

    for (i=0; i<tickets; i++){
        printf("Enter seat number: ");
        scanf("%d", &seat_no);
        fprintf(seatNoPtr, "%d\n", seat_no);
        strcpy(tempname[seat_no-1], name);
    }

  
   
    fclose(seatNoPtr);
    fclose(fticketptr);
    fclose(fbusptr);

    printf("\n");
    printf("Enter any key to continue.......");
    getch();
    system("cls");

}

int Bus3(){
    int i, j;

    //pointer for bus, ticket and seat    
    FILE *fbusptr, *fticketptr, *seatNoPtr;
    char name[20]; 
    int tickets, seat_no;

    char tempname[33][10]={"Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty "};
    printf("Available seats: \n");

    for(i=0; i<34; i++){
        printf("%d %s\n", ++i, tempname[i]);
    }
    getch();
    system("cls");

    fbusptr = fopen("bus3.txt", "r+");
    fticketptr = fopen("bus3Ticket.txt", "r+");
    seatNoPtr = fopen("bus3SeatNo.txt", "r+");

    if(fbusptr==NULL && fticketptr==NULL && seatNoPtr==NULL){
        fbusptr = fopen("bus3.txt", "w+");
        fticketptr = fopen("bus3Ticket.txt", "w+");
        seatNoPtr = fopen("bus3SeatNo.txt", "w+");
    }
    else{
        fbusptr = fopen("bus3.txt", "a+");
        fticketptr = fopen("bus3Ticket.txt", "a+");
        seatNoPtr = fopen("bus3SeatNo.txt", "a+");
    }

    printf("Enter name: ");
    scanf("%*c %[^\n]s", &name);
    fprintf(fbusptr, "%s\n", name);

    printf("Enter number of tickets: ");
    scanf("%d",&tickets);
    fprintf(fticketptr,"%d\n", tickets);

    for (i=0; i<tickets; i++){
        printf("Enter seat number: ");
        scanf("%d", &seat_no);
        fprintf(seatNoPtr, "%d\n", seat_no);
        strcpy(tempname[seat_no-1], name);
    }

  
   
    fclose(seatNoPtr);
    fclose(fticketptr);
    fclose(fbusptr);

    printf("\n");
    printf("Enter any key to continue.......");
    getch();
    system("cls");

}



// status(){
//     int i, index=0; j;
//     char tempname[33][10]={"Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty "};

//     printf("Your Bus Number is %d ----------- %s", option, buses[option-1]);
//     printf("\n\n\n");
//     printf("")
