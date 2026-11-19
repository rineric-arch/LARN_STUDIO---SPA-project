#ifndef ESTRUTURAS_H
#define ESTRUTURAS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct paciente{
    char nome [200];
    char codigo_paciente[15]; //CPF
    int idade;
    int unidade_idade; //Falar se estar em anos ou em meses.
    char sintomas [400];
    int setor;
    int classificacao; //A cor da pulseira.
    int prioridade; //1,2,3 que faz referência a cor da pulseira.
    int ordem_chegada;
    int status;
};
struct atendimento{
    int codigo;//Faz referência a cada atendimento.
    char codigo_paciente[15]; // CPF
    int idade;
    int unidade_idade; //Falar se estar em anos ou em meses.
    char data[11];
    char sintomas[400];
    int setor;
    int classificacao; //A cor da pulseira.
    int prioridade; //1,2,3 que faz referência a cor da pulseira.
    int turno;
    int duracao; // Em minutos.
    int status; //Situação do atendimento.
};

// Classificação de risco e prioridade
#define EMERGENCIA 1
#define URGENTE 2
#define POUCO_URGENTE 3

// Unidade de idade
#define ANOS 1
#define MESES 2

// Setores
#define CLINICA_GERAL 1
#define PEDIATRIA 2
#define ORTOPEDIA 3
#define SETOR_EMERGENCIA 4

// Turnos
#define MANHA 1
#define TARDE 2
#define NOITE 3
#define MADRUGADA 4

// Status do paciente
#define AGUARDANDO 1
#define EM_ATENDIMENTO 2
#define ATENDIDO 3

// Status do atendimento
#define EM_ANDAMENTO 1
#define FINALIZADO 2



#endif

