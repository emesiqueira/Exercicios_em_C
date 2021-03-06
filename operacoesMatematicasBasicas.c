#include <stdio.h>
#include <math.h>

int operacoesMatematicasBasicas() {

int subtracao();
int multiplicacao();
int divisao();
int media();
int desconto();
int salarioComissionado();
int peso();
int idade();
int contaSalario();
int hipotenusa();
int volume();
int temperatura();
int iluminacao();

int opcao;

do{
  printf("\nMENU");
printf("\n1- Subtracao");
printf("\n2- Multiplicaçao");
printf("\n3- Divisão");
printf("\n4- Média");
printf("\n5- Desconto");
printf("\n6- Salário Comissionado");
printf("\n7- Peso");
printf("\n8- Idade");
printf("\n9- Conta Salário");
printf("\n10- Hipotenusa");
printf("\n11- Volume");
printf("\n12- Temperatura");
printf("\n13- Ilumincação\n\n");

printf("\n\nDigite a opção desejada ou zero para sair: ");

scanf("%d", &opcao);

switch(opcao){
    case 0:
printf("\nSaindo...");
  break;
  case 1:
 subtracao();
  break;
  case 2:
multiplicacao();
  break;
case 3:
     divisao();
  break;
    case 4:
    media();
  break;
    case 5:
     desconto();
  break;
    case 6:
     salarioComissionado();
  break;
    case 7:
peso();
  break;
    case 8:
idade();
  break;
    case 9:
     contaSalario();
  break;
    case 10:
 hipotenusa();
  break;
      case 11:
 volume();
  break;
    case 12:
 temperatura();
  break;
      case 13:
 iluminacao();
  break;
  default:
  printf("\nNúmero digitado inválido.\n\n");
  break;
}
} while(opcao!=0);
return 0;
}

int subtracao(){
int numero1, numero2;
printf("\n\nDigite dois números: ");
scanf("%d %d", &numero1, &numero2);
printf("A subtração do primeiro número pelo segundo é %d", numero1-numero2);
 return 0;
 }


int multiplicacao() {
int numero1, numero2, numero3;
printf("Digite três números:\n");
scanf("%d %d %d", &numero1, &numero2, &numero3);
printf("O multiplicação dos três números é %d", numero1*numero2*numero3);
return 0;
}

int divisao() {
int numero1, numero2;
printf("Digite o primeiro número:\n");
scanf("%d", &numero1);
printf("Digite o segundo número (não pode ser zero):\n");
scanf("%d", &numero2);
printf("O divisão do primeiro número pelo segundo é %d", numero1/numero2);
return 0;
}

int media() {
float primeiranota, segundanota;
printf("Digite a primeira nota: \n");
scanf("%f", &primeiranota);
printf("Digite a segunda nota: \n");
scanf("%f", &segundanota);
printf("A média ponderada das notas é %.2f", ((primeiranota*2)+(segundanota*3))/5);
return 0;
}

int desconto() {
float preco;
printf("Digite o preço de um produto: \n");
scanf("%f", &preco);
printf("O preço do produto com desconto é %.2f", preco-(preco*0.1));
return 0;
}

int salarioComissionado() {
float salario, vendas;
printf("Digite o salário do funcionário: \n");
scanf("%f", &salario);
printf("Digite o valor total das vendas do funcionário: \n");
scanf("%f", &vendas);
printf("O salário com comissão de 4%% é R$ %.2f. \n", vendas*0.04+salario);
return 0;
}

int peso() {
float pesoatual;
printf("Digite o peso atual: \n");
scanf("%f", &pesoatual);
printf("O novo peso caso engorde 15%% é %.2f. \n", pesoatual*1.15);
printf("O novo peso caso engorde 20%% é %.2f.\n", pesoatual*1.20);
return 0;
}

int idade() {
int anodenascimento, anoatual;
printf("Digite o ano de nascimento da pessoa: \n");
scanf("%d", &anodenascimento);
printf("Digite o ano atual: \n");
scanf("%d", &anoatual);
printf("A idade da pessoas em dias é: %d\n",(anoatual-anodenascimento)*365);
printf("A idade da pessoas em semanas é: %d\n",(anoatual-anodenascimento)*52);
printf("A idade da pessoas em meses é: %d\n", (anoatual-anodenascimento)*12);
printf("A idade da pessoas em anos é: %d\n", anoatual-anodenascimento);
return 0;
}

int contaSalario() {
float salario, conta1, conta2, atraso;
printf("Digite o valor do salário: \n");
scanf("%f", &salario);
printf("Digite o valor da primeira conta: \n");
scanf("%f", &conta1);
printf("Digite o valor da segunda conta: \n");
scanf("%f", &conta2);
atraso=(conta1*1.02)+(conta2*1.02);
printf("O valor que restará de salário é: R%%%.2f", salario-atraso);
return 0;
}

int hipotenusa() {
double cateto1, cateto2, potencia;
printf("Digite os catetos do triângulo: \n");
scanf("%lf %lf", &cateto1, &cateto2);
potencia=pow(cateto1, 2) + pow(cateto2,2);
printf("O valor da hipotenusa é %.2f \n", sqrt(potencia));
return 0;
}

int volume() {
float raio;
printf("Digite o raio de uma esfera: \n");
scanf("%f", &raio);
printf("O comprimento da esfera é: %.2f \n", 2*3.14*raio);
printf("A área de esfera é: %.2f \n", 4*3.14*raio*raio);
printf("O volume da esfera é: %.2f \n", (4*3.14*raio*raio*raio)/3);
return 0;
}

int temperatura() {
float celsius;
printf("Digite a temperatura em Celsius: \n");
scanf("%f", &celsius);
printf("A temperatura em Fahrenheit é: %.0f \n", 1.8*celsius+32);
return 0;
}

int iluminacao() {
float comprimento, largura;
printf("Digite o comprimento do cômodo (metros): \n");
scanf("%f", &comprimento);
printf("Digite a largura do cômodo (metros): \n");
scanf("%f", &largura);
printf("A área do cômodo é: %.2f m² \n", comprimento*largura);
printf("A potência que deverá ser utilizada: %0.f W", comprimento*largura*18);
return 0;
}
