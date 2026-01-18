#include <stdlib.h>

// Chequea si un char es espacio/tab/newline
int is_space(char c)
{
    return (c == ' ' || c == '\t' || c == '\n');
}

// Cuenta cuántas palabras hay
int count_words(char *str)
{
    int i = 0;
    int count = 0;
    
    while (str[i])
    {
        // Salta espacios
        while (str[i] && is_space(str[i]))
            i++;
        // Si hay palabra, cuenta y salta hasta el siguiente espacio
        if (str[i] && !is_space(str[i]))
        {
            count++;
            while (str[i] && !is_space(str[i]))
                i++;
        }
    }
    return (count);
}

// Copia una palabra desde str[i] hasta encontrar espacio o '\0'
char *copy_word(char *str, int *i)
{
    int j = 0;
    int len = 0;
    char *word;
    
    // Calcula longitud de la palabra
    while (str[*i + len] && !is_space(str[*i + len]))
        len++;
    // Reserva memoria
    word = malloc((len + 1) * sizeof(char));
    if (!word)
        return (NULL);
    // Copia la palabra
    while (j < len)
    {
        word[j] = str[*i];
        j++;
        (*i)++;
    }
    word[j] = '\0';
    return (word);
}

char **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    char **result;
    
    // Reserva el array de strings
    result = malloc((count_words(str) + 1) * sizeof(char *));
    if (!result)
        return (NULL);
    while (str[i])
    {
        // Salta espacios
        while (str[i] && is_space(str[i]))
            i++;
        // Si hay palabra, cópiala
        if (str[i] && !is_space(str[i]))
        {
            result[j] = copy_word(str, &i);
            if (!result[j])  // Si falla malloc
                return (NULL);  // En el examen no hace falta liberar
            j++;
        }
    }
    result[j] = NULL;
    return (result);
}