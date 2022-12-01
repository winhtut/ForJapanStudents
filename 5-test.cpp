/*Write a program that allows the user to enter seven double values representing store sales for each day of one week. 
After all seven values are entered, display all the values. Also display highest and lowest sales values.
*/
#include<iostream>
using namespace std;
int main()
{

    double week[7] = { 0 };
    double max = 0.0;
    for (int i = 0; i < 7; i++)
    {
        cout << "Enter sales for day " << i + 1 << ": ";
        cin >> week[i];
    }
    for (int i = 0; i < 7; i++)
    {
        cout << "Entered Day " << i + 1 << " sales is: " << week[i] << endl;
    }
    int number=10;
    for (int i = 0; i < 7; i++)
    {
        if (week[0] < week[i])
        {
            week[0] = week[i];
        }
    }
    cout << "highest is: " << week[0];

    for (int i = 0; i < 7; i++)
    {
        if (week[0] > week[i])
        {
            week[0] = week[i];
        }
    }
    cout << "lowest is: " << week[0];

    return 0;
}