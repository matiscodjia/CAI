#include <iostream>
#include <iterator>
#include <limits>
#include <sstream>
#include <string>
#include <tuple>
#include <unordered_map>

enum class Commande {afficher,quitter,ajouter};
void afficher(const std::string param){
    if(param != "morceaux"){std::cout<<"Affichage"<<std::endl;}
    else {std::cout << "Affichage en ordre alphabétique"<<std::endl;}}
void quitter(){std::cout<<"Bye"<<std::endl;}


struct Entry {

std::string morceau;
std::string album;
std::string artist;
};
using My_map = std::unordered_map<std::tuple<int, std::string>,std::tuple<std::string,std::string>>;
My_map data;
std::tuple<Commande,std::string,std::string,std::string> analyse_commande(const std::string & ref){
    Commande commande;
    std::string  mot,morceau, album, artiste;
    int sep = 0;
    std::istringstream ligne {ref};
    
    while(ligne >> mot){
        if(mot == "afficher"){commande = Commande::afficher;}
        if(mot == "quitter"){commande = Commande::quitter; break;}
        if(mot == "ajouter"){commande = Commande::ajouter;}
        if(mot == "|"){++sep;}
        else{
            if(sep == 0){morceau = mot;}
            if(sep == 1){album = mot;}
            if(sep == 2){artiste = mot;}
        }

    }
    auto result {std::make_tuple(commande,morceau,album,artiste)};
     return result;



}
void verifie_entree(std::string & ref){
std::getline(std::cin,ref);
while(std::empty(ref)){
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cout<<"Commande incorrecte"<<std::endl;
        std::getline(std::cin,ref);
    }
    std::cout << "Commande entrée : " << ref << std::endl;

}


void lecture_commande(){

    std::cout <<">";
    std::string partie_commande;
    std::string & ref {partie_commande};
    verifie_entree(ref);
    auto [commande,morceau, album, artiste] = analyse_commande(partie_commande);if (commande == Commande::quitter){quitter();}
    if(commande == Commande::afficher){afficher(morceau);}
    else Entry infos = {morceau,album,artiste};
    std::cout << "chanson : " << morceau << " album : " << album << " artiste : " << artiste << std::endl;

}




int main(){
lecture_commande();
return 0;
}
