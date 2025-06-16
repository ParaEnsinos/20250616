#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	int i = 0,tam = 0;
	
	
	struct Professor{
		char nome[50];
		int  ramal[3];
	};
	
	struct Disciplina{
		char nome[50];
		char sigla[10];
		struct Professor professor;
		int nota[3];
		
	};

	
	struct Estudante{
		char nome[50];
		int matricula[20];
		struct Disciplina disciplina[3];

	};
	
	struct Estudante estudante[3];
	struct Disciplina disciplina[3];
	struct Professor professor[3];
	
	printf("Digite o nome do professor: ");
	scanf("%[^\n]s",&professor[0].nome);
	
	printf("Digite o ramal do professor: ");
	scanf("%d",&professor[0].ramal);
	
	disciplina[0].professor = professor[0]; // 
	
		
	fflush(stdin);
	
	printf("Digite a Disciplina: ");
	scanf("%[^\n]s",disciplina[0].nome);
	
	printf("Professor: %s\n",professor[0].nome);	
	printf("Professor: %d\n",professor[0].ramal[0]);
	printf("Disciplina Nome: %s\n",disciplina[0].nome);
	printf("Disciplina - Professor - Nome: %s\n",disciplina[0].professor.nome);
	printf("Disciplina - Professor - Ramal: %s\n",disciplina[0].professor.ramal[0]);
	
	
	

	return 0;
}
