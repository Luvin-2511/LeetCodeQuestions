

using namespace std;
bool isValid(vector <int>&arr ,int n ,int m , int mid){
    int student=1,pages=0;
    for(int i=0;i<n;i++){
        if(pages+arr[i]<mid){
            pages+=arr[i];
        }else{
            student++;
            pages=arr[i];
        }
    }
    if(student<m){
        return true;
    }else{
        return false;
    }
}
int bookAllocated(vector <int>&arr ,int n ,int m ){
    int st=0,end=arr.size();
    int ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(isValid(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }else{
            st=mid+1;
        }
    }
    return mid;
}

