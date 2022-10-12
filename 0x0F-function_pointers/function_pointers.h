#ifndef _FUNCTION_POINTERS.H_
#define _FUNCTION_POINTERS.H_

/**
 * Description: A header file that contains prototypes and functions used
 * in project 0x0F-function_pointers
 */

#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int (*get_op_func(char *s))(int, int);

#endif /*FUNCTION_POINTERS.H*/
