#ifndef SL_H_
#define SL_H_

#include <list>

template <typename T>
class SortedList
{
  std::list<T> l;

  typedef typename std::list<T>::iterator list_it;

public:

  typedef typename std::list<T>::const_iterator const_iterator;

  void insert(const T& e)
  {
    list_it it = l.begin();
    for (; it != l.end(); ++it) {
      if (e < *it) break;
    }

    l.insert(it, e);
  }


  std::size_t size() const {
    return l.size();
  }

  const T& front() const {
    return l.front();
  }

  const T& back() const {
    return l.back();
  }

  void remove(const T& e) {
    l.remove(e);
  }

  const_iterator begin() const {
    return l.begin();
  }

  const_iterator end() const {
    return l.end();
  }

};

#endif //SL_H_
