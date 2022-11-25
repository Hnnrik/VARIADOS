#include <stdio.h>
#include <locale.h>
#include <string.h>
int main(){
	setlocale(LC_ALL,"");
	char cpfChar[100];
	int cpfInt[11], i;
	gets(cpfChar);
	for(i=0;i<12;i++){
		if(cpfChar[i]=='0'){
			cpfInt[i]=0;
		}else if(cpfChar[i]=='1'){
			cpfInt[i]=1;
		}else if(cpfChar[i]=='2'){
			cpfInt[i]=2;
		}else if(cpfChar[i]=='3'){
			cpfInt[i]=3;
		}else if(cpfChar[i]=='4'){
			cpfInt[i]=4;
		}else if(cpfChar[i]=='5'){
			cpfInt[i]=5;
		}else if(cpfChar[i]=='6'){
			cpfInt[i]=6;
		}else if(cpfChar[i]=='7'){
			cpfInt[i]=7;
		}else if(cpfChar[i]=='8'){
			cpfInt[i]=8;
		}else if(cpfChar[i]=='9'){
			cpfInt[i]=9;
		}
	}
		int v1=0,vf,e=10,valido=0;
		for(i=0;i<9;i++){
			v1+=(cpfInt[i]*e);
			e--;
		}
		vf=v1%11;
		vf=11-vf;
		if(vf==cpfInt[9] || vf==11){
			valido++;
		}
			e=11;
		for(i=0;i<10;i++){
			v1+=(cpfInt[i]*e);
			e--;
		}
		vf=v1%11;
		vf=11-vf;
		if(vf==cpfInt[10] || vf==11){
			valido++;
		}
		if(valido==2){
			printf("CPF válido.");
		}else{
			printf("CPF inválido.");
		}
}
