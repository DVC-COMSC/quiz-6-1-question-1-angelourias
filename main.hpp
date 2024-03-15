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
int getNextPrime(int begin) {
    while (true) {
        if (isPrime(++begin))
        return begin;
    }
}
int getPrevPrime(int end) {
    while (true) {
        if (isPrime(--end))
        return end;
    }
}
int main() {
    int begin, end;
    int prime1, prime2;

    getTwoValues(begin, end);
    prime1 = getNextPrime(begin);
    std::cout << "the prime number after" << begin << " is " << prime1 << std::endl;
    std::cout << "the prime number before" << end << " is " << prime2 << std::endl;
    
    return 0;
    }