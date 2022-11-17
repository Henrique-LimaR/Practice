#include<iostrea>
#include<vector>

pair<long long, long long> getMinMax(long long a[], int n) {
    int i=0,max=0,min=0;
    while(i<=n-1)
    {
        if(a[i] > min){
            max=a[i];
            min=a[i++];
        }
        else if(min > max){
            i++;
            max=min;
            min=a[i++];
        };
        i++;
    };
    std::cout << min << " " << max << '\n';
};
