#include<stdio.h>
#include<string.h>

void lerString(char str[], int max) {
    fgets(str, max, stdin);
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';
    else {
        char lixo[10];
        do {
            fgets(lixo, 10, stdin);
        } while (!feof(stdin) && lixo[strlen(lixo) - 1] != '\n');
    }
}

typedef struct {
    int codigo;
    char nome[50];
    char professor[50];
    int creditos;
    int ano;
    int semestre;
    float nota1;
    float nota2;
    float media;
} TDisciplina;

void ler(TDisciplina *d) {
    scanf("%i\n", &(*d).codigo);
    lerString((*d).nome, 50);
    lerString((*d).professor, 50);
    scanf("%i %i %i %f %f\n",
          &(*d).creditos, &(*d).ano, &(*d).semestre, &(*d).nota1, &(*d).nota2);
    (*d).media = ((d->nota1 * 1) + (d->nota2 * 2)) / 3;
}

#define MAX 100
typedef struct {
    TDisciplina vet[MAX];
    int qtd;
} TListaDisciplinas;

void iniciar(TListaDisciplinas *l) {
    (*l).qtd=0;
}

void inserir(TListaDisciplinas *l, TDisciplina d){
    (*l).vet[(*l).qtd] = d;
    (*l).qtd++;
}

void listar(TListaDisciplinas l){
    int i;
    printf("%-4s %-50s %4s %4s/%1s %5s\n", "Cod.", "Nome", "Cred", "Ano", "S", "Media");
    for(i = 0; i < l.qtd; i++){
        printf("%04i %-50s %4i %4i/%1i %5f\n",
               l.vet[i].codigo, l.vet[i].nome, l.vet[i].creditos, l.vet[i].ano, l.vet[i].semestre, l.vet[i].media);
    }
    char conf[10];
    do {
        lerString(conf, 10);
    } while (strcmp(conf, "ok") != 0);
}

int menu() {
    int opc;
    do {
        printf("1 - inicializar\n"
               "2 - inserir nova disciplina\n"
               "3 - listar mostrar\n"
               "4 - sair\n"
               "Entre com a sua opcao:\n");
        scanf("%d", &opc);
    } while (opc < 1 || opc > 4);
    return opc;
}

int main() {
    TDisciplina d;
    TListaDisciplinas l;
    int acabou = 0;

    while (!acabou) {
        switch (menu()) {
            case 1:
                iniciar(&l);
                break;
            case 2:
                ler(&d);
                inserir(&l, d);
                printf("Disciplina inserida com sucesso!\n");
                break;
            case 3:
                listar(l);
                break;
            case 4:
                acabou = 1;
                printf("Obrigado por utilizar o programa de cadastro, volte sempre!\n");
                break;
            default:
                break;
        }
    }
    return 0;
}