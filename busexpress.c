//#include <stdio.h>

// LIST OF BUSES

char buses[10][100] = {"NEPAL YATAYAT", "SAJHA YATAYAT","Naya Nepal Yatayat", "kk"};
void busExpress();

void busExpress()
{
    int i, j;
    system("cls");
    j=0;

    printf("\n\n\t\t\t\t\tBUS EXPRESS \n\n");
    while(i<4){
        printf("\t\t\t\t[%d]==> %s\n", ++j, buses[i]);
        i++;
    }
    // printf("\t\t\t\t[1]==> %s\n", buses[0]);
    // printf("\t\t\t\t[2]==> %s\n", buses[1]);
    // printf("\t\t\t\t[3]==> %s\n", buses[2]);
    // printf("\t\t\t\t[4]==> %s\n", buses[3]);

}


