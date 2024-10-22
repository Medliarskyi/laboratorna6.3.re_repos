#include <iostream>
#include <iomanip>

using namespace std;

// Шаблонна функція для виведення масиву
template <typename T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(5) << arr[i];
    }
    cout << endl;
}

// Шаблонна рекурсивна функція для обчислення суми додатних елементів
template <typename T>
T sumPositiveElementsRec(T arr[], int size, int index = 0) {
    if (index == size) {
        return 0;
    }
    T current = arr[index] > 0 ? arr[index] : 0;
    return current + sumPositiveElementsRec(arr, size, index + 1);
}

int main() {
    // Створимо масив типу int
    int intArr[] = { 3, -1, 5, -10, 7, 0, -2, 8 };
    int intSize = sizeof(intArr) / sizeof(intArr[0]);

    // Виводимо масив типу int
    cout << "Array int: ";
    printArray(intArr, intSize);

    // Обчислюємо суму додатних елементів для int рекурсивно
    int intSumRec = sumPositiveElementsRec(intArr, intSize);
    cout << "Sum of positive elements (int, recursive): " << intSumRec << endl;

    // Створимо масив типу double
    double doubleArr[] = { 3.5, -1.2, 5.1, -10.0, 7.8, 0.0, -2.3, 8.9 };
    int doubleSize = sizeof(doubleArr) / sizeof(doubleArr[0]);

    // Виводимо масив типу double
    cout << "Array double: ";
    printArray(doubleArr, doubleSize);

    // Обчислюємо суму додатних елементів для double рекурсивно
    double doubleSumRec = sumPositiveElementsRec(doubleArr, doubleSize);
    cout << "Sum of positive elements (double, recursively): " << doubleSumRec << endl;

    return 0;
}