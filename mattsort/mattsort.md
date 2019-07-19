# MATT SORT

Matt Sort, named after Matt Belanger, is similar to Bubble Sort in terms of O(n) but it is more complicated to follow and is very confusing to explain. lets break down why its a bad idea to use.

Here is the full code for Matt Sort.

```c
    int temp;
    for(int i = 0; i<size-1; i++){
        if(Array[i] > Array[i+1]){
            temp = Array[i + 1];
            Array[i+1] = Array[i];
            Array[i] = temp;
            i = -1;
        }
    }

```
first few lines are pretty standard for most sorting algorithms

```
    int temp;
    for(int i = 0; i<size-1; i++){
```
Around line 3 is when things start getting a bit weird. instead of having a second loop like bubble sort theres just a single loop.

```
        if(Array[i] > Array[i+1]){
            temp = Array[i + 1];
            Array[i+1] = Array[i];
            Array[i] = temp;
```

next lines are standard, its just checking if its out of order and then swaping them. then it does something weird, something **BAD**.

```
    i = -1;
```

when it does this it resets the loop to start at the beggining. instead of bubble sort we get a bubble sort that is 

1. harder to read
1. complicated to follow along
1. doesnt have the small effiencies that bubble sort has

Worst Case Time: O(n^2)

Average Case Time: O(n^2)

Best Case Time: O(n)

All Case Memory: O(1)
