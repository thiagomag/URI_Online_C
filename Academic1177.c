#include<stdio.h>
#include<string.h>

void lerString(char str[], int max)
{
    fgets(str, max, stdin);
    if (str[strlen(str)-1]=='\n')
        str[strlen(str)-1] = '\0';
    else
    {
        char lixo[10];
        do{
            fgets(lixo, 10, stdin);
        }while (!feof(stdin) && lixo[strlen(lixo)-1]!='\n');
    }
}

typedef struct {
    int codigo;
    char aluno[50];
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
    scanf("%i\n", &(*d).creditos);
    scanf("%i\n", &(*d).ano);
    scanf("%i\n", &(*d).semestre);
    scanf("%f\n", &(*d).nota1);
    scanf("%f\n", &(*d).nota2);
    (*d).media = ((d->nota1*1) + (d->nota2*2))/3;
}

void mostrar(TDisciplina d){
    printf("%-10s: %04i\n"
           "%-10s: %s\n"
           "%-10s: %s\n"
           "%-10s: %i\n"
           "%-10s: %i\n"
           "%-10s: %i\n"
           "%-10s: %.2f\n"
           "%-10s: %.2f\n"
           "%-10s: %.2f\n",
           "Codigo", d.codigo, "Nome", d.nome, "Professor", d.professor, "Creditos", d.creditos, "Ano", d.ano,
           "Semestre", d.semestre, "Nota1", d.nota1, "Nota2" , d.nota2, "Media", d.media);
    char ok[2] = "ko";
    scanf("%s", ok);
}

int menu() {
    int opc;
    do {
        printf("1 - ler dados da disciplina\n"
               "2 - mostrar os dados da disciplina\n"
               "3 - sair\n"
               "Entre com a sua opcao:\n");
        scanf("%d", &opc);
    } while (opc<1 || opc>3);
    return opc;
}

int main(){
    TDisciplina d;
    int acabou=0;

    while(!acabou){
        switch (menu()){
            case 1:
                ler(&d);
                break;
            case 2:
                mostrar(d);
                char conf[2];
                scanf("%c", conf);
                break;
            case 3:
                acabou = 1;
                printf("Obrigado por utilizar o programa de cadastro, volte sempre!\n");
                break;
            default:
                break;
        }
    }
    return 0;
}