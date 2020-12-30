#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include"header.h"

int onlyNumber(char* in, int out){

        int i = 0;
        char j = '0';
        int n = 0;
        int k = 0;
        for(i = 0;i < strlen(in);i++){
                for(j = '0';j <= '9';j++){
                        if((char)in[i] == (char)j){
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


