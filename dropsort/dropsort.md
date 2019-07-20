# Drop Sort

Drop Sort was first theorized in 2006 by David Morgan. Since then its been implemented in many languages and in many ways, from [code golf](https://codegolf.stackexchange.com/questions/61808/lossy-sorting-implement-dropsort) to a [recursive version](http://ibiwan.com/programming/allsorts/in_python/dropsort.py). What makes dropsort unique is that it asks the question "can sorting algorithms be lossy?". The answer of course is yes.


if you want to know more head over to [the actual creators take on it.](http://www.dangermouse.net/esoteric/dropsort.html)

lets break it down. The example is in java

first we initialize the wall.

```java int wall = array.get(0);
```

it runs a loop from 0 to the size of the array.

```java
    for(int i = 0; i < array.size();){
```

we dont move the iterator value forward because it can skip over values.
        
next we check if the value is larger than the wall

```
    if(array.get(i) < wall){
```

if it is smaller than the wall we just throw it out.

```
    array.remove(i);
    }
```

if it is larger than the wall then we change the wall and add one to the iterator.

```
    else{
        wall = array.get(i);
        i++;
    }
```

Best case time: O(n)

Average case time: O(n)

Worst case time: O(n)

All case space: O(n)

    
