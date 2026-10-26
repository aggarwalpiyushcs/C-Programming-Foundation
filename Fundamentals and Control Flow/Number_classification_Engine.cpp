#include<bits/stdc++.h>
using namespace std;

void positive(int n){
    if(n==0){
        cout << n <<" is Zero.";
    }
    else if(n > 0){
        cout << n << " is positive integer.";
    }
    else if(n < 0){
        cout << n <<" is negative number.";
    }
    else{
        cout << "Invalid Input! Enter integer.";
    }
}

void even(int n){
    if(n % 2 == 0){
        cout << n <<" is Even number.";
    }
    else if(n % 2 != 0){
        cout << n <<" is Odd number.";
    }
    else{
        cout << "Invalid Input! Enter integer.";
    }
}

void prime(int n){
    int i;
    bool is_prime = true;
    if(n <=1){
        is_prime = false;
    }
    else{
        for(i=2; i<= n/i; i++){
            if(n % i == 0){
                is_prime = false;
                break;
            }
        }
    }

    if(is_prime){
        cout << n <<" is prime number.";
    }
    else{
        cout << n <<" is not prime number.";
    }
}


int digit_count(int n){
    int count = 0;
    int digit;
    int temp = n;
    while(temp>0){
        digit = temp%10;
        count += 1;
        temp = temp / 10;
    }
    return count;
}

void reverse_digit(int n){
    int digit;
    int temp = n;
    int reverse=0;
    int sum = 0;
    while(temp>0){
        digit = temp%10;
        sum = sum + digit;
        reverse = (reverse*10) + digit;
        temp = temp / 10;
    }

    cout << "Reverse number: " << reverse;
    cout << "\nSum of digits: " << sum;

    
        if(sum == n){
        cout << n << " is palindrome number.";
        }
        else{
            cout << n << " is not an palindrome number.";
        }
    

}

void palindrome(int n){
    int sum = 0, digit;
    int temp = n;
    int c = digit_count(n);
    while(temp > 0){
        digit = temp % 10;
        sum = sum + (pow(digit, c));
        temp = temp / 10;
    }

    if(sum == n){
        cout << n << " is armstrong number.";
    }
    else{
        cout << n << " is not a armstrong number.";
    }
}

int main(){
    cout << "\n==========Number Classification Engine===========\n";
    cout <<"\n1.Positive/Negative/Zero\n2.Evem or Odd\n3.Prime number or not\n4.Number of digits\n5.Reverse of number\n6.Sum of digits of number\n7. Armstrong Number\n8. Palindrome Number\n";
    int n;

    cout << "Enter number: ";
    cin >> n;
    cout << "\n\n";
    positive(n);
    cout << "\n\n";

    even(n);
    cout << "\n\n";

    prime(n);
    cout << "\n\n";

    cout << "Number of digits: "<< digit_count(n);
    cout << "\n\n";


    reverse_digit(n);
    cout << "\n\n";

    palindrome(n);
    cout << "\n\n";

    return 0;

}
