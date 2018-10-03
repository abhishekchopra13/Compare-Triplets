#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c=0;
    int d=0;
    int n,i;
   
    int a[3];
    int b[3];
    for(i=0;i<3;i++){
        cin >> a[i] ;
    }
 
    for(i=0;i<3;i++){
        cin >> b[i] ;
    }
    for (i=0;i<3;i++){
        if(a[i]>b[i]){
            c = c + 1;
            d = d + 0;
        }else if(b[i]>a[i]){
            d = d + 1;
            c = c + 0;
        }else{
                c = c+0;
                d = d+0;
            }}
        cout << c << " ";
        cout << d;
        
    
    return 0;
}
