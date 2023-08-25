#include <iostream>
#include <vector>
#include"Bike.h"
#include"Bike_yard.h"

int main() {
    Bike_yard test(3);
    
    Bike a("An",2004);
    Bike b("Bn",2003);
    Bike c("Cn",2002);
    if (test.add_Stock(a))
    {
        cout<<"can add bike a into yard"<<endl;
    }
    if (test.add_Stock(b))
    {
        cout<<"can add bike b into yard"<<endl;
    }
    if (test.add_Stock(c))
    {
        cout<<"can add bike c into yard"<<endl;
    }
    
    cout<<test.get_Stock_Quantity(2004) << endl;
    cout<<test.get_Total_Stock_Count() << endl;
    Bike * ans = test.get_Current_Stock_List();
    for (int i = 0; i < test.get_Total_Stock_Count(); i++)
    {
        cout<<ans[i].getBrand() << " " << ans[i].getCode() << endl;
    }
     

    return 0;
}