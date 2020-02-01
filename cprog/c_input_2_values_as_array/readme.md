# input 2 values


## description

1. method-1

input

```
1,2 3,4 5,6
```

result

x = 1,3,5
y = 2,4,6

2. method-2

input

```
1,2
3,4
5,6
```

result

x = 1,3,5
y = 2,4,6


## how to achieve that

```
//get user input
double x_raw[MAXLEN] = { 0 };
double y_raw[MAXLEN] = { 0 };

double x, y;
int count, index = 0;
while ((count = scanf_s("%lf,%lf", &x, &y)) == 2)
{
	if (count == EOF)
	{
		break;
	}
	x_raw[index] = x;
	y_raw[index] = y;
	index++;
}

```

