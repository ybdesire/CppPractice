# How to run the code

* `gcc shm_server.c -o server`
* `gcc shm_client.c -o client`
* run server at cmd-1 `./server`
   * then server will write 'a-z' to shared mem
   * and wait until other process changes the first character of shared mem to '*'
* run clinet at cmd-2 `./client`
   * then client read shared mem content 'a-z' and print to cmd-2
   * after that, server exit

   
# reference

* https://users.cs.cf.ac.uk/Dave.Marshall/C/node27.html


   