#ifndef FUNCTION_POINTERS
#define FUNTION_POINTERS

#include <stddef.h>

void print_name(char *name, void (*f)(char *));
void array_interator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int op_ad(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif /* FUNCTION_POINTERS */
