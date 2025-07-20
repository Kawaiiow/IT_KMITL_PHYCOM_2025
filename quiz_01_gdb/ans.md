
```c
#include <stdio.h>

int	main()
{
	int a = 17, b = 25, c = 50, d = 10;

	// Assignment Statements of Each Question
	return 0;
}

```

## Question 1 ✅

```c
a += b *= c -= 5;
```

|variable|before|after|
|-|-|-|
|a|17|1142|
|b|25|1125|
|c|50|45|
|d|10|10|

<hr>

```c
d = a += b *= c -= 5;
```

|variable|before|after|
|-|-|-|
|a|1142|46142|
|b|1125|45000|
|c|45|40|
|d|10|46142|

## Question 2 ✅

```c
-a++;
```

|variable|before|after|
|-|-|-|
|a|17|18|
|b|25|25|
|c|50|50|
|d|10|10|

<hr>

```c
-++a;
```

|variable|before|after|
|-|-|-|
|a|18|19|
|b|25|25|
|c|50|50|
|d|10|10|

## Question 3 ✅

```c
a += a++;
```

|variable|before|after|
|-|-|-|
|a|17|35|
|b|25|25|
|c|50|50|
|d|10|10|

<hr>

```c
a += ++a;
```

|variable|before|after|
|-|-|-|
|a|35|72|
|b|25|25|
|c|50|50|
|d|10|10|

## Question 4 ✅

```c
d = a++ + b++ + c++;
```

|variable|before|after|
|-|-|-|
|a|17|18|
|b|25|26|
|c|50|51|
|d|10|92|

<hr>

```c
d = ++a + ++b + ++c;
```

|variable|before|after|
|-|-|-|
|a|18|19|
|b|26|27|
|c|51|52|
|d|92|98|

## Question 5 ✅

```c
b += a++;
```

|variable|before|after|
|-|-|-|
|a|17|18|
|b|25|42|
|c|50|50|
|d|10|10|

<hr>

```c
b  += ++a;
```

|variable|before|after|
|-|-|-|
|a|18|19|
|b|42|61|
|c|50|50|
|d|10|10|

## Question 6 ✅

```c
d = a *= c / b + 5;
```

|variable|before|after|
|-|-|-|
|a|17|119|
|b|25|25|
|c|50|50|
|d|10|119|

<hr>

```c
d = (a *= c) / b + 5;
```

|variable|before|after|
|-|-|-|
|a|119|5950|
|b|25|25|
|c|50|50|
|d|119|243|

## Question 7 ✅

```c
c += ++a + b++;
```

|variable|before|after|
|-|-|-|
|a|17|18|
|b|25|26|
|c|50|93|
|d|10|10|

## Question 8 ✅

```c
d = b % a + c / b;
```

|variable|before|after|
|-|-|-|
|a|17|17|
|b|25|25|
|c|50|50|
|d|10|10|

<hr>

```c
d = b % a++ + c / b;
```

|variable|before|after|
|-|-|-|
|a|17|18|
|b|25|25|
|c|50|50|
|d|10|10|

<hr>

```c
d = b % ++a + c / b;
```

|variable|before|after|
|-|-|-|
|a|18|19|
|b|25|25|
|c|50|50|
|d|10|8|

<hr>

```c
d = b % (a + c) / b;
```

|variable|before|after|
|-|-|-|
|a|19|19|
|b|25|25|
|c|50|50|
|d|8|1|
