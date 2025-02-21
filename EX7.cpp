#include <iostream>
#include <vector>

int main() {
    int L;
    std::cout << "nombre de ligne : ";
    std::cin >> L;

    std::vector<std::vector<int>> tab(L);
    std::vector<int> t(L);

    for (int i = 0; i < L; i++) {
        int C;
        std::cout << "nombre de colonne dans la ligne " << (i + 1) << ": ";
        std::cin >> C;
        tab[i].resize(C);
        t[i] = C;
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

    std::vector<int> S(L, 0);
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < t[i]; j++) {
            S[i] += tab[i][j];
        }
    }

    int m = S[0];
    int n = 1;
    for (int i = 1; i < L; i++) {
        if (m < S[i]) {
            m = S[i];
            n = i + 1;
        }
    }

    std::cout << "la ligne est " << n << " avec une somme de " << m << std::endl;

    return 0;
}
