#include <iostream>
#include <climits>

int main() {
    int l, c;
    std::cout << "Entrez le nombre de lignes : ";
    std::cin >> l;
    std::cout << "Entrez le nombre de colonnes : ";
    std::cin >> c;

    int tab[l][c];

    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            std::cout << "Entrez le nombre [" << (i + 1) << "][" << (j + 1) << "] : ";
            std::cin >> tab[i][j];
        }
    }

    std::cout << "\nMatrice entrée :\n";
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            std::cout << tab[i][j] << " ";
        }
        std::cout << std::endl;
    }

    int max = INT_MIN;
    int indice_max = -1;

    for (int i = 0; i < l; i++) {
        int s = 0;
        for (int j = 0; j < c; j++) {
            s += tab[i][j];
        }

        if (s > max) {
            max = s;
            indice_max = i;
        }
    }

    std::cout << "\nLa ligne avec la plus grande somme est la ligne " << (indice_max + 1)
              << " avec une somme de " << max << ".\n";
    std::cout << "Éléments de cette ligne : ";
    for (int j = 0; j < c; j++) {
        std::cout << tab[indice_max][j] << " ";
    }
    std::cout << std::endl;

    return 0;
}
