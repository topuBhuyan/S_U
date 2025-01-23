#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

// delimeter check function
bool isDelimeter(char ch){

    if(ch==' ' || ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch==','
       || ch==';' || ch=='(' || ch==')' || ch=='{' || ch=='}' || ch=='[' || ch==']'  ){

        return true;

       }

       return false;
}

// operator check function
bool isOperator(char ch){

    if(ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='^'
       || ch=='%' ){

        return true;

       }

       return false;
}

//check valid Identifier
bool validIdentifier(char* str){


if(str[0] =='0' || str[0] =='1' || str[0] =='2' || str[0] =='3' || str[0] =='4' ||
   str[0] =='5' || str[0] =='6' || str[0] =='7' || str[0] =='8' ||
   str[0] =='9' || isDelimeter(str[0]) == true ){

    return false;
   }

   return true;

}

//compare keyword
bool isKeword(char* str){

if(!strcmp(str,"if") || !strcmp(str, "else")){

    return true;
}

return false;

}

// Compare keyword
bool isKeyword(char* str) {
    if (!strcmp(str, "auto") || !strcmp(str, "break") || !strcmp(str, "case") ||
        !strcmp(str, "char") || !strcmp(str, "const") || !strcmp(str, "continue") ||
        !strcmp(str, "default") || !strcmp(str, "do") || !strcmp(str, "double") ||
        !strcmp(str, "else") || !strcmp(str, "enum") || !strcmp(str, "extern") ||
        !strcmp(str, "float") || !strcmp(str, "for") || !strcmp(str, "goto") ||
        !strcmp(str, "if") || !strcmp(str, "int") || !strcmp(str, "long") ||
        !strcmp(str, "register") || !strcmp(str, "return") || !strcmp(str, "short") ||
        !strcmp(str, "signed") || !strcmp(str, "sizeof") || !strcmp(str, "static") ||
        !strcmp(str, "struct") || !strcmp(str, "switch") || !strcmp(str, "typedef") ||
        !strcmp(str, "union") || !strcmp(str, "unsigned") || !strcmp(str, "void") ||
        !strcmp(str, "volatile") || !strcmp(str, "while")) {
        return true;
    }
    return false;
}

bool is_interger (char* str) {
    int i = 0, len = strlen(str);

    if(len == 0) {
        return false;
    }
    if(str[0] == '-') {
    i = 1;
}
for(; i<len; i++) {

    if(str[i] != '0' && str[i] != '1' && str[i] != '2' && str[i] != '3' && str[i] != '4' && str[i] != '5' && str[i] != '6'
       && str[i] != '7' && str[i] != '8' && str[i] != '9') {
        return false;
       }
    }
    return true;
}

bool is_real_number(char* str) {

    int i = 0, len = strlen(str);
    bool has_decimal = false;

    if(str[0] == '-') {
        i = 1;
    }

    for(; i <len; i++) {

        if(str[i] != '0' && str[i] != '1' &&str[i] != '2' && str[i] != '3' && str[i] != '4' && str[i] != '5' && str[i] != '6' &&
           str[i] != '7' && str[i] != '8' && str[i] != '9' && str[i] != '.') {

            return false;
           }
           if(str[i] == '.') {
            has_decimal = true;
           }
    }
    return has_decimal;
}


int main()
{

    printf("Entre a line of code: \n");
    char str[100];
    //scanf("%[^\n",str);

    //int x = is_interger("456");

    int y = is_real_number ("-4.3");

    printf("%d", y);

    return 0;
}
