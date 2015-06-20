#include<iostream>
#include<iomanip>
#include <math.h> 

using namespace std;
//calculates the tip and total based on the price
float Totalcost(float tip, float Price)
{
   float Tip = tip * Price;
   float Total = Tip + Price;
   cout<<"Your tip is: $"<<Tip<<endl;//display tip
   return Total;
}


int main()
{

float x = 0;//initializes x vairable
float tip = 0.15;//standard tip amount

cout<<"what is the price of the meal: ";
cin>>x; // inserts the price of the meal manually
float Price = x; // sets price equal to the vairable
cout<<"The total Cost is: $"<<Totalcost(tip,Price)<<endl; //calls function




system("pause");
return(0);	
}
