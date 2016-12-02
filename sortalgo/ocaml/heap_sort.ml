let sort len =
	let arr = Array.make len 0 in
	for i=0 to len-1 do
		Scanf.scanf " %d" (fun e -> Array.set arr i e)
	done;
	let before = Sys.time () in
	Array.sort compare arr;
	let after = Sys.time () in
	let time = int_of_float ((after-.before)*.1000.) in
	Printf.printf "%d\n" time
in

Scanf.scanf "%d" (fun n -> sort n)
