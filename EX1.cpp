#include <iostream>

int main() {
    int tab[] = {1, 1, 2, 2, 3, 4, 4, 5, 5};
    int taille = sizeof(tab) / sizeof(tab[0]);

    for (int i = 0; i < taille; ++i) {
        bool unique = true;

        for (int j = 0; j < taille; ++j) {
            if (i != j && tab[i] == tab[j]) {
                unique = false;
                break;
            }
        }

        if (unique) {
            std::cout << "Le nombre unique est: " << tab[i] << std::endl;
            return 0;
        }
    }

    std::cout << "Aucun nombre unique trouvé." << std::endl;
    return 0;
}

