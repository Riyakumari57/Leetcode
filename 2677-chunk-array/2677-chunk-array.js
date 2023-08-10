var chunk = function(arr, size) 
{
    var mainArray = [];
    var newArr = [];
    for(let i=0,j=1;i<arr.length;i++,j++)
        {
            newArr.push(arr[i]);
            if(j!=size && i==arr.length-1)
            {
                 mainArray.push(newArr);
                    return mainArray;
            }
            if(j==size)
                {
                   mainArray.push(newArr);
                    j=0;
                    newArr=[];
                }
               
        }
    return mainArray;
};