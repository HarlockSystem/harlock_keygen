/*.h = header */
/* < repertoire biblio standard > */
/* " repertoire perso " */
/* int argc taille de la chaine de commande du main 
   char * argv[] chaine enregistrer par le main pour entrer des lignes de commandes */
#ifndef __INTARRAY_H__
#define __INTARRAY_H__

#include <stdlib.h>
#include <stdio.h>


#include "intarray.h"


#define RC printf ("\n")
#define INTARRAY_DEFAULT_ALLOC 10

#define GTRUE ((bool) 255)
#define TRUE ((bool) 1)
#define FALSE ((bool) 0) 

typedef unsigned int bool;

typedef int intdata;

typedef struct _intarray *intarray;

typedef intarray heap;



struct _intarray
{
  int* data;
  int len;
  int alloc;
};




extern void intarray_debug (intarray T);
extern void intarray_print (intarray T);
extern intarray intarray_create (int len);
extern intarray ext_intarray_create (int len, int alloc);
extern intarray empty_intarray_create(int alloc);
extern intarray standard_empty_intarray_create (void);
extern void intarray_destroy (intarray T);
extern intdata intarray_get (intarray T , int i);
/* int a = T.data[i] */
/* int a = intarray_get (T, i); */
extern void intarray_set (intarray T , int i , intdata n);
extern void ext_intarray_set ( intarray T, int i, intdata n);
/* T.data(i) = n; */
/* intarray_set (T, i, n); */
extern int intarray_length (intarray T);
/* int a = T.len; */
/* int a = intarray_length (T); */
extern void intarray_add(intarray T, intdata n);
extern void intarray_delete(intarray T, int loc);

extern intdata intarray_get_min (intarray T);
extern intarray intarray_concat (intarray T1, intarray T2);
extern void D_intarray_concat(intarray T1, intarray T2);
extern int intarray_seek_min_index (intarray T ,int start);
extern void intarray_sort1 (intarray T);/* tri par selection du minimum)*/
extern int intarray_num_occur(intarray T, intdata n);
extern int intarray_recherche(intarray T, intdata n);
extern int  intarray_sum (intarray T);
extern float intarray_average (intarray T);
extern float intarray_median (intarray T);
extern intdata intarray_get_max (intarray T);
extern intarray intarray_clone (intarray T);
extern void intarray_arg(int a, char* c[]); 

extern void scanf_pos_floath (float *n);
extern void scanf_pos_inth (int *n);

extern int factorielle (int n);
extern int string_to_inth(char * ch);
extern void int_swaph (int *m, int *n);
extern intarray intarray_index_sorted(intarray T);
extern intarray diviseur(int i);
extern void print_premier(intarray I,int n);
extern int premier_1(int m);
extern int premier_2(int m);
extern int premier_3(int m);

extern intarray args_to_intarray(int nb , char **args);
<<<<<<< HEAD
extern intarray args_to_intarray_2(int from, int to , char **args);
=======
extern intarray args_to_intarray(int from, int to , char **args);
>>>>>>> 5af5ab35982d4e3410566c11eb7def38f07728cc
extern intarray random_intarray(int len);
extern intarray intarray_clone_heap_sort_by_min(intarray I);
extern void intarray_D_heap_sort_by_min(intarray I);
extern intarray intarray_clone_heap_sort_by_max(intarray I);
extern void intarray_D_heap_sort_by_max(intarray I);
extern int square (int n);

extern heap heap_create_empty(int alloc);
extern heap heap_ext_create(int len);
extern heap heap_destroy(heap* H);
extern bool heap_is_empty( heap H);
extern int heap_count_children(heap H, int i);
extern void heap_sort_by_min(heap H, intarray I);
extern void heap_sort_by_max(heap H, intarray I);
extern int heap_parent_index(int x);
extern int heap_left_child_index(int x);
extern int heap_right_child_index(int x);
extern intdata heap_get_parent(heap H, int x);
extern intdata heap_get_head_value(heap H);
extern bool heap_is_parent_smaller(heap H, int x);
extern bool heap_is_parent_bigger(heap H, int x);
extern bool heap_has_parent(heap H, int x);
extern void heap_del_head_val_by_min(heap H);
extern void heap_del_head_val_by_max(heap H);
extern int heap_get_small_child_index(heap H,int x);
extern int heap_get_big_child_index(heap H,int x);

#endif
