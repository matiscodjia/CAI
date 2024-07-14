#include <iostream>

int main()
{   

    int n{};

    std::cout << "Entrez un nombre positif" << std::endl;
    while(!(std::cin >> n))
    {
        std::cin.clear();
        std::cin.ignore(255,'\n');
        std::cout << "Entrez un nombre positif !" << std::endl;

    }

    std::cout << "La somme de 1 à "<< n<< " est : " << (n*(n+1))/2 << std::endl;


    return 0;
}