// This program is made to tell user a total price of distance & litre which he/she wants to cover in kilometers.
#include <stdio.h>
#include<conio.h>
int main()
{
    printf("\nThis program is created to tell user the total kilometers & litres for the distance which he/she wants to cover in \nspecific rupees.");

    float kilometer_per_rupee, petrol_price, mileage, litre_per_rupee, total_kilometers, total_litre;
    int rupees;

    printf("\nEnter your vehicle's mileage :");
    scanf("%f", &mileage);

    printf("Enter the current price of petrol :");
    scanf("%f", &petrol_price);
start:

    printf("\nEnter the value in rupees :");
    scanf("%d", &rupees);
    // This portion covers the calculation of kilometers................

    kilometer_per_rupee = (float)mileage / (float)petrol_price;
    total_kilometers = kilometer_per_rupee * rupees;

    // This portion covers the calculation of litres................

    litre_per_rupee = 1.0 / petrol_price;
    total_litre = litre_per_rupee * rupees;

    //**** As you see the code below is not neccesary ,because the real purpose of this program is covered above****

    if (rupees < 2000)
    {
        if (total_kilometers >= 10 && total_litre >= 1)
        {
            printf("\nThe %d rupees of petrol will cover %.0f km & the petrol litres in that price will be %.1fL", rupees, total_kilometers, total_litre);
        }
        else if (total_kilometers >= 10 && total_litre >= 0.1 && total_litre < 1)
        {
            printf("\nThe %d rupees of petrol will cover %.0f km & the petrol litres in that price will be %.1fL", rupees, total_kilometers, total_litre);
        }
        else if (total_kilometers <= 10 && total_litre >= 0.1 && total_litre < 1)
        {
            printf("\nThe %d rupees of petrol will cover %.1f km & the petrol litres in that price will be %.1fL", rupees, total_kilometers, total_litre);
        }

        else if (total_kilometers <= 10 && total_litre < 0.1 && total_litre >= 0.01)
        {
            printf("\nThe %d rupees of petrol will cover %.1f km & the petrol litres in that price will be %.2fL", rupees, total_kilometers, total_litre);
        }
        else if (total_kilometers <= 0.9 && total_litre >= 0.001 && total_litre < 0.01)
        {
            printf("\nThe %d rupees of petrol will cover %.2f km & the petrol litres in that price will be %.3fL", rupees, total_kilometers, total_litre);
        }
    }
    else
    {
        printf("\nYour Entered amount of petrol price will overflow your tank \nEnter amount in range of 2000\n");
        goto start;
    }
    char condition;
    printf("\n Do you want to run again (Y/N)");
    condition = getch();
    if (condition == 'y' || condition == 'Y')
    {
        goto start;
    }

    getch();
    return 0;
}
