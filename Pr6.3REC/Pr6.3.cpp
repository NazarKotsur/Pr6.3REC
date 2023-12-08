#include <iostream>
#include <iomanip>

// �������� ������� ��� �������� �������� ������ ����� �����
void fillArrayRecursive(int arr[], int size, int index = 0) {
    if (index < size) {
        std::cout << "Enter element " << std::setw(2) << index + 1 << ": ";
        std::cin >> arr[index];
        fillArrayRecursive(arr, size, index + 1);
    }
}

// �������� ������� ��� ��������� �������� ������ ����� �����
void printArrayRecursive(const int arr[], int size, int index = 0) {
    if (index < size) {
        std::cout << std::setw(4) << arr[index] << " ";
        printArrayRecursive(arr, size, index + 1);
    }
    else {
        std::cout << std::endl;
    }
}

// �������� ������� ��� �������� �������� ������ ����-����� ����
template <typename T>
void fillArrayRecursive(T arr[], int size, int index = 0) {
    if (index < size) {
        std::cout << "Enter element <T> " << std::setw(2) << index + 1 << ": ";
        std::cin >> arr[index];
        fillArrayRecursive(arr, size, index + 1);
    }
}

// �������� ������� ��� ��������� �������� ������ ����-����� ����
template <typename T>
void printArrayRecursive(const T arr[], int size, int index = 0) {
    if (index < size) {
        std::cout << std::setw(4) << arr[index] << " ";
        printArrayRecursive(arr, size, index + 1);
    }
    else {
        std::cout << std::endl;
    }
}

int main() {
    int size;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    if (size <= 0) {
        std::cerr << "Invalid array size\n";
        return 1;
    }

    int* arr = new int[size];

    // �������� �������: �������� �� ��������� ������ ����� �����
    fillArrayRecursive(arr, size);
    std::cout << "Array of integers: ";
    printArrayRecursive(arr, size);

    // ��������� ���'��
    delete[] arr;

    // ��������� ������ ������ �����
    double* arrDouble = new double[size];

    // �������� �������: �������� �� ��������� ������ ������ �����
    fillArrayRecursive(arrDouble, size);
    std::cout << "Array of doubles: ";
    printArrayRecursive(arrDouble, size);

    // ��������� ���'��
    delete[] arrDouble;

    return 0;
}
