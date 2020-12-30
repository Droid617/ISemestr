#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include"header.h"

extern const char* immutableCaesarFirst(char* in, int offset, char* out){

        char mas[26];
        int i = 0;
        int j = 0;
        char let = 'a';
        for(i = 0;i < 26;i++){
                mas[i] = (char)let;
                let++;
        }
        i = 0;
        for(j = 0;j < strlen(in);j++){
                for(i = 0;i < 26;i++){
                        if(((char)in[j] == (char)mas[i])&&
                                        ((i + offset) > 25)){
                                out[j] = mas[i + offset - 26];
                        }
                        if(((char)in[j] == (char)mas[i])&&
                                        ((i + offset) <= 25)){
                                out[j] = mas[i + offset];
                        }
                }
        }
        return out;


}

extern char* mutableCaesarFirst(char* in, int offset, char* out){

        char mas[26];
        int i = 0;
        int j = 0;
        char let = 'a';
        for(i = 0;i < 26;i++){
                mas[i] = (char)let;
                let++;
        }
        i = 0;
        for(j = 0;j < strlen(in);j++){
                for(i = 0;i < 26;i++){
                        if(((char)in[j] == (char)mas[i])&&
                                        ((i + offset) > 25)){
                                out[j] = mas[i + offset - 26];
                        }
                        if(((char)in[j] == (char)mas[i])&&
                                        ((i + offset) <= 25)){
                                out[j] = mas[i + offset];
                        }
                }
        }
        return out;


}

extern const char* immutableCaesarSecond(char* in, int offset, char* out){

        char mas[26];
        int i = 0;
        int j = 0;
        char let = 'a';
        for(i = 0;i < 26;i++){
                mas[i] = (char)let;
                let++;
        }
        i = 0;
        for(j = 0;j < strlen(in);j++){
                for(i = 0;i < 26;i++){
                        if(((char)in[j] == (char)mas[i])&&
                                        ((i - offset) < 0)){
                                out[j] = mas[26 + i - offset];
                        }
                        if(((char)in[j] == (char)mas[i])&&
                                        ((i - offset) >= 0)){
                                out[j] = mas[i - offset];
                        }
                }
        }
        return out;


}

extern char* mutableCaesarSecond(char* in, int offset, char* out){

        char mas[26];
        int i = 0;
        int j = 0;
        char let = 'a';
        for(i = 0;i < 26;i++){
                mas[i] = (char)let;
                let++;
        }
        i = 0;
        for(j = 0;j < strlen(in);j++){
                for(i = 0;i < 26;i++){
                        if(((char)in[j] == (char)mas[i])&&
                                        ((i - offset) < 0)){
                                out[j] = mas[26 + i - offset];
                        }
                        if(((char)in[j] == (char)mas[i])&&
                                        ((i - offset) >= 0)){
                                out[j] = mas[i - offset];
                        }
                }
        }
        return out;


}

