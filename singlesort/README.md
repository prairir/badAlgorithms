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

## Proof of correctness

Let L be some list with 0 or 1 elements.

### The problem
`∀ L ∃ P(L), ∀0<=i,j<size(L), i<j -> P(L)[i]<=P(L)[j]`
Where P(L) is some permutation of L. 

Or put less formally, for all lists of orderable elements, you can sort the list in ascending order.  
A sorting algorithm finds a P(L) given a particular L.

### Proof

Proof by cases:

Case size(L)==0: 
L is empty, so P(L) must also be empty. Given this as well, size(L) is 0, so we have 0<=i,j<0, or i,j∈{}. All elements of the empty set satisfy any predicate, including contradictions, so therefore, the inner-most for-all is true, reguardless of P(L), so therefore, P(L)=L is a permutation of L that satisfies the sorting problem. 

Case size(L)==1:

Given 0<=i,j<1, i and j must both be the value 0. The inner-most for-all then becomes true, because we have `i < j -> P(L)[i]<P(L)[j]`. since  `i == j`, `i<j` is false. `F->p` is true. Therfore, P(L)=L is a permutation of L that satisfies the sorting problem.

single_sort(L) leaves L untouched, but given the above proof, L is already sorted, because it is a permutation of itself that satisfies the sorting problem. 
