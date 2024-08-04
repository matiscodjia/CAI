#include<iostream>
#include<fstream>
#include<sstream>

int main()
    {
        std::ifstream fichier {"entree.txt"};

        int entier{0};
        fichier >> entier;
        std::cout << "Mon entier vaut : " << entier << std::endl;

        std::string mot {""};
        std::getline(fichier >> std::ws, mot);
        std::cout << "Mon mot est : " << mot <<std::endl;

        std::istringstream flux_entree { "f8 ad 32" }; 
        int rouge { 0 };
        int vert { 0 };
        int bleu { 0 };
        flux_entree >> std::hex >> rouge >> vert >> bleu; 
        std::cout <<"Niveau de rouge : " << rouge << std::endl; std::cout << "NIveau de vert : "  << vert << std::endl; std::cout <<  "NIveau de bleu : " << bleu << std::endl;
        return 0;
    }