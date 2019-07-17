void SortArray(int A[], unsigned int size){
    int temp;
    for(int i = 0; i<size-1; i++){
        if(A[i] > A[i+1]){
            temp = A[i + 1];
            A[i+1] = A[i];
            A[i] = temp;
            i = -1;
        }
    }
}
