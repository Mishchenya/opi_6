#include <iostream> 
#include <iomanip> 
#include "windows.h"
using namespace std;

int main()
{
	
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int arraySize = 100;
    int array[arraySize][arraySize];
    int sum_array[arraySize][arraySize];
    int array_2[arraySize][arraySize];
    int row;

    cout << "Введіть кількість рядків та столбців матриць: ";
    cin >> row;

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < row; ++j) {
            cout << "Введіть A[" << i + 1 << "][" << j + 1 << "] значення: ";
            cin >> array[i][j];
        }
    }
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < row; ++j) {
            cout << "Введіть B[" << i + 1 << "][" << j + 1 << "] значення: ";
            cin >> array_2[i][j];
        }
    }

    cout << endl << "Вихідна матриця №1: " << endl;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < row; ++j) {
            cout << setw(5) << array[i][j];
        }
        cout << endl;
    }
    cout << endl << "Вихідна матриця №2: " << endl;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < row; ++j) {
            cout << setw(5) << array_2[i][j];
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}