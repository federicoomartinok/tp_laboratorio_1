int i;

//Operaciones con 2 operandos (num1, num2)

//----------- SUMAR ----------------
// DEVUELVE LA SUMA DE LOS 2 NUMEROS
int suma( int num1 , int num2 ) {
    return num1 + num2;
}
//----------- RESTAR----------------
// DEVUELVE LA RESTA DE LOS 2 NUMEROS
int resta( int num1 , int num2 ) {
    return num1 - num2;
}
//----------- MULTIPLICACION ----------------
// DEVUELVE LA MULTIPLICACION DE LOS 2 NUMEROS
int multiplicacion( int num1 , int num2 ) {
    return num1 * num2;
}
//----------- DIVISION ----------------
// DEVUELVE LA DIVISION DE LOS 2 NUMEROS
// SE VALIDÓ ANTES DE USAR ESTA FUNCION
int division( int num1 , int num2 ) {
    return num1 / num2;
}
//----------- FACTORIAL ----------------
// DEVUELVE EL FACTORIAL DEL NUMERO
int factorial( int operando ) {
    int factorial = 1;

    for( i = operando; i > 0; i--) {
        factorial *= i;
    }

    return (factorial);
}

