#include <iostream>
#include <vector>

int main() {
    std::vector<int> tab;
    tab.push_back(1);
    tab.push_back(1);
    tab.push_back(2);
    tab.push_back(2);
    tab.push_back(3);
    tab.push_back(4);
    tab.push_back(4);
    tab.push_back(5);
    tab.push_back(5);

    for (size_t i = 0; i < tab.size(); ++i) {
        bool unique = true; 

        for (size_t j = 0; j < tab.size(); ++j) {
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
