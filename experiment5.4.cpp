#include<iostream>
using namespace std;

class Student 
{
public:
	int num;
	double ch;
	Student(int n=0, double s=0)
	{
		num = n;
		ch = s;
	}
};
void max(Student *stu){
	double maxch = stu[0].ch;
	int k = 0;
	for (int i = 1;i < 5;i++) 
	{
		if (stu[i].ch > maxch) 
		{
			maxch = stu[i].ch;
			k = i;
		}
	}
	cout << "成绩最高的学生学号为" << stu[k].num << endl;

}

int main() {
	Student stu[5] = {
		Student(1,32),
		Student(2,21),
		Student(3,70),
		Student(4,69),
		Student(5,82)
	};
	Student* sp = &stu[0];
	max(sp);
	return 0;

}