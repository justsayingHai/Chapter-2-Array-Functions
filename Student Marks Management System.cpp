#include <iostream>
using namespace std;

void menu();
void input_marks(int student_marks[], int student_count);
void display_marks(int student_marks[], int student_count);
int total_marks(int student_marks[], int student_count);
float avg_marks(int student_marks[], int student_count);
int count_passed(int student_marks[], int student_count);
int highest_marks(int student_marks[], int student_count);

int main()
{
    const int student_count = 5;
    int student_marks[student_count];

    input_marks(student_marks, student_count);
    
    int command = 0;
    
    do
    {
        menu();
        cout << "Enter choice: ";
        cin >> command;

        switch (command)
        {
        case 1:
            display_marks(student_marks, student_count);
            break;
        case 2:
            total_marks(student_marks, student_count);
            break;
        case 3:
            avg_marks(student_marks, student_count);
            break;
        case 4:
            count_passed(student_marks, student_count);
            break;
        case 5:
            highest_marks(student_marks, student_count);
            break;
        case 6:
            cout << "Exiting . . . Goodbye!" << endl;
            break;
        default:
            cout << "Invalid input!" << endl;
        }
 
    } while (command != 6);

    return 0;
}

void menu()
{
    cout << "======= Student marks Menu =======\n"
        << "1. Display all marks\n"
        << "2. Find total mark\n"
        << "3. Find average mark\n"
        << "4. Count passed students (mark >= 40)\n"
        << "5.Find highest mark\n"
        << "6. Exit\n\n\n";
}

void input_marks(int student_marks[], int student_count)
{
    cout << "Enter marks for 5 students: " << endl;
    for (int i = 0; i < student_count; i++)
    {
        cout << "Students " << i+1 << " mark: ";
        cin >> student_marks[i];
    }
    cout << endl;
}

void display_marks(int student_marks[], int student_count)
{
    cout << "Marks of all students: " << endl; 

    for (int i = 0; i < student_count; i++)
    {
        cout << student_marks[i] << " ";
    }

    cout << endl;
}

int total_marks(int student_marks[], int student_count)
{
    int total_marks = 0;

    for (int i = 0; i < student_count; i++)
    {
        total_marks += student_marks[i];
    }

    cout << "Total marks: " << total_marks << endl;

    return total_marks;
}

float avg_marks(int student_marks[], int student_count)
{
    float total_marks = 0;

    for (int i = 0; i < student_count; i++)
    {
        total_marks += student_marks[i];
    }

    float avg = total_marks / student_count;

    cout << "Average mark: " << avg << endl;

    return avg;
}

int count_passed(int student_marks[], int student_count)
{
    int pass_count = 0;

    for (int i = 0; i < student_count; i++)
    {
        if (student_marks[i] >= 40)
        {
            pass_count++;
        }
    }

    cout << "Passed students: " << pass_count << endl;

    return pass_count;
}

int highest_marks(int student_marks[], int student_count)
{
    int highest_mark = student_marks[0];

    for (int i = 0; i < student_count; i++)
    {
        if (student_marks[i] > highest_mark)
        {
            highest_mark = student_marks[i];
        }
    }

    cout << "Highest mark: " << highest_mark << endl;

    return highest_mark;
}



