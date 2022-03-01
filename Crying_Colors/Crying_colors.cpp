#include <iostream>
using namespace std;

int cal(int N,int R1,int R2,int R3,int G1,int G2,int G3,int B1,int B2,int B3,int cnt){
    if(R1!=N && G2!=N && R2>0 && G1>0){
        R2=R2-1;
        G1=G1-1;
        G2=G2+1;
        R1=R1+1;
        cnt+=1;
    }
	if(G3>0 && B2>0 && G2!=N && B3!=N){
        G3=G3-1;
        B2=B2-1;
        B3=B3+1;
        G2=G2+1;
        cnt+=1;
    }
    if(B1>0 && R3>0 && B3!=N && R1!=N){
        R3=R3-1;
        B1=B1-1;
        B3=B3+1;
        R1=R1+1;
        cnt+=1;
    }
    if(R1!=N || G2!=N || B3!=N){
        return cal(N,R1,R2,R3,G1,G2,G3,B1,B2,B3,cnt);
    }
    else{
        return cnt;
    }
}

int main() {
	// your code goes here
	int T;
	int N,R1,R2,R3,G1,G2,G3,B1,B2,B3;
	cin>>T;
	for(int i=0;i<T;i++){
	    cin>>N;
	    cin>>R1>>G1>>B1;
	    cin>>R2>>G2>>B2;
	    cin>>R3>>G3>>B3;
	    int cnt=0;
	    cnt= cal(N,R1,R2,R3,G1,G2,G3,B1,B2,B3,cnt);
	    cout<<cnt<<"\n";
	}
	return 0;
}
