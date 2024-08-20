#include<iostream>
#include<fstream>
#include<string>


int main()
{
    int nbreLignes {0};
    int nbreMots {0};
    int nbreCar_not_space {0};
    int nbreEspaces {0};
    bool carPrecedent_is_space {true};

    std::string ligne {""};
    std::ifstream fichier {"stat"};
    while(std::getline(fichier,ligne))
        {
        ++nbreLignes;
        for(char c : ligne)
            {
            if (isspace(c)){
                ++nbreEspaces;
                carPrecedent_is_space = true;
            }
            else
                {
                if(carPrecedent_is_space){
                    ++nbreMots;
                }
                
                ++nbreCar_not_space;
                carPrecedent_is_space=false;
                
                        

                }

        }
        carPrecedent_is_space =true;
        ++nbreEspaces;
        }
        


    std::cout << "Il y a :" << nbreLignes << " lignes dans le fichier " << std::endl;
    std::cout << "Il y a : " << nbreMots << " mots dans le fichier" <<std::endl;
    std::cout << "Il y a : " << nbreEspaces <<" espace(s) dans le fichier " << std::endl;
    std::cout << "Il y a : " << nbreCar_not_space << " caractères qui ne sont pas des espaces " << std::endl;
return 0;





}
