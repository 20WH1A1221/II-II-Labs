echo -n "Enter a year:"
read year
if [ `expr $year % 4` -eq 0 ]
then
	echo "$year_checker is a leap year"
else
	echo "$year_checker is not a leap year"
fi

