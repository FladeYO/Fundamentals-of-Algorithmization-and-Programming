#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    const int size = 100000;
    int arr[size];

    std::srand(std::time(0));

    for (int i = 0; i < size; ++i) {
        arr[i] = std::rand() % 201 - 100; 
    }

    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == 10) {
            ++count;
        }
    }

    double sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    double average = sum / size;

    std::cout << "Число 10 встречается " << count << " раз(а)." << std::endl;
    std::cout << "Среднее арифметическое всех элементов: " << average << std::endl;

    return 0;
}