#include <vector>
#include <iostream>

int main()
{
    std::vector<int> nombres {1,2,3,4,6,8};
    std::cout << "Deuxième élément: " << nombres[1] << std::endl;
    std::cout <<"Le premier élément est : "<< nombres.front() << std::endl;
    std::cout << "Le dernier élément est : " << nombres.back() << std::endl << std::endl;
    std::cout << "Le dernier élément est : " << nombres.back() << std::endl;
    std::cout << "La taille du tableau est : "<<std::size(nombres) <<std::endl;
    std::cout <<"Affichage de tous les éléments du tableau"<< std::endl;
    for(auto const element : nombres)
        {
        std::cout<< element <<std::endl;
        }
    std::string response = "neutre";
    do
    {std::cout<<"Voulez vous ajouter un nombre au tableau ? répondez par oui ou non :"<<std::endl;
     while(!(std::cin>>response)){
     std::cout<<"Entrez une valeur valide :"<<std::endl;
     std::cin.clear();
     std::cin.ignore(255,'\n');
     }
     if(response == "oui")
     { auto entry {0};
       std::cout<<"Entrez un nombre :"<<std::endl;
       std::cin.clear();
       while(!(std::cin>>entry))
       {
        std::cout<<"Entrez une valeur valide :"<<std::endl;
        std::cin.clear();
        std::cin.ignore(255,'\n');

       }
       nombres.push_back(entry);
       std::cout<<"Valeur ajoutée"<<std::endl;

     }
     else
     {std::cout<<"Bye"<<std::endl;
     break;
     }
    
    
    
    }
    while(response=="oui");
    std::cout <<"Affichage de tous les éléments du tableau"<< std::endl;
    for(auto const element : nombres)
        {
        std::cout<< element <<std::endl;
        }

return 0;
    }   
