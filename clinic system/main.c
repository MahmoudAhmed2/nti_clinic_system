#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_WARNINGS

#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linked_list.h"
#include "functions.h"
char reservations[6];
int main() {
	int user_select= default_val;
	int user_option=default_val;//random values
	char select_option_return;
	patients = creat_new_list();
	user_select=input_pass();

	while (user_select == admin) {
		printf("hello admin :)\n");
		printf("admin options:\n");
		printf("1- add_new_patient.\n");
		printf("2- Edit_patient.\n");
		printf("3- make_reservation.\n");
		printf("4- cancel_Reservation.\n");
		printf("5- print patients data.\n");
		printf("6-exit admin mode.\n");
		scanf("%d", &user_option);
		select_option(user_option, user_select, patients);
		
	}
	
}