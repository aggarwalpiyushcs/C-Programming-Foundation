#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>

using namespace std;

int marks_input(){
        float marks;
        cout << "Enter student's marks: ";
        cin >> marks;
        string grade;
        

        if(marks < 0){
            cout << "Enter valid marks!\nMarks Cannot be Negative.\n";
        }

        if(marks > 100){
            cout << "Enter valid marks!\nMarks Cannot exceed 100.\n";
        }

        if(marks > 90 && marks <= 100){
            grade = 'A';
        }
        else if(marks > 80 && marks <=90){
            grade = 'B+';
        }
        else if(marks > 70 && marks <= 80 ){
            grade = 'B';
        }
        if(marks > 60 && marks <= 70){
            grade = 'C';
        }
        else if(marks > 50 && marks <=60){
            grade = 'D';
        }
        else if(marks > 40 && marks <= 50 ){
            grade = 'E';
        }
        else(marks<40){
            grade = 'F';
        }

        char result = grade;
        grades.push_back(result);

    
    }

int main(){
    vector <string> grades;
    unordered_map <string, int> count;

    int no;
    cout << "Enter number of students: ";
    cin >> no;

    for(int i =1; i<=no; i++){
        marks_input();
    }
}