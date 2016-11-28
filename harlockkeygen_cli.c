/* HarlockSOFTWARE Keygen 0.91 */



#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <time.h>
#include <string.h>

#include "char_key_tools.h"
#include "intarray.h"

#define RC printf ("\n")

int main (int argc ,char  **argv)
{
  int  n;
 
  int size, num;
 
  char_table key;

  char_table_2D ASCII = TYPABLE_ASCII_table();
  
  char_table flags = cli_get_flags (argv, argc);
  
  char_table_2D int_args = cli_get_int (argv, argc);
 
  char_table keymap = ASCII_key_set_cli(flags, ASCII);
 
  intarray I = char_table_2D_to_intarray(int_args);
  
  intarray_cli_args_check(I);

  int key_l = keymap->len;
    
  if (keymap->data[0] == 'U')
    {
      //display_help ();
      char_table_print(ASCII->data[0]);
      key = NULL;
      table_destroy(flags);
      intarray_destroy(I);
      char_table_2D_and_char_table_destroy(int_args);
      char_table_2D_and_char_table_destroy(ASCII);
      return EXIT_SUCCESS;
     }

  if( key_l == 0)
    {
      key = NULL;
      table_destroy(flags);
      intarray_destroy(I);
      char_table_2D_and_char_table_destroy(int_args);
      char_table_2D_and_char_table_destroy(ASCII);
      return EXIT_SUCCESS;
    }
  
  size = I->data[1];
 
  num = I->data[0];
  
  key = key_table_create(size,size);

  srand (time(NULL));
  
  for(n=0; n<num; n++)
    {
      key_gen( key ,keymap ,size,  key_l);
      print_key( key, size);
      fprintf(stdout,"\n");
    }
  
  if (flags != NULL)
    table_destroy(flags);

  if(int_args != NULL)
    char_table_2D_and_char_table_destroy(int_args);

  char_table_2D_and_char_table_destroy(ASCII);
  
  table_destroy(key);
  
  intarray_destroy(I);

  return EXIT_SUCCESS;
}
