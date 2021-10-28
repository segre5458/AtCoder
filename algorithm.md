# bit全探索
{0,1,...,n-1}の部分集合の全探索
```
for(int bit=0; bit < (1<<n); bit++){
    //hoge
    for(int i=0; i<n; i++){
        if(bit & (1<<i)){ // 列挙に i が含まれるか
            //hoge
        }
    }
}
```