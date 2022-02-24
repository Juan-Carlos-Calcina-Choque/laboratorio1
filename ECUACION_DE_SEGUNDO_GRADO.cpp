// Univ. Calcina Choque Juan Carlos
// Programa para la solucion de ecuaciones de Segundo Grado

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c;
    float x,x1,x2,Dis,v,w;
    cout<<"La forma de la ecuacion de segundo grado es: ax^2+bx+c=0"<<endl;
    cout<<"Introducir el valor de a= ";
    cin>>a;
    cout<<"\nIntroducir el valor de b= ";
    cin>>b;
    cout<<"\nIntroducir el valor de c= ";
    cin>>c;
    Dis=b*b-4*a*c; // valor de discriminante de la función
    cout<< "\nEl Discriminate es: " <<Dis<<endl;
    // falta grafica de la funcion
    if (a!=0)
    {
      if(Dis>=0) // solucion de valores reales 
      {
          x1=(-b+sqrt(Dis))/(2*a);
          x2=(-b-sqrt(Dis))/(2*a);
          cout<<"\nLa raices de la ecuacion es:\n";
          cout<<"\nx1= "<<x1<<endl;
          cout<<"\nx2= "<<x2<<endl;
      }
      else
      {
           // solucion de valores imaginarios         
          if(a>0)
          {
             v=-b/(2*a);
             w=sqrt(-Dis)/(2*a);
             cout<<"La raices de la ecuacion es:\n";
             cout<<"x1= "<<v<<"+"<<w<<"j"<<endl;
             cout<<"x2= "<<v<<"-"<<w<<"j"<<endl;
          }
          else
          {
             v=-b/(2*a);
             w=-sqrt(-Dis)/(2*a);
             cout<<"La raices de la ecuacion es:\n";
             cout<<"x1= "<<v<<"+"<<w<<"j"<<endl;
             cout<<"x2= "<<v<<"-"<<w<<"j"<<endl;

          }
      }  
    }
    else
    {
        x=-c/b; // solucion si a=0
        cout<<"La raices de la ecuacion es:\n";
        cout<<"x= "<<x<<endl;
    }
    return 0;
}