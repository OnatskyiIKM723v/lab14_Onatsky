#include <iostream>

// ������� ��� ������ ����� � �����
bool linearSearch(int arr[], int size, int value) 
{
    for (int i = 0; i < size; ++i) 
    {
        if (arr[i] == value) 
        {
            std::cout << "����� " << value << " �������� �� ������� " << i + 1 << std::endl;
            return true; // ��������
        }
    }
    std::cout << "����� " << value << " �� ��������" << std::endl;
    return false; // �� ��������
}

int main() 
{
    setlocale(LC_CTYPE, "ukr"); // ��������� ������������ ��������� ����

    int arr[15] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 }; // �������� ������ 15 ������� �����

    int value;
    std::cout << "������ �����, ��� ������� ������: ";
    std::cin >> value;

    linearSearch(arr, 15, value);

    return 0;
}
