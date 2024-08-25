#include <iostream>
#include <string>
#include <algorithm>
#include <array>

int main()
    {
    std::string phrase{"Voici la phraseeeeee en question"};
    std::array tableau{1,2,4,5};
    std::array tableau_copy = tableau;
    //Trouvons le nombre de e dans cette phrase
    auto iterateur_fin{std::end(phrase)};
    auto iterateur_debut{std::begin(phrase)};
    int nbre{};
    while(iterateur_debut != iterateur_fin)
        {
            iterateur_debut = std::find(iterateur_debut,iterateur_fin, 'e');
            if(iterateur_debut != iterateur_fin)
                {
                    ++iterateur_debut;
                    nbre++;
                }
            
               
        }
    std::cout << "Il y a : "<< nbre<< "  e dans la phrase"<<std::endl;
    //Peut importe le type numérique ça marche ??
    for(double element : tableau_copy)
        {
            std::cout<< element<< " ";
        }


    return 0;
    }
