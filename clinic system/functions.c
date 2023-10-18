#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_WARNINGS
#include"linked_list.h"
#include"functions.h"


int input_pass() {
	int pass = 0;
	int user = 0;
	printf("welcome :)\n");
	printf("select login  1 for admin 2 for normal user: ");
	scanf("%d", &user);
	if (user == 2)return patient;
	else if (user == 1) {
		printf("please enter admin pass: ");
		
		for (int i = 1; i <= number_of_tries; i++) {
			scanf("%d", &pass);
			if (pass == default_pass) return admin;
			else {
				if (i == number_of_tries) {
					printf("wrong pass ,goodbye :)\n");
					return error;
				}
				printf("wronge pass :( , please enter admin pass: ");
			}
		}
	}
	else  return input_pass();
}
char select_option(char option,char user) {
	char name[40];
	int age;
	char gender[7];
	int id;
	char reservation_index=0;
	if (user == admin) {
		
		switch (option) {
		case add_new_patient:
			printf("patient full name: ");
			fseek(stdin, 0, SEEK_END);
			fgets(name, 40, stdin);
			printf("patient age: ");
			scanf("%d", &age);
			printf("patient gender: ");
			fseek(stdin, 0, SEEK_END);
			fgets(gender, 7, stdin);
			printf("patient id: ");
			scanf("%d", &id);
			reservation_index = no_reservation;
			inset_new_node_to_head(patients, name, age, gender, id, reservation_index);
			break;
		case Edit_patient:
			printf("patient id: ");
			scanf("%d", &id);
			printf("patient new full name: ");
			fseek(stdin, 0, SEEK_END);
			fgets(name, 40, stdin);
			printf("patient new age: ");
			scanf("%d", &age);
			printf("patient new gender: ");
			fseek(stdin, 0, SEEK_END);
			fgets(gender, 7, stdin);
			edit_node(patients, name, age, gender, id, reservation_index, edit_record);
			break;
		case make_reservation:
			printf("reservation for patient id: ");
			scanf("%d", &id);
			int i = 0;
			for (i = 1; i < 6; i++) {
				if (reservations[i] == 0)
					break;
			}
			if (i > 5) {
				printf("no available time in schedule..\n");
				break;
			}
			if (edit_node(patients, default_val, default_val, default_val, id, i, make_reservation) != error) {
			reservations[i] = id;
		     }
				
			
			
			break;
		case print_patients_data:
				print_list(patients);
				break;
	    
		}
	}
	else {

	}
	}