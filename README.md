# ft_printf

Projeto da [42](https://www.42.fr/) que consiste em reimplementar a função `printf` da biblioteca padrão do C, com suporte a múltiplos especificadores e formatações.

---

## **Descrição**

O objetivo do projeto `ft_printf` é criar uma versão personalizada da função `printf`, garantindo:

- Impressão de strings, números e caracteres.
- Suporte a múltiplos especificadores: `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X` e `%%`.
- Tratamento correto de casos especiais, como ponteiros `NULL` e números negativos.
- Gestão de retorno: número de caracteres impressos.

Este projeto permite aprender sobre:

- Manipulação de variáveis com `va_list`.
- Funções de formatação de saída.
- Estrutura modular em C.

---

## **Funcionalidades**

- [x] Imprimir caracteres (`%c`)
- [x] Imprimir strings (`%s`)
- [x] Imprimir inteiros (`%d` / `%i`)
- [x] Imprimir inteiros sem sinal (`%u`)
- [x] Imprimir números hexadecimais (`%x` / `%X`)
- [x] Imprimir ponteiros (`%p`)
- [x] Imprimir porcentagem (`%%`)
- [x] Retornar número de caracteres impressos

---

| Especificador | Descrição         | Exemplo                  |
| ------------- | ----------------- | ------------------------ |
| `%c`          | Caractere         | `ft_printf("%c", 'A');`  |
| `%s`          | String            | `ft_printf("%s", "Oi");` |
| `%p`          | Ponteiro          | `ft_printf("%p", ptr);`  |
| `%d` / `%i`   | Inteiro com sinal | `ft_printf("%d", 42);`   |
| `%u`          | Inteiro sem sinal | `ft_printf("%u", 42);`   |
| `%x` / `%X`   | Hexadecimal       | `ft_printf("%x", 255);`  |
| `%%`          | Percentual        | `ft_printf("%%");`       |


