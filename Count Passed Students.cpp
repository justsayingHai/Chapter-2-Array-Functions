#include <iostream>
using namespace std;

void count_students(int marks[], int size);

int main()
{
    const int size = 8;
    int marks[size] = { 10,31,76,53,87,23,67,1 };

    count_students(marks, size);
    
    return 0;
}

void count_students(int marks[], int size)
{
    int pass_count = 0;

    for (int i = 0; i < size; i++)
    {
        if (marks[i] >= 40)
        {
            pass_count++;
        }
    }

    cout << "Number of passing students: " << pass_count << endl;
}