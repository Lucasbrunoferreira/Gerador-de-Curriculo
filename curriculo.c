#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

void configuracoes () {
	
	setlocale(LC_ALL,"Portuguese");
	system("color 3f");	
}

void boasVindas () {
		
	printf("\n\n\n\n\n\n \t\t\t\t\t Gerador de Curriculos ");
	printf("\n\n\n\n \t\t\t\t\t    Seja Bem Vindo! ");
	printf("\n\n\n\n\n\n\n\n\n\n \t\t Lucas Bruno Ferreira");
	printf("\n\n \t\t Sistemas de Informacao ");
	printf("\n\n \t\t UNIPAM ");
	sleep(4);
	system("cls");
}

typedef struct DadosPessoais {
	
	char nome[15];
	char rua[20];
	char numero[6];
	char cidade [15];
	char telefone[15];
	char email[20];
	char situacao[10];
		
}dados;


char dadosPessoais () {
	
	dados dados;
	
	char confirmar = 'n';
		
	while (confirmar == 'n' || confirmar == 'N' ) {
			
		system("cls");	
			
		printf("\n\n\t\t\t\t\t   DADOS PESSOAIS");
		printf("\n\n\n\n\n\n\t\t\t\tNome Completo: ");
		gets(dados.nome);
		printf("\n\t\t\t\tNome da Rua:  ");
		gets(dados.rua);
		printf("\n\t\t\t\tNumero Residencial::  ");	
		gets(dados.numero);
		printf("\n\t\t\t\tCidade:  ");	
		gets(dados.cidade);
		printf("\n\t\t\t\tTelefone:  ");	
		gets(dados.telefone);
		printf("\n\t\t\t\tE-mail:  ");	
		gets(dados.email);
		printf("\n\t\t\t\tRelacionamento:  ");	
		gets(dados.situacao);
			
		printf("\n\t\t\t\tDeseja confirmar seus Dados? :    S - Sim   ou   N - NAO ");
		scanf("%c",&confirmar);
				
	}
	
}

void folhaEstilo (FILE *curriculo) {  //CSS

	fputs("<style>",curriculo);
		fputs("body { font-family: Georgia; color: #444; } ",curriculo);
		fputs("#folha { padding: 10px 80px; margin: 80px auto; background: #f5f5f5; border: solid #666; border-width: 8px 0 2px 0; } ",curriculo);
		fputs(".divisao { margin-bottom: 2em; padding-bottom: 2em; border-bottom: 1px solid #ccc; }",curriculo);
		fputs("#nome{ font-family: Georgia; color: #444; font-size: 2em !important; text-align:center; margin-top: 14px;} ",curriculo);
		fputs(".cabecalho{ text-align: right;} ",curriculo);
		fputs("img{height: 90px; float: left; margin: 0px 10px 10px 0; max-width: 180px; padding-top: 32px;}",curriculo);
	fputs("</style>",curriculo);

}

void htmlCurriculo () {  //criação do arquivo HTML
	
	dados dados;
	
	FILE *curriculo;
	
	curriculo = fopen ("curriculo.html","w");
		
	// ***** INDENTAÇÂO FOI APLICADA DE ACORDO COM O PADRAO HTML ! *****
		
	fputs("<!DOCTYPE html>",curriculo);
	
	fputs("<html lang='pt-br'>",curriculo);
		fputs("<head>",curriculo);
			fputs("<meta http-equiv='Content-Language' content='pt-br'>",curriculo);
			fputs("<title>Meu Curriculo</title>",curriculo);
			fputs("<link rel='stylesheet' type='text/css' href='http://yui.yahooapis.com/2.7.0/build/reset-fonts-grids/reset-fonts-grids.css' />",curriculo);			
			folhaEstilo(curriculo);   //Funcao que chama o CSS
		fputs("</head>",curriculo);	
		fputs("<body>",curriculo);
			fputs("<div id='doc2'>",curriculo);
				fputs("<div id='folha'>",curriculo);
					fputs("<h1 id='nome'>",curriculo);
						fputs (dados.nome, curriculo);
					fputs("</h1><br>",curriculo);
					fputs("<div class='cabecalho'>",curriculo);
						fputs("<img src='http://cdn2.hubspot.net/hubfs/1415475/blog-files/foto-3X4-img-dest.jpg'>",curriculo);
						fputs("<div class='divisao'></div>",curriculo);
						fputs("<h3>",curriculo);
							fputs(dados.rua,curriculo);
							fputs(" &nbsp; ",curriculo);
							fputs(dados.numero,curriculo);
							fputs(" &nbsp; ",curriculo);
							fputs(dados.cidade,curriculo);
						fputs("</h3>",curriculo);
						fputs("<h3>",curriculo);
							fputs(dados.email,curriculo);
						fputs("</h3>",curriculo);
						fputs("<h3>",curriculo);
							fputs(dados.telefone,curriculo);					
						fputs("</h3>",curriculo);
						fputs("<h3>",curriculo);
							fputs(dados.situacao,curriculo);
						fputs("</h3>",curriculo);
					fputs("</div>",curriculo);						
					fputs("<div class='divisao'></div>",curriculo);
					fputs("<div class='divisao'>",curriculo);
						fputs("<h2><b>OBJETIVO PROFISSIONAL</b></h2><br>",curriculo);
						fputs("<li> &#9656;",curriculo);
							fputs("OBJETIVO",curriculo);
						fputs("</li>",curriculo);
					fputs("</div>",curriculo);
					fputs("<div class='divisao'>",curriculo);
						fputs("<h2><b>HABILIDADES</b></h2><br>",curriculo);
						fputs("<ul> <li> &#9656;",curriculo);
							fputs("HABILIDADES",curriculo);
						fputs("</li></ul>",curriculo);
					fputs("</div>",curriculo);
					fputs("<div class='divisao'>",curriculo);
						fputs("<h2><b>EXPERIENCIA PROFISSIONAL</b></h2><br>",curriculo);
						fputs("<ul><li>&#9656;",curriculo);
							fputs("EMPRESA",curriculo);
							fputs("&nbsp; - ",curriculo);
							fputs("PERIODO",curriculo);
							fputs("&nbsp; - ",curriculo);
							fputs("CARGO",curriculo);
						fputs("</li><br><li>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Atribuições:",curriculo);
							fputs("ATRIBUICOES",curriculo);
						fputs("</li> <br><br></ul></div>",curriculo);						
						fputs("<div class='divisao'>",curriculo);
						fputs("<h2><b>FORMACAO ACADEMICA</b></h2><br>",curriculo);						
						fputs("<ul><li>&nbsp; &#9656;",curriculo);
								fputs("FORMACAO",curriculo);
							fputs("</b> &nbsp;-",curriculo);
								fputs("INSTITUICAO",curriculo);
							fputs("&nbsp;-",curriculo);
								fputs("CONCLUSAO",curriculo);
							fputs("</li><br>",curriculo);
						fputs("</ul>",curriculo);
					fputs("</div>",curriculo);
				fputs("</div>",curriculo);												
		fputs("</body>",curriculo);
		fputs("<script type='text/javascript'>",curriculo);
			fputs("alert('Parabéns! Seu curriculo foi gerado com sucesso! ')",curriculo);
		fputs("</script>",curriculo);
	fputs("</html>",curriculo);

	fclose(curriculo);
	
}

main(){
	
	configuracoes();
	boasVindas();	
	dadosPessoais();
	htmlCurriculo();
	system("curriculo.html");
	
	system("PAUSE>NUL");
}








