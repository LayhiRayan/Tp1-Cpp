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
            std::cout << "Entrer le nombre " << "[" << (i + 1) << "]" << "[" << (j + 1) << "]" << " : ";
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

    for (int i = 0; i < L; i++) {
        std::cout << "Somme de ligne " << (i + 1) << " est : " << S[i] << std::endl;
    }

    return 0;
}
