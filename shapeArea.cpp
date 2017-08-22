//problem link:https://codefights.com/arcade/intro/level-2/yuGuHvcCaFCKk56rJ
//status:accepted
int shapeArea(int n) {
    int arr[n+1];
    arr[1]=1;
    for(int i=2;i<=n;i++){
        arr[i]=((i*2)+(2*(i-2)))+arr[i-1];
    }
    return arr[n];
}
