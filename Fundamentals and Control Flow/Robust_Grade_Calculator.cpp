#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>

using namespace std;

vector <string> grades;
unordered_map <string, int> count;

void marks_input(){
        float marks;
        
        string grade;
        
        while (true) {
        cout << "Enter student's marks: ";
        cin >> marks;

        if (marks >= 0 && marks <= 100)
            break;

        cout << "Invalid marks. Enter a value between 0 and 100.\n";
        }
        

        if(marks > 90 && marks <= 100){
            grade = "A";
        }
        else if(marks > 80 && marks <=90){
            grade = "B+";
        }
        else if(marks > 70 && marks <= 80 ){
            grade = "B";
        }
        else if(marks > 60 && marks <= 70){
            grade = "C";
        }
        else if(marks > 50 && marks <=60){
            grade = "D";
        }
        else if(marks > 40 && marks <= 50 ){
            grade = "E";
        }
        else{
            grade = "F";
        }
    

        string result = grade;
        grades.push_back(result);
        cout << "Grade Allocated: " << result << "\n";
    }

int main(){
    

    int no;
    cout << "Enter number of students: ";
    cin >> no;

    for(int i =1; i<=no; i++){
        marks_input();
    }

    for (string result : grades){
        count[result]++;
    }

    for (auto &p:count){
        cout <<"Grade " << p.first << ": " <<p.second << " students\n";
    }

    return 0;
}