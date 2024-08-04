#include <iostream>
#include <string>

int main()
    {
        std::string tableau{"Tu texte"};
        auto debut_tableau{std::begin(tableau)};
        std::cout << "Première lettre du tableau : "<< *debut_tableau <<std::endl;
        *debut_tableau= 'D';

        std::cout << tableau << std::endl;

        return 0;
    }