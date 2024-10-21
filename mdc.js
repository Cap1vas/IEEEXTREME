const mdc = (a, b) => {
    let maior;
    let valor
    let i = 1;
    if (a > b) {
        maior = a;
    } else {
        maior = b;
    }
    while (i < maior) {
        if (a % i == 0 && b % i == 0) {
            valor = i;
        }
        i++
    }
    return valor;
}

console.log(mdc(10, 20))