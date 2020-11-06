1. count code lines in current fold

```
sudo find . -name "*.py"  |xargs grep -v "^$"|wc -l
```


