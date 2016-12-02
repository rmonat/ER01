# ER01

Take a look at journal.org

Or:
make
cd generation
./run_generation.sh
cd ../sortalgo
python3 bench.py
python3 bench_internal.py
./getenv.sh
cp conf_$(hostname).txt ../results/
cp results.csv ../results/results_$(hostname).txt
cp results_internal.csv ../results/results_internal_$(hostname).txt

Now you can play with R!