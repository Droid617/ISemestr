extern char* mutableAllSpaces(char* in, char* out);
extern const char* immutableAllSpaces(char* in, char* out);

extern const char* immutableCaesarFirst(char* in, int offset, char* out);
extern char* mutableCaesarFirst(char* in, int offset, char* out);
extern const char* immutableCaesarSecond(char* in, int offset, char* out);
extern char* mutableCaesarSecond(char* in, int offset, char* out);

extern const char* immutableFiltr(char* in, char* out);
extern char* mutableFiltr(char* in, char* out);

extern int onlyLetters(char* in, int out);

int onlyNumber(char* in, int out);

extern const char* immutableRgstrup(char* in, char* out);
extern char* mutableRgstrup(char* in, char* out);
extern const char*  immutableRgstrdown(char* in, char* out);
char*  mutableRgstrdown(char* in, char* out);

extern const char* immutableStrip(char* in, char* out);
extern  char* mutableStrip(char* in, char* out);

extern const char* immutableXor (char* in, char* password, char* out);
extern char* mutableXor (char* in, char* password, char* out);
