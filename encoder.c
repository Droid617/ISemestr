#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include"header.h"

int main(int argc, char* argv[]){
	
	char xor[4] = {'x','o','r'};
	char caesar[7] = {'c','a','e','s','a','r'};

	char Type[10];
	char type[10];
	strcpy(Type, argv[1]);
	mutableRgstrdown((char*)Type,(char*) type);

	char text[100];
	char text2[100];
	strcpy(text, argv[2]);

        mutableAllSpaces((char*) text, (char*)text2);
        mutableFiltr((char*) text2, (char*) text);

	
	if(strcmp(type, xor) == 1){
		char passw[30];
		strcpy(passw, argv[3]);

		int let;
		int num;
		onlyLetters((char*)text, let);
		onlyNumber((char*)text, num);
		
		if((let == 1) || (num == 1)){
			if(let == 1){
				mutableRgstrdown((char*)text, (char*)text2);
				strcpy(text, text2);
			}

			mutableXor((char*)text, (char*)passw, (char*)text2);
			printf("Зашифрованная строка: \n %s \n ", text2);
		}	

		else{
			printf("Error: incorrect input");
		}
	}

	if(strcmp(type, caesar) == 1){

		int offs;
		offs = atoi(argv[3]);

		int let;
		onlyLetters((char*)text, let);

		if(let == 1){
			mutableRgstrdown((char*)text, (char*)text2);
			mutableCaesarFirst((char*)text2, offs, (char*)text);
			printf("Зашифрованная строка: \n %s \n ", text);
			
		}
		
		else{
			printf("Error: incorrect input");
		}
	}

}

