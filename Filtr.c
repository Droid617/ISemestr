#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include"header.h"

extern const char* immutableFiltr(char* in, char* out){

        int i = 0;
        int j = 0;
        for(i = 0;i < strlen(in);i++){
                char ch;
                for(ch = 'a';ch <= 'z';ch++){
                        if((char)in[i] == (char)ch){
                                out[j] = in[i];
                                j++;
                                break;
                        }
                        else{
                                continue;
                        }
                }
                for(ch = '0';ch <= '9';ch++){
                        if(((char)in[i] == (char)ch)||((char)in[i] == ' ')){
                                out[j] = in[i];
                                j++;
                                break;
                        }
                        else{
                                continue;
                        }
                }
        }
        return out;

}

extern char* mutableFiltr(char* in, char* out){

        int i = 0;
        int j = 0;
        for(i = 0;i < strlen(in);i++){
                char ch;
                for(ch = 'a';ch <= 'z';ch++){
                        if((char)in[i] == (char)ch){
                                out[j] = in[i];
                                j++;
                                break;
                        }
                        else{
                                continue;
                        }
                }
                for(ch = '0';ch <= '9';ch++){
                        if(((char)in[i] == (char)ch)||((char)in[i] == ' ')){
                                out[j] = in[i];
                                j++;
                                break;
                        }
                        else{
                                continue;
                        }
                }
        }
        return out;

}

