#include<bits/stdc++.h>
using namespace std;

int main(){
    int select;
    do{
        cout << "\n----------Mathematical Utility----------\n";
        cout << "1. Addition\n2. Substraction\n3. Multiplication\n4. Division\n5. Power\n6. Factorial\n0. Exit";
        
        cout << "Enter the tool number: ";
        cin >> select;

        switch (select)
        {
        case 1:
        {
            double a, b;
            cout <<"Enter a: ";
            cin >> a;
            cout <<"Enter b: ";
            cin >> b;
            double sum = a + b;
            cout << "Addition: " << sum <<"\n";
            break;
        }
            

        case 2:
        {
            double a, b;
            cout <<"Enter a: ";
            cin >> a;
            cout <<"Enter b: ";
            cin >> b;
            double sub = a - b;
            cout << "Subtraction: " << sub <<"\n"; 
            break;
        }
            

        case 3:
        {
            double a, b;
            cout <<"Enter a: ";
            cin >> a;
            cout <<"Enter b: ";
            cin >> b;
            double mul = a * b;
            cout << "Multiplication: " <<mul<<"\n";
            break;
        }
            

        case 4:
        {
            double a, b;
            cout <<"Enter a: ";
            cin >> a;
            cout <<"Enter b: ";
            cin >> b;
            if(b == 0){
                cout << "Cannot divide by 0";
                break;
            }
            double div = a / b;
            cout <<"Division: " << div <<"\n";
            break;
        }
            

        case 5: 
        {
            double a;
            int b;
            cout <<"Enter a: ";
            cin >> a;
            cout <<"Enter non fraction non negative b: ";
            cin >> b;
            if(b < 0){
                cout << "Invalid Input";
                break;
            }
            double power = 1;
            for(int i = 1; i<=b; i++){
                power = power * a;
            }
            
            cout << a << "Power raised to " << b <<": " << power << "\n";
            break;
        }
            

        case 6: 
        {
            int a, i;
            cout << "Enter a: ";
            cin >> a;
            long long int factorial = 1;
            if(a < 0){
                cout << "Invalid input! Enter valid positive integer";
                break;
            }
            if(a == 0){
                cout << "Factorial of " << a << "!: " << factorial <<"\n";
                break;
            }
            
            for(i=1; i <= a; i++){
                factorial = factorial * i;
            }
            cout << "Factorial of " << a << "!: " << factorial <<"\n";
            break;
        }

        case 0:
        {
            
        }
        
        default:
            cout << "Invalid  Selection!\nSelect between the range of 1 to 6 and 0 to exit.";
            break;
        }
    }while(select != 0);
    return 0;

}