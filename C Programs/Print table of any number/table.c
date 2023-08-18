#include <stdio.h>
int main()
{
    int table,number=1;
    printf("Enter any number :");
    scanf("%d", &table);
	printf("\n");
    han:
    if (number<=10) 
    {
        printf("%d x %d = %d\n", table, number, table * number);
        number++;
        goto han;
    }
getch();
    
}
