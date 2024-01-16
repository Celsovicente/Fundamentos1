#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	srand(time(NULL));
	int numeroDeApostas, i = 1, numeroSorteado, q = 0, sentinela;
	float quantidade, lucro = 0, prejuizo = 0, valorPago = 0;
	while(i != 0)
	{		
		printf("\n Digite a quantidade da aposta:");
		scanf("%f", &quantidade);
		numeroSorteado = rand()%50 + 1;
		numeroSorteado = 21;
		
		if(quantidade == 0) {
			i = 0;
			return 0;
		} 
		
		if (quantidade < 0) {
			printf("\n Erro: Valor Invalido! A quantidade deve ser positiva!");
		} else {
			printf("\n Qual o valor a apostar?");
			scanf("%d",&numeroDeApostas);	
			
			if (numeroDeApostas < 1) 
			{
				q = q - 1;
				printf("\n Erro: Valor Invalido! O numero deve estar entre 1 a 50");
			} 
				else if (numeroDeApostas > 50) 
				{
					q = q - 1;
					printf("\n Erro: Valor Invalido! O numero deve estar entre 1 a 50");	
				} 
					else 
					{
					q = q + 1;
					sentinela = 1;
					if(numeroDeApostas == numeroSorteado) {
						valorPago = quantidade * 5;
				 			lucro = valorPago - quantidade;
				 			printf("\n ________________________________________________________\n");
				 			printf("\n Jogada %d", q);
				 			printf("\n Quantia Apostada: %.2fKz", quantidade);
				 			printf("\n Numero Apostado %d", numeroDeApostas);
				 			printf("\n Numero Sorteado %d", numeroSorteado);
				 			printf("\n O jogador acertou no numero sorteado!");
				 			printf("\n---------------------------------------------------------\n");
				 			printf("\n Cassino pagou: %.2fKz", valorPago);
				 			printf("\n Jogador ganhou: %.2fKz", lucro);	
					} 
					 else if((numeroDeApostas / 10) == (numeroSorteado % 10)) //11 21
												{
													if((numeroDeApostas % 10) == (numeroSorteado / 10))
													{
														valorPago = quantidade * 2;
									 			  		lucro = valorPago - quantidade;
									 			  		printf("\n ______________________________________________________ \n");
									 			  		printf("\n Jogada %d", q);
									 			  		printf("\n Quantia Apostada: %.2fKz", quantidade);
									 			  		printf("\n Numero Apostado %d", numeroDeApostas);
									 			  		printf("\n Numero Sorteado %d", numeroSorteado);
									 			  		printf("\n O jogador no numero sorteado, porem na ordem inversa!");
									 			  		printf("\n--------------------------------------------------------\n");
									 			  		printf("\n Cassino pagou: %.2fKz",valorPago);
									 			  		printf("\n Jogador ganhou: %.2fKz",lucro);
													}
												}
												
											
													if ((numeroDeApostas / 10) == (numeroSorteado / 10)) {
																				valorPago = quantidade * 2;
															 			  		lucro = valorPago - quantidade;
															 			  		printf("\n ______________________________________________________ \n");
															 			  		printf("\n Jogada %d", q);
															 			  		printf("\n Quantia Apostada: %.2fKz", quantidade);
															 			  		printf("\n Numero Apostado %d", numeroDeApostas);
															 			  		printf("\n Numero Sorteado %d", numeroSorteado);
															 			  		printf("\n O jogador acertou na dezena do numero sorteado!");
															 			  		printf("\n--------------------------------------------------------\n");
															 			  		printf("\n Cassino pagou: %.2fKz",valorPago);
															 			  		printf("\n Jogador ganhou: %.2fKz",lucro);	
															 			  		sentinela = 0;
												} else if((numeroDeApostas % 10) == (numeroSorteado % 10)) 
																			{
																				valorPago = quantidade * 2;
															 			  		lucro = valorPago - quantidade;
															 			  		printf("\n ______________________________________________________ \n");
															 			  		printf("\n Jogada %d", q);
															 			  		printf("\n Quantia Apostada: %.2fKz", quantidade);
															 			  		printf("\n Numero Apostado %d", numeroDeApostas);
															 			  		printf("\n Numero Sorteado %d", numeroSorteado);
															 			  		printf("\n O jogador acertou na unidade do numero sorteado!");
															 			  		printf("\n--------------------------------------------------------\n");
															 			  		printf("\n Cassino pagou: %.2fKz",valorPago);
															 			  		printf("\n Jogador ganhou: %.2fKz",lucro);
															 			  		sentinela = 0;
																			}
																			
												
					//	else	if ((numeroDeApostas / 10) == (numeroSorteado / 10)) {
					//								valorPago = quantidade * 2;
					//			 			  		lucro = valorPago - quantidade;
					//			 			  		printf("\n ______________________________________________________ \n");
					//			 			  		printf("\n Jogada %d", q);
					//			 			  		printf("\n Quantia Apostada: %.2fKz", quantidade);
					//			 			  		printf("\n Numero Apostado %d", numeroDeApostas);
					//			 			  		printf("\n Numero Sorteado %d", numeroSorteado);
					//			 			  		printf("\n O jogador acertou na dezena do numero sorteado!");
					//			 			  		printf("\n--------------------------------------------------------\n");
					//			 			  		printf("\n Cassino pagou: %.2fKz",valorPago);
					//			 			  		printf("\n Jogador ganhou: %.2fKz",lucro);	
					//} else if((numeroDeApostas % 10) == (numeroSorteado % 10)) 
					//							{
					//								valorPago = quantidade * 2;
					//			 			  		lucro = valorPago - quantidade;
					//			 			  		printf("\n ______________________________________________________ \n");
					//			 			  		printf("\n Jogada %d", q);
					//			 			  		printf("\n Quantia Apostada: %.2fKz", quantidade);
					//			 			  		printf("\n Numero Apostado %d", numeroDeApostas);
					//			 			  		printf("\n Numero Sorteado %d", numeroSorteado);
					//			 			  		printf("\n O jogador acertou na unidade do numero sorteado!");
					//			 			  		printf("\n--------------------------------------------------------\n");
					//			 			  		printf("\n Cassino pagou: %.2fKz",valorPago);
					//			 			  		printf("\n Jogador ganhou: %.2fKz",lucro);
					//							}
						  if(numeroDeApostas == ((numeroSorteado / 10) + (numeroSorteado % 10)))
											{
												valorPago = quantidade * 2;
							 			  		lucro = valorPago - quantidade;
							 			  		printf("\n ______________________________________________________ \n");
							 			  		printf("\n Jogada %d", q);
							 			  		printf("\n Quantia Apostada: %.2fKz", quantidade);
							 			  		printf("\n Numero Apostado %d", numeroDeApostas);
							 			  		printf("\n Numero Sorteado %d", numeroSorteado);
							 			  		printf("\n O jogador acertou na soma dos digitos do numero sorteado!");
							 			  		printf("\n--------------------------------------------------------\n");
							 			  		printf("\n Cassino pagou: %.2fKz",valorPago);
							 			  		printf("\n Jogador ganhou: %.2fKz",lucro);
											} 
											if(sentinela == 1)
											{
												if (numeroSorteado % 2 == numeroDeApostas % 2) {
													valorPago = quantidade;
								 			  		lucro = valorPago - quantidade;
								 			  		printf("\n ______________________________________________________ \n");
								 			  		printf("\n Jogada %d", q);
								 			  		printf("\n Quantia Apostada: %.2fKz", quantidade);
								 			  		printf("\n Numero Apostado %d", numeroDeApostas);
								 			  		printf("\n Numero Sorteado %d", numeroSorteado);
								 			  		printf("\n O jogador acertou na paridade do numero sorteado!");
								 			  		printf("\n--------------------------------------------------------\n");
								 			  		printf("\n Cassino pagou: %.2fKz",valorPago);
								 			  		printf("\n Jogador ganhou: %.2fKz",lucro);
								 			  		sentinela = 1;
								 			  	}
								 			  	
											}
											
											 else{
													prejuizo = prejuizo + quantidade;
													printf("\n _______________________________________________________ \n");
													printf("\n Jogada %d", q);
								 			  		printf("\n Quantia Apostada: %.2fKz",quantidade);
								 			  		printf("\n Numero Apostado %d", numeroDeApostas);
								 			  		printf("\n Numero Sorteado %d", numeroSorteado); 
								 			  		printf("\n O jogador nao acertou no numero sorteado!");
								 			  		printf("\n----------------------------------------------------------\n");
								 			  		printf("\n Cassino pagou: %.2fKz",valorPago);
								 			  		printf("\n Jogador perdeu: %.2fKz",prejuizo);
								 			  		printf("\n----------------------------------------------------------\n");
								 			  		printf("\n Ate agora o jogador tem um prejuizo: %.2fKZ",prejuizo);
												}
											
							}
												 
		}
		
	}

	printf("\n Apos uma sequencia de %d jogadas, o jogador ganhou %.2f",q,lucro);
	return 0;
}

