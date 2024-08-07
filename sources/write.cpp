#include<iostream>
#include<fstream>

int main()
    {
        std::ofstream fichier {"sortie.txt", std::ios::app};

        fichier << 3 << ", les chiffres " << 4; 

        return 0;
    }
