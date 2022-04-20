/**
 * @param {number} numRows
 * @return {number[][]}
 */
var generate = function(numRows) {
    let arr =[];
    for(let i =0; i<numRows;i++)
        {
            let row = [],curr = 1;
            for(let j=0;j<=i;j++)
                {
                    if(j==0 || j==i)
                        {
                        row.push(curr);
                        }
                    else
                        row.push(arr[i-1][j-1]+arr[i-1][j])
                }
                    
            arr.push(row);
        }
    return arr;
};