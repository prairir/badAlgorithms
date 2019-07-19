for i in range(len(array) -2):
    if(array[i] > array[i +1]):
            temp = array[i]
            array[i] = array[i+1]
            array[i+1] = temp
            i = -1

