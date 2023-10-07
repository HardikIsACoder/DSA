#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    
    cout<<"Grade points corresponding to the grades are as follows:"<<endl;
    cout<<"A++ = 10.0"<<endl<<"A+ = 9.0"<<endl<<"A = 8.5"<<endl;
    cout<<"B+ = 8.0"<<endl<<"B = 7.5"<<endl<<"C+ = 7.0"<<endl;
    cout<<"C = 6.5"<<endl<<"D+ = 6.0"<<endl<<"D = 5.5"<<endl<<"E+ = 5.0"<<endl<<"E = 4.0"<<endl;
    cout<<"F = 0"<<endl;
    cout<<"Enter your grade points for 11 subjects sequentially as per the result";
    cout<<" such that first is of HV or Communication Skills and last is of SDC.\n";
    float gp[11];
    for(int i=0;i<11;i++){
        cin>>gp[i];
    }
    float credits[11] = {2, 1, 4, 4, 1, 2, 2, 1.5, 1, 1.5, 0.5};
    float cixi=0;
    float ci=0;
    for(int i=0;i<11;i++){
        cixi += (gp[i]*credits[i]);
        ci += credits[i];
    }
    float sgpa = cixi/ci;

    cout<<setprecision(2)<<"Your SGPA is : "<<sgpa;
}
