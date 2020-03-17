#include<iostream>
#include"Sapo.h"
double Sapo::distancia_total_corrida = 400;
int main(int argc, char* argv[]){
	
	Sapo A = Sapo(01,0.0,0);
	Sapo B = Sapo(02,0.0,0);
	Sapo C = Sapo(03,0.0,0);

	while(true){
		A.pular();
		B.pular();
		C.pular();
		if(A.getDistancia_percorrida() >= Sapo::distancia_total_corrida){
			std::cout<<"Sapo com id: "<< A.getIdentificador()<< " venceu com "<< A.getPulos_dados()<< " pulos e percorreu "<< A.getDistancia_percorrida()<< "Metros."<<std::endl;
			break;
		}
		if(B.getDistancia_percorrida() >= Sapo::distancia_total_corrida){
			std::cout<<"Sapo com id: "<< B.getIdentificador()<< " venceu com "<< B.getPulos_dados()<< " pulos e percorreu "<< B.getDistancia_percorrida()<< "Metros."<<std::endl;
			break;
		}
		if(C.getDistancia_percorrida() >= Sapo::distancia_total_corrida){
			std::cout<<"Sapo com id: "<< C.getIdentificador()<< " venceu com "<< C.getPulos_dados()<< " pulos e percorreu "<< C.getDistancia_percorrida()<< "Metros."<<std::endl;
			break;
		}

	}


	return 0;
}