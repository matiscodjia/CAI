#include <iostream>
#include <vector>

int main()
{
    int value{};
    std::vector<int> valeurs{};
    std::cout << "Entrez une valeur numérique entière, tout autre chose pour terminer l'acquisition" << std::endl;
    while(std::cin>>value)
        {  
            valeurs.push_back(value);
            std::cout<<"Valeur "<< value<< " ajoutée"<<std::endl;
        }
        if (std::size(valeurs) == 0){std::cout << "Aucune valeur entrée" << std::endl;}
        else {
            int max{valeurs.front()};
            int min{valeurs.front()};
            for(int element : valeurs)
                {
                    if (max > element) {max = element;}
                    if (min < element) {min = element;}
                }
            std::cout << "Valeur maximale : "<< max << " Valeur minimale : "<< min<< std::endl;
        }


    return 0;
}