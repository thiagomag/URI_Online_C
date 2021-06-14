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
    (*l).qtd = 0;
}

void inserir(TListaDisciplinas *l, TDisciplina d) {
    (*l).vet[(*l).qtd] = d;
    (*l).qtd++;
}

int obterIndice(TListaDisciplinas l, int codigo) {
    int achou, i;
    achou = 0;
    i = 0;
    while (!achou && i < l.qtd) {
        if (l.vet[i].codigo == codigo) {
            achou = 1;
        } else {
            i++;
        }
    }
    return achou ? i : -1;
}

void remover(TListaDisciplinas *l, int codigo) {
    int i;
    int pos = obterIndice(*l, codigo);
    if (pos > -1) {
        for (i = pos + 1; i < (*l).qtd; i++) {
            (*l).vet[i - 1] = (*l).vet[i];
        }
        (*l).qtd--;
    }
}

void alterar(TListaDisciplinas *l, int codigo, TDisciplina d) {
    int pos = obterIndice(*l, codigo);
    if (pos > -1) {
        (*l).vet[pos] = d;
    }
}

int existe(TListaDisciplinas l, int codigo) {
    return obterIndice(l, codigo) > -1;
}

void listar(TListaDisciplinas l) {
    int i;
    printf("%-4s %-50s %4s %4s/%1s %5s\n", "Cod.", "Nome", "Cred", "Ano", "S", "Media");
    for (i = 0; i < l.qtd; i++) {
        printf("%04i %-50s %4i %4i/%1i %5f\n",
               l.vet[i].codigo, l.vet[i].nome, l.vet[i].creditos, l.vet[i].ano, l.vet[i].semestre, l.vet[i].media);
    }
    char conf[10];
    do {
        lerString(conf, 10);
    } while (strcmp(conf, "ok") != 0);
}

void filtrarAnoSemestre(TListaDisciplinas l, int valor) {
    int i;
    printf("%-4s %-50s %4s %4s/%1s %5s\n", "Cod.", "Nome", "Cred", "Ano", "S", "Media");
    for (i = 0; i < l.qtd; i++) {
        if (valor == l.vet[i].ano || valor == l.vet[i].semestre) {
            printf("%04i %-50s %4i %4i/%1i %5f\n",
                   l.vet[i].codigo, l.vet[i].nome, l.vet[i].creditos, l.vet[i].ano, l.vet[i].semestre, l.vet[i].media);
        }
    }
    char conf[10];
    do {
        lerString(conf, 10);
    } while (strcmp(conf, "ok") != 0);
}

void filtrarNomeProfessor(TListaDisciplinas l, char texto[]) {
    int i;
    printf("%-4s %-50s %4s %4s/%1s %5s\n", "Cod.", "Nome", "Cred", "Ano", "S", "Media");
    for (i = 0; i < l.qtd; i++) {
        if (strstr(l.vet[i].nome, texto) != NULL || strstr(l.vet[i].professor, texto) != NULL) {
            printf("%04i %-50s %4i %4i/%1i %5f\n",
                   l.vet[i].codigo, l.vet[i].nome, l.vet[i].creditos, l.vet[i].ano, l.vet[i].semestre, l.vet[i].media);
        }
    }
    char conf[10];
    do {
        lerString(conf, 10);
    } while (strcmp(conf, "ok") != 0);
}

void historico(TListaDisciplinas l) {
    int i;
    float somaMediaCreditos = 0, somaCreditos = 0;
    printf("%-4s %-50s %4s %4s/%1s %5s\n", "Cod.", "Nome", "Cred", "Ano", "S", "Media");
    for (i = 0; i < l.qtd; i++) {
        somaMediaCreditos = l.vet[i].media * l.vet[i].creditos;
        somaCreditos = l.vet[i].creditos;
        printf("%04i %-50s %4i %4i/%1i %5f\n",
               l.vet[i].codigo, l.vet[i].nome, l.vet[i].creditos, l.vet[i].ano, l.vet[i].semestre, l.vet[i].media);
    }
    float cr = somaMediaCreditos / somaCreditos;
    printf("%-67s %.2f\n", "Coeficiente de Rendimento", cr);
    char conf[10];
    do {
        lerString(conf, 10);
    } while (strcmp(conf, "ok") != 0);
}

int menu() {
    int opc;
    do {
        printf("1 - inserir nova disciplina\n"
               "2 - remover disciplina pelo codigo\n"
               "3 - alterar disciplina pelo codigo\n"
               "4 - listar todas as disciplinas\n"
               "5 - listar disciplinas de um ano/semestre\n"
               "6 - listar disciplinas pelo nome/professor\n"
               "7 - Historico\n"
               "8 - Sair\n"
               "Entre com a sua opcao:\n");
        scanf("%d", &opc);
    } while (opc < 1 || opc > 8);
    return opc;
}

int main() {
    TDisciplina d;
    TListaDisciplinas l;
    int acabou = 0;
    int codigo;
    char texto[100];
    int valor = 0;

    while (!acabou) {
        switch (menu()) {
            case 1:
                ler(&d);
                inserir(&l, d);
                printf("Disciplina inserida com sucesso!\n");
                break;
            case 2:
                scanf("%d%*d", &codigo);
                remover(&l, codigo);
                break;
            case 3:
                scanf("%d%*d", &codigo);
                if (existe(l, codigo)) {
                    ler(&d);
                    alterar(&l, codigo, d);
                }
                break;
            case 4:
                listar(l);
                break;
            case 5:
                scanf("%d", &valor);
                filtrarAnoSemestre(l, valor);
                break;
            case 6:
                lerString(texto, 100);
                filtrarNomeProfessor(l, texto);
                break;
            case 7:
                historico(l);
                break;
            case 8:
                acabou = 1;
                printf("Obrigado por utilizar o programa de cadastro, volte sempre!\n");
                break;
            default:
                break;
        }
    }
    return 0;
}