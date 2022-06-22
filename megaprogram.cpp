#include<iostream>
using namespace std;
void line(void);
void swap(int& , int&);
void test (int , int&);
int main()
{
    char choice;
    int n;
    cout<<"---Welcome to Mega Program---"<<endl;
    cout<<"Enter 'a' for General programs."<<endl;
    cout<<"Enter 'b' for Functions programs."<<endl;
    cout<<"Enter 'c' for Array programs."<<endl;
    cout<<"================================="<<endl;
    cout<<"Enter your choice:";
    cin>>choice;

    switch (choice)
    {
      case 'a':
        cout<<"___________________________________"<<endl;
        cout<<"You are in General Programs section."<<endl;
        cout<<"Enter '1' for Mobiles program."<<endl;
        cout<<"Enter '2' for Area of circle program."<<endl;
        cout<<"Enter '3' for Loop program."<<endl;
        cout<<"Enter '4' for Multiplication program."<<endl;
        cout<<"================================="<<endl;
        cout<<"Enter your choice:";
        cin>>n;
        if(n==1)
        {
            int mobiles=4;
        	cout<<"i have four mobiles"<<"\n";
        	cout<<"all of them are expensive"<<"\n";
        	cout<<"but do not work";
        }
        else if(n==2)
        {
            int radius; 
            float area;
            float pie =3.14;
            cout<<"enter radius of circle";
            cin>>radius;
            {
            	area = radius *radius*3.14;
            	{
            	    cout<<"area of circle is ="<<area;
            	}
            }
        }
        else if(n==3)
        {
            int i;
             for(i=1;i<=5;i++)
             {
                 cout<<i*i<<"\t";
             }
        }
        else if(n==4)
        {
            int a=5,b;
             for(b=5;b>1;b--)
             {
                 cout<<a<<"*"<<b<<"="<<a*b<<endl;
             }
        }
        else{
            cout<<"Invalid Input Try again.";
        }
        break;
      case 'b':
        cout<<"___________________________________"<<endl;
        cout<<"You are in Function Programs section."<<endl;
        cout<<"Enter '1' for Factorial program."<<endl;
        cout<<"Enter '2' for Line program."<<endl;
        cout<<"Enter '3' for Swap program."<<endl;
        cout<<"Enter '4' for Test program."<<endl;
        cout<<"================================="<<endl;
        cout<<"Enter your choice:";
        cin>>n;
        if(n==1)
        {
            int num, i, fact_num = 1;
            cout << "Enter the positive number to find the factorial: ";
            cin >> num;
            if (num< 0)
                cout << "Error! You have entered negative number and Factorial for negative number does not exist.";
            else
            {
                for(i = 1; i <= num; ++i)
                {
                fact_num*= i;  
                }
                cout << "Factorial of the entered number is " <<  fact_num;
            }
        }
        else if(n==2)
        {
        	line( );
        	cout<<"hello"<<endl;
        	line( );
        }
        else if(n==3)
        {
             int a=5 , b=20;
             cout<<"a="<<a<<endl ;
             cout<<"b="<<b<<endl ;
             swap(a , b);
             cout<<"a="<<a<<endl ;
             cout<<"b="<<b<<endl;
        }
        else if(n==4)
        {
             int a=5 , b=20;
             test(a,b);
             test(b,a);
             cout<<a<<"\t"<<b;
        }
        else{
            cout<<"Invalid Input Try again.";
        }
        break;
      case 'c':
        cout<<"___________________________________"<<endl;
        cout<<"You are in Array Programs section."<<endl;
        cout<<"Enter '1' for Even numbers in Array program."<<endl;
        cout<<"Enter '2' for Sum of Odd numbers in Array program."<<endl;
        cout<<"Enter '3' for Sum of Even numbers in Array program."<<endl;
        cout<<"Enter '4' for Odd numbers in Array program."<<endl;
        cout<<"================================="<<endl;
        cout<<"Enter your choice:";
        cin>>n;
        if(n==1)
        {
            int X[5],i,j=0;
        	for(i=0;i<=4;i++)
        	{
        		cout<<"Enter value of X"<<i<<" :";
        		cin>>X[i];
        	}
        	for(i=0;i<=4;i++)
        	{
        		if(X[i]%2==0)
        		{
        			j=j+1;
        		}
        	}
        	cout<<"The total even number in array are ="<<j;
        }
        else if(n==2)
        {
            int X[5],i,sum=0;
        	for(i=0;i<=4;i++)
        	{
        		cout<<"Enter value of X"<<i<<" :";
        		cin>>X[i];
        	}
        	for(i=0;i<=4;i++)
        	{
        		if(X[i]%2!=0)
        		{
        			sum=sum+X[i];
        		}
        	}
        	cout<<"Sum of odd numbers in array are ="<<sum;
        }
        else if(n==3)
        {
            int X[5],i,sum=0;
        	for(i=0;i<=4;i++)
        	{
        		cout<<"Enter value of X"<<i<<" :";
        		cin>>X[i];
        	}
        	for(i=0;i<=4;i++)
        	{
        		if(X[i]%2==0)
        		{
        			sum=sum+X[i];
        		}
        	}
        	cout<<"Sum of even numbers in array are ="<<sum;
        }
        else if(n==4)
        {
            int X[5],i,j=0;
        	for(i=0;i<=4;i++)
        	{
        		cout<<"Enter value of X"<<i<<" :";
        		cin>>X[i];
        	}
        	for(i=0;i<=4;i++)
        	{
        		if(X[i]%2==1)
        		{
        			j=j+1;
        		}
        	}
        	cout<<"The total odd number in array are ="<<j;
        }
        else{
            cout<<"Invalid Input Try again.";
        }
        break;
      default:
        cout << "Invalid Input Try again";
        break;
    }
}

void line(void)
{
    int i;
    for(i=1;i<=10;i++)
    {
    	cout<<"-";
    }
    cout<<endl;
}
void swap(int&x , int&y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
void test (int m , int &n)
{
 n  = n-2*m;
 m = m*2;
 cout<<m<<endl;
 cout<<n;
}