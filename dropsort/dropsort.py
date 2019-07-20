def dropsort(array):
    wall = array[0]
    length = len(array)
    i = 0
    #pythons for loops dont have true conditionals and so we are using a while loop to substitute
    while(i < length):
        print("wall", wall)
        print("value", array[i])
        print("array", array)
        #checking if smaller than the wall
        if(array[i] < wall):
            del array[i]
            length -=1
        else:
            #resetting the wall
            wall = array[i]
            #adding to the iterator
            i +=1


    return array

print(dropsort([1,3,2,4,3,5,4]))
