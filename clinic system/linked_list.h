#ifndef  linked_list_h
#define  linked_list_h
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdio.h>
#include "functions.h"
enum boool { False, True };
#define no_reservation 0
#define new_reservation 1
typedef struct node {
	char name[40];
	char gender[7];
	char reservation_index;
	int age;
	int  id;
	struct node* next_node;
}node_t;
typedef struct list {
	node_t* head;
	int list_size;
}list_t;
volatile list_t* patients;
list_t* creat_new_list();
void inset_new_node_to_head(list_t* list, char name[40], char age, char gender[7], int id, char reservation_index);
void print_list(list_t* list);
void delete_node(list_t* list, int patient_id);
char edit_node(list_t* list, char name[40], char age, char gender[7], int id, char reservation_index,char action_flag);
#endif linked_list_h	