 #include <iostream>
 #include <vector>

int main()
{
	std::vector<float> valeurs{};
	std::cout << "Entrez une valeur suivi de la touche entrée. Pour arrêter, entrez un nombre négatif" << std::endl;
	int value{};
	while((std::cin >> value))
		
		{
		if(value>0)
		{valeurs.push_back(value);
		 std::cout << "Valeur entrée" << std::endl;
		}
		else{
		 int sum{};
		 int size = std::size(valeurs);
		 for(int element : valeurs)
		    {sum+=element;
			}
		  
 		 if(size > 0){std::cout << "La moyenne standard est : " << sum/size << std::endl;}
			}

		}
	

	return 0;
}
