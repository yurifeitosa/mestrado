#include <stdio.h>
#include <locale.h>

int valid_s(char ch) {
    if(((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z'))) {
        return (1);
        } else {
        	return (0);
        }
    }
	
int valid_f(char ch){
    if(((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z')) || ((ch >= '0') && (ch <= '9'))){
        return (1);
        } else {
        	return (0);
        }
	}

main (){
setlocale (LC_ALL,"");
char achar;
int length=0, valid_id=1;

printf ("Identificador: ");

achar = fgetc(stdin);
valid_id = valid_s(achar);

    if(valid_id){
      length = 1;
    }

achar = fgetc (stdin);

    while(achar != '\n'){
        if(!(valid_f(achar))){
        	valid_id = 0;
        }
      	length++;
      	achar = fgetc (stdin);
    }

    if (valid_id && (length >= 1) && (length < 6)) {
        printf ("Válido\n");
        } else {
        printf ("Inválido\n");
    }
}


// O programa é responsável por determinar se um identificador é válido ou não
// Um identificador válido deve começar com uma letra e conter apenas letras ou dígitos; além disso, deve ter no mínimo 1 e no máximo 6 caracteres de comprimento. 
// É importante observar que o programa identifier contém ao menos um defeito.

