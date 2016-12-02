import std.algorithm, std.stdio, std.datetime;

void quicksort (int[] arr) {
	if (arr.length > 0) {
		auto p = partition(arr);
		quicksort(arr[0..p]);
		if (p+1 < arr.length)
			quicksort(arr[p+1..$]);
	}
}

ulong partition (int[] arr) {
	auto pivot = arr[$-1];
	ulong i=0;
	for (auto j=i; j<arr.length-1; ++j) {
		if (arr[j] <= pivot) {
			swap(arr[i], arr[j]);
			++i;
		}
	}
	swap(arr[i], arr[$-1]);
	return i;
}

void main () {
	int[] arr;
	ulong len;
	readf("%d", &len);
	arr.length = len;
	
	for (ulong i=0; i<len; ++i) {
		readf(" %d", &arr[i]);
	}
	{
	    auto mt = measureTime!((TickDuration a) {
		    writeln(a.msecs());
	    });
		arr.quicksort();
	}
}
