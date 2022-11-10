let search = function(nums, target) {
    let n=nums.length-1;
    let left=0,right=n;
    let rest = (left+right) % 2;
    let mid=((left+right) - rest)/2;

    while(left < right)
    {
     if(nums[mid]==target)
     {
         return mid;
     }
     if(nums[mid] > target)
     {
       right=(mid-1);
     }else {
       left=(mid+1);
     };
     
      if(left > right)
      {
        return -1;
      }
     mid=((left+right) - rest)/2
    };   
 };
const arr = [1,2,3,4,5,6];
console.log(search(arr, 2));
