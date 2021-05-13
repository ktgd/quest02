/*
**
** QWASAR.IO -- my_string_formatting
**
** @param {char*} param_1
** @param {char*} param_2
** @param {int} param_3
**
** @return {void}
**
*/

//#include <string.h>
#include <stdio.h>

void my_string_formatting(char* param_1, char* param_2, int param_3)
{
//    char firstname = *param_1;
//    char lastname = *param_2;
//    int age = &param_3;

/*  write(1, "hello my name is, ", strlen("hello my name is, "));
    write(1, firstname, strlen(firstname));*/
    printf("Hello, my name is %s %s, I'm %d.\n", param_1, param_2, param_3);
}

/*int main()
{
    char* s_0_0 = "john";
    char* s_0_1 = "doe";
    int n_0 = 37;
    char* s_1_0 = "Baby";
    char* s_1_1 = "Yoda";
    int n_1 = 50;
    char* s_2_0 = "Marie";
    char* s_2_1 = "Curie";
    int n_2 = 26;

    my_string_formatting(s_0_0, s_0_1, n_0);
    my_string_formatting(s_1_0, s_1_1, n_1);
    my_string_formatting(s_2_0, s_2_1, n_2);
}*/
