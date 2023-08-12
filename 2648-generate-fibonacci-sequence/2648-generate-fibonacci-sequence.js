/**
 * @return {Generator<number>}
 */
var fibGenerator = function*() 
{
    let i = 0 , j = 1 ;
    while(true)
        {
            yield i;
            let temp = i+j;
            i = j ;
            j = temp;
        }
    
};

/**
 * const gen = fibGenerator();
 * gen.next().value; // 0
 * gen.next().value; // 1
 */