#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>
int main(){

    std::vector<int> nombres {2,-4,5,9,6,13};
    std::sort(std::begin(nombres),std::end(nombres),
            [](int a, int b)->bool  {
            return std::abs(a) < std::abs(b);
        });
    
    for(auto nombre : nombres){

        std::cout << nombre << std::endl;

        } 




    return 0;


}
