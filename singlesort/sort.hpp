#ifdef SPECIALSORT_SORT_HPP_2019_12_10_22_28
#define SPECIALSORT_SORT_HPP_2019_12_10_22_28
#include <cassert>
#include <iterator>
#include <type_traits>

/*
* Sorts [begin,end) according to std::less
* Expects: [begin,end) contains at most 1 element.
*/
template<typename ForwardIterator,typename=std::enable_if_t<std::is_base_of_v<std::forward_iterator_tag,typename std::iterator_traits<ForwardIterator>::iterator_category>>>
    constexpr ForwardIterator single_sort(ForwardIterator begin,ForwardIterator end) noexcept(noexcept(*begin < *begin)){
  assert(std::distance(begin,end)<2);
  return begin;
}

/*
* Sorts [begin,end) according to a given predicate function.
* Expects: [begin,end) contains at most 1 element, and Predicate shall be a comparator function that establishes total order of elements of the range.
*/
template<typename ForwardIterator,typename Predicate,typename=std::enable_if_t<std::is_base_of_v<std::forward_iterator_tag,typename std::iterator_traits<ForwardIterator>::iterator_category>>>
    constexpr ForwardIterator single_sort(ForwardIterator begin,ForwardIterator end,Predicate&& pred) noexcept(noexcept(pred(*begin,*begin)){
  assert(std::distance(begin,end)<2);
  return begin;
}

#endif
