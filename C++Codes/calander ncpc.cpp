#include <iostream>
#include <iomanip>

using namespace std;

bool isLeapYear(int year) {
    if (year % 4 != 0) {
        return false;
    } else if (year % 100 != 0) {
        return true;
    } else if (year % 400 != 0) {
        return false;
    } else {
        return true;
    }
}

int daysInMonth(int month, int year) {
    if (month == 2) {
        return isLeapYear(year) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else {
        return 31;
    }
}

int dayOfWeek(int day, int month, int year) {
    if (month < 3) {
        month += 12;
        year--;
    }
    int h = (day + 2 * month + 3 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400) % 7;
    return h;
}

void printCalendar(int day, int month, int year, const string& dayName) {
    const string daysOfWeek[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

    // Print header
    for (const string& day : daysOfWeek) {
        cout << setw(3) << day;
    }
    cout << endl;

    // Find the starting day of the month
    int startDay = dayOfWeek(1, month, year);

    // Print the calendar
    int currentDay = 1;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 7; j++) {
            if ((i == 0 && j < startDay) || currentDay > daysInMonth(month, year)) {
                cout << setw(3) << "-"; // Print dash for empty cells
            } else {
                cout << setw(3) << currentDay++;
            }
        }
        cout << endl;
    }

    cout << endl;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int day, month, year;
        string dayName;
        cin >> day >> month >> year >> dayName;

        cout << "Calendar for " << day << "/" << month << "/" << year << " (" << dayName << "):" << endl;
        printCalendar(day, month, year, dayName);
    }

    return 0;
}
q`
