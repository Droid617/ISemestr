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

	int let;
	int num;

	onlyLetters((char*)text, let);
	onlyNumber((char*)text, num);

	if((let == 1) || (num == 1)){
		
		if((strcmp(type, caesar) == 1) && (let == 1)){

			int offs = atoi(argv[3]);
			mutableCaesarSecond ((char*)text, offs, (char*)text2);
			printf("Дешифрованная строка: \n %s \n", text2);
		}

		else{

			char passw[40];
			strcpy(passw, argv[3]);
			mutableXor ((char*)text, (char*)passw, (char*)text2);
			printf("Дешифрованная строка: \n %s \n", text2);
		}
	}

	else{

		printf("Error: incorrect input");
	}



}
