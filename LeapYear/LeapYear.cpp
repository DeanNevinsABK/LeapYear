#include <iostream>

using namespace std;

bool IsLeapYear(int currentYear);

int main()
{
    bool validInput{ false };
    do
    {
        cout << "Please enter the current year ";
        int currentYear{};
        cin >> currentYear;

        if (cin.fail())
        {
            validInput = false;
            cin.clear();
            cin.ignore(99, '\n');
            cout << "Invalid input. Enter the year as a number. Try again." << endl;
        }
        else if (IsLeapYear(currentYear))
        {
            validInput = true;
            cout << "The year " << currentYear << " is a leap year!" << endl;
        }
        else
        {
            validInput = true;
            cout << "The year " << currentYear << " is NOT a leap year!" << endl;
        }
    } while (!validInput);
}

bool IsLeapYear(int currentYear)
{
    bool isLeap = false;
    if (currentYear % 4 == 0)
    {
        isLeap = true;
        if (currentYear % 100 == 0 && currentYear % 400 != 0)
        {
            isLeap = false;
        }
    }

   return isLeap;
}