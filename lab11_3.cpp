#include<iostream>

using namespace std;

int mySwap (int &a,int &b); //Pass variables by references

int main(){
	int x = 6, y = 9;
	cout << "Before swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";
	mySwap (x,y);
	cout << "After swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";
	
	return 0;
}

//Write function definition here
/*
??? mySwap (???){

}
*/
int mySwap (int &a,int &b){
	int c ;
	c=a ;
	a=b ;
	b=a ;
}