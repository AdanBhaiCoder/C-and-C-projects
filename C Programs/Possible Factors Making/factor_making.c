#include <stdio.h>
#include <conio.h>
int main()
{
    int factor, number, loop;
    printf("In this program , Your entered number will be divided into possible factors\n");
    printf("Enter any number :");
    scanf("%d", &number);
    for (loop = 2; loop < number; loop++)
    {
        if (number % loop == 0)
        {
            if (loop == factor)
            {
                break;
            }
            factor = number / loop;

            printf("%d x %d\n", loop, factor);

            if (loop == factor)
            {
                break;
            }
        }
    }
    getch();
}