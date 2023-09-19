get average file size at specifit directory

```
find /data/aaa/bbb/ccc/ -ls | awk '{sum += $7; n++;} END {print sum/n;}'
```
