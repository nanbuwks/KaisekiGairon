#基本的ノ概念
##数ノ概念及ビ四則算法
ハ既知ト彼定スル@<fn>{23-1}．始メノ中ハ實数ノミヲ取扱フカラ
一々断ラナイ．次ノ用語ハ周知デアル．

**自然数．** 1,2,3 等． 物ノ順位又ハ物ノ集合ノ個数ヲ示ス篤ニ用ヰラレル．

**整数．** 0，±1，±2等． 自然数ハ正ノ整数デアル．

**有理数．**0及ビ @<m>{\pm \dfrac {a\\} {b\\}}子，但α,b ハ自然数． b=1ナルトキ，ソレハ整数デアル．

**無理数．**有理数以外ノ責数．例ヘバ

//texequation{
\begin{array}{l}
\sqrt {2}=1.4142135\ldots,\\\
e=2.718281828…，\\\
pi=3.1415926535…
\end{array} 
//}



（但，ソレラガ有理数デナイコトハ護明ヲ要スル）
  十進法．賓数ヲ十進法デ表ハスコトモ周知デアル．有理数ヲ十進法デ表ハセバ，数字
ハ有限カ，又ハ無限ナラバ循環小数ニナル．但，有限位数ノ十進数ヲ循環小数ノ形二表ハス
コトモ出来ル．例ヘバ0.6= 0.5999…．無理数ヲ十進法デ表ハスナラバ，無限ノ位数ヲ要
シ，数字ハ決シテ循環シナイ．
  吾々ガ十進法ニヨツテ数ヲ表ハズニ至ツタノハ，手指ノ数ニソノ原因ガアルノデアラ
ウガ，理論上ハ1以外ノ任意ノ自然数ヲ基本トシテ，十進法ト同様ノ方法ニヨツテ，数ヲ表
ハスコトガ出来ル．
  特ニ二進法デハ，数字ハ0ト1トダケデ足ル．有理数ヲ二進法デ表ハセバ，分母ガ2
ノ巾@<fn>{23-2}ニナルモノノ外ハ，循環二進数ニナル．
//texequation{
\left[ 例\right] \dfrac {5} {8}=\dfrac {1} {2}+\dfrac {1} {2^{3}}=\left( \begin{matrix} 0.101\end{matrix} \right)
//}

//footnote[23-1][附録（一）ヲ参照．]
//footnote[23-2][巾ハ羃ノ假字（和算ノ用例ニヨル）.]

//texequation{
\begin{array}{l}
\dfrac {5} {8}=\dfrac {1} {2}+\dfrac {1} {2^{4}}+=\dfrac {1} {2^{5}}+\ldots=(0.100111\ldots).\\\
\\\
\dfrac {2} {3}=\dfrac {1} {2}+\dfrac {1} {2^{3}}+=\dfrac {1} {2^{5}}+\ldots=(0.101010\ldots).
\end{array} 
//}
**数乙幾何撃的表現**解析學デハ便宜上自由ニ幾何學ノ術語ヲ流用スル．例ヘバ座標法
ニヨツテ實数ヲ直線上ノ點デ表現スル．ソノ方法ハ周知デアル．直線XX'ノ上デ，0ヲ表
ハス點0ハ座標ノ原點デ，又1ガ半直線OX上ノ點Eデ表ハサレルトスレバ，OEハ
長サノ單位デアル．一般ニxヲ表ハス點Pハ，xガ正或ハ負デルニ従ツテ，半直線OX
或ハOX'ノ上ニアツテ，OPノ長サガ即チxノ絶對値デアル． ソレヲ|x| ト記ルス．コ
ノヤウニシテ實数x,x'ガ點P,P'デ表ハサレルナラバ，|x-x'|ハPP'ノ長サデアル．
絶封値ニ關スル次ノ開係ハ，シバシバ引用サレル．
//texequation{
|x|+|x'|\geq|x+x'|\geq|x|-|x'|.
//}
コレモ周知デアル．
二ツノ實数x,yヲー組トシテ，ソレヲ(x,y)ト記ルスナラバ，個々ノ組(x,y)ト平面
上ノ個々ノ點Pトノ間二，座標法ニヨツテー對ーノ對應ガ成立スル．ソノトキi(x,y)ヲ點
Pト略稱スル．通常ハ直交座標ヲ用ヰル．
同ジヤウニ，三ツノ實数ノ組(x,y,z)ハ空間ノー點ニヨツテ表ハサレル．
ナホー般ニ，n個ノ實数ノー組(x1,x2,…，xn)ヲn次元室間ノー點トイヒ，ソレヲ一
ツノ文字Pデ表ハス．
今P = (x1, x2,… , xn),P'= (x1', x2'，…，xn'）ナルトキ
//texequation{
\sqrt {\left( x_{1}-x_{1}'\right) ^{2}+\left( x_{2}-x_{2}'\right) ^{2}+\ldots \left( x_{n}-x_{n}'\right)^{2}}
//}
ナル数ヲP, P'ノ距離ト略稱シテ，ソレヲPP'ト書ク．然ラバ「三角關係」PP'+P'P"とPP"
ガ成立ツ． 若シモPヲ固定スレバ
//texequation{
PP'^{2}=\left( x_{1}-x_{1}'\right) ^{2}+\left( x_{2}-x_{2}'\right) ^{2}+\ldots \left( x_{n}-x_{n}'\right)^{2} < \delta ^{2}
//}

ナル點P'ハ，Pヲ中心トスル半徑δナル「n次元ノ球」ノ内部ニアルトイフ．若シ又
//texequation{
\left| x_{1}-x_{1}'\right|  < \delta ,\left| x_{2}-x_{2}'\right|  < \delta ,\ldots,\left| x_{n}-x_{n}'\right|  < \delta ,
//}
言ヒ換ヘレバ
//texequation{
Max(\left| x_{1}-x_{1}'\right|,\left| x_{n}-x_{n}'\right|) < \delta ,
//}

ナラバ@<fn>{25-1}，P'ハPヲ中心トシテ稜ガ座標軸ニ平行デ，ソノ長サガ2δ ナル「n次元ノ立方
ノ内部ニアルトイフ．
   吾々ハ言語ノ短縮ヲ欲スルガ爲ニ，上記ノヤウナ幾何學的ノ表現法ヲ用ヰルノデアルカラ，
文字ニ
 拘泥シテ，n次元空間ニ關シテ奇怪ナル空想ヲホシイママニスル必要ハナイ．シカシ，コノヤウナ表現
 法ガ印象ヲ鮮明ナラシメルコトノ効果ハ，容易ニ承認セラレルデアラウ．
##数ノ連績性．
實数ニ開シテ前節デ述ベタコトハ，誰モガ承認スルコトト候定シ
タノデアツタガ，数ノ連続性ハ解析學ノ基礎デアルカラ，ソレヲ説明セネバナラナイ．
  凡テノ数ヲA,B ノ二組ニ分ケテ，Aニ屬スル各数ヲBニ屬スル各数ヨリモ小ナラシ
メルコトガ出来タトスルトキ，コノヤウナ組分ケ（A, B）ヲでできんどノ**切断**トイヒ，Aヲ
下組，Bヲ上組トイフ．
  切断(A,B)ニ於テ，如何ナル数モ洩レナク下組力上組力何レカー方，シカモー方ノミ
ニ屬スルトイフ規約ハ巌重デアル．
　今ーツノ数Sヲ取ツテ，sョりモ小ナル数ヲ凡テ下組ニ入レ，Sヨリモ大ナル数ヲ凡テ上
組二入レルトスル．切断ヲ完成スル爲ニハ，S自身モ下組或ハ上組二入ラネバナラナイガ，
若シモSヲ下組＝入レルナラバ，Sハ下組ノ最大数デ，ソノトキ上組ニ最小数ハナイ．又若
シS ヲ上組ニ入レルナラバ，Sハ上組ノ最小数デ，ソノトキ下組ニ最大数ハナイ． コノヤウ
ニシテ任意ノ数S ヲ境界トスル切斷ガ出来ルガ，重要ナノハソノ逆デアル． 卽チ次ノ定理
ガ成立ツ．

**定理1．**實数ノ切断ハ，下組ト上組トノ境界トシテ，ーツノ数ヲ確定スル．（でできん
どノ定理）

卽チ切断（A, B）ガ興ヘラレタルトキ，ーツノ数Sガ存在シテ，SハAノ最大数又ハ
Bノ最小数デアリ，始メノ場合ニハBニ最小数ハナク，後ノ場合ニハAニ最大数ガナイ
ノデアル． 前ノヤウニ，始メニs ヲ取ツテ，ソレヲ境界トシテ切断（A, B) ヲ作ルノデハナ
ク，反對ニ切断（A, B) ガアルトキ，ソレニョツテs ガ決定サレルノデアル．

コレガ實数ノ連續性デアル．今吾々ハコノ定理ハ承認サレタモノトシテ，ソレヲ基礎
//footnote[25-1][Max(a1,a2,.,an）ハa1, a2,…，αnノ最大ノ値ヲ表ハス記號． 同様ニMinハ最小ノ値ヲ示ス．]
トシテ，理論ヲ組ミ立テルコトニスル．

大小ノ順序ノアル所ニハ切斷ガ出来ルガ，理論上切斷ノ三ツノ型ガ可能デアル．卽チ

(1°) 下組ニ最大数ガアリ同時ニ上組ニ最小数ガアル．約言スレバ，下組ト上組トノ
間ニ飛ビ(leap)ガアル．

(2°) 下組ニ最大数ガナク，且ツ上組ニ最小数ガナイ．卽チ下組ト上組トノ間ニ途切レ
(gap)ガアル．

(3°) 下組叉は上組ニ端(最大叉は最小)ガアツテ，他ノ一方ニハ端がナイ．卽チ下組
ト上組トハ連續シテイル．

でできんどノ定理ハ賓数ノ切斷ハ(3°)ノ型ニ限ルコトヲ言フノデアル．
整数ノ範圍内デハ，切斷ハ(1°)ノ型ニ限ル．有理数ノ範圍内デハ，ニツノ有理数ノ中間ニ必ズ他ノ
有理数ガアル（有理数ノ稠密性）カラ，(1°)ノ型ノ切斷ハ不可能デアルガ，一方(2°)ノ型ノ切斷ガ可能
デアル．例ヘバ@<m>{b>\sqrt {2\\}}ナル有理数bヲ上組Bトシ，ソノ他ノ有理数αヲ下組Aトスレバ，
@<m>{s=\sqrt {2\\}}ナル有理数Sハナイカラ，(A,B）ハ有理敷ノ切断デアルガ，ソレハ(2°)ノ型デアル．コノ
ヤウニ有理数ダケナラ，一ツノ有理数ニモ觸レナイデ，ソレヲA,Bノ二組ニ切リ離ハナシテシマフコトガ
出来ル．コヨヤウナ狀態ヲでできんどハ切斷(Schnitt)ナル語デ示唆シタノデアラウ．

シカシ無理数ヲモ入レテシマヘバ，コノヤウナ切リ離シハ出来ナイ．實数ノ範囲内デハ，切断ノ切
レ目（下組ト上組トノ境界）ニ必ズ實数ガアル．ソレガ實数ノ連續性デアル．
##数ノ集合・上限・下限．
 或ルー定ノ條件ニ適合スル数ノ全部ヲ集合トイフ． 其
ノ條件ニ適スル個々ノ数ハコノ集合ニ屬シ，又其ノ條件ニ適シナイ個々ノ数ハコノ集合ニ
屬シナイ．如何ナル数モ，前者カ後者カ，何レカーツデアラネバナラナイ．

[例1]凡テノ有理数ノ集合．條件ハ有理敷ナルコトデアル．

[例2] a,b ハ定数デ，αくb トスルトキα≦x≦b ナル凡テノx ノ集合． コノ集合ヲ**閉區間**
[a,b」トイフ．

[例3] a,b ハ例 2 ト同様トシテ，α<x <b ナル凡テノx ノ集合． コノ集合ヲ**開區間**(a,b)
トイフ．

[例4] @<m>{x^2<2}ナル有理数xノ集合．（ 吻論カヤウナxノ全部ノ集合ノ意味デアル）

[例5] @<m>{x^2>2}ナル正ノ有理数xノ集合．

[例6] f(x) ハ輿ヘラレタル函敷（例ヘバ多項式），又a,b 興ヘラレタル数ナルトキα<f(x)
<b ナル如キxノ集合．

集合Sニ属スル数ガ凡テーツノ数Mヨリモ大〔或ハ小〕デナイトキニハ，S ハ上方
〔或ハ下方〕ニ**有界**デアルトイヒ，Mヲソノーツノ**上界**〔或ハ**下界**〕トイフ．上方ニモ下方
ニモ有界ナラバ，單ニ有界トイフ．

 集合Sニ關シテ，上界又ハ下界ハ確定デナイ．卽チーツノ上界ヨりモ大ナル数ハヤハ
リ上界デアリ，又ーツノ下界ヨリモ小ナル数ハ下界デアル．故二集合ノ限界トシテハ，成ル
ベク小ナル上界及ビ成ルベク大ナル下界ニ興味ガアル．集合Sニ最大数ガアルナラバ，ソ
レハ勿論上界ノ中デ最小ナルモノデアリ，又Sニ最小数ガアレバ，ソレハ下界ノ中デ最大
ナルモノデアル．サテ次ニ證明スルヤウニ，S ガ有界ナラバ，最大又ハ最小ノ数ガナイト
キニモ，最小ノ上界又ハ最大ノ下界ガ存在スル． ソレラヲSク上限又ハ下限トイフ．故ニ
上限，下限ハ必ズシモSニ屬スル数デハナイ．郎チSニ最大数ガナイトキニハ，上限ハS
ニ屬シナイ． 下限モ同様デアル．

 再言スレバ，集合S ノ上限αトハ次ノ條件(1°),(2°)ニ適合スル数デアル．

(1°) Sニ屬スル_凡テノ_数xニ關シテx≦a.

(2°) a'<aトスレバ，a'<xナル_或ル_数xガSニ属スル．

上記(1°)ハaガSノ上界デアルコト，(2°)ハaヨリモ小ナル上界ノナイコトヲ意味
スル． 故ニ上限卽チ最小上界デアル．

**下限**ニ關シテハ不等記號ノ向キヲ反對ニスレバヨイ．

例1ノ集合ハ上下共ニ有界デナイ．

例2,3 ノ集合ハ有界デ，αガ下限，b ガ上限デアル． 例2 デハ，上限モ下限モ集合ニ属スルガ，例
3 デハ，上限モ下限モ集合ニ属シナイ．

例4ノ集合ハ有界デアルガ，最大数モ最小数モナク，@<m>{\sqrt {2\\} }ガ上限，@<m>{-\sqrt {2\\} }ガ下限デアル．

例5ノ集合ハ上方ニハ有界デナイガ，下方ニハ有界デ，@<m>{\sqrt {2\\} }ガ下限デアル．

以上，上限下限ノ意味ヲ述ベタガ，次＝ソノ存在ノ證明ヲスル．

 **定理2.** 数ノ集合Sガ上方[又ハ下方]ニ有界ナラバSノ上限[又ハ下限]ガ存在ス
ル．（わいやすとらすノ定理）

[證] 先ヅSハ下方ニ有界デアルト假定シテ，下限ノ存在ヲ讃明シヨウ．
Sノーツノ下界ヲαトスレバ，aョリモ小ナル数ハヤハリSノ下界デアル．ヨツテ
Sノ下界デアリ得ル数ノ全部ヲA組トシ．ソノ他ノ数ノ全部ヲB細トスレバ．ーツノ切
斷ガ生ズル．實際，B組ニ屬スル数ハS ノ下界デアリ得ナイ数ダカラ，ソレハ如何ナル下
界ヨリモ大デアラネバナラナイ，従ツテA組ニ屬スル数ヨリモ大デアル．

コノ切斷ニヨツテ確定サレル数ヲsトスル．然ラバsハAニ屬シテAノ最大数デ
アルカ，或ハsハBニ屬シテBノ最小数デアルカ，イズレカ一ツデアル．（定理1）
サテ，sハBニ屬スルデアラウカ．

假ニsガBニ屬スルトスルナラバ，sハSノ下界デアリ得ナイノダカラ，sヨリモ
小デ，而モSニ屬スル数ガアル． ソノーツヲxトスル，卽チx<s.

x トsトノ中間ニアルーツノ数ヲb トスル．卽チx<b<s.

然ラバbハSニ屬スル数xヨリモ大デアルカラ，Sノ下界デハナイ，卽チBニ屬
スル．而モソノbガSョリモ小デアルカラ，コレ矛盾デアル．

故ニsハBノ最小徴デハアリ得ナイ．

故ニsハAノ最大数，卽チSノ最大下界，卽チSノ下限デアル．

S ガ上方ニ有限ナルトキ，上限ノ存在スルコトモ，同ジヤウニ證明サレル．
##数列ノ極限
a1, a2；… , an,…ノヤウニ，無数ノ数ヲ一定ノ順序ニ並タモノ
ヲ数列トイフ． ソノ項anハ自然数ノ範園内ニ於テ變動スル變数nノ「関数」デアル．コ
ノ函数ガ確定シタトキハ，数列ヲ{an}ト記ルス．サテnガ限リナク增大スルトキ，anガ
一定ノ数αニ限リナク近ヅクナラバ，数列{an}ハαニ**収斂**スルトイヒ，又αヲanノ
**極限**トイフ．記號デハ
又ハ見易ク
ト書ク．詳シク言ヘバ，任意ノ正数εガ輿ヘラレタルトキ，ソレニ對應シテ一ツノ番號n0
ガ
//texequation{
\lim \_{n\leftarrow \infty }a\_{n}=\alpha ,
//}


n>n0 ナルトキ |α-an| < ε

ナルヤウニ定メラレルノデアル．

数列{an}ガ収斂スルトキ，ソノ極限αハ一意的ニ確定スル．ソレハ定義ニヨツテ明
白デアラウ．

若シモ，如何ホド大キイ正数R ヲ取ツテモ，ソレニ對應シテ

//texequation{
                     n > n\_{n} ナルトキ α\_{n}>R
//}
ナル如キn0ガアルナラバ，記號∞ヲ用ヰテ，標語的ニ
//texequation{
\lim \_{n\rightarrow \infty }a\_{n}=\infty 叉ハ a\_{n}\rightarrow\infty
//}
ト書ク．
//texequation{
\lim \_{n\rightarrow \infty }a\_{n}=-\infty 叉ハ a\_{n}\rightarrow-\infty
//}
モ同様デアル@<fn>{29-1}.

上記ノ定義ニヨレバ，収斂スル数列ノ若干項ヲ取去ツテモ，ソノ跡ニ無数ノ項ガ残留ス
バ，同ーノ極限値ニ収斂スル． 簡單ニ言ヘバ

 定理3.収斂数列ノ部分数列ハ原ノ極限直ニ収斂スル．

極限ガ∞又ハー∞デ表ハサレル場合モ同様デアル．

コレトハ反對ニ，収斂シナイ数列ノ部分数列ガ収斂スルコトハ可能デアル．例ヘバ@<m>{a\_{n\\\}=(-1)^n}ノ
トキ，ソノ部分数列a2,a4,…ハ1ニ収斂シ，a1,a3,…ハ-1ニ収斂スル．

数列ノ各項anガ絶封値ニ於テー定ノ数ヲ超エナイトキ，ソノ数列ハ有界デアルトイフ．
有界ナル数列ハ必ズシモ収斂シナイ． （例．@<m>{a\_{n\\\}=(-1)^n}）シカシ収斂数列ハ有界デ，ソノ極
限値モ同ジ限界ヲ出デナイ． 即チ：

**定理4.** @<m>{a\_{n\\\}\\rightarrow\\alpha}ナラバ，@<m>{|a\_{n\\\}|< M}ナル定数Mガアル．サウシテ|α|≦M．

[證] ーツノ正数εヲ取ル．然ラバ假定ニヨツテ
//texequation{
n>p ナルトキ |\alpha-a\_{n}|<\varepsilon, 卽チ \alpha-\varepsilon<a\_{n}<\alpha+\varepsilon
//}
ナル如キ自然数pガアル．ソコデ
//texequation{
|a\_{1}|,|a\_{1}|,\ldots,|a\_{p}|,|\alpha-\varepsilon|,|\alpha+\varepsilon|
//}
ナルp+2個ノ数ノドレヨリモ大ナルーツノ数ヲM トスレバ，n≦pデモ，n>pデモ
@<m>{a\_{n\\\}<M}．ソレガ定理ノ始メノ部分デアル．

次ニ@<m>{a\_{n\\\}\\rightarrow\\alpha，|a\_{n\\\}|<M}トスル．若シモ假ニ|α|>Mトスルナラバ，|α|>M'>Mナル
数M' ガアル．然ラバ@<m>{|\\alpha-a\_{n\\\}|>M'-M>0}. コレハ@<m>{a\_{n\\\}\\rightarrow\\alpha}ニ矛盾スル．故ニ|α|≦M．
(證終)

@<m>{|a\_{n\\\}|<M}カラ@<m>{\\alpha|<M}ハ得ラレナィ．例ヘパ@<m>{a\_{n\\\}=1-\\dfrac {1\\\} {n\\\}<1,\\alpha=1}.
//footnote[29-1][コノヤウナ記法ハ標語的ニノミ使用スル． 即チ「極限値ガアル」トイフトキ，ソノ極限値ハ＋∞ 又ハ -∞デハナイトスル．ソレラヲモ入レテ言フトキニハ，特別ニ断ワル．]
	**定理5.** @<m>{\\\{a\_{n\\\}}},@<m>{\\\{b\_{n\\\}}}ガ収斂スルトキ，

//texequation{
(1°)      \lim \_{n\rightarrow \infty }(a\_{n}+b\_{n})=\lim \_{n\rightarrow \infty }a\_{n}+\lim \_{n\rightarrow \infty }b\_{n}．
//}
//texequation{
(2°)      \lim \_{n\rightarrow \infty }(a\_{n}-b\_{n})=\lim \_{n\rightarrow \infty }a\_{n}-\lim \_{n\rightarrow \infty }b\_{n}．
//}
//texequation{
(3°)      \lim \_{n\rightarrow \infty }(a\_{n}b\_{n})=(\lim \_{n\rightarrow \infty }a\_{n})(\lim \_{n\rightarrow \infty }b\_{n})．
//}
//texequation{
(4°)      \lim \_{n\rightarrow \infty }\dfrac {a\_{n}} {b\_{n}}=\dfrac{\lim \_{n\rightarrow \infty }a\_{n}} {\lim \_{n\rightarrow \infty }b\_{n}}．
//}

但，(4°)ニ於テハ@<m>{b\_{n\\\} \\neq 0,} @<m>{\\lim \_{n\\rightarrow \\infty \\\}b\_{n\\\}\\neq 0}トスル．

[證] @<m>{a\_{n\\\}\\rightarrow\\alpha,b\_{n\\\}\\rightarrow\\beta} トスル．(1°)(2°)ハ明白デアラウ．サテ
//texequation{
\alpha\beta-a\_{n}b\_{n}=(\alpha-a\_{n})\beta+a\_{n}(\beta-b\_{n})．
//}
ソコデ@<m>{|\\beta|<M,|a\_{n\\\}|<M}(定理3)トスレバ，
//texequation{
|\alpha\beta-a\_{n}b\_{n}|<M(|\alpha-a\_{n}|+|\beta-b\_{n}|)．
//}
nヲ十分大キクスレバ，右邊ハ如何程ニモ小サクナル．故ニ@<m>{a\_{n\\\}b\_{n\\\}\\rightarrow\\alpha\\beta}卽チ(3°)デアル．

(4°)ヲ證明スルニハ，手数ヲ省ク爲ニ先ヅ
//texequation{
(4')      \lim \_{n\rightarrow \infty }\dfrac {1} {b\_{n}} = \dfrac {1} {\beta}
//}
ヲ證明スルガヨイ．サウスレバ(3°)ニヨツテ
//texequation{
\lim a\_{n}\cdot\dfrac {1} {b\_{n}} = \alpha\cdot\dfrac {1} {\beta}
//}
ヲ得ル． ソレガ(4°)デアル．

サテ
//texequation{
\dfrac {1} {\beta} -\dfrac {1} {b\_{n}} = \dfrac {b\_{n}-\beta} {\beta b\_{n}}．
//}
假定ニヨツテ@<m>{|\\beta|>0}．又@<m>{b\_{n\\\}\\rightarrow\\beta}ダカラ，或ル番號以上ハ@<m>{|b\_{n\\\}|>\\dfrac {1\\\} {2\\\} |\\beta|}，從ツテ

//texequation{
| \dfrac {1} {\beta} - \dfrac {1} {b\_{n}} | < \dfrac {2|b\_{n}-\beta|} {|\beta|^2}．
//}
nヲ十分大キクスレバ，右邊從ツテ左邊モ如何程デモ小サクナル．卽チ(4')ガ證明サレタ
ノデアル．

定理3,4,5デハ数列ガ収斂スルコトヲ假定シタノデアルガ，逆ニ一ツノ数列ガ興ヘラ
レタトキニ，ソレガ収斂スルヤ否ヤヲ鑑定スル方法ハ，後ニ述ベルデアラウ． ココデハ最モ
基本的ナル**單調数列**ダケヲ片付ケテ置ク．
//texequation{
a\_{1}<a\_{2}<a\_{3}<\ldots<a\_{n}<\ldots
//}

ノヤウニ，各項ガソノ番號ト共ニ增大スル数列{@<m>{a\_{n\\\}}}ヲ單調ニ増大スルトイフ．若シモコノ
数列ガ有界ナラバ，スベテノnニ關シテ@<m>{a\_{n\\\}<M}ナル如キ定数Mガアル．卽チ@<m>{a\_{n\\\}}ノ集
合ハ有界デアル．今ソノ上限ヲαトスル(定理2)ナラバ，αハ数列{an}ノ極限デアル．
ナゼナラ，今α'<αトスレバ，上限ノ定義ニヨツテ@<m>{\\alpha'<a\_{p\\\}\\leq\\alpha}ナル如キ@<m>{a\_{p\\\}}ガアルガ，数
列ハ單調ニ増大スルノダカラ，n>p ノトキ@<m>{\\alpha'<a\_{n\\\}}． 然ルニ凡テノnニ關シテ@<m>{a\_{n\\\}\\leq\\alpha}デ
アルカラ，n>pナルトキ@<m>{\\alpha'<a\_{n\\\}\\leq\\alpha}，従ツテ@<m>{|\\alpha'-a\_{n\\\}|<\\alpha-\\alpha'}．α'ハαヨリモ小ナル任
意ノ数デアツタカラ@<m>{a\_{n\\\}\\rightarrow\\alpha}．勿論α≦Mデアル．

單調增大ノ意味ヲ擴張シテ（不減少）@<m>{a\_{p\\\}=a\_{p+1\\\}=\\ldots<a\_{n\\\}=\\ldots},トシテモ，同様デアル．

サウスレバ，或ル番號以上≦ガ全部=デ, @<m>{a\_{1\\\}<a\_{2\\\}<a\_{3\\\}<\\ldots<a\_{n\\\}<\\ldots}ノヤウニナル揚合モ生ズ
ル． ソノ場合ニハ，コレラノ相等シイ値ガ極限αデアル．サウシテモ極限ノ定義ノ文字ニハ抵觸シナ
イ．

軍調減少ニ關シテモ同様デアル．總括シテ：

**定理6.** 有界ナル單調数列ハ収斂スル．

單調数列ガ有界デナイナラバ，增大ノ場合ニハ@<m>{a\_{n\\\}\\rightarrow\\infty}，減少ノ場合ニハ@<m>{a\_{n\\\}\\rightarrow-\\infty}．
コレハ明白デアル．

次ニ一二ノ例ヲ揭ゲル．

[例1] a>0 ナラバ@<m>{ \lim\_{n\rightarrow \infty \\\}\\sqrt [n] {a\\\}=1}.

「證」 (1°) a>1トスル．然ラバ@<m>{\\sqrt [n] {a\\\}>1}．又@<m>{\\sqrt [n] {a\\\}>\\sqrt [n+1] {a\\\}}．故ニ{@<m>{\\sqrt [n] {a\\\}}}ハ單調減
少デ，1ガーツノ下界デアル，従ツテソレハα≧1ナル極限値ヲ有スル．今假ニα>1ト
スルナラバ，α-1>h>0トスルトキα>1+hデ，@<m>{\\sqrt [n] {a\\\}>1+h}，從ツテ@<m>{a>(1+h)^n>nh}.
右邊ハnト共ニ限ナク增大スルカラ，コレハ不合理デアル．故ニα= 1.

(2°) a<1ナラバ@<m>{a'=\\dfrac {1\\\} {a\\\}>1}，故ニ@<m>{\\sqrt [n] {a'\\\}\rightarrow 1}，従ツテ@<m>{\\sqrt [n] {a\\\}\rightarrow 1}.（定理5, (4°)).

(3°) a=1 ノトキハ明白．

[例2] a>1, k>0 ナラバ，@<m>{n\rightarrow \infty}ノトキ@<m>{\\dfrac{a^n\\\}{n^k\\\}\rightarrow \infty}． 


「證」(1°)k=1トスル．a=1+hト置ケバ，h>0．
「例5」(eノ定義) @<m>{a\_{n\\\}=(1+\\dfrac {1\\\} {n\\\})^n}
トスレバ，二項式定理ニヨツテ
//texequation{
a\_{n}=1+n\dfrac{1}{n}+\dfrac{n(n-1)}{2!}\dfrac{1}{n^2}+\dfrac{n(n-1)(n-2)}{3!}\dfrac{1}{n^3}+\ldots+\dfrac{1}{n^n}
//}
//texequation{
=1+1+\dfrac{1-\dfrac{1}{n}}{2!}+\dfrac{(1-\dfrac{1}{n})(1-\dfrac{2}{n})}{3!}+\ldots+\dfrac{(1-\dfrac{1}{n})\ldots(1-\dfrac{n-1}{n})}{n!}
//}
nノ代リニn+1ヲ取レバ，右邊ニ於テ各項ガ增大シテ，且ツ項数ガ增スカラ，数列@<m>{a\_{n\\\}}
ハ單調ニ增大スル．シカモ上記ノ等式カラ見エルヤウニ
//texequation{
a\_{n}<1+\dfrac{1}{1!}+\dfrac{1}{2!}+\dfrac{1}{3!}+\ldots+\dfrac{1}{n!}
//}
//texequation{
      <1+1+\dfrac{1}{2}+\dfrac{1}{2^2}+\ldots+\dfrac{1}{2^n}<3．
//}
卽チ{@<m>{a\_{n\\\}}}ハ單調ニ增大シテ，且ツ有界デアルカラ，収斂スル．古典数學デハ，ソレノ極限値
ヲ以テeナル数ノ定義トシタ．

