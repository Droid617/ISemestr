#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include"header.h"

extern int onlyLetters(char* in, int out){

        int i = 0;
        int n = 0;
        char ch = 'a';
        for(i = 0;i < strlen(in);i++){
                for(ch = 'a';ch <= 'z';ch++){
                        if((char)in[i] == (char)ch){
                                n++;
                        }
                        else{
                                continue;
                        }
                }
        }
        if(n == strlen(in)){
                out = 1;
        }
        else{
                out = 0;
        }
        return out;

}
