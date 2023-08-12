#include <iostream>
using namespace std;

int *readNumbers() {
    int* array = new int[10];
    for (int i = 0; i < 10; i++)
    {
        std::cin >> array[i];
    }

    return array;  
};

void printNumbers(int *numbers,int length) {
    for (int i = 0; i <length; i++)
    {
        cout << i << " " << numbers[i] << endl;
    }
};

int secondSmallestSum(int *numbers,int length) {
    int len = ((length+1)*length)/2;
    int *sumArr = new int[len];
    int index = 0;

    for (int i = 0; i < length; i++)
    {   int sum = 0;
        for (int j = i; j < length; j++)
        {
            sum += numbers[j];
            sumArr[index++] = sum;
        }
        
    }
    int smallest = sumArr[0];
    int second = sumArr[1];
    for (int i = 0; i < len; i++)
    {
        if (sumArr[i] < smallest)
        {
            second  = smallest;
            smallest = sumArr[i];
        }
        else if ((sumArr[i] < second)&&(sumArr[i] > smallest)) {
            second = sumArr[i];
        }
        
    }
    
    delete[] sumArr;
    return second;
};