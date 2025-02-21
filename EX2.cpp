#include <iostream>
#include <vector>

int main() {
    int n; 
    std::cout << "Entrez le nombre d'elements: ";
    std::cin >> n;

    std::vector<int> tab(n); 

    for (int i = 0; i < n; ++i) {
        std::cout << "Entrez la valeur " << (i + 1) << ": ";
        std::cin >> tab[i];
    }

    int nbr; 
    std::cout << "Entrez un nombre de somme: ";
    std::cin >> nbr;

    std::cout << "Les tuples sont: ";
    for (int i = 0; i < tab.size(); ++i) {
        for (int j = i + 1; j < tab.size(); ++j) {
            if (tab[i] + tab[j] == nbr) {
                std::cout << "(" << tab[i] << "," << tab[j] << ") ";
            }
        }
    }
    std::cout << std::endl;

    return 0;
}
