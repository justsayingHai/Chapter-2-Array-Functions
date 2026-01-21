#include <iostream>
using namespace std;

void search_num(int numbers[], int size, int num);

int main()
{
    const int size = 5;
    int numbers[size] = { 1,2,3,4,5 };

    int num;
    cout << "Enter the number: ";
    cin >> num;

    search_num(numbers, size, num);

    return 0;
}

void search_num(int numbers[], int size, int num)
{
    bool numFound = false;

    for (int i = 0; i < size; i++)
    {
        if (numbers[i] == num)
        {
            numFound = true;
            break;
        }
    }

    if (numFound)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
}
