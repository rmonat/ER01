import subprocess
import timeit
import csv
import os

conf = csv.reader(open("executables.csv"))
input_files = ["../bug.in"] #TODO
csv = open("results.csv", 'a')

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


def bench(ex, i):
    print("calling bench on %s %s" % (ex, i))
    cmd_params = [ex[-1]]
    language = ex[0]
    algo = ex[3]
    options = ex[2]
    executable_used = ex[-1]
    #input_size = i.split("-")[0]
    input_size = "haha"
    # file name : size-version.in
    t = timeit.Timer(stmt = "subprocess.call(%s, stdin=inp, stdout=devnull, stderr=devnull)" % (cmd_params), setup = "import subprocess; devnull = open('/tmp/blu', 'w'); inp = open('%s', 'r')""" % i)
    reps = 5
    exec_time = sum(t.repeat(reps, number=1)) / reps
    csv.write("%s,%s,%s,%s,%s,%s,%s,%s\n" % (machine, language, algo, options, executable_used, i, input_size, exec_time))
    

csv.write("Machine,Language,Algorithm,Options,Executable_used,Input_name,Input_size,Execution_time\n")
machine = os.uname()[1]
tmp = conf.__next__() # we don't want the header...
for ex in conf:
    for i in input_files:
        bench(ex, i)

csv.close()

