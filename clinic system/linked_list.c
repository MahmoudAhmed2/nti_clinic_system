#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_WARNINGS

#include"linked_list.h"

list_t* creat_new_list() {
	list_t* list = (list_t*)malloc(sizeof(list_t*));
	list->head = NULL;
	list->list_size = 0;
	return list;
}
void inset_new_node_to_head(list_t* list, char name[40], char age, char gender[7], int id, char reservation_index) {
	node_t* new_node = (node_t*)malloc(sizeof(node_t*));
	list->list_size++;
	strcpy(new_node->name, name);
	strcpy(new_node->gender, gender);
	new_node->age = age;
	new_node->id=id;
	new_node->reservation_index = no_reservation;
	new_node->next_node = list->head;
	list->head = new_node;
	printf("patient record has been added successfully.\n");
}
void delete_node(list_t* list, int patient_id) {
	node_t* temp = (node_t*)malloc(sizeof(node_t*));
	node_t* temp2 = (node_t*)malloc(sizeof(node_t*));
	temp = list->head;
	temp2 = NULL;
	for (int i = 0; i < list->list_size; i++) {
		if (temp->next_node->id == patient_id) {
			temp2 = temp->next_node->next_node;
			temp->next_node = temp->next_node->next_node;
			temp2 = NULL;
			list->list_size--;
			break;
		}
		temp = temp->next_node;
	}
	list->list_size--;
}
char edit_node(list_t* list, char name[40], char age, char gender[7], int id, char reservation_index,char action_flag) {
	node_t* temp = (node_t*)malloc(sizeof(node_t*));
	temp = list->head;
	for (int i = 0; i < list->list_size; i++) {
		if (temp->id == id) {
			if (action_flag = make_reservation) {
				temp->reservation_index = reservation_index;
				printf("reservation has been made successfully.\n");
				return;
			}
			else if (action_flag = cancel_Reservation) {
				temp->reservation_index =no_reservation;
				printf("reservation has been cancelled successfully.\n");
				return;
			}
			strcpy(temp->name, name);
			strcpy(temp->gender, gender);
			temp->age = age;
			temp->id = id;
			printf("patient record has been edited successfully.\n");
			break;
		}
		temp = temp->next_node;
	}
	printf("id not found re_enter id:\n");
	return error;
}
void print_list(list_t* list) {
	node_t* temp1 = (node_t*)malloc(sizeof(node_t*));
	temp1 = list->head;
	for (int i = 0; i < list->list_size; i++) {
		printf("name:%s - id: %d - gender: %s - age: %d - reservation state:%s\n",  temp1->name, temp1->id, temp1->gender, temp1->age,reservations_times[temp1->reservation_index]);
		temp1 = temp1->next_node;
	}
	printf("\n");

}	