/*
**
** QWASAR.IO -- my_initializer
**
** @param {int*} param_1
**
** @return {void}
**
*/

//#include <stdio.h>

void my_initializer(int* param_1)
{
    *param_1 = 0;
//    return param_1; // Why? A void-type function shall return nothing but the results of what it does to the parameters it is given, right?
}

/*int main() {
  int variable_a = 12;

  printf("%d\n", variable_a); // will print 12
  my_initializer(&variable_a);
  printf("%d\n", variable_a); // will print 0
  return 0;
}*/
