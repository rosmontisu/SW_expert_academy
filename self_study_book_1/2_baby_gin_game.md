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




## Counting Sort
## Selection Sort
## Quick Sort
## Insertion Sort
## Merge Sort

