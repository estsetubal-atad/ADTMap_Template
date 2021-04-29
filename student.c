#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"
#include "input.h"

Student studentCreate(char *name, char *number, int grade) {
    Student student;

    strcpy(student.name, name);
    strcpy(student.number, number);
    student.grade = grade;

    return student;
}

void studentPrint(Student *pStudent) {
    printf("Number: %s | Name: %s | Grade: %d \n", 
        pStudent->number, pStudent->name, pStudent->grade);
}

