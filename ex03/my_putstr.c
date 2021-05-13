/*
**
** QWASAR.IO -- my_putstr
**
** @param {char*} param_1
**
** @return {void}
**
*/

#include <unistd.h>

int my_putchar(char c) {
  return write(1, &c, 1);
}

void my_putstr(char* param_1)
{
    int i = 0;

    while ( param_1[i] != 0 )
    {
        my_putchar(param_1[i]);
        i++;
    }
}

/*int main()
{
    char* s_1 = "abc";
    char* s_2 = "abcdelele dzp ll 0";
    char* s_3 = "";

    my_putstr(s_1);
    my_putstr(s_2);
    my_putstr(s_3);
}*/
