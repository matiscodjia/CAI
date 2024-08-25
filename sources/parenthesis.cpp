#include <iostream>
#include <string>
#include <vector>

void checker(std::string sequence){
    std::vector<char> beginners {};
    std::vector<char> closers {};
    for(char car: sequence){
        if(car == '('){
            beginners.push_back(car);
        }
        else if(car == ')'){
            closers.push_back(car);}
    }
    if(std::size(beginners)==std::size(closers)){std::cout<< "La séquence est bien parenthésée"<<std::endl;}
    else {std::cout <<"La séquence est mal parenthésée" << std::endl;}
}
int main(){
    std::string expression {"(Cette (expression est bien constru(ite)"};
    std::string expression1 {"((((()))()))()()()()())))()()()))))))"};
    checker(expression1);
    return 0;}
