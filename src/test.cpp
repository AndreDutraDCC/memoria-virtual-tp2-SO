#include<string>
#include<iostream>

using namespace std;


int main(){
    int pagesize, ptable_size_;
    cout<<"insira: ";
    cin>>pagesize;
    cout<<pagesize<<endl;
    unsigned char nbits = 22;

    while(pagesize > 1){
        nbits-= 1;
        cout<<pagesize<<endl;
        pagesize = pagesize >> 1;
    }
    ptable_size_ = 1 << nbits;
    
    cout<<ptable_size_<<endl;
}