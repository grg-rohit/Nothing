#include <stdio.h>
#include <conio.h>

int main () {
   char name[20];
   FILE *fbusptr;
   fbusptr = fopen("test.txt", "r+");

   if(fbusptr == NULL){
      fbusptr = fopen("test.txt", "w+");   
   }
   else{
      fbusptr = fopen("test.txt", "a+"); 
   }


   printf("Enter name: ");
   gets(name);
   fprintf(fbusptr,"%s\n", name);

   
   fclose(fbusptr);

   

   
   return(0);
}