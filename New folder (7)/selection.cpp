#include <iostream>
using namespace std;
void selection(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int min1 = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min1]){
                min1=j;
            }


        }
        swap(arr[i],arr[min1]);
        

    }


}

int main(){
    int n = 5;
    int arr[]={4, 1, 5, 2, 3};
    selection( arr,n);
     for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
 }

    return 0;

}
