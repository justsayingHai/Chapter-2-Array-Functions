#include <iostream>
using namespace std;

void print_even_nums(int numbers[], int size);

int main()
{
    const int size = 5;
    int numbers[size] = { 10,15,20,25,30 };

    print_even_nums(numbers, size);

    return 0;
}

void print_even_nums(int numbers[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            cout << numbers[i] << " ";
        }
    }
    cout << endl;
}
