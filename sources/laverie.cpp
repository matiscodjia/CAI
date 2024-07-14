#include <iostream>

int main()
{
    int nbre10kg{};
    int nbre5kg{};

    int qte{};
    std::cout <<"Bienvenue à la laverie Audrey&Co quel est le poid de votre linge ?" << std::endl;
    while(!(std::cin >> qte))
        {
            std::cout <<"Entrez une quantité valide" << std::endl;
            std::cin.clear();
            std::cin.ignore(255,'\n');
            
        }
    
    int dep = qte;
    while(qte >= 10){
        qte-=10;
        nbre10kg++;
    }
    while(qte>=5){
        qte-=5;
        nbre5kg++;
    }
    if(qte > 0){nbre5kg++;}
    if(dep <= 5)
    {
    std::cout << "Il vous faudra une machine de 5kg pour vôtre linge" << std::endl;
    }
    
    else 
    {
    std::cout << "Il vous faudra : " << nbre10kg << " machine (s) de 10 kg et : " << nbre5kg<< " machine (s) de 5kg pour vos : " << dep <<" kg de linge, merci !" << std::endl;
    }

    

}