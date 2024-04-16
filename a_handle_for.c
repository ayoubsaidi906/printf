#include "main.h"

/**
 * handle_for - handles different specifiers 'd' and 'i'
 * @arg: argument list
 * @specifier: the specifier
 * @i: pointer to the counter
 */
void handle_for(va_list arg, char specifier, int *i)
{
    if (specifier == 'd' || specifier == 'i')
    {
        (*i) += p_n(va_arg(arg, int));
    }
    else
    {
        _putchar('%');
        _putchar(specifier);
        (*i) += 2;
    }
}
