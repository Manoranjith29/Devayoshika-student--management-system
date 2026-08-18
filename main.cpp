#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string id;
    string name;
    string department;
    int age;
};

int main()
{
    Student students[100];
    int count = 0;
    int choice;

    cout << "==============================" << endl;
    cout << "   STUDENT MANAGEMENT SYSTEM" << endl;
    cout << "==============================" << endl;

    do
    {
        cout << "\n1. Add Student" << endl;
        cout << "2. Display Students" << endl;
        cout << "3. Search Student" << endl;
        cout << "4. Exit" << endl;
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "\nEnter Student ID: ";
            cin >> students[count].id;

            cout << "Enter Name: ";
            cin.ignore();
            getline(cin, students[count].name);

            cout << "Enter Department: ";
            getline(cin, students[count].department);

            cout << "Enter Age: ";
            cin >> students[count].age;

            count++;

            cout << "\nStudent added successfully!" << endl;
        }
        else if (choice == 2)
        {
            if (count == 0)
            {
                cout << "\nNo students available." << endl;
            }
            else
            {
                cout << "\n===== Student Details =====" << endl;

                for (int i = 0; i < count; i++)
                {
                    cout << "\nStudent " << i + 1 << endl;
                    cout << "ID         : " << students[i].id << endl;
                    cout << "Name       : " << students[i].name << endl;
                    cout << "Department : " << students[i].department << endl;
                    cout << "Age        : " << students[i].age << endl;
                }
            }
        }
        else if (choice == 3)
        {
            string searchID;
            bool found = false;

            cout << "\nEnter Student ID to search: ";
            cin >> searchID;

            for (int i = 0; i < count; i++)
            {
                if (students[i].id == searchID)
                {
                    cout << "\n===== Student Found =====" << endl;
                    cout << "ID         : " << students[i].id << endl;
                    cout << "Name       : " << students[i].name << endl;
                    cout << "Department : " << students[i].department << endl;
                    cout << "Age        : " << students[i].age << endl;

                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "\nStudent not found!" << endl;
            }
        }
        else if (choice == 4)
        {
            cout << "\nThank you for using Student Management System!" << endl;
        }
        else
        {
            cout << "\nInvalid choice. Please try again." << endl;
        }

    } while (choice != 4);

    return 0;
}
