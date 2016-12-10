#include <iostream>
using namespace std;
class pr{
public:
int a,b,r;
int getS(){
	return a*b;
}
int getP(){
return 2*(a+b);
}
int getSs(){
	return 3.14*r*r;
}
int getPe(){
return 2*3.14*r;
}
};
void main()
{
pr p;
p.a=5;
p.b=8;
p.r=8;
cout<<p.getS();
cout<<" ";
cout<<p.getP();
cout<<"\n";
cout<<p.getSs();
cout<<"  ";
cout<<p.getPe();
cout<<"\n";
system("pause");
}