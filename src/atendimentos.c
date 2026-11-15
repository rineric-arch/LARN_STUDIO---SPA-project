#include <stdio.h>
#include <stdlib.h>
#include "atendimentos.h"
#include "interface.h"

void filadeEspera()
{
    limparTela();
}

void gerenciarAtendimento()
{
  int opcaogenatendimento;
  do
    {
        limparTela();
        printf(
        "1.iniciar Atendimento\n"
        "2.Finalizar Atendimento\n"
        "3.Historico de Atendimento\n"
        "0.Retornar ao menu\n"
              );
        scanf("%d", &opcaogenatendimento);
        switch (opcaogenatendimento)
        {
        case 1:
                iniciarAtendimento();
            break;
        case 2:
                finalizarAtendimento();
            break;
        case 3:
             historicodeAtendimento();
            break;
        case 0:
            break;
        default:
            printf("opção invalida\n");
            break;
        }


    } while (opcaogenatendimento !=0);  
}

void iniciarAtendimento()
{

}

void finalizarAtendimento()
{
    
}

void historicodeAtendimento()
{

}