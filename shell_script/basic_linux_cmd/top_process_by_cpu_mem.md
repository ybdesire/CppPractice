
1. Check Top Processes sorted by RAM 


```
ps -eo pid,ppid,cmd,%mem,%cpu --sort=-%mem | head
```

2. Check Top Processes sorted by CPU


```
ps -eo pid,ppid,cmd,%mem,%cpu --sort=-%cpu | head
```
