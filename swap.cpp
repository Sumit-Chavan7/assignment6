#include<iostream>
using namespace std;

class N1{
public:
int n;
N1(int num)
{
n = num;
}

void disp(){
cout << n<<endl;
}

//friend class temp;
};

class N2{
public:
int n;

N2(int num)
{
n = num;
}

void disp()
{
cout << n << endl;
}

//friend class temp;
};

void swap(int *n1,int *n2){
int temp;
temp = *n1;
*n1=*n2;
*n2 = temp;
}

int main()
{
int n;
cout<< "enter the value for first obj:";
cin >> n;
N1 obj1 = N1(n);
cout<<"\nThe value stored in obj1 is :";
obj1.disp();
cout<<"\n enter the value for second obj:";
cin>> n;
N2 obj2 = N2(n); 
cout<<"\n The value stored in second obj is :";
obj2.disp();

cout<< "\nAfter swapping the variables:"<<endl;
swap(&obj1.n, &obj2.n);

cout<<"\nThe value stored in obj1 is :";
obj1.disp();
 
cout<<"\n The value stored in second obj is :";
obj2.disp();

return 0;
}
