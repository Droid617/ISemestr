#include<string.h>
#include<ctype.h>
#include<stdio.h>
#include"header.h"

extern const char* immutableRgstrup(char* in, char* out){

        int i;
        char ch;
        for(i = 0;i < strlen(in);i++){
                for(ch = 'a';ch < 'z';ch++){
                        char A = (char)toupper(ch);
                        if(((char)in[i] == ch)||((char)in[i] == A)){
                                out[i] = (char)toupper(ch);
                        }
                }

        }
        return out;

}

extern char* mutableRgstrup(char* in, char* out){

        int i;
        char ch;
        for(i = 0;i < strlen(in);i++){
                for(ch = 'a';ch < 'z';ch++){
                        char A = (char)toupper(ch);
                        if(((char)in[i] == ch)||((char)in[i] == A)){
                                out[i] = (char)toupper(ch);
                        }
                }

        }
        return out;

}

extern const char*  immutableRgstrdown(char* in, char* out){

        int i;
        char ch;
        for(i = 0;i < strlen(in);i++){
                for(ch = 'A';ch <= 'Z';ch++){
                        char a = (char)tolower(ch);
                        if(((char)in[i] == ch)||((char)in[i] == a)){
                                out[i] = (char)tolower(ch);
                        }
                }

        }
        return out;

}

extern char*  mutableRgstrdown(char* in, char* out){

        int i;
        char ch;
        for(i = 0;i < strlen(in);i++){
                for(ch = 'A';ch <= 'Z';ch++){
                        char a = (char)tolower(ch);
                        if(((char)in[i] == ch)||((char)in[i] == a)){
                                out[i] = (char)tolower(ch);
                        }
                }

        }
        return out;

}


