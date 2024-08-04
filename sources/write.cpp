#include<iostream>
#include<fstream>

int main()
    {
        std::ofstream fichier {"sortie.txt", std::ios::app};

        fichier << 3 << " " << 4;

        return 0;
    }