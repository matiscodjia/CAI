#include <string>
#include <iostream>
#include <algorithm>
#include <cctype>
#include <vector>
int main() {

    std::string chaine {"   Voici un chaine contenant des espaces"};
    std::cout << chaine << std::endl;
    //Traitement
    auto iterator_begin {std::begin(chaine)};
    auto iterator_end {std::end(chaine)};
    auto iterator_r_begin {std::rbegin(chaine)};
    auto iterator_r_end {std::rend(chaine)};
    auto iterator_new_begin { std::find_if_not(iterator_begin,iterator_end,isspace) };
    auto iterator_new_end {std::find_if_not(iterator_r_begin,iterator_r_end,isspace)};
    chaine.erase(std::begin(chaine),iterator_new_begin);
    chaine.erase(iterator_new_end.base(),std::end(chaine));
    std::cout << "Nouvelle chaine sans espaces" << chaine << std::endl;
    








return 0;
}
