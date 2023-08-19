// This program is made to tell user a total price of distance & litre which he/she wants to cover in kilometers.
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
    cout << "\nThis program is created to tell user the total kilometers & litres for the distance which he/she wants to cover in \nspecific rupees.";
    float rupees_per_kilometer, petrol_price, mileage, kilometers, litre_per_kilometer, total_litres;
    int rupees;
    cout << "\nEnter your vehicle's mileage :";
    cin >> mileage;

    cout << "Enter the current price of petrol :";
    cin >> petrol_price;
start:

    cout << "\nEnter the value in kilometers :";
    cin >> kilometers;
    // This portion covers the calculation of kilometers................

    rupees_per_kilometer = float(petrol_price) / float(mileage);
    rupees = rupees_per_kilometer * kilometers;

    // This portion covers the calculation of litres................

    litre_per_kilometer = 1.0 / mileage;
    total_litres = litre_per_kilometer * kilometers;

    //**** As you see the code below is not neccesary ,because the real purpose of this program is covered above****

    if (rupees < 2000)
    {
        if (total_litres >= 1)
        {
            cout << "\nThe " << kilometers << " km will be covered in " << rupees << " rupees of petrol in your vehicle & the litres in that petrol will be " << setprecision(2) << total_litres << "L";
        }
        else if (total_litres >= 0.1 && total_litres < 1)
        {
            cout << "\nThe " << kilometers << " km will be covered in " << rupees << " rupees of petrol in your vehicle & the litres in that petrol will be " << setprecision(1) << total_litres << "L";
        }
        else if (total_litres < 0.1 && total_litres >= 0.01)
        {
            cout << "\nThe " << kilometers << " km will be covered in " << rupees << " rupees of petrol in your vehicle & the litres in that petrol will be " << setprecision(1) << total_litres << "L";
        }
        else if (total_litres < 0.01 && total_litres >= 0.001)
        {
            cout << "\nThe " << kilometers << " km will be covered in " << setprecision(1) << rupees << " rupees of petrol in your vehicle & the litres in that petrol will be " << setprecision(1) << total_litres << "L";
        }
    }
    else
    {
        cout << "\nYour Entered amount of petrol price will overflow your tank \nEnter amount in range of 2000\n";
        goto start;
    }
    cout << endl
         << "\nRemember: Do not depend on this program, your mileage will never be the same when you change the behaviour of you driving \n";
    char condition;
    cout << "\nDo you want to run again (Y/N)";
    condition = getch();
    if (condition == 'y' || condition == 'Y')
    {
        goto start;
    }

    getch();
    return 0;
}
