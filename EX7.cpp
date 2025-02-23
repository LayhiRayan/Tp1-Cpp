#include <iostream>

int main() {
    int L;
    std::cout << "nombre de ligne : ";
    std::cin >> L;

    int** tab = new int*[L];
    int* t = new int[L];

    for (int i = 0; i < L; i++) {
        int C;
        std::cout << "nombre de colonne dans la ligne " << (i + 1) << ": ";
        std::cin >> C;
        t[i] = C;
        tab[i] = new int[C];
    }

    for (int i = 0; i < L; i++) {
        for (int j = 0; j < t[i]; j++) {
            int n;
            std::cout << "entre le nombre de ligne " << (i + 1) << " colonne " << (j + 1) << " : ";
            std::cin >> n;
            tab[i][j] = n;
        }
    }

    for (int i = 0; i < L; i++) {
        for (int j = 0; j < t[i]; j++) {
            std::cout << tab[i][j] << " ";
        }
        std::cout << std::endl;
    }

    int* S = new int[L];
    for (int i = 0; i < L; i++) {
        S[i] = 0;
        for (int j = 0; j < t[i]; j++) {
            S[i] += tab[i][j];
        }
    }

    int m = S[0];
    int n = 1; 
    for (int i = 1; i < L; i++) {
        if (S[i] > m) {
            m = S[i];
            n = i + 1;
        }
    }

    std::cout << "la ligne est " << n << " avec une somme de " << m << std::endl;

    for (int i = 0; i < L; i++) {
        delete[] tab[i];
    }
    delete[] tab;
    delete[] t;
    delete[] S;

    return 0;
}

