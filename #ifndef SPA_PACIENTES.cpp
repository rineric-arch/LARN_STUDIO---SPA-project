#ifndef SPA_PACIENTES
#define SPA_PACIENTES
#include <estruras.h>

int codigo_existente(char *codigo){
    for (int i=0;i<totalPacientes;i++){
        if(strcmp(pacientes[i].codigo_paciente,codigo)==0){
            return 1;
        }
    }
    return 0;
}
void cadastrarPaciente(){
   
   printf("Digite o nome do paciente:\n")
   fgets(nome,200,stdin);
   
   do{
   printf("Digite o número do CPF do paciente cadastrado:\n");
   fgets(codigo_paciente,15,stdin);
   codigo_paciente[strcmp(codigo_paciente,"\n")]=0;
   if(codigo_existente(codigo_paciente)){
        printf("Esse CPF já está cadastrado!Digite outro.\n");
   }
 }
   while(codigo_existente(codigo_paciente));

   printf("Digite a idade do paciente:\n");
   scanf("%d", &idade);
   
   getchar(); //limpa
   
   printf("Digite os sintomas do paciente:\n");
   fgets(sintomas,400,stdin);

   

   if(totalPacientes==capacidadedePacientes){
    if(capacidadePacientes==0)
      capacidadePacientes=10;
    else
    capacidadePacientes=capacidadePacientes * 2;

    pacientes= realloc(pacientes,capacidadePacientes*sizeof(struct paciente));
   }
   //salva o paciente novo
   strcpy(pacientes[totalPacientes].codigo_paciente, codigo_paciente);
   //salvamento dos dados do paciente
   totalPacientes++;
}

void listarPaciente();
void buscarPaciente();
void gerenciarCadastro();
#endif