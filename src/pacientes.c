#include <stdio.h>
#include <stdlib.h>
#include "pacientes.h"
#include "interface.h"

void cadastrarPaciente()
{
    int opcaocadastro;
do
{
     limparTela();

     printf(
      "1.Cadastrar novo paciente\n"
      "0.Retornar ao menu\n"
            );
             scanf("%d", &opcaocadastro);
      switch (opcaocadastro)
      {
      case 1:
         //adicionar struct aqui//
        break;
      case 0:
        break;
      default:
        printf("opção invalida\n");
        break;
                                      }
         } while (opcaocadastro != 0);
 
 
}

void listarPaciente()
{
    int opcaolistar;
do
{
   limparTela();
   printf(
    "1.Todos os pacientes"
    "2.Pacientes aguardando atendimento\n"
    "3.Pacientes em atendimento\n"
    "4.Pacientes atendidos\n"
    "0.Retornar ao menu\n"
         );
         scanf("%d'",&opcaolistar);
    switch (opcaolistar)
    {
    case 1:
        //adicionar funçao relacionada ao filtro de lista//
        break;
    case 2:
        //adicionar funçao relacionada ao filtro de lista//
        break;
    case 3:
        //adicionar funçao relacionada ao filtro de lista//
        break;
    case 4:
        //adicionar funçao relacionada ao filtro de lista//
        break;
    case 0:
        break;
    default:
        printf("opção invalida\n");
        break;
    }

} while (opcaolistar !=0);

}

void buscarPaciente()
{
    int opcaobuscar;
    do
    {
        limparTela();
        printf(
        "1.Buscar paciente pelo cpf\n"
        "2.Buscar paciente pelo nome\n"
        "3.Buscar paciente pelo codigo\n"
        "0.Retornar ao menu\n"
              );
        scanf("%d", &opcaobuscar);
        switch (opcaobuscar)
        {
        case 1:
            //adicionar funçao relacionada ao filtro de busca
            break;
        case 2:
            //adicionar funçao relacionada ao filtro de busca
            break;
        case 3:
            //adicionar funçao relacionada ao filtro de busca
            break;
        case 0:
            break;
        default:
            printf("opção invalida\n");
            break;
        }


    } while (opcaobuscar !=0);
    
}

void gerenciarCadastro()
{
    int opcaogerenciar;
    do
    {
        limparTela();
        printf(
        "1.Editar cadastro\n"
        "2.Excluir cadastro\n"
        "0.Retornar ao menu\n"
              );
        scanf("%d", &opcaogerenciar);
        switch (opcaogerenciar)
        {
        case 1:
            //adicionar funçao relacionada a edicao e exclusao do cadastro
            break;
        case 2:
            //adicionar funçao relacionada a edicao e exclusao do cadastro
            break;
        case 0:
            break;
        default:
            printf("opção invalida\n");
            break;
        }


    } while (opcaogerenciar !=0);
}