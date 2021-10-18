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
char url[]="identifier_test_case.txt";
int length=0, valid_id=1;
FILE *arq = fopen(url, "r");

	do{
	    	
		achar = fgetc(arq);
		  
		valid_id = valid_s(achar);
		
		    if(valid_id){
		      length = 1;
		    }
		    
		achar = fgetc(arq);
		
		    while(achar != '\n'){
		        if(!(valid_f(achar))){
		        	valid_id = 0;
		        }
		      	length++;
				achar = fgetc(arq);
		    }
		
		    if (valid_id && (length >= 1) && (length < 6)) {
				printf ("V�lido \n");
		        } else {
		        printf ("Inv�lido\n");
		    }
   
	} while (achar != EOF);
		
    fclose(arq);		
	
}


// O programa � respons�vel por determinar se um identificador � v�lido ou n�o
// Um identificador v�lido deve come�ar com uma letra e conter apenas letras ou d�gitos; al�m disso, deve ter no m�nimo 1 e no m�ximo 6 caracteres de comprimento. 
// � importante observar que o programa identifier cont�m ao menos um defeito.

