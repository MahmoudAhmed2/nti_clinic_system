#ifndef  functions_h
#define  functions_h
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdio.h>
#include "linked_list.h"
#define default_pass 1234
#define number_of_tries 3
#define default_val 55
int user_selected;
extern char reservations[6];
static char reservations_times[6][40] = { "no reservation", "reservation 2:30-3:00pm", "reservation 3:00-3:30pm", "reservation 3:30-4:00pm", "reservation 4:00-4:30pm", "reservation 4:30-5:00pm" };
enum error_flags { error, ok };
enum users { admin = 2, patient = 3 };
enum admin_options {
	add_new_patient=1, Edit_patient, make_reservation, cancel_Reservation, print_patients_data,edit_record
};
enum user_ptions {
	view_patient_record, view_todays_reservation
};
int input_pass();
char select_option(char option, char user);
#endif functions_h