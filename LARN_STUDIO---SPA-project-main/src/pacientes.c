#include <stdio.h>
#include <stdlib.h>
#include "pacientes.h"
#include "interface.h"
#include "estruturas.h"
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
        system("pause");
        break;
                                      }
         } while (opcaocadastro != 0);
 
 
}

void listarPaciente()
{
    int opcaolistar;
    int statusSelecionado = 0;
    int filtroSelecionado = 0;
    int ordenacaoSelecionada = 0;
    const char *nomesStatus[] = {
        "Todos",
        "Aguardando",
        "Em atendimento",
        "Atendidos"
    };
    const char *nomesFiltro[] = {
        "Sem filtro",
        "Classificacao",
        "Setor",
        
    };
    const char *nomesOrdenacao[] = {
        "Ordenacao atual",
        "Por nome",
        "Por codigo",
        "Por Prioridade"
    };
    
do
{
   limparTela();
   printf(
    "\n ===LISTAR PACIENTES=== \n"
    "Status: %s\n"
    "Filtro adicional:%s\n"
    "Ordenacao: %s\n"
    "1.Selecionar status\n"
    "2.Selecionar filtro adicional\n"
    "3.Selecionar ordenacao\n"
    "4.Mostrar Resultado\n"
    "0.Retornar ao menu\n",
    nomesStatus[statusSelecionado], nomesFiltro[filtroSelecionado], nomesOrdenacao[ordenacaoSelecionada]
         );
         scanf("%d",&opcaolistar);
    switch (opcaolistar)
    {
    case 1:
        {
    int novoStatus;

    printf(
        "\n0. Todos\n"
        "1. Aguardando\n"
        "2. Em atendimento\n"
        "3. Atendidos\n"
        "Escolha: "
    );

    if (scanf("%d", &novoStatus) == 1)
    {
        if (novoStatus >= 0 && novoStatus <= 3)
        {
            statusSelecionado = novoStatus;
        }
        else
        {
            printf("Status invalido.\n");
            system("pause");
        }
    }

}
        break;
    case 2:
        {
            int novoFiltro;
        printf(
        "\n0.Sem filtro\n"
        "1. Classificacao\n"
        "2.Setor\n"
         );
    if(scanf("%d",&novoFiltro) == 1)
    {
        if(novoFiltro >= 0 && novoFiltro <= 3)
        {
            filtroSelecionado = novoFiltro;
        }
        else
        {
             printf("Filtro invalido.\n");
            system("pause");
        }

    }
        }
        break;
    case 3:
       {
        int novaOrdenacao;
        printf(
            "\n0.Ordenacao atual\n"
            "1.Por nome\n"
            "2.Por codigo\n"
            "3.Por prioridade\n"
        );
        if(scanf("%d", &novaOrdenacao) == 1)
        {
            if (novaOrdenacao >= 0 && novaOrdenacao <= 3)
            {
                ordenacaoSelecionada = novaOrdenacao;
            }
            else
            {
                printf("ordenacao invalida.\n");
                system("pause");
            }
            
        }
       }
        break;
    case 4:
        //adicionar funcionalidade relacionada ao filtro de lista//
         /*
     * 1. Verificar se existem pacientes.
     *    Se não houver, mostrar mensagem.
     *
     * 2. Selecionar os pacientes que correspondem:
     *    - ao statusSelecionado;
     *    - ao filtroSelecionado e seu valor.
     *
     * 3. Ordenar os selecionados conforme
     *    ordenacaoSelecionada, sem alterar a fila original.
     *
     * 4. Exibir o resultado.
     *    Se nenhum passar pelos filtros, informar isso.
     */

    system("pause");
        break;
    case 0:
        break;
    default:
        printf("opção invalida\n");
        system("pause");
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
            system("pause");
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
            system("pause");
            break;
        }


    } while (opcaogerenciar !=0);
}