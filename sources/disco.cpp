#include <iostream>
#include <iterator>
#include <limits>
#include <sstream>
#include <string>
#include <tuple>
#include <vector>


enum class Commande {afficher,quitter,ajouter};

void quitter(bool & fin){
    std::cout<<"Bye"<<std::endl;
    fin = true;}

struct Entry {
std::string morceau;
std::string album;
std::string artiste;
};

std::vector<Entry> donnes;
void afficher_entry(Entry & entry){
    if(std::empty(entry.morceau)){entry.morceau = "Morceau indisponible";}
    if(std::empty(entry.artiste)){entry.artiste = "Artiste indisponible";}
    if(std::empty(entry.album)){entry.album = "Album indisponible";}
    std::cout<< "Morceau :" << entry.morceau<< " Album :"<<entry.album << " Artiste :" << entry.artiste<<std::endl;
}
void ajouter(Entry entry){
donnes.push_back(entry);
}
void afficher(const std::string param){
    std::cout << "Param : " << param << std::endl;
    if(param == ""){
        std::cout<<"Affichage"<<std::endl;
        for(Entry entry : donnes){
            Entry & ref_entry{entry};
            afficher_entry(ref_entry);    
        } 
    }
    else {std::cout << "Affichage en ordre alphabétique"<<std::endl;}}


void gestion_affichage(std::istringstream & ligne, std::string & morceau){
    std::string mot;
    if(ligne >> mot){
    morceau = mot;}
    else{mot = "";} 
}
void gestion_ajout(std::istringstream & ligne ,std::string & morceau, std::string & album, std::string & artiste){
    int pipe = 0;
    std::string mot;
    while(ligne >> mot){
        if(mot == "|"){++pipe;}
        if(pipe == 0 && (mot != "|")){morceau = mot;}
        if(pipe == 1 && (mot != "|")){album = mot;}
        if(pipe == 2 && (mot != "|")) {artiste = mot;}
    }

}
std::tuple<Commande,std::string,std::string,std::string> analyse_commande(const std::string & ref){
    Commande commande;
    std::string  mot,morceau, album, artiste;
    std::string & ref_morceau {morceau};
    std::string & ref_album {album};
    std::string & ref_artiste {artiste};

    std::istringstream ligne {ref};
    std::istringstream & ref_ligne {ligne};
    std::vector<std::string> mots;
    if(ligne >> mot){
        if(mot == "afficher"){
            commande = Commande::afficher;
            gestion_affichage(ref_ligne,ref_morceau);}
        if(mot == "quitter"){
            commande = Commande::quitter;}
        if(mot == "ajouter"){
            commande = Commande::ajouter;
            gestion_ajout(ref_ligne,ref_morceau,ref_album,ref_artiste);}
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


void lecture_commande(bool & fin){
    

    std::cout <<">";
    std::string partie_commande;
    std::string & ref {partie_commande};
    verifie_entree(ref);
    auto [commande,morceau, album, artiste] = analyse_commande(partie_commande);
    if (commande == Commande::quitter){quitter(fin);}
    if(commande == Commande::afficher){afficher(morceau);}
    else {
        Entry infos = {morceau,album,artiste};
        ajouter(infos);
    }


}




int main(){
    bool fin = false;
    bool & ref_fin = {fin};
    while(!fin){
        lecture_commande(ref_fin);
    }
return 0;
}
