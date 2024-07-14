#include <iostream>

/* 
    std::cout : affichage standar (en mémoire tampon/Buffer)
    std::err : erreurs (affichage direct)
    std::clog : journalisation (en mémoire tampon)

    std::endl : retour à la ligne + flush
    std::flush : flush tout court

    \n: retrou à la ligne sans flush
    \t : tabulation
*/
int main()
{ 
    std::cout << "Commutativité :" << std::endl;
    std::cout << "2 + 3 = " << 2+3 << std::endl;
    std::cout << "3 + 2 = " << 3+2 << std::endl;

    std::cout << "Associativité : " << std::endl;
    std::cout << "2 + (3 + 4) = "<< 2 +(3+4) << std::endl;
    std::cout << "(2 + 3) + 4 = "<< (2 +3)+4 << std::endl;
    
    return 0;
}