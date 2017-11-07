#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int x,y,selisih;
	cout<<"Input Bilangan x : "; cin>>x;
	cout<<"Input Bilangan y : "; cin>>y;
	
if (x>y){
		selisih=x-y;
		cout<<"Selisih nilai X dan Y yaitu "
<<selisih;
}

else if (y>x){
		selisih=y-x;
		cout<<"Selisih nilai Y dan X yaitu "
<<selisih;
}
		return 0;
}
