#!/bin/bash 
counter=1
sum=0
while [ $counter -le 100 ]
do
		sum=$((sum + counter))
		counter=$((counter + 1))
done
echo "Finished"
echo "sum= $sum"
