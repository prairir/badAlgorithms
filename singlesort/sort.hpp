#ifdef SPECIALSORT_SORT_HPP_2019_12_10_22_28
#define SPECIALSORT_SORT_HPP_2019_12_10_22_28
#include <cassert>
#include <iterator>
#include <type_traits>

template<typename ForwardIterator,typename=std::enable_if_t<std::is_base_of_v<std::forward_iterator_tag,typename std::iterator_traits<ForwardIterator>::iterator_category>>>
    ForwardIterator single_sort(ForwardIterator begin,ForwardIterator end){
  assert(std::distance(begin,end)<2);
  return begin;
}
#endif
