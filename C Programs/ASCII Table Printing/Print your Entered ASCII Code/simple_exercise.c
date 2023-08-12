#include "stdio.h"
#include "conio.h"
void main(){
    char chr;
    do
    {
    printf("\nEnter any character :");
    chr=getch();
    printf("\nThe ASCII code of '%c' character is %d",chr,chr);
    } while (chr!='\r');
    getch();
}