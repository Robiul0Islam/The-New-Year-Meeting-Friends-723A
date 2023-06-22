/*
There are three friend living on the straight line Ox in Lineland. The first friend lives at the point x1, the second friend lives at the point x2, and the third friend lives at the point x3. They plan to celebrate the New Year together, so they need to meet at one point. What is the minimum total distance they have to travel in order to meet at some point and celebrate the New Year?

It's guaranteed that the optimal answer is always integer.

Input
The first line of the input contains three distinct integers x1, x2 and x3 (1 ≤ x1, x2, x3 ≤ 100) — the coordinates of the houses of the first, the second and the third friends respectively.

Output
Print one integer — the minimum total distance the friends need to travel in order to meet together.

input:
7 1 4
output:
6
*/

#include<iostream>
using namespace std;
int main(){
    int a[3];
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    
    for(int i=0;i<3;i++){
            if(a[i]<a[0]){
                int temp=a[i];
                a[i]=a[0];
                a[0]=temp;
            }
            if(a[i]>a[2]){
                int temp=a[i];
                a[i]=a[2];
                a[2]=temp;
            }
    }
    int ans=(a[1]-a[0])+(a[2]-a[1]);
    cout<<ans<<endl;
}