#include <iostream>
using namespace std;

int main(void)
{
    bool exit = false;
    do
    {
        int option;
        int grade[10];
        const char *names[10] = {"Amir", "Marry", "Ray", "Sara", "Lara", "Kane", "Alex", "Beth", "Martin", "Ali"};
        cout << "Select a number:\n  1- Enter grades.\n  2- Change one grade.\n  3- The Report.\n  4- Exit.\nWhat do want to do?  ";
        cin >> option;

        switch (option)
        {
        case (1):
            for (int i = 0; i < 10; i++)
            {
                cout << i + 1 << "- Enter " << names[i] << " grade: ";
                cin >> grade[i];
            }
            cout << "You have entered 10 grades. Thank you!\n";
            break;

        case (2):
            int number;
            cout << "Enter the student number: ";
            cin >> number;
            cout << "Enter the Grade: ";
            cin >> grade[number - 1];
            cout << "  1- The grade for " << names[number - 1] << " changed to " << grade[number - 1] << "\n";
            break;

        case (3):
        {
            int sum = 0;
            int max = 0;
            int min = 50;
            for (int i = 0; i < 10; i++)
            {
                sum += grade[i];
                if (min > grade[i])
                {
                    min = grade[i];
                }
                if (max < grade[i])
                {
                    max = grade[i];
                }
            }
            cout << "The average is: " << sum / 10 << "|  The Max grade is: " << max << "|  The Min grade is: " << min << "\n";
        }
        break;

        case (4):
            exit = true;
            break;
        }

    } while (exit == false);
}