#include<iostream>
using namespace std;

void basicArithmetic()  //for basic arithmetic operations
{
	double num1,num2;
	char op;
	cout<<"Enter the numbers:"<<endl;
	cin>>num1>>num2;
	cout<<"Addition="<<num1+num2<<endl;
	cout<<"Subtraction:"<<num1-num2<<endl;
	cout<<"Multiplication:"<<num1*num2<<endl;
	if (num2 !=0){  //the divsion will not be carried out if num2 is 0
		cout<<"Division="<<num1/num2<<endl;
	}
	else
	{
		cout<<"Division by zero is not allowed!"<<endl;
	}
}
	
 

  void EvenorOdd()    //to check whether a no is even or odd
    { 
	 int a;
	cout<<"Enter a number:"<<endl;
	cin>>a;
	if (a % 2 == 0)
	{
	cout<<"The number is even."<<endl;
	}
	else
	{
		cout<<"The number is odd."<<endl;
	}
}



void temperatureConverter()        //to convert temp from celsius to fahrenheit
{ float C,F;
cout<<"Enter the temperature(C):"<<endl;
cin>>C;
F=(9.0/5.0*C)+32;
cout<<"The temperature in fahrenheit is:"<<F;

}
void SimpleCalculator()   //simple calculator
{
	double num1,num2;
	char op;
	cout<<"Enter two numbers and an operator(+,-,*,/)"<<endl;
	cin>>num1>>num2>>op;
	switch (op) {
	
	case '+':
		cout<<num1<<'+'<<num2<<'='<<num1+num2<<endl;
		break;
	case '-':
		cout<<num1<<'-'<<num2<<'='<<num1-num2<<endl;
		break;
	case '*':
		cout<<num1<<'*'<<num2<<'='<<num1*num2<<endl;
		break;
	case '/':
		if (num2!=0)
		{
			cout<<num1<<'*'<<num2<<'='<<num1*num2<<endl;
		}
		else{
		cout<<"Division by 0 is not allowed!"<<endl;
	}
		break;
	
	default:
		cout<<"Invalid operator!";	
	}
}
void LargestNo() //to calculate largest number
{
	float num1,num2,num3;
	cout<<"Enter the numbers";
	cin>>num1>>num2>>num3;
	if (num1>num2 && num1>num3)
	{
		cout<<num1<<"is the largest number."<<endl;
	}
	else if (num2>num1 && num2>num3)
	{
		cout<<num2<<"is the largest number."<<endl;
	}
	else
	{
		cout<<num3<<"is the largest number."<<endl;
	}
if (num1==num2==num3)
{
	cout<<"All three numbers are equal.";
}
else if (num1==num2)
{
	cout<<"The largest numbers are"<<num1<<"and"<<num2<<"(Equal)";
}
else if (num1==num3)
{
	cout<<"The largest numbers are"<<num1<<"and"<<num3<<"(Equal)";
}
else
{
	cout<<"The largest numbers are"<<num2<<"and"<<num3<<"(Equal)";
}

}
	void GradeCalculator()   //to calculate grade of given obtained marks
	{
		float marks;
		cout<<"Enter your marks:"<<endl;
		cin>>marks;
		if( marks >= 90)
		{
			cout<<"Your grade is A \n";
		}
		else if(marks >=80)
		{
			cout<<"Your grade is B \n";
		}
		else if (marks >=70)
		{
			cout<<"Your grade is C \n";
		}
		else if (marks >=60)
		{
			cout<<"Your grade is D \n";
		}
		else
		{
			cout<<"Your grade is F \n";
		}
	}

int main()
{
     int choice;
     do {
     	//Displaying menu
     	 cout<<"\t"<<"Main Menu"<<"\t"<<endl;
     	 cout << "1. Basic Arithmetic Operations\n";
         cout << "2. Even or Odd Checker\n";
         cout << "3. Temperature Converter\n";
         cout << "4. Simple Calculator\n";
         cout << "5. Find the Largest Number\n";
         cout << "6. Grade Calculator\n";
         cout << "0. Exit\n";
         cout << "Enter your choice: ";
         cin >> choice;
        
        //execution of user's choice
        switch(choice)
        {
        	case 1: basicArithmetic();
			 break;
            case 2: EvenorOdd(); 
			break;
            case 3: temperatureConverter();
			 break;
            case 4: SimpleCalculator();
			 break;
            case 5: LargestNo();
			 break;
            case 6: GradeCalculator();
			 break;
            case 0: cout << "Exiting program... Goodbye!" << endl;
			 break;
            default: cout << "Invalid choice! try again." << endl;
        }
     } while (choice != 0); //by using do-while, the program will only exit when pressed 0
     return 0;
	
        
        
        
        
        
        
        
        
        
        
	 }
