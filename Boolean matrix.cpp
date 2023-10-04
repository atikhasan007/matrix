#include<bits/stdc++.h>
using namespace std;
int main(){

int n,m;
cin>>n>>m;
vector<vector<int>>arr(n,vector<int>(m,0));

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
}



int row = arr.size();
int col = arr[0].size();


bool arr_row[row];
bool arr_col[col];
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        if(arr[i][j]){
            arr_row[i] = true;
            arr_col[j] = true;
        }
    }
}



for(int i=0;i<row;i++){
    if(arr_row[i]){
        for(int j=0;j<col;j++){
            arr[i][j] = 1;
        }
    }
}


for(int i=0;i<col;i++){
    if(arr_col[i]){
        for(int j=0;j<row;j++){
            arr[i][j] = 1;
        }
    }
}



for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}


}
