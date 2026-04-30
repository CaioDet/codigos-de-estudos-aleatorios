const nome = "Vinicius"

console.log(nome.charAt(4))//vai dar a letra do índice na string

console.log(nome.charCodeAt(2)) //valor do caractere na tabela Ascii
console.log(nome.indexOf('u')) // identifica o índice em que está um dígito

console.log(nome.substring(1))
console.log(nome.substring(0, 6)) // va do indice 0 e vá até 6

console.log("Caio".concat(nome).concat('Detoni'))
console.log(nome.replace(0, 'z'))

console.log('João, Maria, Pedro'.split(','))//gera array