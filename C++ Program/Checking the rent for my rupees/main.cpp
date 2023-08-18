#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int total_rupees, one_day_rupees;
    cout << "Enter your rupees :";
    cin >> total_rupees;
    cout << "Enter your one day rupees :";
    cin >> one_day_rupees;
    int x = total_rupees;
    int count_days = 0;
    while (total_rupees >= one_day_rupees)
    {
        total_rupees -= one_day_rupees;
        count_days++;
    }
    cout << "The " << x << " rupees will help you in " << count_days << " days of rents and the left rupees will be " << total_rupees;
    getch();
}