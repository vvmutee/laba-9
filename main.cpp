#include <iostream>
#include <cstring> 

using namespace std;

int main() {
    unsigned int num;
    cout << "Введите целое число типа unsigned int: ";
    cin >> num;

    unsigned char* ptr = reinterpret_cast<unsigned char*>(&num); // Приводим указатель к типу unsigned char*

    cout << "Содержимое байтов:" << endl;
    for (int i = 0; i < sizeof(unsigned int); ++i) {
        cout << "Байт " << i << ": " << (int)ptr[i] << endl; // Выводим значение каждого байта как целое число
    }

    return 0;
}
