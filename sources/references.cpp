#include <iostream>

int main(){
int nombre {4};
int & ref_nombre {nombre};
std::cout << nombre << " " << ref_nombre << std::endl;
ref_nombre+= 2;
std::cout << nombre << " " << ref_nombre << std::endl;
return 0;}
