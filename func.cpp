#include <iostream>
using namespace std;


bool amifeared (const char* word, int digit) {
    bool fearstatus = false;


    if (strcmp(word, "Понедельник") == 0 && digit == 12) {
        fearstatus = true; 
    } else if (strcmp(word, "Вторник") == 0 && digit > 95) {
        fearstatus = true; 
    } else if (strcmp(word, "Среда") == 0 && digit == 34) {
        fearstatus = true; 
    } else if (strcmp(word, "Четверг") == 0 && digit == 0) {
        fearstatus = true; 
    } else if (strcmp(word, "Пятница") == 0 && digit % 2 == 0) {
        fearstatus = true; 
    } else if (strcmp(word, "Суббота") == 0 && digit == 56) {
        fearstatus = true; 
    } else if (strcmp(word, "Воскресенье") == 0 && (digit == 666 || digit == -666)) {
        fearstatus = true; 
    }

    return fearstatus;
}
