#include <stdio.h>


int main(){
    char name[10];
    printf("Enter name: ");
    scanf("%[^\n]s", &name);
    printf("%s", name);
}

