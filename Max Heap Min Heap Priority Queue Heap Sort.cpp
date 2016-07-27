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



// Max Heap Min Heap implementation

void max_heapify (int Arr[], int i, int N){
    int largest;
    int left = 2*i;                   //left child
    int right = 2*i +1;           //right child
    if(left<= N and Arr[left] > Arr[i] )
        largest = left;
    else
        largest = i;
    if(right <= N and Arr[right] > Arr[largest] )
        largest = right;
    if(largest != i ){
        swap (Arr[i] , Arr[largest]);
        max_heapify (Arr, largest,N);
    }
}
void min_heapify (int Arr[ ] , int i, int N){
    int left  = 2*i;
    int right = 2*i+1;
    int smallest;
    if(left <= N and Arr[left] < Arr[ i ] )
         smallest = left;
    else
        smallest = i;
    if(right <= N and Arr[right] < Arr[smallest] )
        smallest = right;
    if(smallest != i){
        swap (Arr[ i ], Arr[ smallest ]);
        min_heapify (Arr, smallest,N);
    }
}
void build_maxheap (int Arr[],int N){
    for(int i = N/2 ; i >= 1 ; i-- ){
        max_heapify (Arr, i,N) ;
    }
}


// Heap Sort Implementation
void heap_sort(int Ar[ ]int N){
    int heap_size = N;
    build_maxheap(Arr);
    for(int i = N; i>=2 ; i-- ){
        swap(Arr[ 1 ], Arr[ i ]);
        heap_size = heap_size-1;
        max_heapify(Arr, 1, heap_size);
    }
}




//Priority Queue Implementation
// Global Variable length required
int maximum(int Arr[ ]){
        return Arr[ 1 ];  //as the maximum element is the root element in the max heap.
    }
int extract_maximum (int Arr[ ])// Requires length
{
    if(length == 0){
        return -1;
    }
    int max = Arr[1];
    Arr[1] = Arr[length];
    length = length -1;
    max_heapify(Arr, 1,length);
    return max;
}
void increase_value (int Arr[ ], int i, int val)
{
    if(val < Arr[ i ]){
        return;
    }
    Arr[ i ] = val;
    while( i > 1 and Arr[ i/2 ] < Arr[ i ]){
        swap(Arr[ i/2 ], Arr[ i ]);
        i = i/2;
    }
}
void insert_value (int Arr[ ], int val)//Requires length
{
    length = length + 1;
    Arr[ length ] = -1;  //assuming all the numbers greater than 0 are to be inserted in queue.
    increase_value(Arr, length, val);
}

// For Priority Queue with Minheap
/*
int minimum(int Arr[ ]){
        return Arr[ 1 ];  //as the maximum element is the root element in the max heap.
    }
int extract_minimum (int Arr[ ])// Requires length
{
    if(length == 0){
        return -1;
    }
    int max = Arr[1];
    Arr[1] = Arr[length];
    length = length -1;
    min_heapify(Arr, 1,length);
    return max;
}
void decrease_value (int Arr[ ], int i, int val)
{
    if(val < Arr[ i ]){
        return;
    }
    Arr[ i ] = val;
    while( i > 1 and Arr[ i/2 ] > Arr[ i ]){
        swap(Arr[ i/2 ], Arr[ i ]);
        i = i/2;
    }
}
void insert_value (int Arr[ ], int val)//Requires length
{
    length = length + 1;
    Arr[ length ] = -1;  //assuming all the numbers greater than 0 are to be inserted in queue.
    decrease_value(Arr, length, val);
}
*/


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