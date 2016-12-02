import subprocess
import timeit
import csv
import os
import random

conf = csv.reader(open("executables.csv"))
input_files = ['10-1.in', '10-2.in', '10-3.in', '10-4.in', '10-5.in', '100-1.in', '100-2.in', '100-3.in', '100-4.in', '100-5.in', '1000-1.in', '1000-2.in', '1000-3.in', '1000-4.in', '1000-5.in', '10000-1.in', '10000-2.in', '10000-3.in', '10000-4.in', '10000-5.in', '100000-1.in', '100000-2.in', '100000-3.in', '100000-4.in', '100000-5.in', '1000000-1.in', '1000000-2.in', '1000000-3.in', '1000000-4.in', '1000000-5.in', '10000000-1.in', '10000000-2.in', '10000000-3.in', '10000000-4.in', '10000000-5.in']#, '100000000-1.in', '100000000-2.in', '100000000-3.in', '100000000-4.in', '100000000-5.in']
csv = open("results_internal.csv", 'a')


def bench(ex, i):
    print("calling bench on %s %s" % (ex, i))
    cmd_params = [ex[-1]]
    language = ex[0]
    algo = ex[3]
    options = ex[2]
    executable_used = ex[-1]
    input_size = i.split("/")[-1].split("-")[0]
    # file name : size-version.in
    t =0
    devnull = open('/tmp/blu', 'w')
    inp = open(i, 'r')
    
    reps = 1 # no repetition yet
    for rep in range(reps):
        res = subprocess.check_output(cmd_params, stdin=inp, stderr=devnull)
        t += int(res.decode('utf-8'))
        
    exec_time = t / reps
    
    csv.write("%s,%s,%s,%s,%s,%s,%s,%s\n" % (machine, language, algo, options, executable_used, i.split("/")[-1], input_size, exec_time))
    csv.flush()


csv.write("Machine,Language,Algorithm,Options,Executable_used,Input_name,Input_size,Execution_time\n")
machine = os.uname()[1]
tmp = conf.__next__() # we don't want the header...
todo = [(c, i) for c in conf for i in input_files]
random.shuffle(todo)
for (ex, i) in todo:
    bench(ex, "../generation/generated/" + i)
        
        
csv.close()




# def build_cpp(ex):
#     subprocess.call([ex[1], ex[4], "-"+ex[2], "-o " + ex[5]])

# def build_d(ex):
#     pass
#     # TODO

# def build_ocaml(ex):
#     subprocess.call([ex[1], ex[5]])

# def build_python(ex):
#     pass

# for ex in conf[1:]:
#     if(ex[0] == 'CPP'):
#         build_cpp(ex)
#     else if(ex[0] == 'D'):
#         build_d(ex)
#     else if(ex[0] == 'OCaml'):
#         build_ocaml(ex)
#     else:
#         build_python(ex)

    
#     subprocess.call(["/usr/bin/time", "-f %e", "./stl_sortO1"], stdin=open("../../generation/106.in"), stdout=open("/dev/null"))
# we suppose that the builds are already done.
