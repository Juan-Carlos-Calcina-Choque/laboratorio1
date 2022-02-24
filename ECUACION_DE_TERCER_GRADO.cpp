// programa para resolver una ecuacion de tercer grado
//Univ. Calcina Choque Juan Carlos
#include<iostream>
#include<math.h>

using namespace std;
int main()
{
    float a,b,c,d;
    float x,x1,x2,x3,p,q,D,u,v,s,t,theta,pi;
    pi=3.141592654;
    cout<<"La forma de la ecuacion de tercer grado es: Ax^3+Bx^2+Cx+D=0"<<endl;
    cout<<"Introducir el valor de a= ";
    cin>>a;
    cout<<"Introducir el valor de b= ";
    cin>>b;
    cout<<"Introducir el valor de c= ";
    cin>>c;
    cout<<"Introducir el valor de d= ";
    cin>>d;
    p=(3*a*c-b*b)/(3*a*a);
    q=(2*b*b*b-9*a*b*c+27*a*a*d)/(27*a*a*a);
    D=q*q+(4*p*p*p/27);
    cout<<"p= "<<p<<endl;
    cout<<"q= "<<q<<endl;
    cout<<"D= "<<D<<endl;
    cout<<"LAS RAICES DE LA ECUACION SON:"<<endl;
    if(D!=0)
    {
    	if(D>0)
    	{
    		u=cbrt((-q+sqrt(D))/2);
            v=cbrt((-q-sqrt(D))/2);
    		s=-(u+v)/2-b/(3*a);
    		t=(sqrt(3)/2)*(u-v);
    		x1=(u+v)-b/(3*a);
    		cout<<"x1= "<<x1<<endl;
    		cout<<"x2= "<<s<<"+"<<t<<"j"<<endl;
    		cout<<"x3= "<<s<<"-"<<t<<"j"<<endl;
		}
		else
		{
			// En C++ siempre trabaja en radianes
			theta=acos(((3*q)/(2*p))*sqrt(-3/p));
			x1=2*sqrt(-p/3)*cos(theta/3)-b/(3*a);
			x2=2*sqrt(-p/3)*cos((theta+2*pi)/3)-b/(3*a);
			x3=2*sqrt(-p/3)*cos((theta+4*pi)/3)-b/(3*a);
			cout<<"x1= "<<x1<<endl;
			cout<<"x2= "<<x2<<endl;
			cout<<"x3= "<<x3<<endl;
		}
    }
    else
    {
        x1=2*cbrt(-q/2)-b/(3*a);
        x2=-cbrt(-q/2)-b/(3*a);
        x3=-cbrt(-q/2)-b/(3*a);
    }

    return 0;
}
