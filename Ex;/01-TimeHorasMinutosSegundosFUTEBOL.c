// vou perguntar ao usuario um tempo em segundos de qualquer evento(ex: jogo de futebol) o usuario vai me responder em segundos, e vou mostrar para ele o tempo equivalente em horas, minutos e segundos

#include <stdio.h>

int main(){

	int segundos;
	int minutos;
	int horas;


	printf("Digite o tempo da sua partida (em segundos): ");
	scanf(" %d", &segundos);

	// horas = segundos que o usuario escolher dividido por 3600 (3600 segundos -> equivale a 1 hora);
	horas = segundos / 3600;

	// minutos = ()
	minutos = (segundos % 3600) / 60;
	segundos = segundos % 60;

	printf("O tempo da sua partida em Horas, Minutos e Segundos:\nHoras: %d\nMinutos: %d\nSegundos: %d\n", horas, minutos, segundos);



	return 0;
}

