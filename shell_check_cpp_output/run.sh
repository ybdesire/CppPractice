#!/bin/bash


g++ check.cpp -o check

./check < input.txt

## get status, get cpp check return value ##
status=$?


if [ $status == 0 ]
then
  echo "all even"
else
  echo "has odd"
fi