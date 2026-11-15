LARN Studio — Sistema de Pronto Atendimento

Projeto acadêmico de Programação e Algoritmos: sistema em C para gerenciar pacientes, fila, atendimentos, histórico e relatórios, com persistência em arquivos.

## Situação do projeto

Configuração inicial. Ainda não há código-fonte. Os comandos de compilação são um modelo para a estrutura proposta e deverão ser validados quando o código inicial for integrado.

## Ambiente

- Sistema operacional da equipe: Windows.
- Compilador definido: GCC.
- Editor: VS Code, com a extensão C/C++ da Microsoft.
- Padrão proposto, pendente de acordo da equipe: C17 (`-std=c17`).

O VS Code é o editor. A extensão não instala o compilador. Quem já possui GCC funcional não precisa reinstalá-lo.

### Verificar ferramentas existentes

No PowerShell do VS Code:

```powershell
git --version
gcc --version
where.exe gcc
```

Os primeiros comandos devem mostrar as versões. O último mostra os executáveis encontrados no PATH; se houver vários, o primeiro normalmente será utilizado. Registre a versão do GCC ao validar o ambiente.

Se necessário, instale o [Git para Windows](https://git-scm.com/download/win) e reabra o VS Code.

### Instalar GCC somente se necessário

Para Windows 10/11 de 64 bits, uma opção é GCC via MSYS2/MinGW-w64:

1. Instale o [MSYS2](https://www.msys2.org/) conforme as orientações oficiais.
2. No terminal MSYS2, execute:

```sh
pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain
```

3. Aceite a seleção padrão dos pacotes e confirme a instalação.
4. Nas variáveis de ambiente do usuário do Windows, acrescente ao `Path` a pasta `ucrt64\bin` da instalação. No caminho padrão: `C:\msys64\ucrt64\bin`.
5. Feche e reabra o VS Code e execute novamente `gcc --version` no PowerShell.
6. Instale a extensão **C/C++**, publicada pela Microsoft.

Se o comando não for reconhecido, confira o PATH. Se o compilador for encontrado mas falhar ao iniciar, registre o erro para diagnóstico antes de alterar a instalação.

Referência: [GCC no Windows com VS Code](https://code.visualstudio.com/docs/cpp/config-mingw). O tutorial usa exemplos C++; neste projeto usamos arquivos `.c` e o comando `gcc`, não `g++`.

## Obter o projeto

No PowerShell, na pasta onde deseja manter o projeto:

```powershell
git clone https://github.com/rineric-arch/LARN_STUDIO---SPA-project.git
cd LARN_STUDIO---SPA-project
git switch Develop
```

Abra a pasta pelo menu **Arquivo > Abrir Pasta** do VS Code. A branch existente se chama `Develop`, com D maiúsculo.

## Compilar e executar

Estrutura proposta para acordo na TK02, ainda não implementada:

```text
src/       fontes .c, incluindo main.c
include/   cabeçalhos .h
build/     resultados da compilação
```

Quando os fontes estiverem diretamente em `src/`, compile da raiz do repositório no PowerShell:

```powershell
New-Item -ItemType Directory -Force -Path build | Out-Null
gcc -std=c17 -Wall -Wextra -Wpedantic -g -I include src/*.c -o build/spa.exe
```
ou Utilize atalho 
ctrl+shift+B
para compilar uma nova build atualizada após alteração nos arquivos
Execute somente após compilação bem-sucedida:

```powershell
.\build\spa.exe
```

- `-std=c17`: seleciona o padrão proposto.
- `-Wall -Wextra -Wpedantic`: habilitam avisos para revisão do código.
- `-g`: inclui informações para depuração.
- `-I include`: informa a pasta dos cabeçalhos.
- `src/*.c`: compila os fontes diretamente nessa pasta, sem percorrer subpastas.
- `-o build/spa.exe`: define a saída.

Se a estrutura mudar, atualize o comando. O botão de executar do editor pode compilar apenas o arquivo aberto; o comando acima considera os módulos da pasta indicada.

Referências: [padrões C no GCC](https://gcc.gnu.org/onlinedocs/gcc/Standards.html) e [opções de avisos](https://gcc.gnu.org/onlinedocs/gcc/Warning-Options.html).

## Controle de versão

O `.gitignore` ignora executáveis, objetos, pastas de compilação e temporários. Fontes, cabeçalhos, documentação e dados de exemplo devem ser versionados. Configurações compartilhadas do VS Code podem ser versionadas sem caminhos pessoais.

Adicionar regras para arquivos operacionais e relatórios quando seus diretórios forem definidos. Não ignorar todos os `.txt` ou `.csv`. O `.gitignore` não remove do rastreamento arquivos já commitados.

## Branches

- `main`: branch principal existente.
- `Develop`: branch de integração existente.

O fluxo de branches de tarefa, revisão e integração seguirá o acordo da equipe. Registrar aqui seus detalhes antes de concluir a TK03.

## Checklist individual

- [ ] Aceitar o convite e confirmar acesso de escrita.
- [ ] Clonar o projeto e acessar `Develop`.
- [ ] Verificar Git e GCC e registrar a versão do compilador.
- [ ] Compilar e executar a versão inicial quando estiver disponível.

A conclusão da TK03 depende das confirmações dos quatro integrantes, da escolha final do padrão C, do registro do fluxo acordado e da validação dos comandos com o código inicial.

