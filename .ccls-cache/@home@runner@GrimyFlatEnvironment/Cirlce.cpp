#include <iostream>
class Student {
private :
int StudentNo;
int marks1;
int marks2;
int marks3;
public: 
void setStudentNo(int no);
void assignMarks(int n1, int n2, int n3);
float calcAvg();
};

int main() {
  std::cout << "Hello World!\n";
}