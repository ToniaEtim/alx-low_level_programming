#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
void _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct format - list all types of arguments
 * @c: The operator
 * @f: The function associated
 */
typedef struct format
{
	char c;
	void (*f)();
} format_t;
#endif
