import std.algorithm, std.stdio, std.datetime;

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
		arr.sort();
	}
}
