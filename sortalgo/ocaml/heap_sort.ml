let sort len =
	let arr = Array.make len 0 in
	for i=0 to len-1 do
		Scanf.scanf " %d" (fun e -> Array.set arr i e)
	done;
	Array.sort compare arr
in

Scanf.scanf "%d" (fun n -> sort n)
