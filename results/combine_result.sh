rm global_resuls.csv
rm global_internal_results.csv

FILES=$(ls | grep result | grep csv | grep -v internal)

head -n 1 result_XPSR.csv >> global_results.csv
for i in $FILES; do
    echo $i
    tail -n +2 $i >> global_results.csv
done


FILES=$(ls | grep result | grep csv | grep internal)

head -n 1 results_internal_XPSR.csv >> global_internal_results.csv
for i in $FILES; do
    echo "internal" $i
    tail -n +2 $i >> global_internal_results.csv
done
