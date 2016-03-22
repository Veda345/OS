#!/bin/bash
for i in $(find $1 -type l -mtime +7)
do
	 echo $i;
done
