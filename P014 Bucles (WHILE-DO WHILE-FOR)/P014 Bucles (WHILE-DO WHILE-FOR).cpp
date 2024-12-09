#include <iostream>
#include <chrono>
#include <thread>

int main() {
    // Contar de 1000 a 0 con un bucle for
    std::cout << "------------------------------------------------------------\n";
    std::cout << "Contando de 1000 a 0 con un bucle for:\n";
    std::cout << "------------------------------------------------------------\n";
    for (int i = 1000; i >= 0; --i) {
        std::cout << i << std::endl;
    }

    // Contar de 1000 a 0 con un bucle while
    std::cout << "\n------------------------------------------------------------\n";
    std::cout << "Contando de 1000 a 0 con un bucle while:\n";
    std::cout << "------------------------------------------------------------\n";
    int i = 1000;
    while (i >= 0) {
        std::cout << i << std::endl;
        --i;
    }

    // Contar de 1000 a 0 con un bucle do-while
    std::cout << "\n------------------------------------------------------------\n";
    std::cout << "Contando de 1000 a 0 con un bucle do-while:\n";
    std::cout << "------------------------------------------------------------\n";
    i = 1000;
    do {
        std::cout << i << std::endl;
        --i;
    } while (i >= 0);

    // Contar hasta 100 lentamente
    std::cout << "\n------------------------------------------------------------\n";
    std::cout << "Contando hasta 100 lentamente (con retraso):\n";
    std::cout << "------------------------------------------------------------\n";
    for (int i = 1; i <= 100; ++i) {
        std::cout << i << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(100)); // Retraso de 100ms
    }

    // Contar hasta 100 en pasos de 10
    std::cout << "\n------------------------------------------------------------\n";
    std::cout << "Contando hasta 100 en pasos de 10:\n";
    std::cout << "------------------------------------------------------------\n";
    for (int i = 0; i <= 100; i += 10) {
        std::cout << i << std::endl;
    }

    return 0;
}