all: heap_sort merge_sort

heap_sort: heap_sort.ml
	ocamlbuild heap_sort.native

merge_sort: merge_sort.ml
	ocamlbuild merge_sort.native


.PHONY: clean

clean:
	rm -f -r _build heap_sort.native merge_sort.native
