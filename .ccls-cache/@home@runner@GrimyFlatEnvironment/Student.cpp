#include<iostream>
using namespace std;
#include"Student.h"

void Student::setStudentNo(int no) {
  StudentNo = no;
}
void Student :: assignMarks(int n1, int n2, int n3){
  marks1 = n1;
  marks2 = n2;
  marks3 = n3;
}
float Student ::calcAvg() {
  float average = (marks1+marks2+marks3)/3.0;
  return average;
}