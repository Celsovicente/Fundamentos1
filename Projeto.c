#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
	srand(time(NULL));
	int numeroDeApostas, numeroSorteado, q = 0;
	float quantidade, lucro, prejuizo, valorPago;
	while(numeroDeApostas != 0)
	{
		printf("\n Digite a quantidade da aposta:");
		scanf("%f", &quantidade);
		printf("\n Qual o valor a apostar?");
		scanf("%d",&numeroDeApostas);
		numeroSorteado = rand()%51;
		if(quantidade < 0)
		  printf("\n Erro: Valor Invalido!");
			else if(quantidade > 50)
			 printf("\n Erro: Valor Invalido!");
			 	else
			 	{
			 		if(numeroDeApostas < 1)	
			 		 printf("\n Erro: Valor Invalido!");
			 			else if(numeroDeApostas > 50)
			 			  printf("\n Erro: Valor Invalido!");
			 			  	else
			 			  	{
			 			  		q = q + 1;
			 			  		if(numeroDeApostas == numeroSorteado)
			 			  		{
			 			  			valorPago = quantidade * 5;
			 			  			lucro = valorPago - quantidade;
			 			  			printf("\n Jogada %d", q);
			 			  			 printf("\n Quantia Apostada: %.2fKz",quantidade);
			 			  			  printf("\n Numero Apostado %d", numeroDeApostas);
			 			  			    printf("\n Numero Sorteado %d", numeroSorteado);
			 			  			     printf("\n O jogador acertou no numero sorteado!");
			 			  			      printf("\n-------------------------------------\n");
			 			  			        printf("\n Cassino pagou: %.2fKz",valorPago);
			 			  			         printf("\n Jogador ganhou: %.2fKz",lucro);
								}
								if(numeroDeApostas > 10)
								{
									 if((numeroDeApostas / 10) == (numeroSorteado % 10))
										{
											if((numeroDeApostas % 10) == (numeroSorteado / 10))
											{
												valorPago = quantidade * 3;
					 			  				lucro = valorPago - quantidade;
					 			  				printf("\n Jogada %d", q);
					 			  			 	 printf("\n Quantia Apostada: %.2fKz",quantidade);
					 			  			  	  printf("\n Numero Apostado %d", numeroDeApostas);
					 			  			       printf("\n Numero Sorteado %d", numeroSorteado);
					 			  			        printf("\n O jogador acertou no numero sorteado, porem na ordem Inversa!");
					 			  			         printf("\n-------------------------------------\n");
					 			  			          printf("\n Cassino pagou: %.2fKz",valorPago);
					 			  			           printf("\n Jogador ganhou: %.2fKz",lucro);
											}
										}
										else if((numeroDeApostas / 10) == (numeroSorteado / 10))
										{
											valorPago = quantidade * 2;
					 			  			lucro = valorPago - quantidade;
					 			  			printf("\n Jogada %d", q);
					 			  			 printf("\n Quantia Apostada: %.2fKz",quantidade);
					 			  			  printf("\n Numero Apostado %d", numeroDeApostas);
					 			  			    printf("\n Numero Sorteado %d", numeroSorteado);
					 			  			     printf("\n O jogador acertou na dezena do numero sorteado!");
					 			  			      printf("\n-------------------------------------\n");
					 			  			        printf("\n Cassino pagou: %.2fKz",valorPago);
					 			  			         printf("\n Jogador ganhou: %.2fKz",lucro);
										}
		
												else if((numeroDeApostas % 10) == (numeroSorteado % 10))
											{
													valorPago = quantidade * 2;
						 			  				lucro = valorPago - quantidade;
							 			  			printf("\n Jogada %d", q);
							 			  			 printf("\n Quantia Apostada: %.2fKz",quantidade);
							 			  			  printf("\n Numero Apostado %d", numeroDeApostas);
							 			  			    printf("\n Numero Sorteado %d", numeroSorteado);
							 			  			     printf("\n O jogador acertou na unidade do numero sorteado!");
							 			  			      printf("\n-------------------------------------\n");
							 			  			        printf("\n Cassino pagou: %.2fKz",valorPago);
							 			  			         printf("\n Jogador ganhou: %.2fKz",lucro);
											}
									
								}
								else if(numeroDeApostas == ((numeroSorteado / 10) + (numeroSorteado % 10)))
									{
										valorPago = quantidade * 2;
				 			  			lucro = valorPago - quantidade;
					 			  			printf("\n Jogada %d", q);
					 			  			 printf("\n Quantia Apostada: %.2fKz",quantidade);
					 			  			  printf("\n Numero Apostado %d", numeroDeApostas);
					 			  			    printf("\n Numero Sorteado %d", numeroSorteado);
					 			  			     printf("\n O jogador acertou na soma dos digitos do numero sorteado!");
					 			  			      printf("\n-------------------------------------\n");
					 			  			        printf("\n Cassino pagou: %.2fKz",valorPago);
					 			  			         printf("\n Jogador ganhou: %.2fKz",lucro);
									}
								
								else if(numeroDeApostas % 2 == 0)
								{
									if(numeroSorteado % 2 == 0)
									{
										valorPago = quantidade;
										printf("\n Jogada %d", q);
				 			  			 printf("\n Quantia Apostada: %.2fKz",quantidade);
				 			  			  printf("\n Numero Apostado %d", numeroDeApostas);
				 			  			    printf("\n Numero Sorteado %d", numeroSorteado);
				 			  			     printf("\n O jogador acertou na paridade do numero sorteado!");
				 			  			      printf("\n-------------------------------------\n");
				 			  			        printf("\n Cassino pagou: %.2fKz",valorPago);
				 			  			         printf("\n Jogador ganhou: %.2fKz",lucro);
									}
								}
								  else if(numeroDeApostas % 2 == 1)
								{
									if(numeroSorteado % 2 == 1)
									{
										valorPago = quantidade;
										printf("\n Jogada %d", q);
				 			  			 printf("\n Quantia Apostada: %.2fKz",quantidade);
				 			  			  printf("\n Numero Apostado %d", numeroDeApostas);
				 			  			    printf("\n Numero Sorteado %d", numeroSorteado);
				 			  			     printf("\n O jogador acertou na paridade do numero sorteado!");
				 			  			      printf("\n-------------------------------------\n");
				 			  			        printf("\n Cassino pagou: %.2fKz",valorPago);
				 			  			         printf("\n Jogador ganhou: %.2fKz",lucro);
									}
								}
								
								else
								{
									prejuizo = quantidade;
										printf("\n Jogada %d", q);
				 			  			 printf("\n Quantia Apostada: %.2fKz",quantidade);
				 			  			  printf("\n Numero Apostado %d", numeroDeApostas);
				 			  			    printf("\n Numero Sorteado %d", numeroSorteado);
				 			  			     printf("\n O jogador nao acertou no numero sorteado!");
				 			  			      printf("\n-------------------------------------\n");
				 			  			        printf("\n Cassino pagou: %.2fKz",valorPago);
				 			  			         printf("\n Jogador perdeu: %.2fKz",prejuizo);	
								}
							} 		
				}
	}
	return 0;
}
