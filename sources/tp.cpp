#include <iostream>
#include <limits>


auto jour_valide{[](auto & ref)->bool{return (1<= ref && ref <= 31);}};
auto annee_valide{[](auto & ref)->bool{return (1900<= ref && ref <= 2024);}};
auto mois_valide{[](auto & ref)->bool{return (1 <= ref && ref <= 12);}};
auto taille_valide{[](auto & ref)->bool{return (0.40 <= ref && ref <= 2.5);}};
auto verif_entree {[](auto & ref, auto predicat) -> void{
        while(!(std::cin >> ref) || !predicat(ref)){
        std::cout << "Mauvaise entrée, réessayez" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        }
        
                  }
};





int main(){
    
    std::cout << "Quel jour es-tu né "<<std::endl;
    int jour {0};
    int & ref_jour {jour};
    verif_entree(ref_jour,jour_valide);
    std::cout << "Quel mois es-tu né ?"<<std::endl;
    int mois {0}; 
    int & ref_mois {mois};
    verif_entree(ref_mois,mois_valide);
    int annee {0};
    int & ref_annee {annee};
    std::cout << "Quelle année es-tu né ?"<<std::endl;
    verif_entree(ref_annee,annee_valide);
    double taille {0.0};
    double & ref_taille {taille};
    std::cout << "Quelle es ta taille ?"<<std::endl;
    verif_entree(ref_taille,taille_valide);

    std::cout << "Tu es né le " << jour <<"/" << mois << "/" << annee<< " et tu mesures " << taille << "m." << std::endl;

    return 0;
}
