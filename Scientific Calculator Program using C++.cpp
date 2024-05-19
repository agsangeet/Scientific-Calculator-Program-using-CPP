#include <iostream>
#include <conio.h>
#include <math.h>
#define new_cal 1
#define old_cal 0
using namespace std;

class sci_calc
{
	public:
		static double addition(double,double);
		static double subtract(double,double);
		static double multiplication(double,double);
		static double division(double ,double *);
		static double modulus(double *,double *);
		static double square(double);
		static double cube(double);
		static double power(double,double);
		static double sq_root(double);
		static long int fact(double);
		static double sin_func(double);
		static double cos_func(double);
		static double tan_func(double);
};

double sci_calc::addition(double a, double b)
{
	return(a+b);
}

double sci_calc::subtract(double a, double b)
{
	return(a-b);
}

double sci_calc::multiplication(double a, double b)
{
	return(a*b);
}

/* This function will not accept zero as divisor.
Using pointer, the entered value of the divisor for
this function is updated at the main function also. */
double sci_calc::division(double a, double *b)
{
	return(a/(*b));
}

/* Similar to division function, it will not accept zero in the divisor.
We have used Pointer here as well. */
double sci_calc::modulus(double *a, double *b)
{
	// Converting double into an integer.
	int x=(int)*a;
	int y=(int)*b;
	if(*a-x>0||*b-y>0)
	cout<<"\nConverting decimal number into an integer to perform modulus";
	*a=x;
	*b=y;
	return(x%y);	
}

double sci_calc::square(double x)
{
	return(pow(x,2));
}

double sci_calc::cube(double x)
{
	return(pow(x,3));
}  

double sci_calc::power(double x,double y)
{
	return(pow(x,y));
}

double sci_calc::sq_root(double x)
{
	return(sqrt(x));
}

long int sci_calc::fact(double x)
{
	int n=(int)x, i=1, f=1;
	while(i<=n)
	{
		f *=i;
		i++;
	}
	return f;
}
double sci_calc::sin_func(double x)
{
	return(sin(x));
}

double sci_calc::cos_func(double x)
{
	return(cos(x));
}

double sci_calc::tan_func(double x)
{
	return(tan(x));
}

int main()
{
	double num1, num2, num3, temp;
	int choice, flag, old_calc=0, new_calc=1;
	long int num4;
	
			flag=new_calc;
	do
	{
		system("cls");
		cout<<"Scientific Calculator:";
					
		cout<<"\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\n6. Square\n7. Cube\n8. Power\n9. Factorial\n10. Sin\n11. Cos\n12. Tan\n13. Quit";
		/* When a number is saved in the calculator memory,
        option 14 will be displayed while when working on old calculations. */

		if(flag==old_calc)
		cout<<"\n14. Clear Memory";
		cout<<"\nChoose the type of calculation: ";
		cin>>choice;
		switch(choice)
		{
		    case 1:
				/* If a new calculation is there, then it accepts the first number
				or else the previous calculation will be the first number. */
				if (flag==new_cal)
				{
				    cout<<"Enter first number: ";
					cin>>num1;
				}
				else
				{
					num1=temp;
					cout<<"\nFirst number is "<<num1<<endl;
				}
				cout<<"Enter second number: ";
				cin>>num2;
				num3=sci_calc::addition(num1, num2);
				cout<<"\nSum of "<<num1<<" and "<<num2<<" is "<<num3;
				cout<<"\nPress any key to continue";
				getch();
				temp=num3;
				flag=old_cal;
				break;
			
			case 2:
			    if (flag==new_cal)
				{
					cout<<"Enter first number: ";
					cin>>num1;
				}
				else
				{
					num1=temp;
					cout<<"\nFirst number is "<<num1<<endl;
				}
				cout<<"Enter second number: ";
				cin>>num2;
				num3=sci_calc::subtract(num1, num2);
				cout<<"\nDifference of "<<num2<<" from "<<num1<<" is "<<num3;
				cout<<"\nPress any key to continue";
				getch();
				temp=num3;
				flag=old_cal;
				break;
			
			case 3:
				if (flag==new_cal)
				{
					cout<<"Enter first number: ";
					cin>>num1;
				}
				else
				{
					num1=temp;
					cout<<"\nFirst number is "<<num1<<endl;
				}
				cout<<"Enter second number: ";
				cin>>num2;
				num3=sci_calc::multiplication(num1,num2);
				cout<<"\nProduct of "<<num1<<" and "<<num2<<" is "<<num3;
				cout<<"\nPress any key to continue";
				getch();
				temp=num3;
				flag=old_cal;
				break;
						
			case 4:
			    if (flag==new_cal)
				{
					cout<<"Enter dividend: ";
					cin>>num1;
				}
				else
				{
					num1=temp;
					cout<<"\nDividend is "<<num1<<endl;
				}
				cout<<"Enter divisor: ";
				cin>>num2;
				num3=sci_calc::division(num1, &num2);
				cout<<"\nDivision of "<<num1<<" by "<<num2<<" is "<<num3;
				cout<<"\nPress any key to continue";
				getch();
				temp=num3;
				flag=old_cal;
				break;
			
			case 5:
			    if (flag==new_cal)
				{
					cout<<"Enter dividend: ";
					cin>>num1;
				}
				else
				{
					num1=temp;
					cout<<"\nDividend is "<<num1<<endl;
				}
				cout<<"Enter divisor: ";
				cin>>num2;
				num3=sci_calc::modulus(&num1, &num2);
				cout<<"\nModulus of "<<num1<<" by "<<num2<<" is "<<num3;
				cout<<"\nPress any key to continue";
				getch();
				temp=num3;
				flag=old_cal;
				break;
						
			case 6:
				if (flag==new_cal)
			    {
				    cout<<"Enter number to find square: ";
				    cin>>num1;
			    }
			    else
			    {
				    num1=temp;
				    cout<<"\nNumber is "<<num1<<endl;
			    }    
			    num3=sci_calc::square(num1);
			    cout<<"\nSquare of "<<num1<<" is "<<num3;
			    cout<<"\nPress any key to continue";
			    getch();
			    temp=num3;
			    flag=old_cal;
			    break;
				
			case 7:
				if (flag==new_cal)
			    {
				    cout<<"Enter number to find cube: ";
				    cin>>num1;
			    }
			    else
			    {
				    num1=temp;
				    cout<<"\nNumber is "<<num1<<endl;
			    }    
			    num3=sci_calc::cube(num1);
			    cout<<"\nCube of "<<num1<<" is "<<num3;
			    cout<<"\nPress any key to continue";
			    getch();
			    temp=num3;
			    flag=old_cal;
			    break;
							
			case 8:
			    if (flag==new_cal)
			    {
				    cout<<"Enter first number for base to find power: ";
				    cin>>num1;
			    }
			    else
			    {
				    num1=temp;
				    cout<<"\nFirst number is "<<num1<<endl;
			    }
				cout<<"Enter second number for power to find power: ";
				cin>>num2;    
			    num3=sci_calc::power(num1, num2);
			    cout<<"\n"<<num1<<" to the power "<<num2<<" is "<<num3;
			    cout<<"\nPress any key to continue";
			    getch();
			    temp=num3;
			    flag=old_cal;
			    break;
							
			case 9:
				if (flag==new_cal)
			    {
				    cout<<"Enter number to find factorial: ";
				    cin>>num1;
			    }
			    else
			    {
				    num1=temp;
				    cout<<"\nNumber to find factorial is "<<num1<<endl;
			    }    
			    num4=sci_calc::fact(num1);
			    cout<<"\nFactorial of "<<num1<<" is "<<num4;
			    cout<<"\nPress any key to continue";
			    getch();
			    temp=num4;
			    flag=old_cal;
			    break;
							    							
			case 10:
				if (flag==new_cal)
			    {
				    cout<<"Enter number to find sin value: ";
				    cin>>num1;
			    }
			    else
			    {
				    num1=temp;
				    cout<<"\nNumber for sin value is "<<num1<<endl;
			    }    
			    num3=sci_calc::sin_func(num1);
			    cout<<"\nSin value of "<<num1<<" is "<<num3;
			    cout<<"\nPress any key to continue";
			    getch();
			    temp=num3;
			    flag=old_cal;
			    break;
						       
			case 11:
				if (flag==new_cal)
			    {
				    cout<<"Enter number to find cos value: ";
				    cin>>num1;
			    }
			    else
			    {
				    num1=temp;
				    cout<<"\nNumber for cos value is "<<num1<<endl;
			    }    
			    num3=sci_calc::cos_func(num1);
			    cout<<"\nCos value of "<<num1<<" is "<<num3;
			    cout<<"\nPress any key to continue";
			    getch();
			    temp=num3;
			    flag=old_cal;
			    break;
							
			case 12:
				if (flag==new_cal)
			    {
				    cout<<"Enter number to find tan value: ";
				    cin>>num1;
			    }
			    else
			    {
				    num1=temp;
				    cout<<"\nNumber for tan value is "<<num1<<endl;
			    }    
			    num3=sci_calc::tan_func(num1);
			    cout<<"\nTan value of "<<num1<<" is "<<num3;
			    cout<<"\nPress any key to continue";
			    getch();
			    temp=num3;
			    flag=old_cal;
			    break;
						
			case 13:
				cout<<"\nQuitting";
				cout<<"\nPress any key to continue";
				getch();
				exit(0);
						
			case 14:
				// If a new calculation is going on then 14 is an invalid option, or else 14 is an option to start a new calculation.
				if(flag==new_cal)
				{
					cout<<"\nInvalid Choice";
					cout<<"\nPress any key to continue";
					getch();
				}
				else
				{
					temp=0;
					flag=new_cal;
				}
				break;
			default:
				cout<<"\nInvalid Choice";
				cout<<"\nPress any key to continue";
				getch();
				break;
    	}
    }
	while (choice!=13);
	return 0;
}
