#include <stdio.h>

int main()
{
    float salario, mdSalario;
    int idade, maiorIdade, menorIdade, qtdMulherSal200 = 0, idadeMenorSalario, primeiraVez = 1, qtdHabitantes = 0;
    char sexo, sexoMenorSalario;

    puts("Para finalizar o programa -> Digite uma idade negativa.");

    while(1)
    {
		printf("Informe sua idade: ");
		scanf(" %d", &idade);
		
		if (idade < 0)
		{
		      puts("Finalizando...");
		      break;
		}

		printf("Informe seu salario: ");
		scanf(" %f", &salario);
		printf("Informe seu sexo [m/f]: ");
		scanf(" %c", &sexo);

		if (primeiraVez)	
		{
		    maiorIdade = idade;
		    menorIdade = idade;
		    idadeMenorSalario = idade;
		    sexoMenorSalario = sexo;
		    primeiraVez = 0;
		}

		mdSalario += salario;
		qtdHabitantes++;

		if (salario <= 200.0 && sexo == 'f')	
		    qtdMulherSal200++;
		if (idade > maiorIdade)
		    maiorIdade = idade;
		if (idade < menorIdade)
		    menorIdade = idade;
		if (salario < sexoMenorSalario)
		{
		    sexoMenorSalario = salario;
		    idadeMenorSalario = idade;
		    sexoMenorSalario = sexo;
		}
    }
    
    mdSalario /= qtdHabitantes;

    printf("A media de salario R$ %.2f\n", mdSalario);
    printf("Maior Idade: %d\n", maiorIdade);
    printf("Menor idade: %d\n", menorIdade);
    printf("Quantidade de mulheres com salario ate R$200.0: %d\n", qtdMulherSal200);
    printf("Idade %d e sexo %c da pessoa que possui o menor salario\n", idadeMenorSalario, sexoMenorSalario);

	return 0;
 }
