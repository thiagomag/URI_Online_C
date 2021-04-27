#include<stdio.h>
#include<string.h>

int main (){
    char texto[51];
    int i, n, x, a;
    
    scanf("%d", &n);
    
    
    while(n>0){
    
		scanf(" %[^\n]", texto);
		scanf("%d", &x);
		a = 0;
		for(i = 0 ; i < strlen(texto); i++){
			a = texto[i] - 65 - x + 1;
			if(a <= 0){
				texto[i] = 90 + a;
			} else{
				texto[i] -= x;
			}
		}
		printf(texto);
		printf("\n");
		--n;
	}
}
