
//emlist{
**定理5.** @<m>{\\\{a\_{n\\\}}},@<m>{\\\{b\_{n\\\}}}ガ収斂スルトキ，
//}


//texequation{
(1°)      \lim _{n\rightarrow \infty }(a_{n}+b_{n})=\lim _{n\rightarrow \infty }a_{n}+\lim _{n\rightarrow \infty }b_{n}．
//}
//texequation{
(2°)      \lim _{n\rightarrow \infty }(a_{n}-b_{n})=\lim _{n\rightarrow \infty }a_{n}-\lim _{n\rightarrow \infty }b_{n}．
//}
//texequation{
(3°)      \lim _{n\rightarrow \infty }(a_{n}b_{n})=(\lim _{n\rightarrow \infty }a_{n})(\lim _{n\rightarrow \infty }b_{n})．
//}
//texequation{
(4°)      \lim _{n\rightarrow \infty }\dfrac {a_{n}} {b_{n}}=\dfrac{\lim _{n\rightarrow \infty }a_{n}} {\lim _{n\rightarrow \infty }b_{n}}．
//}



但，(4°)ニ於テハ@<m>{b_{n\} \neq 0,} @<m>{\lim _{n\rightarrow \infty \}b_{n\}\neq 0}トスル．



[證] @<m>{a_{n\}\rightarrow\alpha,b_{n\}\rightarrow\beta} トスル．(1°)(2°)ハ明白デアラウ．サテ
//texequation{
\alpha\beta-a_{n}b_{n}=(\alpha-a_{n})\beta+a_{n}(\beta-b_{n})．
//}
ソコデ@<m>{|\beta|<M,|a_{n\}|<M}(定理3)トスレバ，
//texequation{
|\alpha\beta-a_{n}b_{n}|<M(|\alpha-a_{n}|+|\beta-b_{n}|)．
//}
nヲ十分大キクスレバ，右邊ハ如何程ニモ小サクナル．故ニ@<m>{a_{n\}b_{n\}\rightarrow\alpha\beta}卽チ(3°)デアル．



(4°)ヲ證明スルニハ，手数ヲ省ク爲ニ先ヅ
//texequation{
(4')      \lim _{n\rightarrow \infty }\dfrac {1} {b_{n}} = \dfrac {1} {\beta}
//}
ヲ證明スルガヨイ．サウスレバ(3°)ニヨツテ
//texequation{
\lim a_{n}\cdot\dfrac {1} {b_{n}} = \alpha\cdot\dfrac {1} {\beta}
//}
ヲ得ル． ソレガ(4°)デアル．



サテ
//texequation{
\dfrac {1} {\beta} -\dfrac {1} {b_{n}} = \dfrac {b_{n}-\beta} {\beta b_{n}}．
//}
假定ニヨツテ@<m>{|\beta|>0}．又@<m>{b_{n\}\rightarrow\beta}ダカラ，或ル番號以上ハ@<m>{|b_{n\}|>\dfrac {1\} {2\} |\beta|}，從ツテ



//texequation{
| \dfrac {1} {\beta} - \dfrac {1} {b_{n}} | < \dfrac {2|b_{n}-\beta|} {|\beta|^2}．
//}
nヲ十分大キクスレバ，右邊從ツテ左邊モ如何程デモ小サクナル．卽チ(4')ガ證明サレタ
ノデアル．



定理3,4,5デハ数列ガ収斂スルコトヲ假定シタノデアルガ，逆ニ一ツノ数列ガ興ヘラ

