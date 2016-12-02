FILES=$(ls | grep result | grep csv)

head -n 1 result_XPSR.csv >> global_results.csv

for i in $FILES; do
    tail -n +2 $i >> global_results.csv
done
