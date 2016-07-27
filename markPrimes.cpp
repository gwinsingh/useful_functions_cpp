#include <iostream>
#include <stdio.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <queue>
#include <stack>
#include <iostream>
#include <algorithm>
#define ll long long

using namespace std;

ll mod=1000000007;

void markPrimes(){
    for(int i=1001;i<=9999;i+=2){
        bool p=true;
        for(int j=3;j<=sqrt(i);j+=2){
            if(i%j == 0){
                p=false;break;
            }
        }
        isPrime[i]=p;
    }
}







// Disjoint-Set Implementation functions
int rootDS(int Arr[ ],int i)
{
    while(Arr[ i ] != i)           //chase parent of current element until it reaches root.
    {
     i = Arr[ i ];
    }
    return i;
}

void unionDS(int Arr[],int Size[],int A,int B)
{
    int root_A = rootDS(Arr,A);
    int root_B = rootDS(Arr,B);
    if(Size[root_A] < Size[root_B ]){
		Arr[ root_A ] = Arr[root_B];
		Size[root_B] += Size[root_A];}
    else{
		Arr[ root_B ] = Arr[root_A];
		Size[root_A] += Size[root_B];}
}
bool findDS(int Arr[],int A,int B)
{
    if( rootDS(Arr,A)==rootDS(Arr,B) )       //if A and B have same root,means they are connected.
    return true;
    else
    return false;
}
void initializeDS( int Arr[],int Size[], int N)
{
    for(int i = 0;i<=N;i++){
        Arr[ i ] = i ;
        Size[ i ] = 1;
    }
}









int main()
{
	int T;
	scanf("%d",&T);
	while(T--){
        int a,b;
        scanf("%d%d",&a,&b);
        
	}
    return 0;
}