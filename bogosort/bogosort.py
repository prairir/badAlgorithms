from random import shuffle

def bogosort(array):
    sort = array
    sort.sort()
    while not (array == sort):
        shuffle(array)
    return array


