#include <iostream>

int main()
{
    int n {};

    while(!(std::cin>>n))
    {   std::cout << "Entre un nombre" << std::endl;
        std::cin.clear();
        std::cin.ignore(255,'\n');
        
    }
    for (int i = 0; i< n; i++){
        if (i %2 == 0){
            continue;
        }
        std::cout<<i<<std::endl;
    }
}