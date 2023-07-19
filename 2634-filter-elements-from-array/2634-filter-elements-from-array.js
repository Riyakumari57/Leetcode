/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn)
{
    const filtArr = [];
    for(let i =0 ; i<arr.length;i++)
        {
           if(fn(arr[i] , i)) filtArr.push(arr[i]);
        }
    return filtArr;
};