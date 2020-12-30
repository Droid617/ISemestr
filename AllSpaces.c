#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include"header.h"
extern char* mutableAllSpaces(char* in, char* out){

        int i = 0;
        int j = 0;
        for(i = 0;i < strlen(in);i++){
                if((char)in[i] != ' '){
                        out[j] = in[i];
                        j++;
                }
        }
	
        return out;
}

extern const char* immutableAllSpaces(char* in, char* out){

        int i = 0;
        int j = 0;
        for(i = 0;i < strlen(in);i++){
                if((char)in[i] != ' '){
                        out[j] = in[i];
                        j++;
                }
        }
        return out;
}


