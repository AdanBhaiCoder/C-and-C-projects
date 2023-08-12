#include<stdio.h>
#include<conio.h>
void main()
{
    char apna,value;
    
    printf("\nYou need to shake three times in a day.\n1.OK\n2.NO\n>>");
    apna=getch();
   if (apna=='2')
   {
    printf("\nCHUP KAR BE KUTTAY!!\n");
    goto nikal;
   }
   
   printf("\nChal ab bata \nKitnii baar hilaya (^_-)\n>>");
   value=getch();
   switch (value)
   {
   case '0':
    printf("\nCHAL AB APNA HILALY(Teen bar)");
    break;
   case '1':
    printf("\nCHAL AB APNA HILALY(Do bar)");
    break;
   case '2':
    printf("\nCHAL AB APNA HILALY(Eik bar)");
    break;
   case '3':
    printf("\nShabaaaash !!");
    break;
   
   default:
    printf("\nYeH \nShabaaaash !!\nAb sojaa!!\nThak gye hoge");
    break;
   }
   nikal:
    getch();
}