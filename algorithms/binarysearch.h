#ifndef _BINARY_SEARCH_H_
#define _BINARY_SEARCH_H_

namespace Algorithm { namespace Search {

	/// binary search
	template <typename C>
	typename C::pointer binarySearch(C& sortedList, typename C::const_reference key)
	{
#ifdef _DEBUG
		size_t times = 0;
#endif
		typename C::size_type low = 0, high = sortedList.size();
		typename C::size_type mid = 0;
		while (low <= high)
		{
			mid = (low+high)/2;
#ifdef _DEBUG
			++times;
			std::cout << times << " => low: " << low << " high: " << high
					  << " mid: " << mid << std::endl;
#endif
			typename C::reference item = sortedList[mid];
			if(item == key)
				return &item;
			else if (key > item)
				low = mid + 1;
			else
				high = mid - 1;
		}
		return NULL;
	}

}}

#endif //_BINARY_SEARCH_H_
