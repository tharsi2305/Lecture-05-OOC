#include <iostream>
#include"Student.h"
using namespace std;


int main() {
  Student std1, std2;
  std1.setStudentNo(11);
  std1.assignMarks(50,60,70);
  std2.setStudentNo(33);
  std2.assignMarks(70,80,75);
  //cout <<"Average of student1:"<< std1.setStudentNo(1023)<< endl;
  cout <<"Average of student1:"<< std1.calcAvg() << endl;
  //cout<<std1.setStudentNo();
  cout <<"Average of student2:"<< std2.calcAvg() << endl;
  return 0;
  
}

