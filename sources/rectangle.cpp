#include <iostream>
#include <ostream>


void rectangle(int longueur, int largeur){
	for (int i = 0; i< longueur; i++){
		for(int j = 0; j<largeur; j++){
			std::cout << "*";
		}
		std::cout<<std::endl;
	}
}
int main()
	{
	rectangle(5,3);	
	return 0;
	}


