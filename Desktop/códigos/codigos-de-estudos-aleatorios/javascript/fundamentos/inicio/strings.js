const nome ='Vinicius'

console.log(nome.charAt(9))
console.log(nome.charCodeAt(3)) // valor da str na tabela asci
console.log(nome.indexOf('c'))

console.log(nome.substring(1))
console.log(nome.substring(0,5))

console.log('Caio '.concat(nome).concat(' !!'))
console.log(nome.replace('i','e'))
console.log(nome.replace(/\w/g,'c'))

console.log('João,da Silva, Junior'. split(',')) // gera array a partir da vírgula