#include <iostream>
long long prefix[100000];
long long arr[100000];
using namespace std;
int main(){
	int buf, count;
	cin>>count;
	for(int i=1; i<=count; i++){
		cin>>buf;
		prefix[i]=prefix[i-1]+buf;
	}
	int a,b;
	while(true){
		cin>>a>>b;
		cout<<prefix[a]-prefix[b-1]<<"\n";
	}
}
