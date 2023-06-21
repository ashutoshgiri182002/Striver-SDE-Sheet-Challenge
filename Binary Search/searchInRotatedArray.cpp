
int binarySearch(int* arr, int n, int key, int start, int end){

    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }

    return -1;
}

int search(int* arr, int n, int key) {
    // Write your code here. 
    
    //first we will find the index of minimum element
    int start = 0;
    int end = n-1;


    while(start<=end){

        if(arr[start]<=arr[end]){
           break;
        }

        int mid = start + (end-start)/2;

        int next = (mid+1)%n;
        int prev = (mid-1+n)%n;

        if(arr[next]>=arr[mid] and arr[prev]>=arr[mid]){
            start = mid;
            break;
        }

        if(arr[mid]>=arr[start]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }

    //Now we will apply binary search both part since both part are seperate before start and after start 

    return max(binarySearch(arr,n,key,0,start-1) , binarySearch(arr, n, key, start, n-1));

}
