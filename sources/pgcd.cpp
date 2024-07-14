#include <iostream>

int main()
{
    int a{};
    int b{};
    std::cout << "Entrez un nombre a" << std::endl;
    while(!(std::cin>>a)){
    std::cout << "Entrez un nombre a" << std::endl;
    std::cin.clear();
    std::cin.ignore(255,'\n');
 }
     std::cout << "Entrez un nombre b" << std::endl;
     while(!(std::cin>>b)){
    std::cout << "Entrez un nombre b" << std::endl;
    std::cin.clear();
    std::cin.ignore(255,'\n');
 }
    int r = a % b;
    while(r != 0)
    {
        a = b;
        b = r;
        r = a % b;
    }
    std::cout << "Le pgcd de "<< a << " et "<< b << " est : "<< b << std::endl;
 


    return 0;
}