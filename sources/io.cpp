#include <fstream>
#include <iostream>
#include <string>


int main()

{

    std::string texte {"Phrase de test à écrire dans le fichier puis à lire"};
    std::ofstream fichier {"sortie"};
    fichier << texte << std::endl;
    fichier << "\n"<< texte << std::endl;

    std::ifstream entry {"sortie"};
    std::string lecture1 {""};
    std::string lecture2 {""};
    std::string lecture3 {""};
    std::getline(entry,lecture1);
    std::getline(entry,lecture2);
    std::getline(entry,lecture3);
    std::cout << "La phrase 1 lue vaut : " << lecture1 << std::endl;
    std::cout << "La phrase 2 lue vaut : " << lecture2 << std::endl;
    std::cout << "La phrase 3 lue vaut : " << lecture3 << std::endl;



return 0;

}
