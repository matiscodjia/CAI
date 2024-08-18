#include <fstream>
#include <iostream>
#include <string>
int main()
{
//Second argument standard::input output stream:: append (Mode d'ouverture pour //rajouter du texte)
//std::ofstream fichier {"sortie.txt",std::ios::app};

//fichier << "J'ajoute du texte à la fin du fichier en mode append" << std::endl;

std::ifstream fichier2 {"entree.txt"};

int entier {0};
fichier2 >> std::ws;
fichier2 >> entier;
std::cout << "Mon entier vaut" << entier << std::endl;
std::string phrase {""};
std::getline(fichier2, phrase);
std::cout <<"Ma phrase vaut : " << phrase << std::endl;

return 0;



}
