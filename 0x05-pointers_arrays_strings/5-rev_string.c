#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    void rev_string(char *s);
    int _strlen(char s[]);

     char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}


int _strlen(char s[]){
	int i;
	for (i = 0; s[i] != '\0'; ++i);
    return (i);
}


void rev_string(char *s){
	int l, i;
  char *end_ptr, *begin_ptr;
 
  l = _strlen(s);
 
  end_ptr = s;
  begin_ptr = s;
 
  // Move the end_ptr to the last character
  for (i = 0; i < l-1; i++)
    end_ptr++;

  for (i = 0; i < l/2; i++) {
    char temp = *end_ptr;
    *end_ptr = *begin_ptr;
    *begin_ptr = temp;

    end_ptr--;
    begin_ptr++;
  }
 
}
