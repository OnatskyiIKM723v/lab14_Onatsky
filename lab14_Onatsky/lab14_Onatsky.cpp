#include <iostream>

// функція для пошуку числа у масиві
bool linearSearch(int arr[], int size, int value) 
{
    for (int i = 0; i < size; ++i) 
    {
        if (arr[i] == value) 
        {
            std::cout << "число " << value << " знайдено на позиції " << i + 1 << std::endl;
            return true; // знайдено
        }
    }
    std::cout << "число " << value << " не знайдено" << std::endl;
    return false; // не знайдено
}

int main() 
{
    setlocale(LC_CTYPE, "ukr"); // дозволити використання української мови

    int arr[15] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 }; // введення перших 15 простих чисел

    int value;
    std::cout << "введіть число, яке потрібно знайти: ";
    std::cin >> value;

    linearSearch(arr, 15, value);

    return 0;
}
