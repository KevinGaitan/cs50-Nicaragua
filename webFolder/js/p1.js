
//Operaciones con un numero
function numeroElevadoAlCuadrado (number){
	return number * number;
}
function inVersoDeUnNumero (number){
    return 1/number;
}
function sqrtDeUnNumero (number){//No estoy seguro de este :v
    
    return number/(number/2);
}

function parteEnteraDeUnNumer (number){
    
    if(number % 2 == 0){//Positivo
        return Math.floor(number);
    }
    else{//Negativo
        return -Math.ceil(number);
    }
}

//Operaciones con dos numeros
function basicas(number1,number2,op){
    switch(op){
        case 1://Suma
            return number1 + number2;
        case 2://Resta
            return number1 - number2;
        case 3://Mult
            return number1 * number2;
        case 4://div
            return  number1 / number2 
        default:
            return -1;//error
        
    }
}

function xElevadoAY(x,y){
    var retorno = x;    
    for(var i = 0; i < y; i++){
        retorno *= x;
    }
    return retorno;
}