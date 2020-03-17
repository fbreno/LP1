#include<iostream>
#include "Sapo.h"
#include <random>


Sapo::Sapo(unsigned short id, double distanciaP, unsigned short pulos){
	identificador = id;
	distancia_percorrida = distanciaP;
	pulos_dados = pulos;
}

unsigned short Sapo::getIdentificador(){
	return identificador;
}
void Sapo::setIdentificador(unsigned short id){
	identificador=id;
}

double Sapo::getDistancia_percorrida(){
	return distancia_percorrida;
}
void Sapo::setDistancia_percorrida(double distancia){
	distancia_percorrida = distancia;
}

unsigned short Sapo::getPulos_dados(){
	return pulos_dados;
}
void Sapo::setPulos_dados(unsigned short pulos){
	pulos_dados = pulos;
}

void Sapo::pular(){
	unsigned short pulosd = getPulos_dados();
	double valor = getDistancia_percorrida();
	std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_real_distribution<double> dist(0.0, 1.5);
    valor += std::round(dist(mt));
    
    setDistancia_percorrida(valor);
    setPulos_dados(++pulosd);
}