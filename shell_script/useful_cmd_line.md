1. count code lines in current fold

```
sudo find . -name "*.py"  |xargs grep -v "^$"|wc -l
```

2. test disk speed

```
sudo apt-get install hdparm
sudo fdisk -l
sudo hdparm -Tt /dev/sda
```
