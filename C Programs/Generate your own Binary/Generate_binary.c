#include <stdio.h>
#include <conio.h>
int Make_binary(int number)
{

    int binary, arr = 8, num, count_binary[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    num = number;
    while (num != 0)
    {
        arr--;
        binary = num % 2;
        count_binary[arr] = binary;
        num = num / 2;
    }
    for (number = 0; number < 8; number++)
    {
        printf("%d", count_binary[number]);
    }
    return 0;
}
int main()
{
    char name[20] = "\0";
    printf("Enter any Word :");
    scanf("%s", &name);
    printf("\nSuccessfully Converted '%s' into binary\n", name);
    printf("The Word '%s' in binary is below:\n", name);
    int str_count=0;
    while (name[str_count]!='\0')
    {
        str_count++;
    }
    
    int number, iter = 0;
    while (iter < str_count)
    {
        number = name[iter];
        Make_binary(number);
        printf(" ");
        iter++;
    }
    
    getch();
}
