#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include"header.h"

extern const char* immutableStrip(char* in, char* out){

        int l = strlen(in) - 1;
        int start = 0;
        int end = 0;
        if((char)in[0] == ' '){
                start = 1;
        }
        if((char)in[l] == ' '){
                end = 1;
        }
        int i = 0;
        int j = 0;
        for(i = 0 + start;i < (strlen(in) - end);i++){
                out[j] = in[i];
                j++;
        }
        return out;
}

extern  char* mutableStrip(char* in, char* out){

        int l = strlen(in) - 1;
        int start = 0;
        int end = 0;
        if((char)in[0] == ' '){
                start = 1;
        }
        if((char)in[l] == ' '){
                end = 1;
        }
        int i = 0;
        int j = 0;
        for(i = 0 + start;i < (strlen(in) - end);i++){
                out[j] = in[i];
                j++;
        }
        return out;
}


