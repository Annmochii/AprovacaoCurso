#include <stdio.h>

int main(void) {
  // Entrada
	float AV1, AV2, PF, MP, Final;
	int TF, MAX_FALTAS, QT_AULAS;
	char opcao;
	printf("> Calculadora de Resultados da disciplina de Programação de Computadores\n");
	printf("> Os resultados inseridos são:\n");
	printf("  A - Parciais\n");
	printf("  B - Finais\n");
	printf("  | "); scanf(" %c", &opcao);

	// Processamento
	#define MAX_NOTA 10.0
	#define MIN_NOTA 0.0
	#define MEDIA 7.0
	#define MEDIA_FINAL 5.0
  	#define CARGA_HORARIA 80
	
	QT_AULAS = CARGA_HORARIA / 2;
	MAX_FALTAS = QT_AULAS / 2;

	if ( opcao == 'A') {
		
		// Entrada
		printf("> Insira a nota da primeira avaliação:\n");
		printf("| "); scanf("%f", &AV1);
		while (AV1 > MAX_NOTA || AV1 < MIN_NOTA) {
      printf("Nota inválida. Por favor, insira uma nota entre %.1f e %.1f.\n", MIN_NOTA, MAX_NOTA);
      printf("| "); scanf("%f", &AV1);
     }

		printf("> Insira a nota da segunda avaliação:\n");
		printf("| "); scanf("%f", &AV2);
		while (AV2 > MAX_NOTA || AV2 < MIN_NOTA) {
      printf("Nota inválida. Por favor, insira uma nota entre %.1f e %.1f.\n", MIN_NOTA, MAX_NOTA);
      printf("| "); scanf("%f", &AV2);
    }

		printf("> Insira o total de faltas do aluno:\n");
		printf("| "); scanf("%i", &TF);

		// Processamento
		MP = (AV1 + AV2) / 2;

		if ( MP >= MEDIA && TF <= MAX_FALTAS ){
			// Saída
			printf("> Aprovado!");
		}
		else if ( TF <= MAX_FALTAS ) {
			// Saída
			printf("> Prova Final.");
		}
		else {
			// Saída
			printf("> Reprovado por falta.");
		}
	}
	else if ( opcao == 'B' ) {

		// Entrada
		printf("> Insira a nota da primeira avaliação:\n");
		printf("| "); scanf("%f", &AV1);
		while (AV1 > MAX_NOTA || AV1 < MIN_NOTA) {
      printf("Nota inválida. Por favor, insira uma nota entre %.1f e %.1f.\n", MIN_NOTA, MAX_NOTA);
      printf("| "); scanf("%f", &AV1);
    }

		printf("> Insira a nota da segunda avaliação:\n");
		printf("| "); scanf("%f", &AV2);
		while (AV2 > MAX_NOTA || AV2 < MIN_NOTA) {
      printf("Nota inválida. Por favor, insira uma nota entre %.1f e %.1f.\n", MIN_NOTA, MAX_NOTA);
      printf("| "); scanf("%f", &AV2);
     }

		printf("> Insira o total de faltas do aluno:\n");
		printf("| "); scanf("%i", &TF);
	
		// Processamento
		MP = (AV1 + AV2) / 2;

		if ( MP < 7.0 ) {
			// Entrada
			printf("> Insira a nota da prova final:\n");
			printf("| "); scanf("%f", &PF);
			while (PF > MAX_NOTA || PF < MIN_NOTA) {
      printf("Nota inválida. Por favor, insira uma nota entre %.1f e %.1f.\n", MIN_NOTA, MAX_NOTA);
      printf("| "); scanf("%f", &PF);
     }
		
			// Processamento
			Final = (MP + PF) /2;
		}
		else {
			// Processamento
			Final = MP;
		}

		if ( Final >= MEDIA_FINAL && TF <= MAX_FALTAS  ) {
			// Saída
			printf("> Aprovado!");
		}
		else if ( Final > MEDIA_FINAL && TF > MAX_FALTAS  ) {
			// Saída
			printf("> Reprovado por falta.");
		}
		else {
			// Saída
			printf("> Reprovado.");
		}
	}
	else {
		// Saída
		printf("> Opção inválida");
	}

  return 0;
}
