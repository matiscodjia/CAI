#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>


int main(){
std::string chaine {"         Chaine avec des espaces         "};
std::cout << chaine << std::endl;
auto new_begin {std::find_if_not(std::begin(chaine),std::end(chaine),isspace)};
chaine.erase(std::begin(chaine),new_begin);
std::reverse(std::begin(chaine),std::end(chaine));
auto new_end {std::find_if_not(std::begin(chaine),std::end(chaine),isspace)};
chaine.erase(new_end,std::end(chaine));
std::reverse(std::begin(chaine),std::end(chaine));
std::cout << chaine << std::endl;





    return 0;}
