#include <iostream>

int main() {
    int L, C;
    std::cout << "nombre de ligne : ";
    std::cin >> L;
    std::cout << "nombre de colone : ";
    std::cin >> C;


    int** tab = new int*[L];
    for (int i = 0; i < L; i++) {
        tab[i] = new int[C];
    }

    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            std::cout << "entre le nombre [" << (i + 1) << "][" << (j + 1) << "] : ";
            std::cin >> tab[i][j];
        }
    }

    if (L != C) {
        std::cout << "Ce n'est pas une permutation." << std::endl;
    } else {
        int m = 1;
        for (int i = 0; i < L; i++) {
            for (int j = 0; j < C; j++) {
                if (m == tab[i][j]) {
                    m++;
                }
            }
        }
        m--;
        if (m == tab[L - 1][C - 1]) {
            std::cout << "C'est une permutation." << std::endl;
        } else {
            std::cout << "Ce n'est pas une permutation." << std::endl;
        }
    }

    // Libération de la mémoire allouée
    for (int i = 0; i < L; i++) {
        delete[] tab[i];
    }
    delete[] tab;

    return 0;
}

