#include <playAPC/playapc.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
	Ponto inicio1;
	int i, q = 0, galinha_grupo1, galinha_grupo0, galinha, galinha0;

    AbreJanela(500, 500, "Mov 2 frames");
    PintarFundo(255, 255, 255);

    galinha = AbreImagem("galinha.png");
    galinha0 = AbreImagem("galinha0.png");

    inicio1.x = 0; inicio1.y = 0;
    galinha_grupo1 = CriaGrupo();
    CriaRetangulo(13, 8, inicio1);
    Pintar(252, 252, 104);
    CriaRetangulo(13, 8, inicio1);
    Pintar(255, 255, 255);

    while(i){
    	if (ApertouTecla(GLFW_KEY_UP)){
            inicio1.y += 5;
            if (q%2 == 0){
    			AssociaImagem(galinha0);
				Move(inicio1, galinha_grupo1);
        		Desenha1Frame();
            } 
            if (q%2 == 1){	            
			    AssociaImagem(galinha);
    			Move(inicio1, galinha_grupo1);
        		Desenha1Frame();
			}
			q++;
        } else if (ApertouTecla(GLFW_KEY_DOWN)){
            inicio1.y -= 5;
        }
        Desenha1Frame();
    }

	Desenha();
	return 0;
}
