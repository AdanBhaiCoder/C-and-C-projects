#include <stdio.h>
#include <conio.h>
int main()
{
    float celsius, fahrenheit;
    printf("What do you want ?\n1:Convert celsius into fahrenheit\n2:Convert fahrenheit into celsius\n");
    char choose = getch();
    // using the switch case statement for selection of the choosen code
    switch (choose)
    {
    case '1':
        printf("\nEnter value in celsius :");
        scanf("%f", &celsius);
        fahrenheit = 9 / 5.0 * celsius + 32;
        printf("%.2f celsius = %.2f fahrenheit", celsius, fahrenheit);
        break;
    case '2':

        printf("\nEnter value in fahrenheit :");
        scanf("%f", &fahrenheit);
        celsius = 5.0 / 9 * fahrenheit - 32;
        printf("%.2f fahrenheit = %.2f celsius", fahrenheit, celsius);
        break;

    default:
        printf("\nInvalid input !!");
        break;
    }
    getch();
}
