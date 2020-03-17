#ifndef SAPO_H
#define SAPO_H
#include <iostream>

class Sapo
{
private:
	unsigned short identificador;
	double distancia_percorrida;
	unsigned short pulos_dados;
public:
	Sapo();
	Sapo(unsigned short id, double distanciaP, unsigned short pulos);

	static double distancia_total_corrida;
	
	//get & set
	unsigned short getIdentificador();
	void setIdentificador(unsigned short id);

	double getDistancia_percorrida();
	void setDistancia_percorrida(double distancia_percorrida);

	unsigned short getPulos_dados();
	void setPulos_dados(unsigned short pulos_dados);

	void pular();
};


#endif