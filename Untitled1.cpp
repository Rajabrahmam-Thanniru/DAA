#include <iostream>
using namespace std;
int main() 
{
    int i,n=0;   
    
    cout<<"Enter the number of eggs"<<endl;
    cin>>n;
    int idealCount = 0, nonIdealCount = 0, faultyCount = 0;
    double weight[n];
    cout<<"Enter the weight of the eggs(in grams)"<<endl;
    for (i=0;i<n;i++)
    {
        cin>>weight;
       //Fill the code here
           if(weight >= 50 && weight<= 70){
               idealCount++;
           }
               else if(weight[>70){
                   nonIdealCount++;
               }
               else if(weight[i] < 50){
                   faultyCount++;
                   if(faultyCount>4)
                      cout<<"The box contains more than four faulty eggs"<<endl;
                      return 0;
               }
           }
       
    cout << "Count of eggs with ideal weight=" << idealCount << endl;
    cout << "Count of eggs with non-ideal weight=" << nonIdealCount << endl;
    cout << "Count of eggs with faulty weight=" << faultyCount << endl;
       
    return 0;
}

