# Mathematics Notes,Tricks,Techniques

### 1.Integer Division
- Avoid using float/double values when doing ceil/floor division of large integers
- Ceil Division Formula 

$$
\lceil a/b \rceil  = (a / b) + (a \% b > 0)
$$

- Floor Division Formula

$$
\lfloor a/b \rfloor = (a / b) - (a \% b < 0)
$$

- Ref - [Ceil Division Editorial](https://atcoder.jp/contests/abc345/editorial/9593)

- Ref - [Floor Division Editorial](https://atcoder.jp/contests/abc239/editorial/3434)

### 2. GP(Geometric Progression)

- GP Formula for Integer Sequence

$$
\frac{A_{i+1}}{A} = \frac{A_{i+2}}{A_{i+1}}
$$

$$
{A_{i+1}^2} = {A_{i+2}} \times {A}
$$

- Ref - [GP Editorial](https://atcoder.jp/contests/abc390/editorial/12050)