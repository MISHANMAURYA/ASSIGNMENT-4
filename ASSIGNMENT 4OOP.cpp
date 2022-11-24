#include <iostream>
#include <string>
#include <fstream>
#define MAX 5
using namespace std;
void function()
{
    int n, i;
    int arr[MAX];
    int length=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<length;i++)
    {
    	cout<<"Element "<<i+1<<endl;
    	cin>>arr[i];
	}
    for(i=0;i<length;i++)
    {
        cout<<"\t"<<arr[i];
    }
    cout<<"Reversed Array \n";
    for(i=length-1;i>=0;i--)
    {
        cout<<"\t"<<arr[i];
    }
}
class shop
{
private:
    string name;
    int product;

public:
    void getdata()
    {
       
        cout << "Enter Name: ";
        cin >> name;
        
        cout << "Enter product number: ";
        cin >> product;
        
    }
    void display()
    {
        cout << "Name: " << name;
        cout << "product Number: " << product;
    }
};
class test
{
public:
    test()
    {
        cout << "Inside base class" << endl;
    }
    ~test()
    {
        cout << "Destructor Called" << endl;
    }
};
class test1 : public test
{
public:
    test1()
    {
        cout << "Inside sub class" << endl;
    }
};

float area(float n, int bs, int h)
{
    float a2;
    a2 = n * bs * h;
    return a2;
}
float area(float r)
{
    float a;
    float pi = 3.14;
    a = pi * r * r;
    return a;
}
int area(int l, int b)
{
    float a1;
    a1 = l * b;
    return a1;
}

template <typename T1,typename T2>
float sum(T1 x, T2 y)
{
    return (x + y);
}
class salary
{
    int k;

public:
    salary()
    {
        k = 0;
    }
    salary operator++(int)
    {
        k++;
    }
    int get_k()
    {
        return k;
    }
    salary operator--(int)
    {
        k--;
    }
};
void A(){
	try{
		try{
			int n1,n2;
			cout<<"Enter the First Number : ";
			cin>>n1;
			cout<<"Enter the Second Number : ";
			cin>>n2;
			if(n2==0)
			{
				throw n2;
			}
			else{
				cout<<"Division = "<<n1/n2;
			}
		}
		catch(...)
		{
			throw;
		}
	}
		catch(int)
		{
			cout<<"Not Possible\n";
		}
};
int main()
{
    int c, n;
    do
    {
        cout <<"\n1. For Function\n";
        cout <<"2. For Class & Object\n";
        cout <<"3. For Inheritance + Constructor Destructor\n";
        cout <<"4. For Polymorphism\n";
        cout <<"5. For Template\n";
        cout <<"6. For Opertor Overloading\n";
        cout <<"7. For File Handling\n";
        cout <<"8. For Exception Handling\n";
        cout <<"9. For Exit\n";
        cin >> n;
        switch (n)
        {
        case 1:
        {
            function();
            break;
        }
        case 2:
        {
            shop st;
            st.getdata();
            st.display();
            break;
        }
        case 3:
        {
            test P;
            test1 Ch;
            break;
        }
        case 4:
        {
            int b, bs, h,r,l;
            int a;
            cout << "\nEnter the Radius of Circle: \n";
            cin >> r;
            a=area(r);
            cout << "\nArea of Circle: " << a << endl;
            cout << "Enter the Base & Hieght of Triangle:\n";
            cin>> bs;
            cin>> h;
            a=area(0.5, bs, h);
            cout << "\nArea of Triangle: "<<a<< endl;
            cout << "\nEnter the Length & Bredth of Rectangle: \n";
            cin >> l >> b;
            a=area(l, b);
            cout << "\nArea of Rectangle: "<< a<< endl;
            break;
        }
        case 5:
        {
            cout<<"Integer Sum is = "<<sum(11,12)<<endl;
            cout<<"Integer and Float Sum is = "<<sum(5,2.9)<<endl;
            break;
        }
        case 6:
        {
            salary b;
            cout << "Initial No Of People " << b.get_k() << endl;
            b++;
            b++;
            b++;
            cout << "Present No Of People " << b.get_k() << endl;
            b--;
            b--;
            b--;
            cout << "Present No Of People " << b.get_k() << endl;
            break;
        }
        case 7:
        {
            ofstream MyFile("file.txt");
            MyFile << "Hello, My name is mishan maurya";
            string myText;
            ifstream MyFileRead("file.txt");
            cout<<"File Handling Done\n";
            while (getline(MyFileRead, myText))
            {
                cout << myText;
            }
            MyFile.close();
            MyFileRead.close();
            break;
        }
        case 8:
        {
            A();
            break;
        }
        case 9:
        {
            exit(0);
            break;
        }
        }
    } while (c != 9);
    return 0;
}
