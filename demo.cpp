//PLEASE DO NOT CHANGE THE GIVEN CODE TEMPLATE. WRITE YOUR CODE IN THE PROVIDED PLACES ALONE.

#include <iostream>
using namespace std;


int main(){   //DO NOT change the 'main()' signature
    
    //Write your code here
    int n,count=0,i;
    int a[n];
    cout << "Enter the no. of income sources:";
    cin >> n;
    cout << "Enter the income from various sources:\n";
    for(i=0;i<n;i++){
        cin >> a[i];
        if(a[i]>9950){
            count++;
        }
    }
    if(count!=0){
        cout << "No. of taxable income(s):"<<count;
    }
    else{
        cout<< "Not liable to pay income tax";
    }
        
    
    return 0;
}

