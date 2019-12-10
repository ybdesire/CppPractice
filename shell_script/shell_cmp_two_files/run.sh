#!/bin/bash


if cmp -s "o1.txt" "o2.txt"
then
  echo "same values"
else
  echo "not same values"
fi