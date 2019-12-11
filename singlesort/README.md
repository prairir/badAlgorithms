# Single Sort
Author: Connor Horman
An O(1) Sorting algorithm that doesn't really sort anything. 
The algorithm is well defined for all lists of 0 or 1 elements.
Otherwise the behavior of the algorithm is undefined. 

## How it works

The algorithm works by doing nothing. 
Since the algorithm is solely defined for lists of 0 or 1 elements,
 the algorithm can safely assume that the list is already sorted,
 and therefore can elide any actual work that may need to be done. 
 This therefore is the most efficient sorting algorithm that exists, with a limitation of course. 
 
 The limitation is not necessarily a bad thing, sorts like Radix Sort only work when the list consists of integers. (Though theoretically could be extended to strings).
 Having such a powerful algorithm available in special cases is useful for those special cases. 
