# 問題
整数 $N, M, P$ が与えられる．このとき， $N ^ P$ を $M$ で割った余りを求めよ．

## 制約
- $1 \le N, M \le 10^9$
- $1 \le P \le 10^{14}$

## 出典 [Atcoder Typical Contest 002 B問題](https://atcoder.jp/contests/atc002/tasks/atc002_b)

# コード解説
## normal1.cpp
for文を用いて $ans$ に $N$ を $P$ 回かける．

計算量は $O(P)$ ．

## normal2.cpp
再帰関数を用いた累乗のナイーブな実装．

$$ N ^ X = N ^ {X - 1} \cdot N $$

を用いて再帰的に計算する．

## kuhuu1.cpp
繰り返し $2$ 乗法の再帰帰数を用いた実装． 

$$
\begin{equation*}
  N ^ X = \left\\{
    \begin{array}{ll}
      N ^ {X / 2} \cdot N ^ {X / 2} & (X \text{が偶数}) \\
      N ^ {(X - 1) / 2} \cdot N ^ {(X - 1) / 2} \cdot N & (X \text{が奇数})
    \end{array}
  \right.
\end{equation*}
$$

を用いて再帰的に計算する．

計算量は $O(\log P)$ ．

## kuhuu2.cpp
繰り返し $2$ 乗法の非再帰的な実装．

$$ X = \sum_{i = 0} ^ {h} a_i \cdot 2 ^ i, $$

のように書けたとき，

$$ N ^ X = \left(N ^ {2 ^ 0}\right) ^ {a_0} \cdot \left(N ^ {2 ^ 1}\right) ^ {a_1} \cdot \cdots \cdot \left(N ^ {2 ^ h}\right) ^ {a_h} $$

という性質 (分配法則です．) を使い， $N ^ {2 ^ i}$ を計算しながら， $a_i = 1$ の時に， $ans$ に $N ^ {2 ^ i}$ をかける．

$$ N ^ {2 ^ {i + 1}} = N ^ {2 ^ {i}} \cdot N ^ {2 ^ {i}} $$

であるから， $N ^ {2 ^ i}$ は簡単に計算できる． $h = \lceil \log_2(X) \rceil$ だから，計算量は $O(\log P)$ ．

