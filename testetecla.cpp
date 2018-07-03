#include <stdlib.h>
#include <stdio.h>
#include <playAPC/playapc.h>
#include <math.h>
int main(){
    int apertou,i=1,quad,retangulo;
    Ponto p,p1;
    float a,base = 10,altura = 15,b = 15,c = 10;
    p.x = -5;p.y = -5;

    AbreJanela(400, 400, "hue");

    retangulo = CriaGrupo();
    p1.x = -100;p1.y = 60;
    retangulo = CriaRetangulo(base,altura,p1);
    Pintar(0,0,255);

    quad = CriaGrupo();
    CriaRetangulo(b,c,p);
    Pintar(0,255,0);
    Desenha1Frame();

    apertou = 0;



    while(i){
        p1.x++;
        Move(p1,retangulo);
        Desenha1Frame();
        if(p1.x == 106)
            p1.x = -106;

        if (ApertouTecla(GLFW_KEY_UP))
            p.y+=2;
        else if(ApertouTecla(GLFW_KEY_DOWN))
            p.y-=2;
        Move(p,quad);

        //b eh a base do retangulo galinha e c a altura
        a = sqrt(pow(b/2,2) + pow(c/2,2));
        //base e altura se referem ao carro/caminhao

        if (((pow(p1.x-p.x,2)/pow(a,2))+(pow(p1.y-p.y,2)/pow(b,2))<=1)||//esq baixo
            ((pow(p1.x-p.x+(base/2),2)/pow(a,2))+(pow(p1.y-p.y,2)/pow(b,2))<=1)||//dir baixo
            ((pow(p1.x-p.x,2)/pow(a,2))+(pow(p1.y-p.y+(altura/2),2)/pow(b,2))<=1)||//esq cima
            ((pow(p1.x-p.x+(base/2),2)/pow(a,2))+(pow(p1.y-p.y+(altura/2),2)/pow(b,2))<=1))//dir cima
        {
            p.x = -100;p.y = -100;
            CriaQuadrado(200,p);
            Pintar(255,0,0);
            i = 0;
        }
        Desenha1Frame();
    }


    MostraPlanoCartesiano(10);


    Desenha();
    return 0;
}
