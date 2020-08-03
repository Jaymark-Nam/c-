
#include <iostream>
using namespace std;
int main()
{
 char name[28]
 cout << "insert name and phone number\n";
 cin.getline(name, sizeof(name));
 cout<<"Insert money"<<endl;
 int cal_tot, cal_point;  
 cin >> cal_tot;
 cal_point = cal_tot * 0.01;
 cout << "Point is" <<cal_point << "Won.\n";

}