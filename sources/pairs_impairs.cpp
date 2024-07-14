#include <iostream>
#include <vector>
int main()
{
    std::vector<int> pairs{};
    std::vector<int> impairs{};
    int value{};

    std::cout <<" Entrez des nombres, tout autre chose pour arrêter le programme" << std::endl;
    while(std::cin>>value)
        {
            if(value % 2 == 0) {pairs.push_back(value);}
            else{impairs.push_back(value);}
        }
    std::cout<< "Valeurs paires : ";
    for(int element : pairs){std::cout << element<< " ";}
    std::cout<<std::endl;
    std::cout<< "Valeurs impaires : ";
    for(int element : impairs){std::cout << element<< " ";}
    return 0;
}