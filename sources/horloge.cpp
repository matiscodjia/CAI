#include <iostream>
#include <string>
int main()
{   
    std::string matin = "C'est la matin";
    std::string nuit = "C'est la nuit zzz...";
    std::string aprem = "C'est l'après midi";
    std::string soir = "C'est le soir";

    std::cout << "Format 24 heures" << std::endl;

    int heure{};
    std::cout << "Entrez une heure de la journée"<< std::endl;
    while(!(std::cin >> heure) ||!((0 <= heure )&& (heure <= 24)))
     {
        std::cout << "Entrez une heure correcte de la journée"<< std::endl;
        std::cin.clear();
        std::cin.ignore(255, '\n');
        
     }
     if (heure > 0 && heure < 12) {std::cout << matin << std::endl;}
     else if (heure > 12 && heure < 18) {std::cout << aprem << std::endl;}
     else if (heure >= 18 && heure < 20) {std::cout << soir<< std::endl;}
     else if (heure >= 20 && heure < 24) {std::cout << nuit << std::endl;}
     else if (heure == 0 || heure == 24) {std::cout << "Il est minuit" << std::endl;}
     else if (heure == 12) {std::cout << "Il est midi" << std::endl;}
     else {std::cout << "Vous êtes hors du temps" << std::endl;}

    return 0;
}
