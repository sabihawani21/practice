#include<iostream>
#include<iomanip>
#include<cstdlib> //for program7
#include<ctime>   //for program7
using namespace std;

void program1 ()
{
	int a,b,sum,sub,prod;
	float div;
	cout<<"Enter the numbers:"<<endl;
	cin>>a>>b;
	sum=a+b;
	sub=a-b;
	prod=a*b;
	div= (float)a/b;
	cout<<"Addition:"<<sum<<endl;
	cout<<"Subtraction:"<<sub<<endl;
	cout<<"Multiplication:"<<prod<<endl;
	cout<<"Division:"<<div<<endl;
}
void program2 ()
{
	int a;
	cout<<"Enter a number:"<<endl;
	cin>>a;
	if (a%2==0)
	
		cout<<"The number you entered is an even number."<<endl;
	
	else 
		cout<<"The number you entered is an odd number."<<endl;
	
}
void program3 ()
{
	float C,F;
	cout<<"Enter the temperature in celcius:"<<endl;
	cin>>C;
	F=(C*9/5)+32;
	cout<<fixed<<setprecision(2);
	cout<<"The temperature in fahrenheit is:"<<F<<endl;
}
void program4 ()
{
	int a,b;
	char op;
	cout<< " Enter two numbers"<<endl;
	cin>>a>>b;
	cout<<"choose an operator (+,-,*,/)"<<endl;
	cin>>op;
	if (op=='+')
	cout<<a<<"+"<<b<<"="<<" " << (a+b)<<endl;
	else if(op== '-')
	cout<<a<<"-"<<b<<"="<<" " <<(a-b)<<endl;
	else if (op== '*')
	cout<<a<<"*"<<b<<"="<<" " <<(a*b)<<endl;
	else if (op== '/')
	cout<<a<<"/"<<b<<"="<<" " <<(a/b)<<endl;
	else
	cout<< "You entered an invalid operator."<<endl;


}
void program5 ()
{
	int a,b,c;
	cout<<"Enter the numbers:"<<endl;
	cin>>a>>b>>c;
	if (a>b && a>c)
	cout<<"The greatest number is " <<a<<endl;
	else if (b>a && b>c)
	cout<<"The greatest number is " <<b<<endl;
	else
	cout<<"The greatest number is " <<c<<endl;
}
void program6 ()
{
int marks;
cout<<"Enter your marks:"<<endl;
cin>>marks;
if (marks>=90){

cout<<"Grade A"<<endl;

}
else if (marks>=80){

cout<<"Grade B"<<endl;

}
else if (marks>=70){

cout<<"Grade C"<<endl;}

else if (marks>=60){

cout<<"Grade D"<<endl;

}
else{

cout<<"Fail"<<endl;
}
}
void program7 ()
{
           int guess;
srand (time(0));
int number= rand()% 100+1;

while (true){
cin>>guess;
if (guess>number){
cout<<"Too High! Try again."<<endl;
}
else if (guess<number){
cout<<"Too Low! Try again."<<endl;
}
else {
cout<<"Yay! Correct!"<<endl;
break;
}
}
 cout<<"Thank you for playing"<<endl<<"Come back soon!"<<endl;

}



int main()
{
	program1 ();
	program2 ();
	program3 ();
	program4 ();
	program5 ();
	program6 ();
	program7 ();
	return 0;
}


