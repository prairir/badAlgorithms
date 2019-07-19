void SortArray(int Array[], unsigned int size){
    int temp;
    for(int i = 0; i<size-1; i++){
        if(Array[i] > Array[i+1]){
            temp = Array[i + 1];
            Array[i+1] = Array[i];
            Array[i] = temp;
            i = -1;
        }
    }
}
