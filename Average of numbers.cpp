#include<iostream>
using namespace std;
int main()
{
    int i, p;
    float avg = 0, y;      

    cout << "enter the numbers to calculate average:: \n";
    cin >> p;
    
    cout << "enter " << p << " elements one by one \n";
    for(i=0; i<p;i++) 
	{
        cin >> y;
        avg += y;
    }
    avg /= p;
    cout << "\n The average is = " << avg;
    
    return 0;
}
