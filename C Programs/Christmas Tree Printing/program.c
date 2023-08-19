#include <stdio.h>
int main()
{
    int n;
Print_again:
    printf("\nEnter number for the rows of the triangle stars :");
    scanf("%d", &n);
    //---In this section of program we will make upper portion of tree---
    int f, s,i,x,y;
    for (f = 1; f <= n; f++)
    {
        for (i = f; i <= n; i++)
        {
            printf(" ");
        }

        for (s = f; s >= 1; s--)
        {
            printf(" *");
        }
        printf("\n");
    }
    //---In this section of program we will make lower portion of tree---
    int wood = n / 2;
    for (y = 0; y < wood; y++)
    {
        if (n % 2 == 0)
        {
            for (x = 1; x <= wood; x++)
            {
                printf("  ");
            }
            printf("\b");
        }
        else
        {
            for (x = 1; x <= wood; x++)
            {
                printf("  ");
            }
        }
        if (n >= 15)
        {
            printf("\b");
            for (x = 1; x <= 3; x++)
            {
                printf(" *");
            }
        }
        else
        {
            for (x = 1; x <= 2; x++)
            {
                printf(" *");
            }
        }

        printf("\n");
    }
    printf("Do you want to print again (Press Y):");
    char yes = getch();
    if (yes == 'Y' || yes == 'y')
    {
        goto Print_again;
    }

    getch();
}
