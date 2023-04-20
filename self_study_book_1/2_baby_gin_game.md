### 2차시 대표문제. Baby-Gin Game   
6장의 카드가 모두 run이나 triplete로만 구성된 경우를 찾는 문제

## mySolve
1. 입력 받은 숫자를 오름차순으로 정렬한다.   
2. {1, 2, 3}번 카드 {4, 5, 6}번 카드로 묶어서 각각 run과 triplete을 검사한다.
3. 만약 두개의 그룹중 하나라도 run || triplete을 충족하지 못하면 false, 성공하면 true를 반환한다.


## bookSolve
#### 완전 검색을 통해 답을 구할 수 있다.   
숫자 6개를 나열할 수 있는 모든 경우로 나열하고 앞의 세 숫자와 뒤의 세 숫자를 검사한다.   

예를들면 다음과 같다.
``` c
input = {2, 3, 5, 7, 7, 7}

2, 3, 5, 7, 7, 7
2, 3, 7, 5, 7, 7
2, 3, 7, 7, 5, 7
      ...
7, 7, 7, 5, 3, 2
```

이런식의 완전 검색 풀이의 시간 복잡도는 순열로 구할 수 있다.   
순열은 nPr로 표기하며 위 문제는 nPn = n!이므로   
O(n!)의 시간 복잡도가 나온다.     

그러므로 먼저 숫자를 정렬한 후, 앞 뒤 3장씩 검사하는 방법을 사용해보자.   
우선 정렬의 종류와 원리를 알아보자.

## 정렬의 종류
- [Bubble Sort](#bubble-sort)
- [Counting Sort](#counting-sort)
- [Selection Sort](#selection-sort)
- [Quick Sort](#quick-sort)
- [Insertion Sort](#insertion-sort)
- [Merge Sort](#merge-sort)

## Bubble Sort
#### 버블 정렬은 인접한 두 개의 원소를 비교하며 자리를 계속 교환하는 방식이다.   
시간 복잡도 : O(n^2)   
1. 첫 원소부터 인접한 원소끼리 계속 자리를 교환하여 맨 마지막 자리까지 이동한다.   
2. 한 단계가 끝날때마다 가장 큰 원소가 마지막 자리로 정렬된다.   

```c
for (loop = 0; loop < tempCount - 1; loop++)
{
    for (i = 0; i < tempCount - 1 - loop; i++)
    {
        if (temp[i] > temp[i + 1])
        {
            hold = temp[i];
            temp[i] = temp[i + 1];
            temp[i + 1] = hold;
        }
    }
}
```
## Counting Sort
#### 카운팅 정렬은 집합에 각 항목의 수를 세고, 정렬한다.
시간 복잡도 : O(n+k)
1. 배열 내의 각 항목들의 발생 횟수로 배열을 만들어준다.  
2. 이전의 발생 횟수만큼 이후의 배열에 값을 더해준다.
2. 정렬할 원소와 각 원소의 개수를 배열을 통해 정렬한다.

카운팅 정렬은 정수 or 정수로 표현할 수 있는 자료에만 적용 가능하다.   
이때, 카운트를 위한 배열의 크기 할당을 위해 집합 내의 가장 큰 정수를 알아야한다.

```c
// 각 항목들의 발생 횟수를 배열에 저장한다.
// 이때 집합 내의 가장 큰 정수 maxValue 또한 구해준다.
for (int i = 0; i < size; i++)
{
      if (maxValue < data[i]) maxValue = data[i];
      counts[data[i]]++; // data[0] 이 4라면? -> counts[4]가 증가됨
}
// counts배열의 값을 조정해준다. (이전 발생 횟수 추가)
for (int i = 1; i <= maxValue; i++)
{
      counts[i] = counts[i] + counts[i - 1];
}
// counts배열을 사용해 조정해준다.
for (int i = size - 1; i >= 0; i--)
{
      temp[--counts[data[i]]] = data[i];
}
```



## Selection Sort
## Quick Sort
## Insertion Sort
## Merge Sort

