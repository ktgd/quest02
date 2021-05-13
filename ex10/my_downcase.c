/*
**
** QWASAR.IO -- my_downcase
**
** @param {char*} param_1
**
** @return {char*}
**
*/

/*#include <string.h>
#include <stdio.h>*/

char* my_downcase(char* param_1)
{
    int i = 0;

    while ( param_1[i] != 0 )
    {
        if ( 65 <= param_1[i] && param_1[i] <= 90 )
        {
            param_1[i] += 32;
        }
        i++;
    }
    return param_1;
}

/*
Example of main
*/
/*int main() {
  char *my_str = strdup("AbcE Fgef1");
  
  printf("RANDOM CASE -> %s\n", my_str);
  printf("DOWNCASE    -> %s\n", my_downcase(my_str));
  return 0;
}*/
