#include <iostream>

int main() {
    std::cout << "Entre ton age : " << std::endl;
    int age{};

    while (!(std::cin >> age)) { // Vérifie si l'entrée est invalide
        std::cout << "Entre un bon format d'âge" << std::endl;
        std::cin.clear(); // Réinitialise l'état de cin
        std::cin.ignore(255, '\n'); // Ignore les caractères incorrects
       
    }
     // Si l'entrée est valide
        std::cout << "Tu as : " << age << " ans" << std::endl;
    

    return 0;
}