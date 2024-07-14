#include <iostream>
#include <string>
// u, U (non signé)
// f, F (flottant)
// l, L (long int, Long double)
// ll, LL (long long int)


//Préfixes

//0b (binaire)
// 0 (octal)
// 0x (hexadécimal)

int main()
{ 
    
    //std::string welcome_message{}
    //bool is_secure{};
    //float some_number{14.2f};
    std::string welcome_message{"Coucou !"};

    std::cout << welcome_message << std::endl;
    welcome_message = "Bonjour !";
    std::cout << welcome_message << std::endl;

    int file_rights = 0b111;

    //unsigned int other_number{148777u};

    std::cout << file_rights <<std::endl;

    return 0;
}