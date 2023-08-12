#include <stdio.h>
#include <conio.h>
int main()
{
    int code;
    printf("Do you want to print ASCII table\nPress Enter\n");
    getch();
    printf("\t\t\t\t------------------------------------------------\n");
    int i;
    for(i=32;i<=255;i++){
    printf("\t\t\t\t");
    printf("|\a   The Character for %3d ASCII code is ' %c '   | \n",i,i);
    printf("\t\t\t\t------------------------------------------------\n"); 
    }
    getch();
    return 0;
    }
