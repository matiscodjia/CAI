#include <iostream>
#include <ostream>
#include <sstream>
#include <string>
#include <unordered_map>


template <typename T, typename U>
void afficher_map(const std::unordered_map<T,U> & carte){
std::cout<<"Affichage de la carte"<<std::endl;
 for(auto const & paire : carte)
    {
        std::cout<<"Clé : "<< paire.first << std::endl;
        std::cout<<"Valeur : " << paire.second << std::endl<<std::endl;
    }

}
void occurences_mots(const std::string & phrase){
    std::unordered_map<std::string, int> occurences {};
    std::istringstream iss { phrase };
    std::string mot {};
    while(iss >> mot){++occurences[mot];}

    for(auto const & paire : occurences){
        std::cout << "Le mot '" << paire.first << "' apparait " << paire.second << " fois." <<std::endl;}
}

int main(){
using namespace std::literals;
std::unordered_map<std::string, std::string> dictionnaire{
        {"Orange"s,"Fruit"s},
        {"Vert"s,"Couleur primaire"s},
        {"Chanson"s,"Composition vocale agréable à l'oreille"s},
        {"Ordinateur"s,"Machine de calcul inventé dans les années 1950"}
    };
//afficher_map(dictionnaire);
dictionnaire.insert({"Zèbre"s,"Cheval aux rayures blanches et noires d'afrique"s});
//afficher_map(dictionnaire);
occurences_mots("Bonjour, ceci est une phrase qui est longue");
return 0;
}
