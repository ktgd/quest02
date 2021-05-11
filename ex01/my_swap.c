/*
**
** QWASAR.IO -- my_swap
**
** @param {int*} param_1
** @param {int*} param_2
**
** @return {void}
**
*/

//#include <stdio.h>

void my_swap(int* param_1, int* param_2)
{
    int p_0; //int* p_0;

    p_0 = *param_1; //*p_0 = *param_1;
    *param_1 = *param_2;
    *param_2 = p_0; //*param_2 = *p_0;
}

/*int main() {
  int variable_a = 12;
  int variable_b = 21;

  printf("A - %d ** B - %d\n", variable_a, variable_b); // will print A - 12 ** B - 21
  my_swap(&variable_a, &variable_b);
  printf("A - %d ** B - %d\n", variable_a, variable_b); // will print A - 21 ** B - 12
  return 0;
}*/
