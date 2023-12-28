#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) 
{
	srand(time(NULL));
	int numeroDeApostas, i = 1, numeroSorteado, q = 0;
	float quantidade, lucro, prejuizos, valorPago;
		while(i != 0)
		{
			printf("\nEntre com a Quantidade a ser apostada:\n");
			scanf("%f",&quantidade);
			printf("\n Qual o numero a apostar?\n");
			scanf("%d",&numeroDeApostas);
			numeroSorteado = rand()%51;
				if(quantidade < 0)
					printf("\n Erro: Valor invalido!");
					else if(quantidade > 50.0)
						printf("\n Erro: Valor Invalido!");
							else
							{
								if(numeroDeApostas < 1)
									printf("\n Erro: Valor invalido!");
										else if(numeroDeApostas > 50)
											printf("\n Erro: Valor invalido!");
												else if(numeroDeApostas == 0)
												    i = 0;
														else
														{
															i = i + 1;
															q = q + 1;
															if(numeroDeApostas == numeroSorteado)
															{
																valorPago = quantidade * 5;
																lucro = valorPago - quantidade;
																printf("\n Jogada %d",q);
																 printf("\n A quantia apostada foi: %.2f", quantidade);
																  printf("\n O numero apostado foi: %d", numeroDeApostas);
																   printf("\n O numero sorteado foi: %d", numeroSorteado);
																    printf("\n O cassino pagou %.2f", valorPago);
																     printf("\n O Usuario ganhou %.2f", lucro);
															}
																else if(numeroDeApostas / 10 == numeroSorteado % 10)
																{
																	if(numeroDeApostas % 10  == numeroSorteado / 10)
																	{
																		valorPago = quantidade * 3;
																		lucro = valorPago - quantidade;
																		printf("\n Jogada %d",q);
																		 printf("\n A quantia apostada foi: %.2f", quantidade);
																		  printf("\n O numero apostado foi: %d", numeroDeApostas);
																		   printf("\n O numero sorteado foi: %d", numeroSorteado);
																		    printf("\n O cassino pagou %.2f", valorPago);
																		     printf("\n O Usuario ganhou %.2f", lucro);
																	}
																}
																	else if(numeroDeApostas/10 == numeroSorteado/10)
																	{
																		valorPago = quantidade * 2;
																		lucro = valorPago - quantidade;
																		printf("\n Jogada %d",q);
																		 printf("\n A quantia apostada foi: %.2f", quantidade);
																		  printf("\n O numero apostado foi: %d", numeroDeApostas);
																		   printf("\n O numero sorteado foi: %d", numeroSorteado);
																		    printf("\n O cassino pagou %.2f", valorPago);
																		     printf("\n O Usuario ganhou %.2f", lucro);				
																	}
																		else if(numeroDeApostas == ((numeroSorteado / 10) + (numeroSorteado % 10)))
																		{
																			valorPago = quantidade * 2;
																			lucro = valorPago - quantidade;
																			printf("\n Jogada %d",q);
																			 printf("\n A quantia apostada foi: %.2f", quantidade);
																			  printf("\n O numero apostado foi: %d", numeroDeApostas);
																			   printf("\n O numero sorteado foi: %d", numeroSorteado);
																			    printf("\n O cassino pagou %.2f", valorPago);
																			     printf("\n O Usuario ganhou %.2f", lucro);
																		}
																			else if(numeroDeApostas % 2 == 0)
																			{
																				if(numeroSorteado % 2 == 0)
																				 printf("\n Nao ha lucros ou prejuizos");
																			}
																			if(numeroDeApostas % 2 == 1)
																			{
																				if(numeroSorteado % 2 == 1)
																				 printf("\n Nao ha lucros ou prejuizos");
																			}
																				else
																				{
																					prejuizos = quantidade;
																					printf("\n Jogada %d",q);
																					printf("\n A quantia apostada foi: %.2f", quantidade);
																					printf("\n O numero apostado foi: %d", numeroDeApostas);
																					printf("\n O numero sorteado foi: %d", numeroSorteado);
																					printf("\n O Usuario perdeu %.2f", prejuizos);
																				}
																
														}
									}
							
						
		}
	return 0;
}
