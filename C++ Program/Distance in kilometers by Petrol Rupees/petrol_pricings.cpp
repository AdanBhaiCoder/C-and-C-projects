// This program is made to tell user a total price of distance & litre which he/she wants to cover in kilometers.
#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
int main()
{
	cout << "This program is created to tell user the total kilometers & litres for the distance which he/she wants to cover in \nspecific rupees.";
	float kilometer_per_rupee,petrol_price, mileage, litre_per_rupee;
	int rupees;
start:
	cout << "\nEnter your vehicle's mileage :";
	cin >> mileage;
    cout <<"Enter the current price of petrol :";
    cin >> petrol_price;
	cout << "\nEnter any value in rupees :";
	cin >> rupees;
	kilometer_per_rupee = (float)mileage / (float)petrol_price;
	double total_kilometers = kilometer_per_rupee * rupees;
	litre_per_rupee = 1.0 / float(petrol_price);
	double total_litre = litre_per_rupee * rupees;

	//**** As you see the code below is not neccesary ,because the real purpose of this program is covered above****

	if (rupees < 2000)
	{
		if (total_kilometers >= 10 && total_litre >= 1)
		{
			cout << "\nThe " << rupees << " rupees of petrol will cover " << setprecision(4) << total_kilometers << "km & the petrol litres in that price will be " << setprecision(4) << total_litre << "L" << endl;
		}
		else if (total_kilometers >= 10 && total_litre > 0.1 && total_litre < 0.9)
		{
			cout << "\nThe " << rupees << " rupees of petrol will cover " << setprecision(4) << total_kilometers << "km & the petrol litres in that price will be " << setprecision(3) << total_litre << "L" << endl;
		}
		else if (total_kilometers <= 10 && total_litre > 0.1 && total_litre < 0.9)
		{
			cout << "\nThe " << rupees << " rupees of petrol will cover " << setprecision(3) << total_kilometers << "km & the petrol litres in that price will be " << setprecision(3) << total_litre << "L" << endl;
		}
		else if (total_kilometers <= 10 && total_litre > 0.01 && total_litre < 0.09)
		{
			cout << "\nThe " << rupees << " rupees of petrol will cover " << setprecision(2) << total_kilometers << "km & the petrol litres in that price will be " << setprecision(2) << total_litre << "L" << endl;
		}
		else if (total_kilometers <= 0.9 && total_litre > 0.001 && total_litre < 0.009)
		{
			cout << "\nThe " << rupees << " rupees of petrol will cover " << setprecision(2) << total_kilometers << "km & the petrol litres in that price will be " << setprecision(2) << total_litre << "L" << endl;
		}
		
	}
	else
	{
		cout << "\nYour Entered amount of petrol price will overflow your tank \nEnter amount in range of 2000\n";
		goto start;
	}
	cout<<"\nDo not depend on this program, your mileage will never be the same when you change the behaviour of your driving\n";
	getch();
	return 0;
}
