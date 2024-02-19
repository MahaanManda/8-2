#include <iostream>

using namespace std;

/*Write a C++ function, smallestIndex, that takes as parameters an int array and its size and returns the index of the first occurrence of the smallest element in the array. 
Also, write a program to test your function.

*/

//function
int smallestIndex(int array[], int arraySize)
{
    int smallestElement = 0;
    int smallestIndex = 0;

    for(int i = 1; i < arraySize; i++)
        if (array[i] < array[smallestIndex]){
            smallestIndex = i;
        }

    return smallestIndex;
}

int main(){
    const int arraySize = 5;
    int array[arraySize] = {1, 4, -4, 2, 5};

    int smallestElement = smallestIndex(array, arraySize);

    cout << "The first occurrence of the smallest element in the array is at index " << smallestElement << endl;

    

    return 0;
}