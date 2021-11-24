function countFreq(arr, n)
{
    var size = prompt("enter size of array");
    var array = new Array(size);
    for (var i = 0; i < size; i++) {
        var element = prompt('enter element');
        array[i] = element;
    }
	var mp = new Map();

	
	for (var i = 0; i < size; i++)
	{
		if(mp.has(array[i]))
			mp.set(array[i], mp.get(array[i])+1)
		else
			mp.set(array[i], 1)
	}

	var keys = [];
	mp.forEach((value, key) => {
		keys.push(key);
	});
	keys.sort((a,b)=> a-b);
	
	
	keys.forEach((key) => {
		
		document.write(key +":"+ mp.get(key)+"<br>");
        //document.write("\n");
	});
}

