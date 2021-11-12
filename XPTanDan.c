//Autores: Daniel Caetano de Souza Ferreira e Taynã Souza Malaquias.

#include <stdio.h>
#include <locale.h>

int entradaUsuario;

void abertura()
{
    printf("\nAlunos: Daniel Caetano de Souza Ferreira e Taynã Souza Malaquias\n\n\n");
    printf("/**************************/\n");
    printf("Bem vindo ao TanDan Sistemas!\n");
    printf("/**************************/\n\n");
    printf("/**************************/\n");
    printf("/* ESCOLHA O SEU MENU '-' */\n");
    printf("/**************************/\n\n");


    
}
int menu()
{
    printf("Qual operação deseja realizar? Digite o número de sua escolha: \n");
    printf("[1] - Encontre o número maior entre 3 opções! \n");   
    printf("[2] - Descubra a velocidade de um carro que percorre 10 metros em 30 minutos, no padrão S.I.! \n");   
    printf("[3] - Escolha um número para saber qual é o seu fatorial! \n"); 
    printf("[4] - Saiba qual o valor será pago por João, com juros e correções! \n"); 
    printf("[5] - Faça a reordenação de um vetor, em ordem crescente! \n"); 
    printf("[6] - Descubra qual o volume de um Silo de 15x30 metros! \n"); 
    printf("[7] - Para sair do programa! \n"); 

    scanf("%d", &entradaUsuario);
}
void encontraMaior(){
    int numero[3];
    int numeroMaior;
        printf("Digite 3 numeros: \n");

    for(int i =0; i<3;i++){

        scanf(" %d" , &numero[i]);
    }
        for(int i =0; i<3;i++){

        if(numero[i]>numero[i+1]){
            numeroMaior=numero[i];
        }
    }
    printf("\nNumero Maior: %d", numeroMaior);
}
int velocidadeSI()
    {
        
        int metrosPercorridos = 10;
        int qtdMinutos = 30;
        int segundos = 60;
        int segundosGastos = qtdMinutos*segundos;
        float resultado = metrosPercorridos/(float)segundosGastos;
        

        printf("Um carro que percorre %d metros a cada %d minutos, terá a velocidade de %f metros/segundo, considerando o padrão S.I (Sistema Internacional)\n", metrosPercorridos, qtdMinutos, resultado);


    }

int fatorial()
{

    int numerofatorial;
    printf("Qual o número você deseja saber o fatorial? *Digite o número desejado:\n");
    scanf("%d", &numerofatorial);
    

    int fatorial = 1;

    for(int i = 1; i <= 5; i++)
    {
        fatorial *= i;
    }

    printf("O número fatorial de %d (%d!), é %d. \n", numerofatorial, numerofatorial, fatorial);

}
void calculaJuros(){
    float valorEmprestimo;
    float juros;
    float qtdDiasJuros;
    float emprestimoFloat;
    int qtdMes;
    int qtdDias;
    char atrasado;

    printf("\nDigite o valor do emprestimo.");
    scanf("%f", &valorEmprestimo);
    juros=valorEmprestimo*0.08;

    printf("\nValor emprestimo: %.2f", valorEmprestimo);
    printf("\nValor Juros: %.2f", juros);

    printf("\nEsta em atraso? digite a tecla (S) para sim ou (N) para nao!");
    scanf(" %c", &atrasado);

    if((atrasado == 's') || (atrasado == 'S'))
    {
        printf("\nQuantidade de dias em atraso?");
        scanf(" %d", &qtdDias);
        qtdMes=qtdDias/30;
        qtdDias=qtdDias % 30;
        qtdDiasJuros=qtdDias*0.33;
        juros= (juros*qtdMes) + qtdDiasJuros;
        valorEmprestimo= valorEmprestimo+((float)juros);
        
        
    }
    else if((atrasado ==  'n') || atrasado ==  ('N')){
        valorEmprestimo=valorEmprestimo+(float)juros;
        


    } else{
        printf("\nComando invalido");
    }
    printf("\nValor emprestimo: %.2f", valorEmprestimo);
}
void ordenaCrescente(){
    int aux=0;
    int numero[5];
    printf("Digite os numeros para ordenacao crescente:\n");

    for(int i =0; i<5;i++){

        scanf(" %d" , &numero[i]);
    }
    printf("\nNumero digitado: ");
    for(int i=0; i<5;i++){
       printf("|%d|", numero[i]);
       for(int j=0; j<5;j++)
       {
             if( numero[i] < numero[j] ){
            //printf("|%d|", numero[i]);
            aux=numero[i];
            numero[i]=numero[j];
            numero[j]=aux;
            }
       }
    }
    printf("\nNumero ordenado: ");

    for(int i=0; i<5;i++)
    {
        printf("|%d|", numero[i]);
    }

}
int volume()
{
    int raio = 30/2;
    int altura = 15;
    float pi = 3.1415;

    int volume = pi * (raio*raio) * altura;
    printf("O volume de um silo de 15 metros de altura e base de calculo (pi*(15²)), é %d !", volume);


}


int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int executar =1;
    while (executar)
    {
        



    
    

    abertura();
    menu();
    

    switch (entradaUsuario)
    {
    case 1:
        encontraMaior();
        break;

    case 2:
        velocidadeSI();
        
        break;

    case 3:
        fatorial();
        break;
    case 4:
        calculaJuros();
        break;
    case 5:
        ordenaCrescente();
        break;
    case 6:
        volume();
        break;        
    case 7:
        printf("Obrigada por utilizar o TanDan sistemas!");
        executar = 0;
        break;

    default:
        printf("\nFaça uma entrada de um número válido! \n");
       
        break;
    }

    

    }
    
}