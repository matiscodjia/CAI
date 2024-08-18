#include <iostream>
#include <vector>

int main()
{
    std::vector<char> phrase {'a','b','c','d','d','d','b','e'};
    char letter ='c';
    int count {};
    for (auto const let : phrase){
        if (let == letter) count++;
        }
    std::cout << letter << " : "<< count <<std::endl;




return 0;
}
