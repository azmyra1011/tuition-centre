#include <iostream>
#include <string>

using namespace std;

int main()

{
    int bill, salary;
    
    
    struct student{
        string name;
        string student_ID;
        int total_course;
        string course_code;
        float fee;
    };
        student info [3];
        
    struct teacher{
        string teacher_name;
        string teacher_ID;
        int total_class;
    }; 
    
    teacher teacherInfo [3];
    
    	cout << "Student's Info"<<endl;
        for (int i=0; i<3;i++){
            cout << "Name: ";
            cin >> info[i].name;
            cout << "Student ID: ";
            cin >> info[i].student_ID;
            cout << "Total course: ";
            cin >> info[i].total_course;
            bill = info[i].total_course * 5;
            cout << "Fee: RM"<<bill<<endl<<endl;;
        }
        
        cout << "\nTeacher's Info"<<endl;
        for (int i=0; i<3;i++){
            cout << "Name: ";
            cin >> teacherInfo[i].teacher_name;
            cout << "ID: ";
            cin >> teacherInfo[i].teacher_ID;
            cout << "Total class: ";
            cin >> teacherInfo[i].total_class;
            salary = teacherInfo[i].total_class * 3;
            cout << "Salary: RM"<< salary<<endl;
        }
    return 0;
}
