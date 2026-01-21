#include <iostream>
using namespace std;

void replace_small(int numbers[], int size);

int main()
{
    const int size = 5;
    int numbers[size] = { 5,12,8,20,3 };

    replace_small(numbers, size);

    return 0;
}

void replace_small(int numbers[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] < 10)
        {
            numbers[i] = 10;
        }

        cout << numbers[i] << " ";
    }

    cout << endl;
}
