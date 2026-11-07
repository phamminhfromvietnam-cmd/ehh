#include <iostream>
using namespace std;
const int INF=1000000000;
int ways_prb[100][100];
int ways_problem(int a, int b){
	if(a==0&&b==0) return 2;
	if(ways_prb[a][b]) return ways_prb[a][b];
	if(b<0 || a<b) ways_prb[a][b]= 1;
	else ways_prb[a][b]= ways_problem(a-1,b-1)+ways_problem(a-1,b+1)-1;
	return ways_prb[a][b];
}
int main(){
	while(true){
	int x,y;
	cin>>x>>y;
	cout<<ways_problem(x,y)-1;
	}
}
