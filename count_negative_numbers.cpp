/* Algorithm Challenge & Problem Solving
 * 45 - Count Negative Numbers in an Array
 *
 * This program fills an integer array (maximum size 100) with random numbers ranging from -100 to 100.
 * It then prints the array elements and counts how many negative numbers exist inside the array.
 *
 * A negative number is any number that is less than zero.
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Generate a random number between From and To
int RandNumber(int From, int To)
{
    int Rand = rand() % (To - From + 1) + From;
    return Rand;
}

// Fill the array with random numbers
void FillArrayWhithRandomNumber(int arr[100], int &arrlength)
{
    cout << "Enter number of elements:\n";
    cin >> arrlength;

    for (int i = 0; i < arrlength; i++)
    {
        // Generate random numbers between -100 and 100
        arr[i] = RandNumber(-100, 100);
    }
}

// Print array elements
void PrintArray(int arr[100], int arrlength)
{
    for (int i = 0; i < arrlength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Count how many negative numbers exist in the array
int NegativeConunt(int arr[100], int arrlength)
{
    int Counter = 0; // Counter to store number of negative elements

    for (int i = 0; i < arrlength; i++)
    {
        // Check if the number is negative
        if (arr[i] < 0)
        {
            Counter++;
        }
    }

    return Counter; // Return total negative numbers
}

int main()
{
    srand((unsigned)time(NULL)); // Seed for random number generation

    int arr[100], arrlength;

    FillArrayWhithRandomNumber(arr, arrlength);

    cout << "Array Elements: ";
    PrintArray(arr, arrlength);

    cout << "\nNegative Numbers Count is: ";
    cout << NegativeConunt(arr, arrlength);

    return 0;
}
