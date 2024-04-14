//Worksheet Q#14
#include <iostream>
using namespace std;

int main() {
    int month, year;

    cout << "Enter the month (1-12): ";
    cin >> month;

    if (month < 1 || month > 12) 
    {
        cout << "Invalid month input." << endl;
        return 1;
    }

    cout << "Enter the year: ";
    cin >> year;

    bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    int daysInMonth;

    switch(month) {
        case 1: // January
        case 3: // March
        case 5: // May
        case 7: // July
        case 8: // August
        case 10: // October
        case 12: // December
            daysInMonth = 31;
            break;
        case 4: // April
        case 6: // June
        case 9: // September
        case 11: // November
            daysInMonth = 30;
            break;
        case 2: // February
            daysInMonth = (isLeapYear) ? 29 : 28;
            break;
    }

    cout << "Number of days in the month: " << daysInMonth << endl;

    return 0;
}