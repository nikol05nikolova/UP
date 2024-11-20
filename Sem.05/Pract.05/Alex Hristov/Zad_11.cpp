#include <iostream>
using namespace std;

const int n = 1000;

void UnionOfАscendingElement (int arr1[],int arr2[], int result[], int n, int m) {
    //sort arr1
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n-1;j++){
            if(arr1[j]>arr1[j+1]){
                int temp = arr1[j];
                arr1[j] = arr1[j+1];
                arr1[j+1] = temp;
                
            }
        }
    }
    
    //sort arr2
    for(int i = 0;i<m;i++){
        for(int j = 0;j<m-1;j++){
            if(arr2[j]>arr1[j+1]){
                int temp = arr2[j];
                arr2[j] = arr2[j+1];
                arr2[j+1] = temp;
                
            }
        }
    }
   
    
    int indexResult = 0;
    for(int i = 0;i<n;i++){
        result[indexResult] = arr1[i];
        indexResult++;
    }
    
    for(int i = 0;i<m;i++){
        bool isContain = false;
        for(int j = 0;j<n;j++){
            if(arr2[i] == arr1[j]){
                isContain = true;
                break;
            }    
            
        }
        if(isContain == false){
            result[indexResult] = arr2[i];
            indexResult++; 
        }
        
    }

    
    //sort result
    for(int i = 0;i<indexResult-1;i++){
        for(int j = 0;j<indexResult-1;j++){
            if(result[j]>result[j+1]){
                int temp = result[j];
                result[j] = result[j+1];
                result[j+1] = temp;
                
            }
        }
    }
    
    for(int i = 0; i< indexResult;i++){
        cout<<" "<<result[i];
    }
}

int main()
{
	int n,m;
	
	cout << "Enter length of arr1:";
	cin >> n;
	int arr1[n];
	if(n<0 && n>1000 ){
        cout << "Enter length of array to be between 0 and 1000";    
    }
	for (int i = 0; i < n; i++) {
	    cout<<"Enter element for first array:";
		cin >> arr1[i];
	}
	
	cout << "Enter length of arr2:";
	cin >> m;
	int arr2[m];
	int result[n+m];
	if(m<0 && m>1000 ){
        cout << "Enter length of arrays to be between 0 and 1000";    
    }
	for (int i = 0; i < m; i++) {
	    cout<<"Enter element for second array:";
		cin >> arr2[i];
	}


	UnionOfАscendingElement (arr1,arr2,result,n,m);
    
    
    return 0;

}
