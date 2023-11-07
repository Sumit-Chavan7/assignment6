#include <iostream>
using namespace std;

void swap(int *n1,int *n2){
int temp;
temp = *n1;
*n1 = *n2;
*n2 = temp;
}

int main()
{

int n1,n2,temp;
cout<<"enter a number:";
cin>>n1;
cout<<"enter second number:";
cin>> n2;
cout<<"The first number is :"<<n1<<endl;
cout<<"The second number is :"<< n2<<endl;
swap(&n1,&n2);
cout<<"The first number is :"<<n1<<endl;
cout<<"The second number is :"<<n2<<endl;
return 0;
}
