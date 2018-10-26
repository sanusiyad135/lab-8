//including library
#include <iostream>
using namespace std; 
int ksmall(int arr[],int size,int k){    
//we are going to define a function to find k th smallest using selection sort
int temp;
for(int i=0;i<size;i++){
                       for(int j=i+1;j<size;j++){
                                                 if(arr[j]<arr[i]){
                                                                   temp=arr[j];
                                                                   arr[j]=arr[i];
                                                                   arr[i]=temp;}
                                                 } 
                       }
//returning the kth smallest element after sorting 
return arr[k-1];}       
int klarge(int arr[],int size,int k){  
//we are going to define function to find the kth largest element in the array using selection sort
                                    int temp;
                                    for(int i=0;i<size;i++){
                                                          for(int j=i+1;j<size;j++){
                                                                                   if(arr[j]>arr[i]){
                                                                                                     temp=arr[j];
                                                                                                     arr[j]=arr[i];
                                                                                                     arr[i]=temp;}        
                                                                                   }
                                                          }                                              
//returning the kth largest element after sorting
return arr[k-1];          
}
int main(){
          //declaring variables
          int arr[20],size,k1,k2;
          //gettting input from the user
          cout<<"Enter the size of the array you need:"<<"\n";
          cin>>size;
          cout<<"Enter the elements of the array"<<"\n";
          //for loop to accept the elements as input
          for(int i=0;i<size;i++){
          cin>>arr[i];}
          //k1 is for k th largest
          //k2 is for k th smallest
          //getting the values of k1&k2
          cout<<"Enter the cardinality of the smallest element"<<"\n";
          cin>>k1;
          cout<<"Enter the cardinality of the largest element"<<"\n";
          cin>>k2;
          //displaying the output using the defined functions
          cout<<"The kth largest element is "<<klarge(arr,size,k1)<<endl;
          cout<<"The kth smallest element is "<<ksmall(arr,size,k2)<<endl;
          //closing the program
          return 0;
}
