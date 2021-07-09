#include <iostream>

int main() {
    int numbers[15] = {114,111, 106, 107, 108, 105, 115,  108, 110, 109, 112, 113, 116, 117, 118};
    int numbersCount[14] = {};
    int minNum = numbers[0], doubleNum;

    for (int i = 1; i < 15; ++i) {
        if (numbers[i] < minNum) minNum = numbers[i];
    }

    for (int i = 0; i < 15; ++i) {
        numbersCount[numbers[i] - minNum]++;
        if (numbersCount[numbers[i] - minNum] > 1) {
            doubleNum = numbers[i];
            break;
        }
    }
    std::cout << doubleNum;

}
