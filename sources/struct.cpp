#include <iostream>
#include <limits>
#include <string>
#include <fstream>

struct DonneesPersonnelles
{
    std::string nom;
    std::string prenom;
    std::string sexe;
    int age;
};

auto verif_entree {
    [](auto & ref,auto predicat)->void{
        while(!(std::cin>>ref) || !predicat(ref)){
            std::cin.clear();std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');std::cout<<"Entree incorrecte, réessayez"<<std::endl;
        }
    }
};

DonneesPersonnelles demander_infos(){
    std::string nom, prenom, sexe;
    int age;
    std::string & ref_nom {nom};
    std::string & ref_prenom {prenom};
    std::string & ref_sexe {sexe};
    int & ref_age {age};
    std::cout<<"Entrez un nom"<<std::endl;
    verif_entree(ref_nom,[](const std::string & ref_nom)->bool {return !ref_nom.empty();});
    std::cout<< "Entrez un prénom"<<std::endl;
    verif_entree(ref_prenom,[](const std::string ref_prenom)->bool{return !ref_prenom.empty();});
    std::cout<<"Entrez un age"<<std::endl;
    verif_entree(ref_age,[](auto & ref_age)->bool{return ref_age > 0;});
    std::cout<<"Entrez un sexe masculin ou féminin"<<std::endl;
    verif_entree(ref_sexe,[](auto & ref_sexe)->bool{return (ref_sexe == "masculin" || ref_sexe == "féminin");});
    DonneesPersonnelles infos {nom,prenom,sexe,age};
    return infos;
}

void enregistrer_infos(DonneesPersonnelles infos){
    std::ofstream fichier {infos.nom+"."+infos.prenom+".csv"};fichier << infos.nom << "," << infos.prenom<< ","<< infos.age<<","<<infos.sexe;
    std::cout<< "Les informations ont étés enregistrées dans le fichier : "<< infos.nom+"."+infos.prenom+".csv" << std::endl;
}

int main(){
    enregistrer_infos(demander_infos());
    return 0;
}
