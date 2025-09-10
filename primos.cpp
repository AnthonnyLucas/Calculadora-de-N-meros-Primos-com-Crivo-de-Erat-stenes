#include <iostream>
#include <vector>
#include <limits>

/**
 * @brief 
 * @param n 
 * @param primosEncontrados 
 * @return 
 */
int crivoDeEratostenes(int n, std::vector<int>& primosEncontrados) {
    std::vector<bool> ehPrimo(n + 1, true);
    ehPrimo[0] = ehPrimo[1] = false;

    for (int p = 2; p * p <= n; ++p) {
        if (ehPrimo[p]) {
            for (int i = p * p; i <= n; i += p) {
                ehPrimo[i] = false;
            }
        }
    }

    for (int p = 2; p <= n; ++p) {
        if (ehPrimo[p]) {
            primosEncontrados.push_back(p);
        }
    }

    return primosEncontrados.size();
}

int main() {
    int n;
    std::vector<int> primosEncontrados;
    while (true) {   
        primosEncontrados.clear();
        do {
            std::cout << "Digite um numero inteiro N > 0 (ou 0 para sair): ";

            if (std::cin >> n) {

                if (n >= 0) {
                    break;
                } else {
                    std::cout << "Entrada invalida. O numero deve ser positivo." << std::endl;
                }
            } else {
                std::cout << "Entrada invalida. Por favor, digite apenas numeros inteiros." << std::endl;
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        } while (true);

        if (n == 0) {
            std::cout << "Encerrando o programa..." << std::endl;
            break; 
        }

        int quantidadePrimos = crivoDeEratostenes(n, primosEncontrados);

        std::cout << "\n----------------------------------------" << std::endl;
        std::cout << "Valor de N: " << n << std::endl;
        std::cout << "----------------------------------------" << std::endl;
        std::cout << "Numeros primos encontrados:" << std::endl;
        for (int primo : primosEncontrados) {
            std::cout << primo << " ";
        }
        std::cout << "\n\n";
        std::cout << "Quantidade de numeros primos encontrados: " << quantidadePrimos << std::endl;
        std::cout << "----------------------------------------\n" << std::endl; 
    }

    return 0;
}