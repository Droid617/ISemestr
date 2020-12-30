#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include"header.h"


extern const char* immutableXor (char* in, char* password, char* out){

        int i = 0;
        for(i = 0;i < strlen(in);i++){
                out[i] = in[i] ^ password[i];
        }
        return out;

}

extern char* mutableXor (char* in, char* password, char* out){

        int i = 0;
        for(i = 0;i < strlen(in);i++){
                out[i] = in[i] ^ password[i];
        }
        return out;

}
