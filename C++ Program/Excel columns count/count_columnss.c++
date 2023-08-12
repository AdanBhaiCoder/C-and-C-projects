#include <iostream>
#include <conio.h>
using namespace std;
int count = 0;
int one_loop()
{
    for (int i = 65; i <= 90; i++)
    {
        count++;
        char alphabet = i;
        cout << "The columns are " << alphabet << endl;
    }
}
int two_loops()
{
    for (int i = 1; i <= 26; i++)
    {
        for (int j = 1; j <= 26; j++)
        {
            count++;
            char a = i + 64, b = j + 64;
            cout << "The columns are " << a << " " << b << endl;
        }
    }
}

int three_loops()
{
    for (int i = 1; i <= 24; i++)
    {
        for (int j = 1; j <= 26; j++)
        {
            for (int k = 1; k <= 26; k++)
            {
                if (i == 'X' - 64 && j == 'F' - 64 && k == 'D' - 64)
                {
                    count++;
                    char a = i + 64, b = j + 64, c = k + 64;
                    cout << "The characters are " << a << " " << b << " " << c << endl;
                    goto Ja_puchke_ah;
                }
                count++;
                char a = i + 64, b = j + 64, c = k + 64;
                cout << "The characters are " << a << " " << b << " " << c << endl;
            }
        }
    }
Ja_puchke_ah:
    return 0;
}

int main()
{
    one_loop();
    two_loops();
    three_loops();
    cout << endl;
    cout << "The Total columns of Excel sheets are " << count;
    getch();
}
