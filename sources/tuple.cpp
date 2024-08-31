#include <tuple>
#include<iostream>
#include<cmath>
using namespace std::literals;
auto infos = std::make_tuple ("Codjia"s,"Matis"s,"masculin"s,21);


std::tuple<double,double> g(double angle){
    return {std::cos(angle), std::sin(angle)};
}
std::tuple<double,double> cinematique(double vitesse_initiale, double angle, double t){
//Accéleration
    double const g {9.80665};
    double const x {vitesse_initiale * std::cos(angle) * t};
    double const y {(-g * (t * t) /2.) + vitesse_initiale * std::sin(angle) * t };

    return {x, y};



}




int main(){
//Accès en lecture
std::cout << "Prénom " << std::get<1>(infos)<<std::endl;
//Accès en écriture
std::get<3>(infos) += 1;
std::cout << "Age : "<< std::get<3>(infos)<<std::endl;
std::tuple calculus = g(M_PI);
std::cout << "Cosinus de PI/2 : " << std::get<0>(calculus)<<'\n'<< "Sinus de PI/2 : "<< std::get<1>(calculus)<<std::endl; 

std::tuple coordonnees = cinematique(50, M_PI/4, 1);
std::cout << "x : " << std::get<0>(coordonnees) << " y : "<< std::get<1>(coordonnees);
return 0;
}
