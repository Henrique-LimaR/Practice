let search = function(nums, target) {
    let n=nums.length;
    let left=0,right=n-1;
    let mid=0;

    let binarySearch = function(val, v, left, right) {       
     mid=(left+right)/2;
     if(v[mid]==val)
     {
         console.log(mid);
         return mid;
     }
     if(left >= right)
     {
         console.log(-1)
         return -1;
     }
     else {
        if(v[mid] > val)
        {
            return binarySearch(val, v, left,mid-1);
        }else {
            return binarySearch(val, v, mid+1, right);
        };
     }; 
    };

    binarySearch(target, nums, left, right);
};
const arr = [1,2,3,4,5,6];
search(arr, 2);
