#include <stdio.h>
#include <stdlib.h>
#include "interface.h"
#include "pacientes.h"
#include "atendimentos.h"
#include "estruturas.h"
int main()
{
    
    int opcaomenu;
    
        do
        {
            limparTela();
            
        printf("\n   ===MENU SPA===   \n"
        "1.Cadastro de paciente\n"
        "2.lista de pacientes\n"
        "3.Buscar paciente\n"
        "4.Gerenciar cadastro de paciente\n"
        "5.Fila de espera\n"
        "6.Gerenciar atendimento\n"
        "0.sair \n"
                 );
    scanf("%d", &opcaomenu);
    
            switch (opcaomenu)
            {
            case 1:
                    cadastrarPaciente();
                break;

            case 2:
                    listarPaciente();
                break;

            case 3:
                    buscarPaciente();
                break;

            case 4:
                    gerenciarCadastro();
                break;  

            case 5:
                    filadeEspera();
                break;

            case 6:
                    gerenciarAtendimento();
                break;
            
            case 0:
                    printf("encerrando o programa\n");
                break;
           
            default:
                    printf("opção invalida\n");
                    system("pause");
                break;
            }
        }
        while (opcaomenu != 0);
        
        
        return 0;
   
}