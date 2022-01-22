#ifndef __ALGORITHMS__
#define __ALGORITHMS__
#include <algorithm>

namespace searching {
	template<typename dataType>
	int binarySearch(std::vector<dataType>& list, const dataType target) {
		
		if (list.empty()) {
			std::cout << "\tList is empty!" << std::endl;
			return -1;
		}
		int left{ 0 };
		int right = list.size() - 1;
		while (left <= right) {
			int mid = (left + right) / 2;
			if (list[mid] == target)
				return mid;
			if (list[mid] < target)
				left = mid + 1;
			if (list[mid] > target)
				right = mid - 1;
		}
		return -1;
	}
}


#endif
