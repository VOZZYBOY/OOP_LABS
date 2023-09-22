#include <iostream>
using namespace std;
#include "func.hpp"

int main() {

int digit;
char word[100];
std::cout << "day of week: ";
std::cin  >> word;
std::cin  >> digit;
bool fear = amifeared(word,digit);
if (fear) {
        cout << "Боюсь." << endl;
    } else {
        cout << "Не боюсь." << endl;
    }

    return 0;
}
