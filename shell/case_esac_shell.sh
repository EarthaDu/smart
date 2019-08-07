#!/bin/bash 
read A
A=`expr $A \/ 10`
case $A in
		'9'|'10')
				echo "youxiu"
				;;
		'8')
				echo "haixing"
				;;
		'7')
				echo "bale"
				;;
		'6')
				echo "cha"
				;;
		*)
				echo "laji"
				;;
esac
