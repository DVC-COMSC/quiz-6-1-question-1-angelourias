#include <iostream>

void getTwoValues(int& begin, int& end) {
    do {
     std::cout << "Enter two integer values (begin and end):";
     std::cin >> begin >> end;   
    } while (begin >= end);
}

bool isPrime(int num) {
    if (num <= 1)
    return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0)
        return false;
    }
    return true;
}