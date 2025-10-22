# Exemplo de entradas e saídas sem precisar digitar

Ao compilar o arquivo main.c, digamos para um executável a.out 

```
gcc main.c 
```

Podemos direcionar as entradas e saídas (stdin e stdout) para arquivos de texto usando a seguinte sintaxe:

```
./a.out <input.txt >output.txt
```

No exemplo acima, ele lerá os valores do arquivo input.txt e todo printf será direcionado para o arquivo output.txt (ele sempre sobrescreve, tome cuidado)
