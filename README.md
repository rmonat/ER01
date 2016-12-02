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
cp results_$(hostname).csv ../results/
cp results_$(hostname)_internal.csv ../results/

Now you can play with R!