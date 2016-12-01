import std.algorithm, std.stdio;

void main () {
	int[] arr;
	ulong len;
	readf("%d", &len);
	arr.length = len;
	
	for (ulong i=0; i<len; ++i) {
		readf(" %d", &arr[i]);
	}
	
	arr.sort();
}
