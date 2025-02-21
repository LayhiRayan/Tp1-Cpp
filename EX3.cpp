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
    int v = tab[0]; 
    for (int i = 0; i < tab.size(); ++i) {
        for (int j = i + 1; j < tab.size(); ++j) {
            if (tab[j] % 2 == 0) { 
                v = tab[i]; 
                tab[i] = tab[j];
                tab[j] = v;
                j++; 
            }
        }
    }

    std::cout << "Tableau réorganisé : ";
    for (int i = 0; i < tab.size(); ++i) {
        std::cout << tab[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
