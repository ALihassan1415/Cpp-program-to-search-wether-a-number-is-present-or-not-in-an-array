//Write a program to search a  number in an array...

#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	cout<<"Enter values : "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter Value "<<i+1<<" : ";
		cin>>arr[i];
	}
	cout<<"Entered values are : "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<"\n----------------------------------";
	int no;
	cout<<"\nEnter a number to find : "<<endl;
	cin>>no;
	bool flag;
	for(int i=0;i<5;i++)
	{
		if(no==arr[i])
		flag++;	
	}
	if(flag==1)
	cout<<"Number is found "<<endl;
	else
	cout<<"Number not found";
	return 0;
}