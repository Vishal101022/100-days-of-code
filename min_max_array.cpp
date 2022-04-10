/* find-minimum-and-maximum-element-in-an-array {GFG}
 * date 10/april/2022 */
#include <stdio.h>
struct pair {
    long long int min;
    long long int max;
};

struct pair getMinMax(long long int arr[], long long int n) ;

int main() {
    long long int t, n, a[100002], i;
    struct pair minmax;

    scanf("%lld", &t);
    while (t--) {
        scanf("%lld", &n);

        for (i = 0; i < n; i++) scanf("%lld", &a[i]);
        minmax = getMinMax(a, n);
        printf("%lld %lld\n", minmax.min, minmax.max);
    }
    return 0;
}
// function to find min and max within O(n);
struct pair getMinMax(long long int arr[], long long int n) {
   struct pair obj;
   obj.min=arr[0];
   obj.max=arr[0];
   for(int i=0; i<n; i++){
        if(arr[i]>obj.max)
           obj.max=arr[i];
        else if(arr[i]<obj.min)
           obj.min=arr[i];
   }
    return obj;
}