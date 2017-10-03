#include <stdio.h>
#include <stdlib.h>

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

void htmlCurriculo (char *nome) {  //criação do arquivo e HTML
	
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
						fputs (nome, curriculo);
					fputs("</h1><br>",curriculo);
					fputs("<div class='cabecalho'>",curriculo);
						fputs("<img src='http://cdn2.hubspot.net/hubfs/1415475/blog-files/foto-3X4-img-dest.jpg'>",curriculo);
						fputs("<div class='divisao'></div>",curriculo);
						fputs("<h3>",curriculo);
							fputs("ENDERECO",curriculo);
							fputs(" &nbsp; ",curriculo);
							fputs("NUMERO",curriculo);
							fputs(" &nbsp; ",curriculo);
							fputs("CIDADE",curriculo);
						fputs("</h3>",curriculo);
						fputs("<h3>",curriculo);
							fputs("EMAIL",curriculo);
						fputs("</h3>",curriculo);
						fputs("<h3>",curriculo);
							fputs("TELEFONE",curriculo);					
						fputs("</h3>",curriculo);
						fputs("<h3>",curriculo);
							fputs("SITUAÇAO",curriculo);
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
	
	char nome[20];
	
	printf("Digite seu nome:  ");
	gets(nome);
	
	htmlCurriculo(nome);
	system("curriculo.html");
	
	
}








