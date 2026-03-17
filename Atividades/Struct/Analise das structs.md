1. ##### Analise as struct abaixo e apresente o consumo de memória, a análise

##### padding e se há uma alternativa melhor na ordem entre os campos de

##### cada struct.



link da atividade: https://drive.google.com/file/d/1j5Z\_puOeNB9khLXhYf\_jh8awF8\_Jc-a0/view



1. Struct

int idade: começa em 0 e vai até 3, sendo 4 em 4

int qtd\_filhos: começa em 3 e vai até 7

char nome\[16]: começa em 7 e vai até 23



Padding não é necessário nessa situação



2\. Struct

float salario: começa em 0 e vai até 3, sendo 4 em 4

char turno: começa em 3 e vai até 4

char nome\[32]: começa em 4 e vai até 36



Padding de 3 será necessário para tamanho da struct ser múltiplo de 4



3\. Struct

char sexo: começa em 0

int código: começa em 0 e vai até 4

char nome\[32]: começa em 4 e vai até 36



Padding de 3 será necessário para tamanho da struct ser múltiplo de 4

Otimização de código: invés de fazer char, int e char, poderia fazer int, char, e char, ficaria mais otimizado e organizado



4\. Struct

char sexo: começa em 0

int código: começa em 0 e vai até 4

char estcivil: começa em 4 e vai até 5



Padding de 2 será necessário para tamanho da struct ser múltiplo de 4

Otimização de código: invés de fazer char, int e char, poderia fazer int, char, e char, ficaria mais otimizado e organizado









