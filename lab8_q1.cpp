//including library
#include<iostream> 
using namespace std;
int sum(int arr[20],int n)
{
 int s=0;
	for(int i=0;i<n;i++){
		//getting input from the user
		cout<<"Enter number to be added: "<<"\n";
		cin>>arr[i];
                //function definition
		s=s+arr[i];       
               //keeps adding values to variable s
}
	return s;
}

int main()
{
	//declaring variables
	int n,arr[20];   
	//here size of array is deccided by user.Ask user for it
	cout<<"Enter size of array you want: "<<"\n";
	cin>>n;
	cout<<"Sum: "<<sum(arr,n);        //function call
	//closing program
	return 0;
}
