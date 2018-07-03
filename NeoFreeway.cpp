#include <playAPC/playapc.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define MAX 100

int main() {
    int i = 0, j = 1, enter = 0, contador = 0, cont1 = 0, cont2 = 0, q = 0, tempo_pow = 0, k = 1, l = 1, y, w;
    int galinha_grupo1, carro_grupo_0, caminhao_grupo_0, carro_grupo_1, caminhao_grupo_1, carro_grupo_2,
    caminhao_grupo_2, carro_grupo_3, caminhao_grupo_3, carro_grupo_4, caminhao_grupo_4, carro_grupo_5,
    caminhao_grupo_5, carro_grupo_6, caminhao_grupo_6, carro_grupo_7, caminhao_grupo_7, carro_grupo_8,
    caminhao_grupo_8, carro_grupo_9, caminhao_grupo_9, enter_grupo, ghost; //grupos
    int carro_0, carro_1, carro_2, carro_3, carro_4, carro_5, carro_6, carro_7, carro_8, carro_9, caminhao_0,
    caminhao_1, caminhao_2, caminhao_3, caminhao_4, caminhao_5, caminhao_6, caminhao_7, caminhao_8, caminhao_9;
    int fundo, carro, carro_invertido,caminhao, caminhao_invertido, galinha, start, power_up,galinha_morta,img_enter; //imagens
    int vel0, vel1, vel2, vel3, vel4, vel5, vel6, vel7, vel8, vel9;
    int movel0, movel1, movel2, movel3, movel4, movel5, movel6, movel7, movel8, movel9;
    int galinha_grupo2, win1, win2, zero, um, dois, tres, vida, nvidas1 = 3, nvidas2 = 3;
    int circulos[MAX], grupos[MAX];
    Ponto canto, inicio1, galcentro1, p_enter, pista_0, pista_1, pista_2, pista_3, pista_4, pista_5, pista_6, pista_7, pista_8, pista_9;
    Ponto inicio2, galcentro2;
    Ponto pvida1, pvida2, pvida3, pvida4, pvida5, pvida6, pscore1, pscore2, pwin, ppower1, ppower2;
    Ponto p, p1;
    int power_grupo, rand_power, vpower[10] = {-79, -62.5, -46, -30.1, -14, 66, 49.5, 33.5, 17.5, 2};

    srand(time(NULL));

    //§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§

    AbreJanela(640,444,"Freeway");

    start = AbreImagem("./start.png");
    fundo = AbreImagem("./pista.png");
    img_enter = AbreImagem("./enter.png"); 
    carro = AbreImagem("./carrinho.png");
    carro_invertido = AbreImagem("./carrinho_invertido.png");
    caminhao = AbreImagem("./caminhao.png");
    caminhao_invertido = AbreImagem("./caminhao_invertido.png");
    galinha = AbreImagem("./galinha.png");
    galinha_morta = AbreImagem("./galinha_morta.png");
    vida = AbreImagem("./vida.png");
    zero = AbreImagem("./zero.png");
    um = AbreImagem("./um.png"); 
    dois = AbreImagem("./dois.png"); 
    tres = AbreImagem("./tres.png"); 
    win1 = AbreImagem("./win1.png");
    win2 = AbreImagem("./win2.png");
    power_up = AbreImagem("./power_up.png");

    //§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§

    canto.x=-145; canto.y=-100; //menu inicial
    CriaRetangulo(300, 200, canto);
    Pintar(255, 255, 255);
    AssociaImagem(start);

    p.x = 0; p.y = 0;
    for (y = 0; y < MAX; y++){ //abertura
        grupos[y] = CriaGrupo();
        circulos[y] = CriaCircunferencia(1+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(3+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(5+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(7+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(9+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(11+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(13+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(15+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(17+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(19+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(21+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(23+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(25+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(27+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(29+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(31+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(33+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(35+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(37+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(39+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(41+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(43+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(45+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(47+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(49+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(51+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(53+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(55+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(57+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(59+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(61+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(63+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(65+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(67+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(69+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(71+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(73+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(75+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(77+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(79+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(81+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(83+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(85+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(87+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(89+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(91+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(93+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(95+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(97+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(99+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(101+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(103+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(105+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(107+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(109+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(111+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(113+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(115+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(117+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(119+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(121+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(123+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(125+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(127+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(129+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(131+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(133+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(135+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(137+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(139+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(141+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(143+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(145+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(147+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(149+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(151+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(153+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(155+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(157+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(159+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(161+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(163+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(165+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(167+(1*y), p);
        Grafite(10);
        circulos[y] = CriaCircunferencia(169+(1*y), p);
        Grafite(10);
        Desenha1Frame();
        for (w = 0; w < MAX/4; w++)
            printf("hue\n");
        ApagaGrupo(grupos[y]);
    }

    while (enter == 0){ //enter piscando
        if (contador >= i*30 && contador < (i+1)*30){
            enter_grupo = CriaGrupo();
            p_enter.x = -27,5; p_enter.y = -63;
            CriaRetangulo(55, 15, p_enter);
            Pintar(255, 255, 255);
            AssociaImagem(img_enter);
            ghost = CriaGrupo();
            Desenha1Frame();
            i+=2;
        }
        if (contador == j*30){
            ApagaGrupo(enter_grupo);
            j+=2;
        }
        Desenha1Frame();
        enter = ApertouTecla(GLFW_KEY_ENTER);
        contador++;
    }

    //§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§

    canto.x=-145; canto.y=-100; //pista de carros
    CriaRetangulo(300, 200, canto);
    Pintar(255, 255, 255);
    AssociaImagem(fundo);

    pvida1.x = -60;pvida1.y = 90; //tres vidas da galinha1
    CriaQuadrado(10, pvida1);
    Pintar(255, 255, 255);
    AssociaImagem(vida);
    pvida2.x = -50;pvida2.y = 90;
    CriaQuadrado(10, pvida2);
    Pintar(255, 255, 255);
    AssociaImagem(vida);
    pvida3.x = -40;pvida3.y = 90;
    CriaQuadrado(10, pvida3);
    Pintar(255, 255, 255);
    AssociaImagem(vida);

    pvida4.x = 40;pvida4.y = 90; //tres vidas da galinha2
    CriaQuadrado(10, pvida4);
    Pintar(255, 255, 255);
    AssociaImagem(vida);
    pvida5.x = 50;pvida5.y = 90;
    CriaQuadrado(10, pvida5);
    Pintar(255, 255, 255);
    AssociaImagem(vida);
    pvida6.x = 60;pvida6.y = 90;
    CriaQuadrado(10, pvida6);
    Pintar(255, 255, 255);
    AssociaImagem(vida);

    pscore1.x = -100; pscore1.y = 90;  //score das duas galinhas
    CriaRetangulo(5, 10, pscore1);
    Pintar(255, 255, 255);
    AssociaImagem(zero);
    pscore2.x = 100; pscore2.y = 90; 
    CriaRetangulo(5, 10, pscore2);
    Pintar(255, 255, 255);
    AssociaImagem(zero);

    inicio1.x = -60; inicio1.y = -93.5; //galinha1
    galcentro1.x = inicio1.x + 6.5;galcentro1.y = inicio1.y + 4;
    galinha_grupo1 = CriaGrupo();
    CriaRetangulo(13, 8, inicio1);
    Pintar(252, 252, 104);
    CriaRetangulo(13, 8, inicio1);
    Pintar(255, 255, 255);
    AssociaImagem(galinha);

    inicio2.x = 60; inicio2.y = -93.5; //galinha2
    galcentro2.x = inicio2.x + 6.5;galcentro2.y = inicio2.y + 4;
    galinha_grupo2 = CriaGrupo();
    CriaRetangulo(13, 8, inicio2);
    Pintar(252, 252, 104);
    CriaRetangulo(13, 8, inicio2);
    Pintar(255, 255, 255);
    AssociaImagem(galinha);

    //§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§

    carro_grupo_0 = CriaGrupo(); //todos os carros e caminhoes sao criados antes de tudo
    pista_0.x =-169; pista_0.y=-79;
    carro_0 = CriaRetangulo(24, 13, pista_0);
    Pintar(rand()%256,rand()%256,rand()%256);
    CriaRetangulo(24, 13, pista_0);
    Pintar(255, 255, 255);
    AssociaImagem(carro);
    caminhao_grupo_0 = CriaGrupo();
    pista_0.x =-190.5; pista_0.y=-79;
    caminhao_0 = CriaRetangulo(45.5, 13, pista_0);
    Pintar(rand()%256,rand()%256,rand()%256);
    CriaRetangulo(45.5, 13, pista_0);
    Pintar(255, 255, 255);
    AssociaImagem(caminhao);

    carro_grupo_1 = CriaGrupo();
    pista_1.x =-169; pista_1.y=-62.5;
    carro_1 = CriaRetangulo(24, 13, pista_1);
    Pintar(rand()%256,rand()%256,rand()%256);
    CriaRetangulo(24, 13, pista_1);
    Pintar(255, 255, 255);
    AssociaImagem(carro);
    caminhao_grupo_1 = CriaGrupo();
    pista_1.x =-190.5; pista_1.y=-62.5;
    caminhao_1 = CriaRetangulo(45.5, 13, pista_1);
    Pintar(rand()%256,rand()%256,rand()%256);
    CriaRetangulo(45.5, 13, pista_1);
    Pintar(255, 255, 255);
    AssociaImagem(caminhao);

    carro_grupo_2 = CriaGrupo();
    pista_2.x =-169; pista_2.y=-46;
    carro_2 = CriaRetangulo(24, 13, pista_2);
    Pintar(rand()%256,rand()%256,rand()%256);
    CriaRetangulo(24, 13, pista_2);
    Pintar(255, 255, 255);
    AssociaImagem(carro);
    caminhao_grupo_2 = CriaGrupo();
    pista_2.x =-190.5; pista_2.y=-46;
    caminhao_2 = CriaRetangulo(45.5, 13, pista_2);
    Pintar(rand()%256,rand()%256,rand()%256);
    CriaRetangulo(45.5, 13, pista_2);
    Pintar(255, 255, 255);
    AssociaImagem(caminhao);

    carro_grupo_3 = CriaGrupo();
    pista_3.x =-169; pista_3.y=-30.1;
    carro_3 = CriaRetangulo(24, 13, pista_3);
    Pintar(rand()%256,rand()%256,rand()%256);
    CriaRetangulo(24, 13, pista_3);
    Pintar(255, 255, 255);
    AssociaImagem(carro);
    caminhao_grupo_3 = CriaGrupo();
    pista_3.x =-190.5; pista_3.y=-30.1;
    caminhao_3 = CriaRetangulo(45.5, 13, pista_3);
    Pintar(rand()%256,rand()%256,rand()%256);
    CriaRetangulo(45.5, 13, pista_3);
    Pintar(255, 255, 255);
    AssociaImagem(caminhao);

    carro_grupo_4 = CriaGrupo();
    pista_4.x =-169; pista_4.y=-14;
    carro_4 = CriaRetangulo(24, 13, pista_4);
    CriaRetangulo(24, 13, pista_4);
    Pintar(255, 255, 255);
    AssociaImagem(carro);
    caminhao_grupo_4 = CriaGrupo();
    pista_4.x =-190.5; pista_4.y=-14;
    caminhao_4 = CriaRetangulo(45.5, 13, pista_4);
    Pintar(rand()%256,rand()%256,rand()%256);
    CriaRetangulo(45.5, 13, pista_4);
    Pintar(255, 255, 255);
    AssociaImagem(caminhao);

    carro_grupo_5 = CriaGrupo();
    pista_5.x =145; pista_5.y=66;
    carro_5 = CriaRetangulo(24, 13, pista_5);
    Pintar(rand()%256,rand()%256,rand()%256);
    CriaRetangulo(24, 13, pista_5);
    Pintar(255, 255, 255);
    AssociaImagem(carro_invertido);
    caminhao_grupo_5 = CriaGrupo();
    pista_5.x =145; pista_5.y=66;
    caminhao_5 = CriaRetangulo(45.5, 13, pista_5);
    Pintar(rand()%256,rand()%256,rand()%256);
    CriaRetangulo(45.5, 13, pista_5);
    Pintar(255, 255, 255);
    AssociaImagem(caminhao_invertido);

    carro_grupo_6 = CriaGrupo();
    pista_6.x =145; pista_6.y=49.5;
    carro_6 = CriaRetangulo(24, 13, pista_6);
    Pintar(rand()%256,rand()%256,rand()%256);
    CriaRetangulo(24, 13, pista_6);
    Pintar(255, 255, 255);
    AssociaImagem(carro_invertido);
    caminhao_grupo_6 = CriaGrupo();
    pista_6.x =145; pista_6.y=49.5;
    caminhao_6 = CriaRetangulo(45.5, 13, pista_6);
    Pintar(rand()%256,rand()%256,rand()%256);
    CriaRetangulo(45.5, 13, pista_6);
    Pintar(255, 255, 255);
    AssociaImagem(caminhao_invertido);

    carro_grupo_7 = CriaGrupo();
    pista_7.x =145; pista_7.y=33.5;
    carro_7 = CriaRetangulo(24, 13, pista_7);
    Pintar(rand()%256,rand()%256,rand()%256);
    CriaRetangulo(24, 13, pista_7);
    Pintar(255, 255, 255);
    AssociaImagem(carro_invertido);
    caminhao_grupo_7 = CriaGrupo();
    pista_7.x =145; pista_7.y=33.5;
    caminhao_7 = CriaRetangulo(45.5, 13, pista_7);
    Pintar(rand()%256,rand()%256,rand()%256);
    CriaRetangulo(45.5, 13, pista_7);
    Pintar(255, 255, 255);
    AssociaImagem(caminhao_invertido);

    carro_grupo_8 = CriaGrupo();
    pista_8.x =145; pista_8.y=17.5;
    carro_8 = CriaRetangulo(24, 13, pista_8);
    Pintar(rand()%256,rand()%256,rand()%256);
    CriaRetangulo(24, 13, pista_8);
    Pintar(255, 255, 255);
    AssociaImagem(carro_invertido);
    caminhao_grupo_8 = CriaGrupo();
    pista_8.x =145; pista_8.y=17.5;
    caminhao_8 = CriaRetangulo(45.5, 13, pista_8);
    Pintar(rand()%256,rand()%256,rand()%256);
    CriaRetangulo(45.5, 13, pista_8);
    Pintar(255, 255, 255);
    AssociaImagem(caminhao_invertido);

    carro_grupo_9 = CriaGrupo();
    pista_9.x =145; pista_9.y=2;
    carro_9 = CriaRetangulo(24, 13, pista_9);
    Pintar(rand()%256,rand()%256,rand()%256);
    CriaRetangulo(24, 13, pista_9);
    Pintar(255, 255, 255);
    AssociaImagem(carro_invertido);
    caminhao_grupo_9 = CriaGrupo();
    pista_9.x =145; pista_9.y=2;
    caminhao_9 = CriaRetangulo(45.5, 13, pista_9);
    Pintar(rand()%256,rand()%256,rand()%256);
    CriaRetangulo(45.5, 13, pista_9);
    Pintar(255, 255, 255);
    AssociaImagem(caminhao_invertido);

    CriaGrupo();

    //§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§

    vel0 = (rand()%3)+2; //velocidades iniciais
    vel1 = (rand()%3)+2;
    vel2 = (rand()%3)+2;
    vel3 = (rand()%3)+2;
    vel4 = (rand()%3)+2;
    vel5 = (rand()%3)+2;
    vel6 = (rand()%3)+2;
    vel7 = (rand()%3)+2;
    vel8 = (rand()%3)+2;
    vel9 = (rand()%3)+2;
    //rand_power = rand()%1000;

    while(i){ 
        pista_0.x += vel0; //move os carros
        if(movel0)
            Move(pista_0, caminhao_grupo_0);
        else
            Move(pista_0, carro_grupo_0);

        pista_1.x += vel1;
        if(movel1)
            Move(pista_1, caminhao_grupo_1);
        else
            Move(pista_1, carro_grupo_1);

        pista_2.x += vel2;
        if(movel2)
            Move(pista_2, caminhao_grupo_2);
        else
            Move(pista_2, carro_grupo_2);

        pista_3.x += vel3;
        if(movel3)
            Move(pista_3, caminhao_grupo_3);
        else
            Move(pista_3, carro_grupo_3);

        pista_4.x += vel4;
        if(movel4)
            Move(pista_4, caminhao_grupo_4);
        else
            Move(pista_4, carro_grupo_4);

        pista_5.x -= vel5;
        if(movel5)
            Move(pista_5, caminhao_grupo_5);
        else
            Move(pista_5, carro_grupo_5);

        pista_6.x -= vel6;
        if(movel6)
            Move(pista_6, caminhao_grupo_6);
        else
            Move(pista_6, carro_grupo_6);

        pista_7.x -= vel7;
        if(movel7)
            Move(pista_7, caminhao_grupo_7);
        else
            Move(pista_7, carro_grupo_7);

        pista_8.x -= vel8;
        if(movel8)
            Move(pista_8, caminhao_grupo_8);
        else
            Move(pista_8, carro_grupo_8);

        pista_9.x -= vel9;
        if(movel9)
            Move(pista_9, caminhao_grupo_9);
        else
            Move(pista_9, carro_grupo_9);

    //§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§

        if(pista_0.x>=169){ //reinicia os carros
            pista_0.x = -169;
            vel0 = (rand()%2)+2;
            if(rand()%10<=7){
                movel0 = 0;
                Pintar(rand()%256,rand()%256,rand()%256,RETANGULO,carro_0);
            }else{
                movel0 = 1;
                Pintar(rand()%256,rand()%256,rand()%256,RETANGULO,caminhao_0);
            }
        }
        if(pista_1.x>=169){
            pista_1.x = -169;
            vel1 = (rand()%2)+2;
            if(rand()%10<=7){
                movel1 = 0;
                Pintar(rand()%256,rand()%256,rand()%256,RETANGULO,carro_1);
            }else{
                movel1 = 1;
                Pintar(rand()%256,rand()%256,rand()%256,RETANGULO,caminhao_1);
            }
        }
        if(pista_2.x>=169){
            pista_2.x = -169;
            vel2 = (rand()%2)+2;
            if(rand()%10<=7){
                movel2 = 0;
                Pintar(rand()%256,rand()%256,rand()%256,RETANGULO,carro_2);
            }else{
                movel2 = 1;
                Pintar(rand()%256,rand()%256,rand()%256,RETANGULO,caminhao_2);
            }
        }
        if(pista_3.x>=169){
            pista_3.x = -169;
            vel3 = (rand()%2)+2;
            if(rand()%10<=7){
                movel3 = 0;
                Pintar(rand()%256,rand()%256,rand()%256,RETANGULO,carro_3);
            }else{
                movel3 = 1;
                Pintar(rand()%256,rand()%256,rand()%256,RETANGULO,caminhao_3);
            }
        }
        if(pista_4.x>=169){
            pista_4.x = -169;
            vel4 = (rand()%2)+2;
            if(rand()%10<=7){
                movel4 = 0;
                Pintar(rand()%256,rand()%256,rand()%256,RETANGULO,carro_4);
            }else{
                movel4 = 1;
                Pintar(rand()%256,rand()%256,rand()%256,RETANGULO,caminhao_4);
            }
        }
        if(pista_5.x<=-196){
            pista_5.x = 169;
            vel5 = (rand()%2)+2;
            if(rand()%10<=7){
                movel5 = 0;
                Pintar(rand()%256,rand()%256,rand()%256,RETANGULO,carro_5);
            }else{
                movel5 = 1;
                Pintar(rand()%256,rand()%256,rand()%256,RETANGULO,caminhao_5);
            }
        }
        if(pista_6.x<=-196){
            pista_6.x = 169;
            vel6 = (rand()%2)+2;
            if(rand()%10<=7){
                movel6 = 0;
                Pintar(rand()%256,rand()%256,rand()%256,RETANGULO,carro_6);
            }else{
                movel6 = 1;
                Pintar(rand()%256,rand()%256,rand()%256,RETANGULO,caminhao_6);
            }
        }
        if(pista_7.x<=-196){
            pista_7.x = 169;
            vel7 = (rand()%2)+2;
            if(rand()%10<=7){
                movel7 = 0;
                Pintar(rand()%256,rand()%256,rand()%256,RETANGULO,carro_7);
            }else{
                movel7 = 1;
                Pintar(rand()%256,rand()%256,rand()%256,RETANGULO,caminhao_7);
            }
        }
        if(pista_8.x<=-196){
            pista_8.x = 169;
            vel8 = (rand()%2)+2;
            if(rand()%10<=7){
                movel8 = 0;
                Pintar(rand()%256,rand()%256,rand()%256,RETANGULO,carro_8);
            }else{
                movel8 = 1;
                Pintar(rand()%256,rand()%256,rand()%256,RETANGULO,caminhao_8);
            }
        }
        if(pista_9.x<=-196){
            pista_9.x = 169;
            vel9 = (rand()%2)+2;
            if(rand()%10<=7){
                movel9 = 0;
                Pintar(rand()%256,rand()%256,rand()%256,RETANGULO,carro_9);
            }else{
                movel9 = 1;
                Pintar(rand()%256,rand()%256,rand()%256,RETANGULO,caminhao_9);
            }
        }

    //§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§

        if (nvidas1 == 0 || cont2 == 3){  //decide o vencedor
            nvidas1--;
            cont2++;
            pwin.x = -90;pwin.y = -20;
            CriaRetangulo(180, 40, pwin);
            Pintar(255, 255, 255);
            AssociaImagem(win2);
        } else if (nvidas2 == 0 || cont1 == 3){
            nvidas2--;
            cont1++;
            pwin.x = -90;pwin.y = -20; 
            CriaRetangulo(180, 40, pwin);
            Pintar(255, 255, 255);
            AssociaImagem(win1);
        } else{ //se nao houver vencedor, o player movimenta a galinha
            if (ApertouTecla(GLFW_KEY_UP)){
                inicio1.y += 5;
                galcentro1.y += 5;
            } else if (ApertouTecla(GLFW_KEY_DOWN)){
                inicio1.y -= 5;
                galcentro1.y -= 5;
            }
            if (ApertouTecla(GLFW_KEY_TAB)){
                inicio2.y += 5;
                galcentro2.y += 5;
            } else if (ApertouTecla(GLFW_KEY_CAPS_LOCK)){
                inicio2.y -= 5;
                galcentro2.y -= 5;
            }
        }

        if (inicio1.y >= 90){ //marcador de pontos da galinha1
            if (cont1 == 0){
                inicio1.y = -93.5;
                CriaRetangulo(5, 10, pscore1);
                Pintar(255, 255, 255);
                AssociaImagem(um);
            } else if (cont1 == 1){
                inicio1.y = -93.5;
                CriaRetangulo(5, 10, pscore1);
                Pintar(255, 255, 255);
                AssociaImagem(dois);
            } else if (cont1 == 2){
                inicio1.y = -93.5;
                CriaRetangulo(5, 10, pscore1);
                Pintar(255, 255, 255);
                AssociaImagem(tres);
            }
            cont1++;
        }
        if (inicio2.y >= 90){ //marcador de pontos da galinha2
            if (cont2 == 0){
                inicio2.y = -93.5;
                CriaRetangulo(5, 10, pscore2);
                Pintar(255, 255, 255);
                AssociaImagem(um);
            } else if (cont2 == 1){
                inicio2.y = -93.5;
                CriaRetangulo(5, 10, pscore2);
                Pintar(255, 255, 255);
                AssociaImagem(dois);
            } else if (cont2 == 2){
                inicio2.y = -93.5;
                CriaRetangulo(5, 10, pscore2);
                Pintar(255, 255, 255);
                AssociaImagem(tres);
            }
            cont2++;
        }

    //§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§

        //the great Colisor de Cardrons
        if(( (pow(pista_0.x-galcentro1.x,2))+(pow(pista_0.y-galcentro1.y,2)))<=pow(4,2)||
            ((pow(pista_0.x-galcentro1.x+24,2))+(pow(pista_0.y-galcentro1.y+13,2)))<=pow(4,2)||
            ((pow(pista_0.x-galcentro1.x,2))+(pow(pista_0.y-galcentro1.y+13,2)))<=pow(4,2)||
            ((pow(pista_0.x-galcentro1.x+24,2))+(pow(pista_0.y-galcentro1.y,2)))<=pow(4,2)||
            ((pow(pista_1.x-galcentro1.x+24,2))+(pow(pista_1.y-galcentro1.y+13,2)))<=pow(4,2)||
            ((pow(pista_1.x-galcentro1.x+24,2))+(pow(pista_1.y-galcentro1.y,2)))<=pow(4,2)||
            ((pow(pista_1.x-galcentro1.x,2))+(pow(pista_1.y-galcentro1.y+13,2)))<=pow(4,2)||
            ((pow(pista_1.x-galcentro1.x,2))+(pow(pista_1.y-galcentro1.y,2)))<=pow(4,2)||
            ((pow(pista_2.x-galcentro1.x+24,2))+(pow(pista_2.y-galcentro1.y+13,2)))<=pow(4,2)||
            ((pow(pista_2.x-galcentro1.x+24,2))+(pow(pista_2.y-galcentro1.y,2)))<=pow(4,2)||
            ((pow(pista_2.x-galcentro1.x,2))+(pow(pista_2.y-galcentro1.y+13,2)))<=pow(4,2)||
            ((pow(pista_2.x-galcentro1.x,2))+(pow(pista_2.y-galcentro1.y,2)))<=pow(4,2)||
            ((pow(pista_3.x-galcentro1.x+24,2))+(pow(pista_3.y-galcentro1.y+13,2)))<=pow(4,2)||
            ((pow(pista_3.x-galcentro1.x+24,2))+(pow(pista_3.y-galcentro1.y,2)))<=pow(4,2)||
            ((pow(pista_3.x-galcentro1.x,2))+(pow(pista_3.y-galcentro1.y+13,2)))<=pow(4,2)||
            ((pow(pista_3.x-galcentro1.x,2))+(pow(pista_3.y-galcentro1.y,2)))<=pow(4,2)||
            ((pow(pista_4.x-galcentro1.x+24,2))+(pow(pista_4.y-galcentro1.y+13,2)))<=pow(4,2)||
            ((pow(pista_4.x-galcentro1.x+24,2))+(pow(pista_4.y-galcentro1.y,2)))<=pow(4,2)||
            ((pow(pista_4.x-galcentro1.x,2))+(pow(pista_4.y-galcentro1.y+13,2)))<=pow(4,2)||
            ((pow(pista_4.x-galcentro1.x,2))+(pow(pista_4.y-galcentro1.y,2)))<=pow(4,2)||
            ((pow(pista_5.x-galcentro1.x+24,2))+(pow(pista_5.y-galcentro1.y+13,2)))<=pow(4,2)||
            ((pow(pista_5.x-galcentro1.x+24,2))+(pow(pista_5.y-galcentro1.y,2)))<=pow(4,2)||
            ((pow(pista_5.x-galcentro1.x,2))+(pow(pista_5.y-galcentro1.y+13,2)))<=pow(4,2)||
            ((pow(pista_5.x-galcentro1.x,2))+(pow(pista_5.y-galcentro1.y,2)))<=pow(4,2)||
            ((pow(pista_6.x-galcentro1.x+24,2))+(pow(pista_6.y-galcentro1.y+13,2)))<=pow(4,2)||
            ((pow(pista_6.x-galcentro1.x+24,2))+(pow(pista_6.y-galcentro1.y,2)))<=pow(4,2)||
            ((pow(pista_6.x-galcentro1.x,2))+(pow(pista_6.y-galcentro1.y+13,2)))<=pow(4,2)||
            ((pow(pista_6.x-galcentro1.x,2))+(pow(pista_6.y-galcentro1.y,2)))<=pow(4,2)||
            ((pow(pista_7.x-galcentro1.x+24,2))+(pow(pista_7.y-galcentro1.y+13,2)))<=pow(4,2)||
            ((pow(pista_7.x-galcentro1.x+24,2))+(pow(pista_7.y-galcentro1.y,2)))<=pow(4,2)||
            ((pow(pista_7.x-galcentro1.x,2))+(pow(pista_7.y-galcentro1.y+13,2)))<=pow(4,2)||
            ((pow(pista_7.x-galcentro1.x,2))+(pow(pista_7.y-galcentro1.y,2)))<=pow(4,2)||
            ((pow(pista_8.x-galcentro1.x+24,2))+(pow(pista_8.y-galcentro1.y+13,2)))<=pow(4,2)||
            ((pow(pista_8.x-galcentro1.x+24,2))+(pow(pista_8.y-galcentro1.y,2)))<=pow(4,2)||
            ((pow(pista_8.x-galcentro1.x,2))+(pow(pista_8.y-galcentro1.y+13,2)))<=pow(4,2)||
            ((pow(pista_8.x-galcentro1.x,2))+(pow(pista_8.y-galcentro1.y,2)))<=pow(4,2)||
            ((pow(pista_9.x-galcentro1.x+24,2))+(pow(pista_9.y-galcentro1.y+13,2)))<=pow(4,2)||
            ((pow(pista_9.x-galcentro1.x+24,2))+(pow(pista_9.y-galcentro1.y,2)))<=pow(4,2)||
            ((pow(pista_9.x-galcentro1.x,2))+(pow(pista_9.y-galcentro1.y+13,2)))<=pow(4,2)||
            ((pow(pista_9.x-galcentro1.x,2))+(pow(pista_9.y-galcentro1.y,2)))<=pow(4,2))
        {
            nvidas1--; 
            galcentro1.x = inicio1.x;galcentro1.y = inicio1.y; 
            CriaRetangulo(16, 9.5, galcentro1);
            Pintar(255, 255, 255);
            AssociaImagem(galinha_morta);
            inicio1.y = -93.5; 
            galcentro1.y = inicio1.y + (9.5/2);
        }

        if(( (pow(pista_0.x-galcentro2.x,2))+(pow(pista_0.y-galcentro2.y,2)))<=pow(4,2)||
            ((pow(pista_0.x-galcentro2.x+24,2))+(pow(pista_0.y-galcentro2.y+13,2)))<=pow(4,2)||
            ((pow(pista_0.x-galcentro2.x,2))+(pow(pista_0.y-galcentro2.y+13,2)))<=pow(4,2)||
            ((pow(pista_0.x-galcentro2.x+24,2))+(pow(pista_0.y-galcentro2.y,2)))<=pow(4,2)||
            ((pow(pista_1.x-galcentro2.x+24,2))+(pow(pista_1.y-galcentro2.y+13,2)))<=pow(4,2)||
            ((pow(pista_1.x-galcentro2.x+24,2))+(pow(pista_1.y-galcentro2.y,2)))<=pow(4,2)||
            ((pow(pista_1.x-galcentro2.x,2))+(pow(pista_1.y-galcentro2.y+13,2)))<=pow(4,2)||
            ((pow(pista_1.x-galcentro2.x,2))+(pow(pista_1.y-galcentro2.y,2)))<=pow(4,2)||
            ((pow(pista_2.x-galcentro2.x+24,2))+(pow(pista_2.y-galcentro2.y+13,2)))<=pow(4,2)||
            ((pow(pista_2.x-galcentro2.x+24,2))+(pow(pista_2.y-galcentro2.y,2)))<=pow(4,2)||
            ((pow(pista_2.x-galcentro2.x,2))+(pow(pista_2.y-galcentro2.y+13,2)))<=pow(4,2)||
            ((pow(pista_2.x-galcentro2.x,2))+(pow(pista_2.y-galcentro2.y,2)))<=pow(4,2)||
            ((pow(pista_3.x-galcentro2.x+24,2))+(pow(pista_3.y-galcentro2.y+13,2)))<=pow(4,2)||
            ((pow(pista_3.x-galcentro2.x+24,2))+(pow(pista_3.y-galcentro2.y,2)))<=pow(4,2)||
            ((pow(pista_3.x-galcentro2.x,2))+(pow(pista_3.y-galcentro2.y+13,2)))<=pow(4,2)||
            ((pow(pista_3.x-galcentro2.x,2))+(pow(pista_3.y-galcentro2.y,2)))<=pow(4,2)||
            ((pow(pista_4.x-galcentro2.x+24,2))+(pow(pista_4.y-galcentro2.y+13,2)))<=pow(4,2)||
            ((pow(pista_4.x-galcentro2.x+24,2))+(pow(pista_4.y-galcentro2.y,2)))<=pow(4,2)||
            ((pow(pista_4.x-galcentro2.x,2))+(pow(pista_4.y-galcentro2.y+13,2)))<=pow(4,2)||
            ((pow(pista_4.x-galcentro2.x,2))+(pow(pista_4.y-galcentro2.y,2)))<=pow(4,2)||
            ((pow(pista_5.x-galcentro2.x+24,2))+(pow(pista_5.y-galcentro2.y+13,2)))<=pow(4,2)||
            ((pow(pista_5.x-galcentro2.x+24,2))+(pow(pista_5.y-galcentro2.y,2)))<=pow(4,2)||
            ((pow(pista_5.x-galcentro2.x,2))+(pow(pista_5.y-galcentro2.y+13,2)))<=pow(4,2)||
            ((pow(pista_5.x-galcentro2.x,2))+(pow(pista_5.y-galcentro2.y,2)))<=pow(4,2)||
            ((pow(pista_6.x-galcentro2.x+24,2))+(pow(pista_6.y-galcentro2.y+13,2)))<=pow(4,2)||
            ((pow(pista_6.x-galcentro2.x+24,2))+(pow(pista_6.y-galcentro2.y,2)))<=pow(4,2)||
            ((pow(pista_6.x-galcentro2.x,2))+(pow(pista_6.y-galcentro2.y+13,2)))<=pow(4,2)||
            ((pow(pista_6.x-galcentro2.x,2))+(pow(pista_6.y-galcentro2.y,2)))<=pow(4,2)||
            ((pow(pista_7.x-galcentro2.x+24,2))+(pow(pista_7.y-galcentro2.y+13,2)))<=pow(4,2)||
            ((pow(pista_7.x-galcentro2.x+24,2))+(pow(pista_7.y-galcentro2.y,2)))<=pow(4,2)||
            ((pow(pista_7.x-galcentro2.x,2))+(pow(pista_7.y-galcentro2.y+13,2)))<=pow(4,2)||
            ((pow(pista_7.x-galcentro2.x,2))+(pow(pista_7.y-galcentro2.y,2)))<=pow(4,2)||
            ((pow(pista_8.x-galcentro2.x+24,2))+(pow(pista_8.y-galcentro2.y+13,2)))<=pow(4,2)||
            ((pow(pista_8.x-galcentro2.x+24,2))+(pow(pista_8.y-galcentro2.y,2)))<=pow(4,2)||
            ((pow(pista_8.x-galcentro2.x,2))+(pow(pista_8.y-galcentro2.y+13,2)))<=pow(4,2)||
            ((pow(pista_8.x-galcentro2.x,2))+(pow(pista_8.y-galcentro2.y,2)))<=pow(4,2)||
            ((pow(pista_9.x-galcentro2.x+24,2))+(pow(pista_9.y-galcentro2.y+13,2)))<=pow(4,2)||
            ((pow(pista_9.x-galcentro2.x+24,2))+(pow(pista_9.y-galcentro2.y,2)))<=pow(4,2)||
            ((pow(pista_9.x-galcentro2.x,2))+(pow(pista_9.y-galcentro2.y+13,2)))<=pow(4,2)||
            ((pow(pista_9.x-galcentro2.x,2))+(pow(pista_9.y-galcentro2.y,2)))<=pow(4,2))
        {
            nvidas2--; 
            galcentro2.x = inicio2.x;galcentro2.y = inicio2.y; 
            CriaRetangulo(16, 9.5, galcentro2);
            Pintar(255, 255, 255);
            AssociaImagem(galinha_morta);
            inicio2.y = -93.5; 
            galcentro2.y = inicio2.y + (9.5/2);
        }

    //§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§

        if (nvidas1 == 2){ //apaga as vidas da galinha 1 e 2
            CriaQuadrado(10, pvida1);
            Pintar(165, 165, 165);
        }
        if (nvidas1 == 1){
            CriaQuadrado(10, pvida2);
            Pintar(165, 165, 165);
        }
        if (nvidas1 == 0){
            CriaQuadrado(10, pvida3);
            Pintar(165, 165, 165);
        }
        if (nvidas2 == 2){
            CriaQuadrado(10, pvida4);
            Pintar(165, 165, 165);
        }
        if (nvidas2 == 1){
            CriaQuadrado(10, pvida5);
            Pintar(165, 165, 165);
        }
        if (nvidas2 == 0){
            CriaQuadrado(10, pvida6);
            Pintar(165, 165, 165);
        }

        Move(inicio1, galinha_grupo1); //efetivamente move as galinhas
        Move(inicio2, galinha_grupo2);
        Desenha1Frame();
    }
    return 0;
}