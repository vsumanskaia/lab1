//
//  main.cpp
//  lab1code
//
//  Created by Vladislava Umanskaya on 20.09.2024.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int x, y;
    std::cout << "Введите два целых числа через пробел\n";
    std::cin >> x >> y;
    std::cout << "Число один:" << x << "\nЧисло два:" << y <<"\n";
    int multiply = x * y;
    std::cout << "Произведение чисел:" << multiply << "\n";
    int divide = x / y;
    std::cout << "Частное чисел:" << divide << "\n";
    return 0;
}
