#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL,"");
	int cpf[11];
	int i,v1=0,vf,e,valido=0;
	do{
		do{
			printf("Informe os dígitos do seu CPF.\n");
			for(i=0;i<11;i++){
				scanf("%d",&cpf[i]);
			}
			printf("Seu CPF é igual a: ");
			printf("%d%d%d.%d%d%d.%d%d%d-%d%d?\n",cpf[0],cpf[1],cpf[2],
			cpf[3],cpf[4],cpf[5],cpf[6],cpf[7],cpf[8],cpf[9],cpf[10]);
			printf("1-SIM 2-NÃO\n");
			scanf("%d", &e);
		}while(e==2);
			e=10;
		for(i=0;i<9;i++){
			v1+=(cpf[i]*e);
			e--;
		}
		vf=v1%11;
		vf=11-vf;
		if(vf==cpf[9] || vf==11){
			valido++;
		}
			e=11;
		for(i=0;i<10;i++){
			v1+=(cpf[i]*e);
			e--;
		}
		vf=v1%11;
		vf=11-vf;
		if(vf==cpf[10] || vf==11){
			valido++;
		}
		if(valido==2){
			printf("CPF válido.");
		}else{
			printf("CPF inválido.");
		}
}
