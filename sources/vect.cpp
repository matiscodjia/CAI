#include <iostream>
#include <vector>

int main()
{
    std::vector<int> tableau{};
    tableau.push_back(25);
    tableau.push_back(34);
    std::cout<< "Taille du tableau : "<< std::size(tableau) << std::endl;
    for(int element : tableau)
    
        {
            std::cout << element << '\t';
            
        }
    std::cout<<""<<std::endl;
    return 0;
}