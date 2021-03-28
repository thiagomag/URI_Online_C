#include <stdio.h>
 
int main() {
	
	int vitoriaInter = 0, vitoriaGremio = 0, empate = 0;
	int placarInter, placarGremio;
	int qntGrenais = 0, novoJogo = 1;
	
	while (novoJogo == 1) {
		if (novoJogo == 1) {
			scanf("%d", &placarInter);
			scanf("%d", &placarGremio);
			
			if (placarInter > placarGremio) {
				vitoriaInter += 1;
			} else if (placarInter < placarGremio) {
				vitoriaGremio += 1;
			} else {
				empate += 1;
			}
		}
		qntGrenais += 1;
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d", &novoJogo);
	} 
	
	printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n", qntGrenais, vitoriaInter, vitoriaGremio, empate);
	
	if (vitoriaInter > vitoriaGremio) {
            printf("Inter venceu mais\n");
    } else {
            printf("Gremio venceu mais\n");
    }
	
	return 0;
}
