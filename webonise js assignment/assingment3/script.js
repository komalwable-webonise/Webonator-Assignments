let btnOpen=document.querySelector('button');
let input=document.querySelector('input');
let openedtab=[];
let startProcess=false;
let k=0;
btnOpen.addEventListener("click",()=>{
    for(let i=0;i<5;i++){
        openedtab.push(window.open(input.value,'_blank'));
    }
    startProcess=true;
    closeURL();
    
})
function closeURL(){
    let interval=setInterval(()=>{
        if(k>=5 || startProcess==false){
            clearInterval(interval);
            openedtab=[];
            k=0;
            return;
        }
        openedtab[k].close();
        k++;
    },2000)
} 
function stop(){
    startProcess=false
}  