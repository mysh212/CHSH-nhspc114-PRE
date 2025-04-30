## **C. K-字串分割** ***<font color = '#AAAAAA'> K-Limited String Partition </font>***

`time limit` 1s
`memory limit` 256MB

### ***Statement***
給定一個長度為 $n$ 的字串 $s$，由小寫英文字母組成。您的任務是將這個字串分割成最少數量的連續子字串，使得每個子字串都是**有效**的。

一個子字串被認為是**有效**的，如果對於出現在該子字串中的每個不同的小寫英文字母，該字母在該子字串中出現的次數小於或等於給定的整數 $k$。

輸出分割字串 $s$ 所需的最少有效子字串數量。由於問題的限制確保始終存在有效的分割方案，因此你不需要考慮不可能的情況。


### ***Input***
$n\ k$
$s$

### ***Output***
$Ans$


<div class = 'page' />


### ***Sample Input 1***
```
6 2
aabbcc
```

### ***Sample Output 1***
```
1
```

### ***Sample Input 2***
```
9 2
aaabbbccc
```

### ***Sample Output 2***
```
4
```

### ***Note***
* $1 \leq n, k \leq 10^5$


### ***Subtask***

- ***task***: $100\\%$ ***As statement***