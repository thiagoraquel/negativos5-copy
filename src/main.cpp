#include <iostream>

const int SIZE = 5; // input size.

int main(void)
{
    // TODO: Adicione aqui seu código.
    int x{0}; // recebe o valor via entrada padra
    int ct{0};// Contador de ocorrencias de negativos.

    for ( int i{0} ; i < SIZE ; ++i ) {
        std::cin >> x;
        // verificar se eh negativo
        if ( x <= 0 )  ct++;
    }
    std::cout << ct << '\n';
    return 0;
}


