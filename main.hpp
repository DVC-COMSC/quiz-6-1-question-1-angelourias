#include <iostream>

void getTwoValues(int& begin, int& end) {
    do {
     std::cout << "Enter two integer values (begin and end):";
     std::cin >> begin >> end;   
    } while (begin >= end);
}