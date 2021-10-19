# よく使うSTLの関数
## max_element,min_element
最小値、最大値のイテレータを返す。<br>
文字列の最小値(辞書順で一番最初)を求めるときなど
```
min = *min_element(v.begin(),v.end());
max = *max_element(v.begin(),v.end());
```

## sort
`sort(最初の要素のイテレータ、最後+1の要素のイテレータ、ソートの関数)`と使う。
```
sort(v.begin(),v.end(),[](int a, int b){
    return a < b;
});
```
で昇順ソートができる(ラムダ式使用)<br>
キャプチャ([])に`&`を指定するとその時点で見える自動変数を参照でキャプチャ<br>
`=`を指定するとその時点で見える自動変数をコピーでキャプチャする。<br>
計算量はO(NlogN)

## substr(n,m)
n番目以降の文字列をm文字だけ取り出す場合は`substr(n,m)`とする。

## count
`count(v.begin(),v.end(),x)`と使い、vの中でxがいくつ含まれているかを返す

## find
`find(v.begin(),v.end(),x)`と使い、vにxがない場合は`a.end()`、そうでない場合は初めてa[i] = xとなるようなa[i]のイテレータを返す。

## next_permutation
`next_permutation(v.begin(),v.end())`とすると次の順列を生成する。<br>
```
do{
    //code
}while(next_permutation(v.begin(),v.end()));
```