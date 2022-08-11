
pair<long long, long long> getMinMax(long long a[], int n) {
    int mi=*min_element(a,a+n);
        int ma=*max_element(a,a+n);
        return {mi,ma};

    
    
}
