#include<iostream>
#include "Zaun.h"

using namespace std;
int main()
{
    cout<<"\t\t_________________________________________________\n\t\t|\tZAUN, THE UNDERCITY PORT TO ZION\t|";
    cout<<"\n\t\t_________________________________________________";

    char zion_addr[20];
    cout<<endl<<"-->Enter Zion Address: ";
    cin>>zion_addr;
    cout<<endl<<"<--Runners finding safe route to: "<<zion_addr<<endl;
    Zaun zaun(zion_addr,sizeof(zion_addr));

}
