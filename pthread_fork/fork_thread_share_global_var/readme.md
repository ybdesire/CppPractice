# can multi process & thread share same global var?


## env

* ubuntu
* gcc

## steps


* compile and run

```
CppPractice/pthread_fork/fork_thread_share_global_var# gcc main.c -o main -lpthread
CppPractice/pthread_fork/fork_thread_share_global_var# ./main
CHILD: value = 5PARENT: value = 0(envtf) 
CppPractice/pthread_fork/fork_thread_share_global_var#
```

# result

* only multi thread can share same global var
* forked process cannot share same global var

