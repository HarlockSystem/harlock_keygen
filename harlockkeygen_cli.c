<<<<<<< HEAD
/* HarlockSOFTWARE Keygen 0.91 */
=======
/* Harlock Security Keygen alpha 0.10 */
>>>>>>> 5af5ab35982d4e3410566c11eb7def38f07728cc



#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <time.h>
#include <string.h>

#include "char_key_tools.h"
#include "intarray.h"

#define RC printf ("\n")

<<<<<<< HEAD
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
=======
int main (int argc ,char  *argv[])
{
 int  n;
 int size, num;
 char_table key ,csize, cnumber;
 
char_table keymap= ASCII_key_set_cli( argv[1]);
 intarray I = args_to_intarray_2(2 ,3, argv);
   if (I[0] < 1) 
     {
       I[0] = 8;
       frpintf(stderr,"unvalid size set to 8");
     }
 if (I[1] < 1 )
   I[1] = 1;

 int key_l = keymap->len;
 
 if( key_l == 0)
   {
      key = NULL;
      csize = NULL;
      cnumber = NULL;
      table_destroy(keymap);
      return EXIT_SUCCESS;
   }
 
 
 csize = I[0];
 
 
 cnumber = I[1];
 RC;
 
 //size = char_table_to_int (csize);
 //num = char_table_to_int (cnumber);


 key = key_table_create(size,size);


 srand ( time(NULL) );
 for(n=0;n<num;n++)
 {
   key_gen( key ,keymap ,size,  key_l);
   print_key( key, size);
   fprintf(stdout,"\n");
  }
RC;
 table_destroy(key);
 table_destroy(keymap);
 table_destroy(csize);
 table_destroy(cnumber);
>>>>>>> 5af5ab35982d4e3410566c11eb7def38f07728cc

  return EXIT_SUCCESS;
}
