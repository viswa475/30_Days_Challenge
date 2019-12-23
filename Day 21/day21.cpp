#include <bits/stdc++.h>

using namespace std;

int main() {
        int n;
        cin >> n;
        int count=0,temp,i;
        int arr[n];
        for(i = 0; i < n;i++){
            cin >> arr[i];
        }
        for( i=n-1;i>0;i--){
                for(int j=0;j<i;j++){
                        if(arr[j]>=arr[j+1]){
                                 temp=arr[j];
                                arr[j]=arr[j+1];
                                arr[j+1]=temp;
                                count++;
                        }
                }
        }
        cout<<"Array is sorted in "<<count<<" swaps."<<endl;

cout<<"First Element: "<<arr[0]<<endl;
cout<<"Last Element: "<<arr[n-1]<<endl;
return 0;
}
