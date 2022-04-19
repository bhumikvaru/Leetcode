/**
 * @param {number[]} nums1
 * @param {number} m
 * @param {number[]} nums2
 * @param {number} n
 * @return {void} Do not return anything, modify nums1 in-place instead.
 */
var merge = function(nums1, m, nums2, n) {
    let arr=[];
    let i=0,j=0;
    let k=0;
    while(i<m && j<n)
        {
            if(nums1[i]<=nums2[j])
                {
                arr[k]= nums1[i]; k++;i++;
                }
            else 
                {
                    arr[k]= nums2[j]; k++;j++;
                }
        }
    
    while(i<m)
        {
            arr[k]= nums1[i]; k++;i++;
        }

        while(j<n)
        {
            arr[k]= nums2[j]; k++;j++;
        }
            console.log(arr);
    for(let count=0;count<k;count++){
        nums1[count] = arr[count];
    }
    return arr;
};