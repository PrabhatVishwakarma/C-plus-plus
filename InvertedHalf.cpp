#include<iostream>
using namespace std;

int main(){
    int s;
    cout<<"enter the Number Of Rowns";
    cin>>s;
    for (int i=1; i<=s; i++){
    	for (int j=s; j>=i; j--){
    		cout<<"%";
		}
    	cout<<" "<<endl;
	}
        
    return 0;
}