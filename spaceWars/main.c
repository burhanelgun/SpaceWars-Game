/*sudo apt-get install build-essential*/
/*sudo apt-get install liballegro4.2-dev*/
/*gcc main.c -o output `allegro-config --libs` -lm -pedantic-errors -Wall*/
    #include <allegro.h>
    #include <math.h>
    #include <stdio.h>
    #include <stdlib.h>

    #define widht 500
    #define height 768

    #define RED makecol(255,0,0) 
    #define GREEN makecol(0,255,0)
    #define BLUE makecol(0,0,255)

    volatile int timer1=0;

    void Baslat();
    void Bitir();
    void incrementaltimer();


    int main(){

        Baslat();

        int a = 225;
        int b =475;
        int c =350;
        int d =50;
        int e =250;
        int f =200;
        int g =100;
        int l =90;
        int m =130;
        int n =225;
        int p =450;
        int r =400;
        int s =325;
        int t =25;
        int ii=0;
        int zi=0;
        int zj=0;

        int countfilee=0;
        int countfileec=0;
        
        double ba = -50;
        double bb = -50;
        double bc = -50;
        double bd = -50;
        double be = -50;
        double bf = -50;
        double bg = -50;
        double bl = -50;
        double bm = -50;
        double bn = -50;
        double bp = -50;
        double br = -50;
        double bs = -50;
        double bt = -50;

        double x1a;
        double x1c;
        double x1e;
        double x1g;
        double x1m;
        double x1p;
        double x1s;
        double x1t;

        double x2a;
        double x2c;
        double x2e;
        double x2g;
        double x2m;
        double x2p;
        double x2s;
        double x2t;

        int sesflagi1=0;
        int sesflagi2=0;

        int x=250;
        int y=600;
        int flag1=1;
        int lag2=1;
        int lag3=1;

        int xx=300;
        int mm=300;
        int yy=600;
        int tt=600;

        int flag=0;
        int flag2=0;

        int counter3=0;
        int counter4=0;
        int counter5=0;
        int counter6=0;
        int counter7=0;
        int counter8=0;
        int counter9=0;
        int counter10=0;
        int counter11=0;
        int counter12=0;
        int counter13=0;
        int counter14=0;
        int counter15=0;
        int counter16=0;
        
        int x1flag3=0;
        int x1flag5=0;
        int x1flag7=0;
        int x1flag9=0;
        int x1flag11=0;
        int x1flag13=0;
        int x1flag15=0;
        int x1flag16=0;

        int x2flag3=0;
        int x2flag5=0;
        int x2flag7=0;
        int x2flag9=0;
        int x2flag11=0;
        int x2flag13=0;
        int x2flag15=0;
        int x2flag16=0;

        int sayac3=0;
        int sayac4=0;
        int sayac5=0;
        int sayac6=0;
        int sayac7=0;
        int sayac8=0;
        int sayac9=0;
        int sayac10=0;
        int sayac11=0;
        int sayac12=0;
        int sayac13=0;
        int sayac14=0;
        int sayac15=0;
        int sayac16=0;

        int s1sayac3=0;
        int s1sayac5=0;
        int s1sayac7=0;
        int s1sayac9=0;
        int s1sayac11=0;
        int s1sayac13=0;
        int s1sayac15=0;
        int s1sayac16=0;

        int s2sayac3=0;
        int s2sayac5=0;
        int s2sayac7=0;
        int s2sayac9=0;
        int s2sayac11=0;
        int s2sayac13=0;
        int s2sayac15=0;
        int s2sayac16=0;

        int bayrak3=0;
        int bayrak4=0;
        int bayrak5=0;
        int bayrak6=0;
        int bayrak7=0;
        int bayrak8=0;
        int bayrak9=0;
        int bayrak10=0;
        int bayrak11=0;
        int bayrak12=0;
        int bayrak13=0;
        int bayrak14=0;
        int bayrak15=0;
        int bayrak16=0;
  
        int ilkon[10];
        int arr[999];
        int ilkonsize=0;

        int enhealth3=100;
        int enhealth4=100;
        int enhealth5=100;
        int enhealth6=100;
        int enhealth7=100;
        int enhealth8=100;
        int enhealth9=100;
        int enhealth10=100;
        int enhealth11=100;
        int enhealth12=100;
        int enhealth13=100;
        int enhealth14=100;
        int enhealth15=100;
        int enhealth16=100;
       
        int isaret=0;
        int isaret2=0;

        int isarett3=2;
        int isarett4=2;
        int isarett5=2;
        int isarett6=2;
        int isarett7=2;
        int isarett8=2;
        int isarett9=2;
        int isarett10=2;
        int isarett11=2;
        int isarett12=2;
        int isarett13=2;
        int isarett14=2;
        int isarett15=2;
        int isarett16=2;

        int guncelskor;
        int redflag=0;
        int isaretci=0;
        int endusukcan;
        int scoreflag=0;
        int healthflag=0;
        int cann3;
        int health=100;
        int ta=0;
        int score=0;
        int lm=0;


        


        BITMAP *buffer=create_bitmap(widht,height);
        BITMAP *aircraft1button=load_bitmap("aircraft1button.pcx",NULL);
        BITMAP *aircraft2button=load_bitmap("aircraft2button.pcx",NULL);
        BITMAP *aircraft3button=load_bitmap("aircraft3button.pcx",NULL);
        BITMAP *spaceship=load_bitmap("cc.pcx",NULL);
        BITMAP *aircraft2=load_bitmap("aircraft2.pcx",NULL);
        BITMAP *aircraft3=load_bitmap("aircraft3.pcx",NULL);
        BITMAP *enspaceship=load_bitmap("enaircraft1.pcx",NULL);
        BITMAP *enspaceship2=load_bitmap("enaircraft2.pcx",NULL);
        BITMAP *bombpicfile=load_bitmap("missilepic.pcx",NULL);
        BITMAP *bombpicfile2=load_bitmap("missilepic2.pcx",NULL);
        BITMAP *bombpicfile3=load_bitmap("missilepic3.pcx",NULL);
        BITMAP *en1missile=load_bitmap("en1missile.pcx",NULL);
        BITMAP *can10=load_bitmap("can10.pcx",NULL);
        BITMAP *can20=load_bitmap("can20.pcx",NULL);
        BITMAP *can40=load_bitmap("can40.pcx",NULL);
        BITMAP *can50=load_bitmap("can50.pcx",NULL);
        BITMAP *can60=load_bitmap("can60.pcx",NULL);
        BITMAP *can70=load_bitmap("can70.pcx",NULL);
        BITMAP *can100=load_bitmap("can100.pcx",NULL);
        BITMAP *gcan100=load_bitmap("gcan100.pcx",NULL);
        BITMAP *gcan90=load_bitmap("gcan90.pcx",NULL);
        BITMAP *gcan80=load_bitmap("gcan80.pcx",NULL);
        BITMAP *gcan70=load_bitmap("gcan70.pcx",NULL);    
        BITMAP *gcan60=load_bitmap("gcan60.pcx",NULL);
        BITMAP *gcan50=load_bitmap("gcan50.pcx",NULL);
        BITMAP *gcan40=load_bitmap("gcan40.pcx",NULL);    
        BITMAP *gcan30=load_bitmap("gcan30.pcx",NULL);
        BITMAP *gcan20=load_bitmap("gcan20.pcx",NULL);
        BITMAP *gcan10=load_bitmap("gcan10.pcx",NULL);
        BITMAP *isinkilici=load_bitmap("isinkilici.pcx",NULL);
        BITMAP *arkaplanresmi=load_bitmap("lighthening.pcx",NULL);


        SAMPLE *soundfile=load_sample("a.wav");
        SAMPLE *bombfile=load_sample("bomb.wav");
        SAMPLE *lasersoundfile=load_sample("lasergun.wav");

        FILE *scorefile;
        FILE *countfile;

        LOCK_FUNCTION(incrementaltimer);
        LOCK_VARIABLE(timer1);
        install_int_ex(incrementaltimer,SECS_TO_TIMER(1));

        scorefile = fopen("scores.txt","a");
        countfile = fopen("count.txt","r");






        while(!key[KEY_ESC]){

           if(healthflag==0) {



            show_mouse(screen);








            textprintf_ex(buffer,font,0,0,makecol(0,255,0),-1,"SCORE = %d",score);


            blit(aircraft1button,buffer,0,0,100,100,290,70);

            blit(aircraft2button,buffer,0,0,100,200,290,70);

            blit(aircraft3button,buffer,0,0,100,300,290,70);



            if(mouse_x > 100 && mouse_x <100+290 && mouse_y > 100 && mouse_y <100+70 && (mouse_b & 1) && flag1==1){
                if(sesflagi1==0){
                    play_sample(soundfile,255,128,1000,0);
                }

               flag1=0;

               clear_bitmap(aircraft1button);
               clear_bitmap(aircraft2button);
               clear_bitmap(aircraft3button);


           }

           if(mouse_x > 100 && mouse_x <100+290 && mouse_y > 200 && mouse_y <200+70 && (mouse_b & 1) && lag2==1){
                if(sesflagi1==0){
                    play_sample(soundfile,255,128,1000,0);
                }

               lag2=0;

               clear_bitmap(aircraft1button);
               clear_bitmap(aircraft2button);
               clear_bitmap(aircraft3button);


           }


           if(mouse_x > 100 && mouse_x <100+290 && mouse_y > 300 && mouse_y <300+70 && (mouse_b & 1) && lag3==1){
                if(sesflagi1==0){

                     play_sample(soundfile,255,128,1000,0);
            }

               lag3=0;

               clear_bitmap(aircraft1button);
               clear_bitmap(aircraft2button);
               clear_bitmap(aircraft3button);


           }


           if(flag1==0){



            scare_mouse();

            circlefill(buffer,x,y,25,makecol(0,0,0)); 
            draw_sprite(buffer,spaceship,x-35,y);
            blit(gcan100,buffer,0,0,x-24,y+30,45,8);




            if(key[KEY_UP]){
                y--;
            }  
            else if(key[KEY_DOWN]){
                y++;
            }


            if(key[KEY_LEFT]){
                x=x-2;
            }  
            else if(key[KEY_RIGHT]){
                x=x+2;
            }











            if (flag==0 ){
                xx=x;
                if(sesflagi2==0){

                play_sample(bombfile,255,128,1000,0);
            }

            }
            flag=1;



            if( (30+5>=(  (sqrt(pow((a-xx),2)+pow((ba-yy),2))))))    {

                isaret=1;

            }
            if( isaret==0 || enhealth3<=0 ){
                circlefill(buffer,xx,yy,5,GREEN); 
                draw_sprite(buffer,bombpicfile,xx-7,yy-5);
            }




            yy=yy-6;

            if(yy<0){
                flag=0;
                yy=y;
                isaret=0;
            }







            if(flag2==0){

                mm=x;
                if(sesflagi2==0){

                play_sample(bombfile,255,128,1000,0);


            }
            flag2=1;
            }


            if( (30+5>=(  (sqrt(pow((a-mm),2)+pow((ba-tt),2))))))    {

                isaret2=1;

            }




            if(isaret2==0 || enhealth3<=0){

                circlefill(buffer,mm,tt,5,RED); 
                draw_sprite(buffer,bombpicfile,mm-7,tt-5);
            }
            tt=tt-6;

            if(tt<0 && yy<300){
                flag2=0;
                tt=y;
                isaret2=0;
            }


            if(timer1%10==0){

               lm=1;
           }


           if(lm==1 && (timer1%10==0 || timer1%10==2 || timer1%10==3 || timer1%10==1)) {
            textprintf_ex(buffer,font,200,0,makecol(0,255,0),-1,"PRESS SPACE");
             if(key[KEY_SPACE]){
                    play_sample(lasersoundfile,255,128,1000,0);

             }
        }




        if (key[KEY_SPACE] && (timer1%10==0 || timer1%10==2 || timer1%10==3 || timer1%10==1) ){
            isaretci=1;
            lm=0;
            blit(isinkilici,buffer,0,0,x,y-760,10,760);
        }


        if(isaretci==1 && ((x-10>=a-30 && x-10<=a+30) || (x+10<=a+30 && x+10>=a-30))){
          enhealth3=enhealth3-100;
      }

      if(isaretci==1 && ((x-10>=b-30 && x-10<=b+30) || (x+10<=b+30 && x+10>=b-30))){
          enhealth4=enhealth4-100;
      }


      if(isaretci==1 && ((x-10>=c-30 && x-10<=c+30) || (x+10<=c+30 && x+10>=c-30))){
          enhealth5=enhealth5-100;
      }

      if(isaretci==1 && ((x-10>=d-30 && x-10<=d+30) || (x+10<=d+30 && x+10>=d-30))){
          enhealth6=enhealth6-100;
      }

      if(isaretci==1 && ((x-10>=e-30 && x-10<=e+30) || (x+10<=e+30 && x+10>=e-30))){
          enhealth7=enhealth7-100;
      }

      if(isaretci==1 && ((x-10>=f-30 && x-10<=f+30) || (x+10<=f+30 && x+10>=f-30))){
          enhealth8=enhealth8-100;
      }

      if(isaretci==1 && ((x-10>=g-30 && x-10<=g+30) || (x+10<=g+30 && x+10>=g-30))){
          enhealth9=enhealth9-100;
      }

      if(isaretci==1 && ((x-10>=l-30 && x-10<=l+30) || (x+10<=l+30 && x+10>=l-30))){
          enhealth10=enhealth10-100 ;

       }      
      if(isaretci==1 && ((x-10>=m-30 && x-10<=m+30) || (x+10<=m+30 && x+10>=m-30))){
          enhealth11=enhealth11-100;
      }

      if(isaretci==1 && ((x-10>=n-30 && x-10<=n+30) || (x+10<=n+30 && x+10>=n-30))){
          enhealth12=enhealth12-100;
      }

      if(isaretci==1 && ((x-10>=p-30 && x-10<=p+30) || (x+10<=p+30 && x+10>=p-30))){
          enhealth13=enhealth13-100;
      }

      if(isaretci==1 && ((x-10>=r-30 && x-10<=r+30) || (x+10<=r+30 && x+10>=r-30))){
          enhealth14=enhealth14-100;
}

      if(isaretci==1 && ((x-10>=s-30 && x-10<=s+30) || (x+10<=s+30 && x+10>=s-30))){
          enhealth15=enhealth15-100;
      }

      if(isaretci==1 && ((x-10>=t-30 && x-10<=t+30) || (x+10<=t+30 && x+10>=t-30))){
          enhealth16=enhealth16-100;
      }




      isaretci=0;


      if( ((30+5>=(  (sqrt(pow((a-mm),2)+pow((ba-tt),2))))) || (30+5>=(  (sqrt(pow((a-xx),2)+pow((ba-yy),2)))))) && bayrak3==0 ){


        enhealth3=enhealth3-30;
        bayrak3=1;


    }


    if( ((30+5<=(  (sqrt(pow((a-mm),2)+pow((ba-tt),2))))) && (30+5<=(  (sqrt(pow((a-xx),2)+pow((ba-yy),2))))))){


        bayrak3=0;


    }




    if(enhealth3==100){
        circlefill(buffer,a,ba,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship2,a-30,ba);
        blit(can100,buffer,0,0,a-18,ba+30,45,8);


    }

    else if(enhealth3==70){
        circlefill(buffer,a,ba,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship2,a-30,ba);
        blit(can70,buffer,0,0,a-18,ba+30,45,8);


    }

    else if(enhealth3==40){
        circlefill(buffer,a,ba,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship2,a-30,ba);
        blit(can40,buffer,0,0,a-18,ba+30,45,8);


    }

    else if(enhealth3==10){
        circlefill(buffer,a,ba,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship2,a-30,ba);
        blit(can10,buffer,0,0,a-18,ba+30,45,8);


    }


    if(enhealth3<=0 && isarett3==2){
        isarett3=1;
        counter3=1;

    }

    if (isarett3==1){
        score=score+10;
        isarett3=0;
    }





    if(ba>780){
        counter3=0;
        enhealth3=100;

    }



if(ba>30 && ba<40 ){
        x1a=ba;
        x1flag3=1;
}
   if(x1flag3==1 ){



        circlefill(buffer,a+9.5,x1a+25,5,makecol(0,0,0)); 
        draw_sprite(buffer,en1missile,a,x1a);
        if(timer1<20){
        x1a=x1a+1.5;
    }
    else if(timer1>=20 && timer1<30){
            x1a=x1a+2;

   }
   else if(timer1>=30 && timer1<40){
                x1a=x1a+2.5;

   }
    else if(timer1>=40 && timer1<50) {
                    x1a=x1a+3.5;

   }
   else {
                        x1a=x1a+4.5;

   }
}

if(25+5>=(  sqrt(pow((a-x),2)+pow((x1a-y),2))) && s1sayac3==0 ){
         health=health-10;
      
        s1sayac3=1;
    }

    if(25+5<(  sqrt(pow((a-x),2)+pow((y-x1a),2)))){
        s1sayac3=0;
    }



if (100<ba && ba<110)   {
        x2a=ba;
        x2flag3=1;

}



if(x2flag3==1){

            circlefill(buffer,a+9.5,x2a+25,5,makecol(0,0,0)); 

        draw_sprite(buffer,en1missile,a,x2a);
               if(timer1<20){
        x2a=x2a+1.5;
    }
    else if(timer1>=20 && timer1<30){
            x2a=x2a+2;

   }
   else if(timer1>=30 && timer1<40){
                x2a=x2a+2.5;

   }
   else if(timer1>=40 && timer1<50) {
                    x2a=x2a+3.5;

   }
   else {
                        x2a=x2a+4.5;

   }
}


if(25+5>=(  sqrt(pow((a-x),2)+pow((x2a-y),2))) && s2sayac3==0 ){
         health=health-10;
         s2sayac3=1;
    }

    if(25+5<(  sqrt(pow((a-x),2)+pow((y-x2a),2)))){
        s2sayac3=0;
    }




    if( ((30+5>=(  (sqrt(pow((b-mm),2)+pow((bb-tt),2))))) || (30+5>=(  (sqrt(pow((b-xx),2)+pow((bb-yy),2)))))) && bayrak4==0 ){


        enhealth4=enhealth4-30;
        bayrak4=1;


    }


    if( ((30+5<=(  (sqrt(pow((b-mm),2)+pow((bb-tt),2))))) && (30+5<=(  (sqrt(pow((b-xx),2)+pow((bb-yy),2))))))){


        bayrak4=0;


    }




    if(enhealth4==100){
        circlefill(buffer,b,bb,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship,b-30,bb);
        blit(can100,buffer,0,0,b-18,bb+30,45,8);


    }

    else if(enhealth4==70){
       circlefill(buffer,b,bb,30,makecol(0,0,0)); 
       draw_sprite(buffer,enspaceship,b-30,bb);
       blit(can70,buffer,0,0,b-18,bb+30,45,8);



    }

    else if(enhealth4==40){
     circlefill(buffer,b,bb,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship,b-30,bb);
     blit(can40,buffer,0,0,b-18,bb+30,45,8);



    }

    else if(enhealth4==10){
        circlefill(buffer,b,bb,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship,b-30,bb);
        blit(can10,buffer,0,0,b-18,bb+30,45,8);


    }


    if(enhealth4<=0 && isarett4==2){
        isarett4=1;
        counter4=1;

    }

   if (isarett4==1){
        score=score+10;
        isarett4=0;
    }


    if(bb>780){
        counter4=0;
        enhealth4=100;
        isarett4=2;

    }



    if( ((30+5>=(  (sqrt(pow((c-mm),2)+pow((bc-tt),2))))) || (30+5>=(  (sqrt(pow((c-xx),2)+pow((bc-yy),2)))))) && bayrak5==0 ){


        enhealth5=enhealth5-30;
        bayrak5=1;


    }


    if( ((30+5<=(  (sqrt(pow((c-mm),2)+pow((bc-tt),2))))) && (30+5<=(  (sqrt(pow((c-xx),2)+pow((bc-yy),2))))))){


        bayrak5=0;


    }




    if(enhealth5==100){
        circlefill(buffer,c,bc,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship2,c-30,bc);
        blit(can100,buffer,0,0,c-18,bc+30,45,8);


    }

    else if(enhealth5==70){
       circlefill(buffer,c,bc,30,makecol(0,0,0)); 
       draw_sprite(buffer,enspaceship2,c-30,bc);
       blit(can70,buffer,0,0,c-18,bc+30,45,8);



    }

    else if(enhealth5==40){
     circlefill(buffer,c,bc,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship2,c-30,bc);
     blit(can40,buffer,0,0,c-18,bc+30,45,8);



    }

    else if(enhealth5==10){
        circlefill(buffer,c,bc,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship2,c-30,bc);
        blit(can10,buffer,0,0,c-18,bc+30,45,8);


    }

  if(enhealth5<=0 && isarett5==2){
        isarett5=1;
        counter5=1;

    }

    if (isarett5==1){
        score=score+10;
        isarett5=0;
    }


    if(bc>780){
        counter5=0;
        enhealth5=100;
        isarett5=2;
    }


if(bc>30 && bc<40){
        x1c=bc;
        x1flag5=1;
}
   if(x1flag5==1){
            circlefill(buffer,c+9.5,x1c+25,5,makecol(0,0,0)); 

        draw_sprite(buffer,en1missile,c,x1c);
          if(timer1<20){
        x1c=x1c+1.5;
    }
    else if(timer1>=20 && timer1<30){
            x1c=x1c+2;

   }
   else if(timer1>=30 && timer1<40){
                x1c=x1c+2.5;

   }
    else if(timer1>=40 && timer1<50) {
                x1c=x1c+3.5;

   }
   else {
                x1c=x1c+4.5;

   }
}

if(25+5>=(  sqrt(pow((c-x),2)+pow((x1c-y),2))) && s1sayac5==0 ){
        health=health-10;
        s1sayac5=1;
    }

    if(25+5<(  sqrt(pow((c-x),2)+pow((y-x1c),2)))){
        s1sayac5=0;
    }



if (100<bc && bc<110)   {
        x2c=bc;
        x2flag5=1;

}



if(x2flag5==1){
            circlefill(buffer,c+9.5,x2c+25,5,makecol(0,0,0)); 

        draw_sprite(buffer,en1missile,c,x2c);
               if(timer1<20){
        x2c=x2c+1.5;
    }
    else if(timer1>=20 && timer1<30){
            x2c=x2c+2;

   }
   else if(timer1>=30 && timer1<40){
                x2c=x2c+2.5;

   }
   else if(timer1>=40 && timer1<50) {
                    x2c=x2c+3.5;

   }
   else {
                        x2c=x2c+4.5;

   }
}




if(25+5>=(  sqrt(pow((c-x),2)+pow((x2c-y),2))) && s2sayac5==0 ){
        health=health-10;
        s2sayac5=1;
    }

    if(25+5<(  sqrt(pow((c-x),2)+pow((y-x2c),2)))){
        s2sayac5=0;
    }








    if( ((30+5>=(  (sqrt(pow((d-mm),2)+pow((bd-tt),2))))) || (30+5>=(  (sqrt(pow((d-xx),2)+pow((bd-yy),2)))))) && bayrak6==0 ){


        enhealth6=enhealth6-30;
        bayrak6=1;


    }


    if( ((30+5<=(  (sqrt(pow((d-mm),2)+pow((bd-tt),2))))) && (30+5<=(  (sqrt(pow((d-xx),2)+pow((bd-yy),2))))))){


        bayrak6=0;


    }




    if(enhealth6==100){
        circlefill(buffer,d,bd,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship,d-30,bd);
        blit(can100,buffer,0,0,d-18,bd+30,45,8);


    }

    else if(enhealth6==70){
      circlefill(buffer,d,bd,30,makecol(0,0,0)); 
      draw_sprite(buffer,enspaceship,d-30,bd);
      blit(can70,buffer,0,0,d-18,bd+30,45,8);



    }

    else if(enhealth6==40){
        circlefill(buffer,d,bd,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship,d-30,bd);
        blit(can40,buffer,0,0,d-18,bd+30,45,8);


    }

    else if(enhealth6==10){
       circlefill(buffer,d,bd,30,makecol(0,0,0)); 
       draw_sprite(buffer,enspaceship,d-30,bd);
       blit(can10,buffer,0,0,d-18,bd+30,45,8);;


    }


   if(enhealth6<=0 && isarett6==2){
        isarett6=1;
        counter6=1;

    }

    if (isarett6==1){
        score=score+10;
        isarett6=0;
    }



    if(bd>780){
        counter6=0;
        enhealth6=100;
        isarett6=2;
    }







    if( ((30+5>=(  (sqrt(pow((e-mm),2)+pow((be-tt),2))))) || (30+5>=(  (sqrt(pow((e-xx),2)+pow((be-yy),2)))))) && bayrak7==0 ){


        enhealth7=enhealth7-30;
        bayrak7=1;


    }


    if( ((30+5<=(  (sqrt(pow((e-mm),2)+pow((be-tt),2))))) && (30+5<=(  (sqrt(pow((e-xx),2)+pow((be-yy),2))))))){


        bayrak7=0;


    }




    if(enhealth7==100){
     circlefill(buffer,e,be,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship2,e-30,be);
     blit(can100,buffer,0,0,e-18,be+30,45,8);;


    }

    else if(enhealth7==70){
       circlefill(buffer,e,be,30,makecol(0,0,0)); 
       draw_sprite(buffer,enspaceship2,e-30,be);
       blit(can70,buffer,0,0,e-18,be+30,45,8);



    }

    else if(enhealth7==40){
        circlefill(buffer,e,be,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship2,e-30,be);
        blit(can40,buffer,0,0,e-18,be+30,45,8);;;


    }

    else if(enhealth7==10){
       circlefill(buffer,e,be,30,makecol(0,0,0)); 
       draw_sprite(buffer,enspaceship2,e-30,be);
       blit(can10,buffer,0,0,e-18,be+30,45,8);;


    }


   if(enhealth7<=0 && isarett7==2){
        isarett7=1;
        counter7=1;

    }

    if (isarett7==1){
        score=score+10;
        isarett7=0;
    }





    if(be>780){
        counter7=0;
        enhealth7=100;
        isarett7=2;
    }


    if(be>30 && be<40){
        x1e=be;
        x1flag7=1;
}
   if(x1flag7==1){
                circlefill(buffer,e+9.5,x1e+25,5,makecol(0,0,0)); 

        draw_sprite(buffer,en1missile,e,x1e);
        if(timer1<20){
        x1e=x1e+1.5;
    }
    else if(timer1>=20 && timer1<30){
            x1e=x1e+2;

   }
   else if(timer1>=30 && timer1<40){
                x1e=x1e+2.5;

   }
   else if(timer1>=40 && timer1<50) {
                    x1e=x1e+3.5;

   }
   else {
                        x1e=x1e+4.5;

   }
}
if(25+5>=(  sqrt(pow((e-x),2)+pow((x1e-y),2))) && s1sayac7==0 ){
        health=health-10;
        s1sayac7=1;
    }

    if(25+5<(  sqrt(pow((e-x),2)+pow((y-x1e),2)))){
        s1sayac7=0;
    }







if (100<be && be<110)   {
        x2e=be;
        x2flag7=1;

}



if(x2flag7==1){
                circlefill(buffer,e+9.5,x2e+25,5,makecol(0,0,0)); 

        draw_sprite(buffer,en1missile,e,x2e);
        if(timer1<20){
        x2e=x2e+1.5;
    }
    else if(timer1>=20 && timer1<30){
            x2e=x2e+2;

   }
   else if(timer1>=30 && timer1<40){
                x2e=x2e+2.5;

   }
   else if(timer1>=40 && timer1<50) {
                    x2e=x2e+3.5;

   }
   else {
                        x2e=x2e+4.5;

   }
}
if(25+5>=(  sqrt(pow((e-x),2)+pow((x2e-y),2))) && s2sayac7==0 ){
        health=health-10;
        s2sayac7=1;
    }

    if(25+5<(  sqrt(pow((e-x),2)+pow((y-x2e),2)))){
        s2sayac7=0;
    }









    if( ((30+5>=(  (sqrt(pow((f-mm),2)+pow((bf-tt),2))))) || (30+5>=(  (sqrt(pow((f-xx),2)+pow((bf-yy),2)))))) && bayrak8==0 ){


        enhealth8=enhealth8-30;
        bayrak8=1;


    }


    if( ((30+5<=(  (sqrt(pow((f-mm),2)+pow((bf-tt),2))))) && (30+5<=(  (sqrt(pow((f-xx),2)+pow((bf-yy),2))))))){


        bayrak8=0;


    }




    if(enhealth8==100){
     circlefill(buffer,f,bf,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship,f-30,bf);
     blit(can100,buffer,0,0,f-18,bf+30,45,8);


    }

    else if(enhealth8==70){
       circlefill(buffer,f,bf,30,makecol(0,0,0)); 
       draw_sprite(buffer,enspaceship,f-30,bf);
       blit(can70,buffer,0,0,f-18,bf+30,45,8);


    }

    else if(enhealth8==40){
        circlefill(buffer,f,bf,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship,f-30,bf);
        blit(can40,buffer,0,0,f-18,bf+30,45,8);


    }

    else if(enhealth8==10){
     circlefill(buffer,f,bf,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship,f-30,bf);
     blit(can10,buffer,0,0,f-18,bf+30,45,8);


    }


   if(enhealth8<=0 && isarett8==2){
        isarett8=1;
        counter8=1;

    }

    if (isarett8==1){
        score=score+10;
        isarett8=0;
    }


    if(bf>780){
        counter8=0;
        enhealth8=100;
        isarett8=2;
    }



    if( ((30+5>=(  (sqrt(pow((g-mm),2)+pow((bg-tt),2))))) || (30+5>=(  (sqrt(pow((g-xx),2)+pow((bg-yy),2)))))) && bayrak9==0 ){


        enhealth9=enhealth9-30;
        bayrak9=1;


    }


    if( ((30+5<=(  (sqrt(pow((g-mm),2)+pow((bg-tt),2))))) && (30+5<=(  (sqrt(pow((g-xx),2)+pow((bg-yy),2))))))){


        bayrak9=0;


    }


    if(enhealth9==100){
     circlefill(buffer,g,bg,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship2,g-30,bg);
     blit(can100,buffer,0,0,g-18,bg+30,45,8);


    }

    else if(enhealth9==70){
       circlefill(buffer,g,bg,30,makecol(0,0,0)); 
       draw_sprite(buffer,enspaceship2,g-30,bg);
       blit(can70,buffer,0,0,g-18,bg+30,45,8);


    }

    else if(enhealth9==40){
       circlefill(buffer,g,bg,30,makecol(0,0,0)); 
       draw_sprite(buffer,enspaceship2,g-30,bg);
       blit(can40,buffer,0,0,g-18,bg+30,45,8);


    }

    else if(enhealth9==10){
        circlefill(buffer,g,bg,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship2,g-30,bg);
        blit(can10,buffer,0,0,g-18,bg+30,45,8);

    }


  if(enhealth9<=0 && isarett9==2){
        isarett9=1;
        counter9=1;

    }

    if (isarett9==1){
        score=score+10;
        isarett9=0;
    }





    if(bg>780){
        counter9=0;
        enhealth9=100;
        isarett9=2;

    }



if(bg>30 && bg<40){
        x1g=bg;
        x1flag9=1;
}
   if(x1flag9==1){
            circlefill(buffer,g+9.5,x1g+25,5,makecol(0,0,0)); 
draw_sprite(buffer,en1missile,g,x1g);
       if(timer1<20){
        x1g=x1g+1.5;
    }
    else if(timer1>=20 && timer1<30){
            x1g=x1g+2;

   }
   else if(timer1>=30 && timer1<40){
                x1g=x1g+2.5;

   }
   else if(timer1>=40 && timer1<50) {
                    x1g=x1g+3.5;

   }
   else {
                        x1g=x1g+4.5;

   }
}

if(25+5>=(  sqrt(pow((g-x),2)+pow((x1g-y),2))) && s1sayac9==0 ){
        health=health-10;
        s1sayac9=1;
    }

    if(25+5<(  sqrt(pow((g-x),2)+pow((y-x1g),2)))){
        s1sayac9=0;
    }




if (100<bg && bg<110)   {
        x2g=bg;
        x2flag9=1;

}



if(x2flag9==1){
        circlefill(buffer,g+9.5,x2g+25,5,makecol(0,0,0)); 
        draw_sprite(buffer,en1missile,g,x2g);
               if(timer1<20){
        x2g=x2g+1.5;
    }
    else if(timer1>=20 && timer1<30){
            x2g=x2g+2;

   }
   else if(timer1>=30 && timer1<40){
                x2g=x2g+2.5;

   }
   else if(timer1>=40 && timer1<50) {
                    x2g=x2g+3.5;

   }
   else {
                        x2g=x2g+4.5;

   }
}

   if(25+5>=(  sqrt(pow((g-x),2)+pow((x2g-y),2))) && s2sayac9==0 ){
        health=health-10;
        s2sayac9=1;
    }

    if(25+5<(  sqrt(pow((g-x),2)+pow((y-x2g),2)))){
        s2sayac9=0;
    }





    if( ((30+5>=(  (sqrt(pow((l-mm),2)+pow((bl-tt),2))))) || (30+5>=(  (sqrt(pow((l-xx),2)+pow((bl-yy),2)))))) && bayrak10==0 ){


        enhealth10=enhealth10-30;
        bayrak10=1;


    }


    if( ((30+5<=(  (sqrt(pow((l-mm),2)+pow((bl-tt),2))))) && (30+5<=(  (sqrt(pow((l-xx),2)+pow((bl-yy),2))))))){


        bayrak10=0;


    }



    if(enhealth10==100){
     circlefill(buffer,l,bl,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship,l-30,bl);
     blit(can100,buffer,0,0,l-18,bl+30,45,8);


    }

    else if(enhealth10==70){
        circlefill(buffer,l,bl,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship,l-30,bl);
        blit(can70,buffer,0,0,l-18,bl+30,45,8);


    }

    else if(enhealth10==40){
     circlefill(buffer,l,bl,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship,l-30,bl);
     blit(can40,buffer,0,0,l-18,bl+30,45,8);

    }

    else if(enhealth10==10){
        circlefill(buffer,l,bl,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship,l-30,bl);
        blit(can10,buffer,0,0,l-18,bl+30,45,8);
    }


  if(enhealth10<=0 && isarett10==2){
        isarett10=1;
        counter10=1;

    }

    if (isarett10==1){
        score=score+10;
        isarett10=0;
    }




    if(bl>780){
        counter10=0;
        enhealth10=100;
        isarett10=2;
    }




    if( ((30+5>=(  (sqrt(pow((m-mm),2)+pow((bm-tt),2))))) || (30+5>=(  (sqrt(pow((m-xx),2)+pow((bm-yy),2)))))) && bayrak11==0 ){


        enhealth11=enhealth11-30;
        bayrak11=1;


    }


    if( ((30+5<=(  (sqrt(pow((m-mm),2)+pow((bm-tt),2))))) && (30+5<=(  (sqrt(pow((m-xx),2)+pow((bm-yy),2))))))){


        bayrak11=0;


    }




    if(enhealth11==100){
     circlefill(buffer,m,bm,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship2,m-30,bm);
     blit(can100,buffer,0,0,m-18,bm+30,45,8);


    }

    else if(enhealth11==70){
        circlefill(buffer,m,bm,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship2,m-30,bm);
        blit(can70,buffer,0,0,m-18,bm+30,45,8);


    }

    else if(enhealth11==40){
     circlefill(buffer,m,bm,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship2,m-30,bm);
     blit(can40,buffer,0,0,m-18,bm+30,45,8);

    }

    else if(enhealth11==10){
        circlefill(buffer,m,bm,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship2,m-30,bm);
        blit(can10,buffer,0,0,m-18,bm+30,45,8);
    }


  if(enhealth11<=0 && isarett11==2){
        isarett11=1;
        counter11=1;

    }

    if (isarett11==1){
        score=score+10;
        isarett11=0;
    }




    if(bm>780){
        counter11=0;
        enhealth11=100;
        isarett11=2;

    }


    if(bm>30 && bm<40){
        x1m=bm;
        x1flag11=1;
}
   if(x1flag11==1){
         circlefill(buffer,m+9.5,x1m+25,5,makecol(0,0,0)); 
        draw_sprite(buffer,en1missile,m,x1m);
               if(timer1<20){
        x1m=x1m+1.5;
    }
    else if(timer1>=20 && timer1<30){
            x1m=x1m+2;

   }
   else if(timer1>=30 && timer1<40){
                x1m=x1m+2.5;

   }
   else if(timer1>=40 && timer1<50) {
                    x1m=x1m+3.5;

   }
   else {
                        x1m=x1m+4.5;

   }
}


if(25+5>=(  sqrt(pow((m-x),2)+pow((x1m-y),2))) && s1sayac11==0 ){
        health=health-10;
        s1sayac11=1;
    }

    if(25+5<(  sqrt(pow((m-x),2)+pow((y-x1m),2)))){
        s1sayac11=0;
    }




if (100<bm && bm<110)   {
        x2m=bm;
        x2flag11=1;

}



if(x2flag11==1){
             circlefill(buffer,m+9.5,x2m+25,5,makecol(0,0,0)); 

        draw_sprite(buffer,en1missile,m,x2m);
               if(timer1<20){
        x2m=x2m+1.5;
    }
    else if(timer1>=20 && timer1<30){
            x2m=x2m+2;

   }
   else if(timer1>=30 && timer1<40){
                x2m=x2m+2.5;

   }
   else if(timer1>=40 && timer1<50) {
                    x2m=x2m+3.5;

   }
   else {
                        x2m=x2m+4.5;

   }
}

if(25+5>=(  sqrt(pow((m-x),2)+pow((x2m-y),2))) && s2sayac11==0 ){
        health=health-10;
        s2sayac11=1;
    }

    if(25+5<(  sqrt(pow((m-x),2)+pow((y-x2m),2)))){
        s2sayac11=0;
    }



    if( ((30+5>=(  (sqrt(pow((n-mm),2)+pow((bn-tt),2))))) || (30+5>=(  (sqrt(pow((n-xx),2)+pow((bn-yy),2)))))) && bayrak12==0 ){


        enhealth12=enhealth12-30;
        bayrak12=1;


    }


    if( ((30+5<=(  (sqrt(pow((n-mm),2)+pow((bn-tt),2))))) && (30+5<=(  (sqrt(pow((n-xx),2)+pow((bn-yy),2))))))){


        bayrak12=0;


    }




    if(enhealth12==100){
     circlefill(buffer,n,bn,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship,n-30,bn);
     blit(can100,buffer,0,0,n-18,bn+30,45,8);


    }

    else if(enhealth12==70){
        circlefill(buffer,n,bn,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship,n-30,bn);
        blit(can70,buffer,0,0,n-18,bn+30,45,8);


    }

    else if(enhealth12==40){
     circlefill(buffer,n,bn,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship,n-30,bn);
     blit(can40,buffer,0,0,n-18,bn+30,45,8);

    }

    else if(enhealth12==10){
        circlefill(buffer,n,bn,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship,n-30,bn);
        blit(can10,buffer,0,0,n-18,bn+30,45,8);
    }

  if(enhealth12<=0 && isarett12==2){
        isarett12=1;
        counter12=1;

    }

    if (isarett12==1){
        score=score+10;
        isarett12=0;
    }






    if(bn>780){
        counter12=0;
        enhealth12=100;
        isarett12=2;

    }



    if( ((30+5>=(  (sqrt(pow((p-mm),2)+pow((bp-tt),2))))) || (30+5>=(  (sqrt(pow((p-xx),2)+pow((bp-yy),2)))))) && bayrak13==0 ){


        enhealth13=enhealth13-30;
        bayrak13=1;


    }


    if( ((30+5<=(  (sqrt(pow((p-mm),2)+pow((bp-tt),2))))) && (30+5<=(  (sqrt(pow((p-xx),2)+pow((bp-yy),2))))))){


        bayrak13=0;


    }




    if(enhealth13==100){
     circlefill(buffer,p,bp,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship2,p-30,bp);
     blit(can100,buffer,0,0,p-18,bp+30,45,8);


    }

    else if(enhealth13==70){
        circlefill(buffer,p,bp,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship2,p-30,bp);
        blit(can70,buffer,0,0,p-18,bp+30,45,8);


    }

    else if(enhealth13==40){
     circlefill(buffer,p,bp,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship2,p-30,bp);
     blit(can40,buffer,0,0,p-18,bp+30,45,8);

    }

    else if(enhealth13==10){
        circlefill(buffer,p,bp,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship2,p-30,bp);
        blit(can10,buffer,0,0,p-18,bp+30,45,8);
    }


    if(enhealth13<=0 && isarett13==2){
        isarett13=1;
        counter13=1;

    }

    if (isarett13==1){
        score=score+10;
        isarett13=0;
    }





    if(bp>780){
        counter13=0;
        enhealth13=100;
        isarett13=2;
    }




if(bp>30 && bp<40){
        x1p=bp;
        x1flag13=1;
}
   if(x1flag13==1){
        circlefill(buffer,p+9.5,x1p+25,5,makecol(0,0,0)); 
        draw_sprite(buffer,en1missile,p,x1p);
                if(timer1<20){
        x1p=x1p+1.5;
    }
    else if(timer1>=20 && timer1<30){
            x1p=x1p+2;

   }
   else if(timer1>=30 && timer1<40){
                x1p=x1p+2.5;

   }
   else if(timer1>=40 && timer1<50) {
                    x1p=x1p+3.5;

   }
   else {
                        x1p=x1p+4.5;

   }
}

if(25+5>=(  sqrt(pow((p-x),2)+pow((x1p-y),2))) && s1sayac13==0 ){
        health=health-10;
        s1sayac13=1;
    }

    if(25+5<(  sqrt(pow((p-x),2)+pow((y-x1p),2)))){
        s1sayac13=0;
    }





if (100<bp && bp<110)   {
        x2p=bp;
        x2flag13=1;

}



if(x2flag13==1){
                circlefill(buffer,p+9.5,x2p+25,5,makecol(0,0,0)); 

        draw_sprite(buffer,en1missile,p,x2p);
          if(timer1<20){
        x2p=x2p+1.5;
    }
    else if(timer1>=20 && timer1<30){
            x2p=x2p+2;

   }
   else if(timer1>=30 && timer1<40){
                x2p=x2p+2.5;

   }
   else if(timer1>=40 && timer1<50) {
                    x2p=x2p+3.5;

   }
   else {
                        x2p=x2p+4.5;

   }
}
   if(25+5>=(  sqrt(pow((p-x),2)+pow((x2p-y),2))) && s2sayac13==0 ){
        health=health-10;
        s2sayac13=1;
    }

    if(25+5<(  sqrt(pow((p-x),2)+pow((y-x2p),2)))){
        s2sayac13=0;
    }




    if( ((30+5>=(  (sqrt(pow((r-mm),2)+pow((br-tt),2))))) || (30+5>=(  (sqrt(pow((r-xx),2)+pow((br-yy),2)))))) && bayrak14==0 ){


        enhealth14=enhealth14-30;
        bayrak14=1;


    }


    if( ((30+5<=(  (sqrt(pow((r-mm),2)+pow((br-tt),2))))) && (30+5<=(  (sqrt(pow((r-xx),2)+pow((br-yy),2))))))){


        bayrak14=0;


    }




    if(enhealth14==100){
     circlefill(buffer,r,br,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship,r-30,br);
     blit(can100,buffer,0,0,r-18,br+30,45,8);


    }

    else if(enhealth14==70){
        circlefill(buffer,r,br,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship,r-30,br);
        blit(can70,buffer,0,0,r-18,br+30,45,8);


    }

    else if(enhealth14==40){
     circlefill(buffer,r,br,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship,r-30,br);
     blit(can40,buffer,0,0,r-18,br+30,45,8);

    }

    else if(enhealth14==10){
        circlefill(buffer,r,br,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship,r-30,br);
        blit(can10,buffer,0,0,r-18,br+30,45,8);
    }


  if(enhealth14<=0 && isarett14==2){
        isarett14=1;
        counter14=1;

    }

    if (isarett14==1){
        score=score+10;
        isarett14=0;
    }







    if(br>780){
        counter14=0;
        enhealth14=100;
        isarett14=2;
    }



    if( ((30+5>=(  (sqrt(pow((s-mm),2)+pow((bs-tt),2))))) || (30+5>=(  (sqrt(pow((s-xx),2)+pow((bs-yy),2)))))) && bayrak15==0 ){


        enhealth15=enhealth15-30;
        bayrak15=1;


    }


    if( ((30+5<=(  (sqrt(pow((s-mm),2)+pow((bs-tt),2))))) && (30+5<=(  (sqrt(pow((s-xx),2)+pow((bs-yy),2))))))){


        bayrak15=0;


    }




    if(enhealth15==100){
     circlefill(buffer,s,bs,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship2,s-30,bs);
     blit(can100,buffer,0,0,s-18,bs+30,45,8);


    }

    else if(enhealth15==70){
        circlefill(buffer,s,bs,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship2,s-30,bs);
        blit(can70,buffer,0,0,s-18,bs+30,45,8);


    }

    else if(enhealth15==40){
     circlefill(buffer,s,bs,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship2,s-30,bs);
     blit(can40,buffer,0,0,s-18,bs+30,45,8);

    }

    else if(enhealth15==10){
        circlefill(buffer,s,bs,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship2,s-30,bs);
        blit(can10,buffer,0,0,s-18,bs+30,45,8);
    }

  if(enhealth15<=0 && isarett15==2){
        isarett15=1;
        counter15=1;

    }

    if (isarett15==1){
        score=score+10;
        isarett15=0;
    }






    if(bs>780){
        counter15=0;
        enhealth15=100;
        isarett15=2;
    }



if(bs>30 && bs<40){
        x1s=bs;
        x1flag15=1;
}
   if(x1flag15==1){
        circlefill(buffer,s+9.5,x1s+25,5,makecol(0,0,0)); 
        draw_sprite(buffer,en1missile,s,x1s);

         if(timer1<20){
        x1s=x1s+1.5;
    }
    else if(timer1>=20 && timer1<30){
            x1s=x1s+2;

   }
   else if(timer1>=30 && timer1<40){
                x1s=x1s+2.5;

   }
   else if(timer1>=40 && timer1<50) {
                    x1s=x1s+3.5;

   }
   else {
                        x1s=x1s+4.5;

   }
}




if(25+5>=(  sqrt(pow((s-x),2)+pow((x1s-y),2))) && s1sayac15==0 ){
        health=health-10;
        s1sayac15=1;
    }

    if(25+5<(  sqrt(pow((s-x),2)+pow((y-x1s),2)))){
        s1sayac15=0;
    }





if (100<bs && bs<110)   {
        x2s=bs;
        x2flag15=1;

}



if(x2flag15==1){
            circlefill(buffer,s+9.5,x2s+25,5,makecol(0,0,0)); 

        draw_sprite(buffer,en1missile,s,x2s);
        
         if(timer1<20){
        x2s=x2s+1.5;
    }
    else if(timer1>=20 && timer1<30){
            x2s=x2s+2;

   }
   else if(timer1>=30 && timer1<40){
                x2s=x2s+2.5;

   }
   else if(timer1>=40 && timer1<50) {
                    x2s=x2s+3.5;

   }
   else {
                        x2s=x2s+4.5;

   }
}





if(25+5>=(  sqrt(pow((s-x),2)+pow((x2s-y),2))) && s2sayac15==0 ){
        health=health-10;
        s2sayac15=1;
    }

    if(25+5<(  sqrt(pow((s-x),2)+pow((y-x2s),2)))){
        s2sayac15=0;
    }







    if( ((30+5>=(  (sqrt(pow((t-mm),2)+pow((bt-tt),2))))) || (30+5>=(  (sqrt(pow((t-xx),2)+pow((bt-yy),2)))))) && bayrak16==0 ){


        enhealth16=enhealth16-30;
        bayrak16=1;


    }


    if( ((30+5<=(  (sqrt(pow((t-mm),2)+pow((bt-tt),2))))) && (30+5<=(  (sqrt(pow((t-xx),2)+pow((bt-yy),2))))))){


        bayrak16=0;


    }




    if(enhealth16==100){
     circlefill(buffer,t,bt,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship,t-30,bt);
     blit(can100,buffer,0,0,t-18,bt+30,45,8);


    }

    else if(enhealth16==70){
        circlefill(buffer,t,bt,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship,t-30,bt);
        blit(can70,buffer,0,0,t-18,bt+30,45,8);


    }

    else if(enhealth16==40){
     circlefill(buffer,t,bt,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship,t-30,bt);
     blit(can40,buffer,0,0,t-18,bt+30,45,8);

    }

    else if(enhealth16==10){
        circlefill(buffer,t,bt,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship,t-30,bt);
        blit(can10,buffer,0,0,t-18,bt+30,45,8);
    }

  if(enhealth16<=0 && isarett16==2){
        isarett16=1;
        counter16=1;

    }

    if (isarett16==1){
        score=score+10;
        isarett16=0;
    }




    if(bt>780){
        counter16=0;
        enhealth16=100;
        isarett16=2;

    }







    if(25+25>=(  sqrt(pow((a-x),2)+pow((y-ba),2))) && counter3!=1 && sayac3==0 ){
        health=health-10;
        sayac3=1;
    }

    if(25+25<(  sqrt(pow((a-x),2)+pow((y-ba),2)))){
        sayac3=0;
    }





    if(25+25>=(  sqrt(pow((b-x),2)+pow((y-bb),2)) ) && counter4!=1 && sayac4==0 ){
        health=health-10;
        sayac4=1;

    }
    if(25+25<(  sqrt(pow((b-x),2)+pow((y-bb),2)))){
        sayac4=0;
    }


    if(25+25>=(  sqrt(pow((c-x),2)+pow((y-bc),2)) ) && counter5!=1 && sayac5==0  ){
        health=health-10;
        sayac5=1;

    }
    if(25+25<(  sqrt(pow((c-x),2)+pow((y-bc),2)))){
        sayac5=0;
    }


    if(25+25>=(  sqrt(pow((d-x),2)+pow((y-bd),2)) ) && counter6!=1 && sayac6==0  ){
        health=health-10;
        sayac6=1;

    }
    if(25+25<(  sqrt(pow((d-x),2)+pow((y-bd),2)))){
        sayac6=0;
    }


    if(25+25>=(  sqrt(pow((e-x),2)+pow((y-be),2)) ) && counter7!=1 && sayac7==0  ){
        health=health-10;
        sayac7=1;

    }
    if(25+25<(  sqrt(pow((e-x),2)+pow((y-be),2)))){
        sayac7=0;
    }


    if(25+25>=(  sqrt(pow((f-x),2)+pow((y-bf),2)) ) && counter8!=1 && sayac8==0  ){
        health=health-10;
        sayac8=1;

    }
    if(25+25<(  sqrt(pow((f-x),2)+pow((y-bf),2)))){
        sayac8=0;
    }


    if(25+25>=(  sqrt(pow((g-x),2)+pow((y-bg),2))  ) && counter9!=1 && sayac9==0  ){
        health=health-10;
        sayac9=1;

    }
    if(25+25<(  sqrt(pow((g-x),2)+pow((y-bg),2)))){
        sayac9=0;
    }


    if(25+25>=(  sqrt(pow((l-x),2)+pow((y-bl),2)) )  && counter10!=1 && sayac10==0){
        health=health-10;
        sayac10=1;

    }
    if(25+25<(  sqrt(pow((l-x),2)+pow((y-bl),2)))){
        sayac10=0;
    }


    if(25+25>=(  sqrt(pow((m-x),2)+pow((y-bm),2)) ) && counter11!=1 && sayac11==0 ){
        health=health-10;
        sayac11=1;


    }
    if(25+25<(  sqrt(pow((m-x),2)+pow((y-bm),2)))){
        sayac11=0;
    }


    if(25+25>=(  sqrt(pow((n-x),2)+pow((y-bn),2)) ) && counter12!=1 && sayac12==0  ){
        health=health-10;
        sayac12=1;

    }
    if(25+25<(  sqrt(pow((n-x),2)+pow((y-bn),2)))){
        sayac12=0;
    }


    if(25+25>=(  sqrt(pow((p-x),2)+pow((y-bp),2)) ) && counter13!=1 && sayac13==0  ){
        health=health-10;
        sayac13=1;

    }
    if(25+25<(  sqrt(pow((p-x),2)+pow((y-bp),2)))){
        sayac13=0;
    }


    if(25+25>=(  sqrt(pow((r-x),2)+pow((y-br),2)) ) && counter14!=1 && sayac14==0  ){
        health=health-10;
        sayac14=1;

    }
    if(25+25<(  sqrt(pow((r-x),2)+pow((y-br),2)))){
        sayac14=0;
    }


    if(25+25>=(  sqrt(pow((s-x),2)+pow((y-bs),2)) ) && counter15!=1 && sayac15==0  ){
        health=health-10;
        sayac15=1;

    }
    if(25+25<(  sqrt(pow((s-x),2)+pow((y-bs),2)))){
        sayac15=0;
    }


    if(25+25>=(  sqrt(pow((t-x),2)+pow((y-bt),2)) ) && counter16!=1  && sayac16==0  ){
        health=health-10;
        sayac16=1;

    }
    if(25+25<(  sqrt(pow((t-x),2)+pow((y-bt),2)))){
        sayac16=0;
    }

    if(health==100){
        blit(gcan100,buffer,0,0,x-24,y+30,45,8);
        textprintf_ex(buffer,font,x-13,y+40,makecol(0,255,0),-1,"%d",health);
    }
    if(health==90){
        blit(gcan90,buffer,0,0,x-24,y+30,45,8);
        textprintf_ex(buffer,font,x-13,y+40,makecol(0,255,0),-1,"%d",health);

    }
    if(health==80){
        blit(gcan80,buffer,0,0,x-24,y+30,45,8);
        textprintf_ex(buffer,font,x-13,y+40,makecol(0,255,0),-1,"%d",health);

    }
    if(health==70){
        blit(gcan70,buffer,0,0,x-24,y+30,45,8);
        textprintf_ex(buffer,font,x-13,y+40,makecol(0,255,0),-1,"%d",health);

    }
    if(health==60){
        blit(gcan60,buffer,0,0,x-24,y+30,45,8);
        textprintf_ex(buffer,font,x-13,y+40,makecol(0,255,0),-1,"%d",health);

    }
    if(health==50){
        blit(gcan50,buffer,0,0,x-24,y+30,45,8);
        textprintf_ex(buffer,font,x-13,y+40,makecol(0,255,0),-1,"%d",health);

    }
    if(health==40){
        blit(gcan40,buffer,0,0,x-24,y+30,45,8);
        textprintf_ex(buffer,font,x-13,y+40,makecol(0,255,0),-1,"%d",health);

    }
    if(health==30){
        blit(gcan30,buffer,0,0,x-24,y+30,45,8);
        textprintf_ex(buffer,font,x-13,y+40,makecol(0,255,0),-1,"%d",health);

    }
    if(health==20){
        blit(gcan20,buffer,0,0,x-24,y+30,45,8);
        textprintf_ex(buffer,font,x-13,y+40,makecol(0,255,0),-1,"%d",health);

    }
    if(health==10){
        blit(gcan10,buffer,0,0,x-24,y+30,45,8);
        textprintf_ex(buffer,font,x-13,y+40,makecol(0,255,0),-1,"%d",health);

    }
    if(health<=0){
        clear_bitmap(buffer);
        sesflagi1=1;
                sesflagi2=1;
                healthflag=1;

    }






if(timer1<20){
            ba++;
        }
        else if(timer1>=20 && timer1<40){
            ba = ba + 1.5;
        }
        else if(timer1>=40 && timer1<60){
             ba = ba +2;   
        }
        else {
            ba = ba + 3;
        }    if(ba>790){
        ba=-50;
    }

    if(bb>790){
        bb=-50;
    }
    if(bc>790){
        bc=-50;
    } 
    if(bd>790){
        bd=-50;
    }
    if(be>790){
        be=-50;
    }
    if(bf>790){
        bf=-50;
    }
    if(bg>790){
        bg=-50;
    }
    if(bl>790){
        bl=-50;
    }
    if(bm>790){
        bm=-50;
    } 
    if(bn>790){
        bn=-50;
    }
    if(bp>790){
        bp=-50;
    }
    if(br>790){
        br=-50;
    }

    if(bs>790){
        bs=-50;
    }
    if(bt>790){
        bt=-50;
    }
/*  if(timer1<20){
        x1c=x1c+1.5;
    }
    else if(timer1>=20 && timer1<30){
            x1c=x1c+2;

   }
   else if(timer1>=30 && timer1<40){
                x1c=x1c+2.5;

   }
    else if(timer1>=40 && timer1<50) {
                x1c=x1c+3.5;

   }
   else {
                x1c=x1c+4.5;

   }
}*/


    if(bc>250 || bd>bc){

        if(timer1<20){
            bd++;
        }
        else if(timer1>=20 && timer1<40){
            bd = bd + 1.5;
        }
        else if(timer1>=40 && timer1<60){
             bd = bd +2;   
        }
        else {
            bd = bd + 3;
        }
    }


    if(bd>250 || be>bd){
if(timer1<20){
            be++;
        }
        else if(timer1>=20 && timer1<40){
            be = be + 1.5;
        }
        else if(timer1>=40 && timer1<60){
             be = be +2;   
        }
        else {
            be = be + 3;
        }    }

    if(ba>250 || bb>ba){
if(timer1<20){
            bb++;
        }
        else if(timer1>=20 && timer1<40){
            bb = bb + 1.5;
        }
        else if(timer1>=40 && timer1<60){
             bb = bb + 2;   
        }
        else {
            bb = bb + 3;
        }    }

    if(bb>250 || bc>bb){
if(timer1<20){
            bc++;
        }
        else if(timer1>=20 && timer1<40){
            bc = bc + 1.5;
        }
        else if(timer1>=40 && timer1<60){
             bc = bc +2;   
        }
        else {
            bc = bc+ 3;
        }    }



    if(bg>250 || bl>bg){
if(timer1<20){
            bl++;
        }
        else if(timer1>=20 && timer1<40){
            bl = bl + 1.5;
        }
        else if(timer1>=40 && timer1<60){
             bl = bl +2;   
        }
        else {
            bl= bd + 3;
        }    }

    if(bl>250 || bm>bl){
if(timer1<20){
            bm++;
        }
        else if(timer1>=20 && timer1<40){
            bm = bm + 1.5;
        }
        else if(timer1>=40 && timer1<60){
             bm = bm +2;   
        }
        else {
            bm = bm + 3;
        }    }


    if(bm>250 || bn>bm){
if(timer1<20){
            bn++;
        }
        else if(timer1>=20 && timer1<40){
            bn = bn + 1.5;
        }
        else if(timer1>=40 && timer1<60){
             bn = bn +2;   
        }
        else {
            bn = bn + 3;
        }    }

    if(bn>250 || bp>bn){
if(timer1<20){
            bp++;
        }
        else if(timer1>=20 && timer1<40){
            bp = bp + 1.5;
        }
        else if(timer1>=40 && timer1<60){
             bp= bp +2;   
        }
        else {
            bp = bp + 3;
        }    }


    if(be>250 || bf>be){
if(timer1<20){
            bf++;
        }
        else if(timer1>=20 && timer1<40){
            bf = bf + 1.5;
        }
        else if(timer1>=40 && timer1<60){
             bf = bf +2;   
        }
        else {
            bf = bf + 3;
        }    }


    if(bf>250 || bg>bf){
if(timer1<20){
            bg++;
        }
        else if(timer1>=20 && timer1<40){
            bg = bg + 1.5;
        }
        else if(timer1>=40 && timer1<60){
             bg = bg +2;   
        }
        else {
            bg = bg + 3;
        }    }
    if(bp>250 || br>bp){
if(timer1<20){
            br++;
        }
        else if(timer1>=20 && timer1<40){
            br = br + 1.5;
        }
        else if(timer1>=40 && timer1<60){
             br = br +2;   
        }
        else {
            br = br + 3;
        }    }

    if(br>250 || bs>br){
if(timer1<20){
            bs++;
        }
        else if(timer1>=20 && timer1<40){
            bs = bs + 1.5;
        }
        else if(timer1>=40 && timer1<60){
             bs = bs +2;   
        }
        else {
            bs = bs + 3;
        }    }

    if(bs>250 || bt>bs){
if(timer1<20){
            bt++;
        }
        else if(timer1>=20 && timer1<40){
            bt = bt + 1.5;
        }
        else if(timer1>=40 && timer1<60){
             bt = bt +2; 
        }
        else {
            bt = bt + 3;
        }    }





    }

}/*if healthflag==0)*/





if(scoreflag==0 && healthflag==1){
fprintf(scorefile, "%d\n",score );
fclose(scorefile);













fscanf(countfile,"%d",&countfilee);
countfilee++;
fclose(countfile);
   

countfile = fopen("count.txt","w");



fprintf(countfile, "%d", countfilee );

fclose(countfile);

scorefile = fopen("scores.txt","r");

countfileec=countfilee;


while(countfileec>0){
    fscanf(scorefile,"%d",&arr[ii]);
    countfileec--;

    ii++;

}
fclose(scorefile);

guncelskor=arr[countfilee-1];

    for (zi = 0; zi < countfilee; ++zi)

    {

        for (zj = zi + 1; zj < countfilee; ++zj)

        {

            if (arr[zi] < arr[zj])

            {

                ta =  arr[zi];

                arr[zi] = arr[zj];

                arr[zj] = ta;

            }

        }

    }




while(ilkonsize<10){
    ilkon[ilkonsize] = arr[ilkonsize];
    ilkonsize++;
    
}





scoreflag=1;


}



if(healthflag==1){

            textprintf_ex(buffer,font,200,50,makecol(255,255,255),-1,"SCORE BOARD");



            if(guncelskor==ilkon[0] && redflag==0){
                textprintf_ex(buffer,font,100,120,makecol(255,255,255),-1,"1.%d  <<",ilkon[0]);
                redflag=1;
            }
            else{
                textprintf_ex(buffer,font,100,120,makecol(0,255,0),-1,"1.%d",ilkon[0]);
                redflag=0;
            }





            if(guncelskor==ilkon[1] && redflag==0){
                textprintf_ex(buffer,font,100,140,makecol(255,255,255),-1,"2.%d  <<",ilkon[1]);
                redflag=1;

            }
            else{
                textprintf_ex(buffer,font,100,140,makecol(0,255,0),-1,"2.%d",ilkon[1]);
                redflag=0;

            }



            if(guncelskor==ilkon[2] && redflag==0){
                textprintf_ex(buffer,font,100,160,makecol(255,255,255),-1,"3.%d  <<",ilkon[2]);
                                redflag=1;


            }
            else{
                textprintf_ex(buffer,font,100,160,makecol(0,255,0),-1,"3.%d",ilkon[2]);
                redflag=0;

            }


            if(guncelskor==ilkon[3] && redflag==0){
                textprintf_ex(buffer,font,100,180,makecol(255,255,255),-1,"4.%d  <<",ilkon[3]);
                                redflag=1;

            }
            else{
                textprintf_ex(buffer,font,100,180,makecol(0,255,0),-1,"4.%d",ilkon[3]);
                redflag=0;

            }





            if(guncelskor==ilkon[4] && redflag==0){
                textprintf_ex(buffer,font,100,200,makecol(255,255,255),-1,"5.%d  <<",ilkon[4]);
                                redflag=1;

            }
            else{
                textprintf_ex(buffer,font,100,200,makecol(0,255,0),-1,"5.%d",ilkon[4]);
                                redflag=0;

            }




            if(guncelskor==ilkon[5] && redflag==0){
                textprintf_ex(buffer,font,100,220,makecol(255,255,255),-1,"6.%d  <<",ilkon[5]);
                                redflag=1;

            }
            else{
                textprintf_ex(buffer,font,100,220,makecol(0,255,0),-1,"6.%d",ilkon[5]);
                                redflag=0;

            }





            if(guncelskor==ilkon[6] && redflag==0){
                textprintf_ex(buffer,font,100,240,makecol(255,255,255),-1,"7.%d  <<",ilkon[6]);
                                redflag=1;

            }
            else{
                textprintf_ex(buffer,font,100,240,makecol(0,255,0),-1,"7.%d",ilkon[6]);
                                redflag=0;

            }






            if(guncelskor==ilkon[7] && redflag==0){
                textprintf_ex(buffer,font,100,260,makecol(255,255,255),-1,"8.%d  <<",ilkon[7]);
                                redflag=1;

            }
            else{
                textprintf_ex(buffer,font,100,260,makecol(0,255,0),-1,"8.%d",ilkon[7]);
                                redflag=0;

            }






            if(guncelskor==ilkon[8] && redflag==0){
                textprintf_ex(buffer,font,100,280,makecol(255,255,255),-1,"9.%d  <<",ilkon[8]);
                                redflag=1;

            }
            else{
                textprintf_ex(buffer,font,100,280,makecol(0,255,0),-1,"9.%d",ilkon[8]);
                                redflag=0;

            }




            if(guncelskor==ilkon[9] && redflag==0){
                textprintf_ex(buffer,font,100,300,makecol(255,255,255),-1,"10.%d  <<",ilkon[9]);
                                redflag=1;

            }
            else{
                textprintf_ex(buffer,font,100,300,makecol(0,255,0),-1,"10.%d",ilkon[9]);
                                redflag=0;

            }




}



    /*111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111*/

    /***************************************************************************************************/
           if(healthflag==0) {

    if(lag2==0){
        scare_mouse();

        circlefill(buffer,x,y,25,makecol(0,0,0)); 
        draw_sprite(buffer,aircraft2,x-35,y);
        blit(gcan100,buffer,0,0,x-24,y+30,45,8);




        if(key[KEY_UP]){
            y--;
        }  
        else if(key[KEY_DOWN]){
            y++;
        }


        if(key[KEY_LEFT]){
            x=x-2;
        }  
        else if(key[KEY_RIGHT]){
            x=x+2;
        }




        if (flag==0 ){
            xx=x;
                            if(sesflagi2==0){

            play_sample(bombfile,255,128,1000,0);


}
        }
        flag=1;



        if( (30+5>=(  (sqrt(pow((a-xx),2)+pow((ba-yy),2))))))    {

            isaret=1;

        }
        if(isaret==0 || enhealth3<=0){
            circlefill(buffer,xx,yy,5,GREEN); 
            draw_sprite(buffer,bombpicfile2,xx-7,yy-5);
        }




        yy=yy-6;

        if(yy<0){
            flag=0;
            yy=y;
            isaret=0;
        }



        if(flag2==0){

            mm=x;
                            if(sesflagi2==0){

            play_sample(bombfile,255,128,1000,0);

}
        }
        flag2=1;



        if( (30+5>=(  (sqrt(pow((a-mm),2)+pow((ba-tt),2))))))    {

            isaret2=1;

        }




        if(isaret2==0 || enhealth3<=0){

            circlefill(buffer,mm,tt,5,RED); 
            draw_sprite(buffer,bombpicfile2,mm-7,tt-5);
        }
        tt=tt-6;

        if(tt<0 && yy<300){
            flag2=0;
            tt=y;
            isaret2=0;
        }




        if(timer1%10==0){
            lm=1;
        }

        if(lm==1){
           textprintf_ex(buffer,font,200,0,makecol(0,255,0),-1,"PRESS SPACE");

       }



       cann3=0;


       if(enhealth3>9){
        endusukcan=enhealth3;
        cann3=3;
    }

    if(endusukcan>enhealth4 && enhealth4>9){
        endusukcan=enhealth4;
        cann3=4;
    }
    if(endusukcan>enhealth5 && enhealth5>9){
        endusukcan=enhealth5;
        cann3=5;


    }
    if(endusukcan>enhealth6 && enhealth6>9){
        endusukcan=enhealth6;
        cann3=6;


    }
    if(endusukcan>enhealth7 && enhealth7>9){
        endusukcan=enhealth7;
        cann3=7;


    }
    if(endusukcan>enhealth8 && enhealth8>9){
        endusukcan=enhealth8;
        cann3=8;


    }
    if(endusukcan>enhealth9 && enhealth9>9){
        endusukcan=enhealth9;
        cann3=9;


    }
    if(endusukcan>enhealth10 && enhealth10>9){
        endusukcan=enhealth10;
        cann3=10;


    }
    if(endusukcan>enhealth11 && enhealth14>9){
        endusukcan=enhealth11;
        cann3=11;


    }
    if(endusukcan>enhealth12 && enhealth12>9){
        endusukcan=enhealth12;
        cann3=12;


    }
    if(endusukcan>enhealth13 && enhealth13>9){
        endusukcan=enhealth13;
        cann3=13;


    }
    if(endusukcan>enhealth14 && enhealth14>9){
        endusukcan=enhealth14;
        cann3=14;


    }
    if(endusukcan>enhealth15 && enhealth15>9){
        endusukcan=enhealth15;
        cann3=15;


    }
    if(endusukcan>enhealth16 && enhealth16>9){
        endusukcan=enhealth16;
        cann3=16;


    }



    textprintf_ex(buffer,font,0,0,makecol(0,255,0),-1,"%d",timer1);




    if(key[KEY_SPACE] && cann3==3 && lm==1){

        enhealth3=enhealth3-100;
        lm=0;
    }
    if(key[KEY_SPACE] && cann3==4 && lm==1){

        enhealth4=enhealth4-100;
        lm=0;

    }

    if(key[KEY_SPACE] && cann3==5 && lm==1){

        enhealth5=enhealth5-100;
        lm=0;

    }

    if(key[KEY_SPACE] && cann3==6 && lm==1){

        enhealth6=enhealth6-100;
        lm=0;

    }

    if(key[KEY_SPACE] && cann3==7 && lm==1){

        enhealth7=enhealth7-100;
        lm=0;

    }

    if(key[KEY_SPACE] && cann3==8 && lm==1){


        enhealth8=enhealth8-100;
        lm=0;

    }

    if(key[KEY_SPACE] && cann3==9 && lm==1){


        enhealth9=enhealth9-100;
        lm=0;

    }

    if(key[KEY_SPACE] && cann3==10 && lm==1){

        enhealth10=enhealth10-100;
        lm=0;

    }

    if(key[KEY_SPACE] && cann3==11 && lm==1){


        enhealth11=enhealth11-100;
        lm=0;

    }
    if(key[KEY_SPACE] && cann3==12 && lm==1){


        enhealth12=enhealth12-100;
        lm=0;

    }

    if(key[KEY_SPACE] && cann3==13 && lm==1){


        enhealth13=enhealth13-100;
        lm=0;

    }

    if(key[KEY_SPACE] && cann3==14 && lm==1){

        enhealth14=enhealth14-100;
        lm=0;

    }

    if(key[KEY_SPACE] && cann3==15 && lm==1){

        enhealth15=enhealth15-100;
        lm=0;

    }

    if(key[KEY_SPACE] && cann3==16 && lm==1){
      

        enhealth16=enhealth16-100;
        lm=0;

    }


    if(lm==1 && key[KEY_SPACE]){
       blit(arkaplanresmi,buffer,0,0,x,0,500,768);
    }





    
      if( ((30+5>=(  (sqrt(pow((a-mm),2)+pow((ba-tt),2))))) || (30+5>=(  (sqrt(pow((a-xx),2)+pow((ba-yy),2)))))) && bayrak3==0 ){


        enhealth3=enhealth3-40;
        bayrak3=1;


    }


    if( ((30+5<=(  (sqrt(pow((a-mm),2)+pow((ba-tt),2))))) && (30+5<=(  (sqrt(pow((a-xx),2)+pow((ba-yy),2))))))){


        bayrak3=0;


    }




    if(enhealth3==100){
        circlefill(buffer,a,ba,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship2,a-30,ba);
        blit(can100,buffer,0,0,a-18,ba+30,45,8);


    }

    else if(enhealth3==60){
        circlefill(buffer,a,ba,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship2,a-30,ba);
        blit(can60,buffer,0,0,a-18,ba+30,45,8);


    }

    else if(enhealth3==20){
        circlefill(buffer,a,ba,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship2,a-30,ba);
        blit(can20,buffer,0,0,a-18,ba+30,45,8);


    }

    if(enhealth3<=0 && isarett3==2){
        isarett3=1;
        counter3=1;

    }

    if (isarett3==1){
        score=score+10;
        isarett3=0;
    }





    if(ba>780){
        counter3=0;
        enhealth3=100;

    }






if(ba>30 && ba<40 ){
        x1a=ba;
        x1flag3=1;
}
   if(x1flag3==1 ){



        circlefill(buffer,a+9.5,x1a+25,5,makecol(0,0,0)); 
        draw_sprite(buffer,en1missile,a,x1a);
        if(timer1<20){
        x1a=x1a+1.5;
    }
    else if(timer1>=20 && timer1<30){
            x1a=x1a+2;

   }
   else if(timer1>=30 && timer1<40){
                x1a=x1a+2.5;

   }
    else if(timer1>=40 && timer1<50) {
                    x1a=x1a+3.5;

   }
   else {
                        x1a=x1a+4.5;

   }
}

if(25+5>=(  sqrt(pow((a-x),2)+pow((x1a-y),2))) && s1sayac3==0 ){
         health=health-10;
      
        s1sayac3=1;
    }

    if(25+5<(  sqrt(pow((a-x),2)+pow((y-x1a),2)))){
        s1sayac3=0;
    }



if (100<ba && ba<110)   {
        x2a=ba;
        x2flag3=1;

}



if(x2flag3==1){

            circlefill(buffer,a+9.5,x2a+25,5,makecol(0,0,0)); 

        draw_sprite(buffer,en1missile,a,x2a);
               if(timer1<20){
        x2a=x2a+1.5;
    }
    else if(timer1>=20 && timer1<30){
            x2a=x2a+2;

   }
   else if(timer1>=30 && timer1<40){
                x2a=x2a+2.5;

   }
   else if(timer1>=40 && timer1<50) {
                    x2a=x2a+3.5;

   }
   else {
                        x2a=x2a+4.5;

   }
}


if(25+5>=(  sqrt(pow((a-x),2)+pow((x2a-y),2))) && s2sayac3==0 ){
         health=health-10;
         s2sayac3=1;
    }

    if(25+5<(  sqrt(pow((a-x),2)+pow((y-x2a),2)))){
        s2sayac3=0;
    }



    if( ((30+5>=(  (sqrt(pow((b-mm),2)+pow((bb-tt),2))))) || (30+5>=(  (sqrt(pow((b-xx),2)+pow((bb-yy),2)))))) && bayrak4==0 ){


        enhealth4=enhealth4-40;
        bayrak4=1;


    }


    if( ((30+5<=(  (sqrt(pow((b-mm),2)+pow((bb-tt),2))))) && (30+5<=(  (sqrt(pow((b-xx),2)+pow((bb-yy),2))))))){


        bayrak4=0;


    }




    if(enhealth4==100){
        circlefill(buffer,b,bb,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship,b-30,bb);
        blit(can100,buffer,0,0,b-18,bb+30,45,8);


    }

    else if(enhealth4==60){
       circlefill(buffer,b,bb,30,makecol(0,0,0)); 
       draw_sprite(buffer,enspaceship,b-30,bb);
       blit(can60,buffer,0,0,b-18,bb+30,45,8);



    }

    else if(enhealth4==20){
     circlefill(buffer,b,bb,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship,b-30,bb);
     blit(can20,buffer,0,0,b-18,bb+30,45,8);



    }

   

    if(enhealth4<=0 && isarett4==2){
        isarett4=1;
        counter4=1;

    }

   if (isarett4==1){
        score=score+10;
        isarett4=0;
    }


    if(bb>780){
        counter4=0;
        enhealth4=100;
        isarett4=2;

    }



    if( ((30+5>=(  (sqrt(pow((c-mm),2)+pow((bc-tt),2))))) || (30+5>=(  (sqrt(pow((c-xx),2)+pow((bc-yy),2)))))) && bayrak5==0 ){


        enhealth5=enhealth5-40;
        bayrak5=1;


    }


    if( ((30+5<=(  (sqrt(pow((c-mm),2)+pow((bc-tt),2))))) && (30+5<=(  (sqrt(pow((c-xx),2)+pow((bc-yy),2))))))){


        bayrak5=0;


    }




    if(enhealth5==100){
        circlefill(buffer,c,bc,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship2,c-30,bc);
        blit(can100,buffer,0,0,c-18,bc+30,45,8);


    }

    else if(enhealth5==60){
       circlefill(buffer,c,bc,30,makecol(0,0,0)); 
       draw_sprite(buffer,enspaceship2,c-30,bc);
       blit(can60,buffer,0,0,c-18,bc+30,45,8);



    }

    else if(enhealth5==20){
     circlefill(buffer,c,bc,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship2,c-30,bc);
     blit(can20,buffer,0,0,c-18,bc+30,45,8);



    }

  if(enhealth5<=0 && isarett5==2){
        isarett5=1;
        counter5=1;

    }

    if (isarett5==1){
        score=score+10;
        isarett5=0;
    }


    if(bc>780){
        counter5=0;
        enhealth5=100;
        isarett5=2;
    }


if(bc>30 && bc<40){
        x1c=bc;
        x1flag5=1;
}
   if(x1flag5==1){
            circlefill(buffer,c+9.5,x1c+25,5,makecol(0,0,0)); 

        draw_sprite(buffer,en1missile,c,x1c);
          if(timer1<20){
        x1c=x1c+1.5;
    }
    else if(timer1>=20 && timer1<30){
            x1c=x1c+2;

   }
   else if(timer1>=30 && timer1<40){
                x1c=x1c+2.5;

   }
    else if(timer1>=40 && timer1<50) {
                x1c=x1c+3.5;

   }
   else {
                x1c=x1c+4.5;

   }
}

if(25+5>=(  sqrt(pow((c-x),2)+pow((x1c-y),2))) && s1sayac5==0 ){
        health=health-10;
        s1sayac5=1;
    }

    if(25+5<(  sqrt(pow((c-x),2)+pow((y-x1c),2)))){
        s1sayac5=0;
    }



if (100<bc && bc<110)   {
        x2c=bc;
        x2flag5=1;

}



if(x2flag5==1){
            circlefill(buffer,c+9.5,x2c+25,5,makecol(0,0,0)); 

        draw_sprite(buffer,en1missile,c,x2c);
               if(timer1<20){
        x2c=x2c+1.5;
    }
    else if(timer1>=20 && timer1<30){
            x2c=x2c+2;

   }
   else if(timer1>=30 && timer1<40){
                x2c=x2c+2.5;

   }
   else if(timer1>=40 && timer1<50) {
                    x2c=x2c+3.5;

   }
   else {
                        x2c=x2c+4.5;

   }
}




if(25+5>=(  sqrt(pow((c-x),2)+pow((x2c-y),2))) && s2sayac5==0 ){
        health=health-10;
        s2sayac5=1;
    }

    if(25+5<(  sqrt(pow((c-x),2)+pow((y-x2c),2)))){
        s2sayac5=0;
    }



    if( ((30+5>=(  (sqrt(pow((d-mm),2)+pow((bd-tt),2))))) || (30+5>=(  (sqrt(pow((d-xx),2)+pow((bd-yy),2)))))) && bayrak6==0 ){


        enhealth6=enhealth6-40;
        bayrak6=1;


    }


    if( ((30+5<=(  (sqrt(pow((d-mm),2)+pow((bd-tt),2))))) && (30+5<=(  (sqrt(pow((d-xx),2)+pow((bd-yy),2))))))){


        bayrak6=0;


    }




    if(enhealth6==100){
        circlefill(buffer,d,bd,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship,d-30,bd);
        blit(can100,buffer,0,0,d-18,bd+30,45,8);


    }

    else if(enhealth6==60){
      circlefill(buffer,d,bd,30,makecol(0,0,0)); 
      draw_sprite(buffer,enspaceship,d-30,bd);
      blit(can60,buffer,0,0,d-18,bd+30,45,8);



    }

    else if(enhealth6==20){
        circlefill(buffer,d,bd,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship,d-30,bd);
        blit(can20,buffer,0,0,d-18,bd+30,45,8);


    }


   if(enhealth6<=0 && isarett6==2){
        isarett6=1;
        counter6=1;

    }

    if (isarett6==1){
        score=score+10;
        isarett6=0;
    }



    if(bd>780){
        counter6=0;
        enhealth6=100;
        isarett6=2;
    }



    if( ((30+5>=(  (sqrt(pow((e-mm),2)+pow((be-tt),2))))) || (30+5>=(  (sqrt(pow((e-xx),2)+pow((be-yy),2)))))) && bayrak7==0 ){


        enhealth7=enhealth7-40;
        bayrak7=1;


    }


    if( ((30+5<=(  (sqrt(pow((e-mm),2)+pow((be-tt),2))))) && (30+5<=(  (sqrt(pow((e-xx),2)+pow((be-yy),2))))))){


        bayrak7=0;


    }




    if(enhealth7==100){
     circlefill(buffer,e,be,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship2,e-30,be);
     blit(can100,buffer,0,0,e-18,be+30,45,8);;


    }

    else if(enhealth7==60){
       circlefill(buffer,e,be,30,makecol(0,0,0)); 
       draw_sprite(buffer,enspaceship2,e-30,be);
       blit(can60,buffer,0,0,e-18,be+30,45,8);



    }

    else if(enhealth7==20){
        circlefill(buffer,e,be,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship2,e-30,be);
        blit(can40,buffer,0,0,e-18,be+30,45,8);;;


    }



   if(enhealth7<=0 && isarett7==2){
        isarett7=1;
        counter7=1;

    }

    if (isarett7==1){
        score=score+10;
        isarett7=0;
    }





    if(be>780){
        counter7=0;
        enhealth7=100;
        isarett7=2;
    }


    if(be>30 && be<40){
        x1e=be;
        x1flag7=1;
}
   if(x1flag7==1){
                circlefill(buffer,e+9.5,x1e+25,5,makecol(0,0,0)); 

        draw_sprite(buffer,en1missile,e,x1e);
        if(timer1<20){
        x1e=x1e+1.5;
    }
    else if(timer1>=20 && timer1<30){
            x1e=x1e+2;

   }
   else if(timer1>=30 && timer1<40){
                x1e=x1e+2.5;

   }
   else if(timer1>=40 && timer1<50) {
                    x1e=x1e+3.5;

   }
   else {
                        x1e=x1e+4.5;

   }
}
if(25+5>=(  sqrt(pow((e-x),2)+pow((x1e-y),2))) && s1sayac7==0 ){
        health=health-10;
        s1sayac7=1;
    }

    if(25+5<(  sqrt(pow((e-x),2)+pow((y-x1e),2)))){
        s1sayac7=0;
    }



if (100<be && be<110)   {
        x2e=be;
        x2flag7=1;

}



if(x2flag7==1){
                circlefill(buffer,e+9.5,x2e+25,5,makecol(0,0,0)); 

        draw_sprite(buffer,en1missile,e,x2e);
        if(timer1<20){
        x2e=x2e+1.5;
    }
    else if(timer1>=20 && timer1<30){
            x2e=x2e+2;

   }
   else if(timer1>=30 && timer1<40){
                x2e=x2e+2.5;

   }
   else if(timer1>=40 && timer1<50) {
                    x2e=x2e+3.5;

   }
   else {
                        x2e=x2e+4.5;

   }
}
if(25+5>=(  sqrt(pow((e-x),2)+pow((x2e-y),2))) && s2sayac7==0 ){
        health=health-10;
        s2sayac7=1;
    }

    if(25+5<(  sqrt(pow((e-x),2)+pow((y-x2e),2)))){
        s2sayac7=0;
    }



    if( ((30+5>=(  (sqrt(pow((f-mm),2)+pow((bf-tt),2))))) || (30+5>=(  (sqrt(pow((f-xx),2)+pow((bf-yy),2)))))) && bayrak8==0 ){


        enhealth8=enhealth8-40;
        bayrak8=1;


    }


    if( ((30+5<=(  (sqrt(pow((f-mm),2)+pow((bf-tt),2))))) && (30+5<=(  (sqrt(pow((f-xx),2)+pow((bf-yy),2))))))){


        bayrak8=0;


    }




    if(enhealth8==100){
     circlefill(buffer,f,bf,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship,f-30,bf);
     blit(can100,buffer,0,0,f-18,bf+30,45,8);


    }

    else if(enhealth8==60){
       circlefill(buffer,f,bf,30,makecol(0,0,0)); 
       draw_sprite(buffer,enspaceship,f-30,bf);
       blit(can60,buffer,0,0,f-18,bf+30,45,8);


    }

    else if(enhealth8==20){
        circlefill(buffer,f,bf,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship,f-30,bf);
        blit(can20,buffer,0,0,f-18,bf+30,45,8);


    }


   if(enhealth8<=0 && isarett8==2){
        isarett8=1;
        counter8=1;

    }

    if (isarett8==1){
        score=score+10;
        isarett8=0;
    }


    if(bf>780){
        counter8=0;
        enhealth8=100;
        isarett8=2;
    }


    if( ((30+5>=(  (sqrt(pow((g-mm),2)+pow((bg-tt),2))))) || (30+5>=(  (sqrt(pow((g-xx),2)+pow((bg-yy),2)))))) && bayrak9==0 ){


        enhealth9=enhealth9-40;
        bayrak9=1;


    }


    if( ((30+5<=(  (sqrt(pow((g-mm),2)+pow((bg-tt),2))))) && (30+5<=(  (sqrt(pow((g-xx),2)+pow((bg-yy),2))))))){


        bayrak9=0;


    }




    if(enhealth9==100){
     circlefill(buffer,g,bg,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship2,g-30,bg);
     blit(can100,buffer,0,0,g-18,bg+30,45,8);


    }

    else if(enhealth9==60){
       circlefill(buffer,g,bg,30,makecol(0,0,0)); 
       draw_sprite(buffer,enspaceship2,g-30,bg);
       blit(can60,buffer,0,0,g-18,bg+30,45,8);


    }

    else if(enhealth9==20){
       circlefill(buffer,g,bg,30,makecol(0,0,0)); 
       draw_sprite(buffer,enspaceship2,g-30,bg);
       blit(can20,buffer,0,0,g-18,bg+30,45,8);


    }


  if(enhealth9<=0 && isarett9==2){
        isarett9=1;
        counter9=1;

    }

    if (isarett9==1){
        score=score+10;
        isarett9=0;
    }



    if(bg>780){
        counter9=0;
        enhealth9=100;
        isarett9=2;

    }



if(bg>30 && bg<40){
        x1g=bg;
        x1flag9=1;
}
   if(x1flag9==1){
            circlefill(buffer,g+9.5,x1g+25,5,makecol(0,0,0)); 
draw_sprite(buffer,en1missile,g,x1g);
       if(timer1<20){
        x1g=x1g+1.5;
    }
    else if(timer1>=20 && timer1<30){
            x1g=x1g+2;

   }
   else if(timer1>=30 && timer1<40){
                x1g=x1g+2.5;

   }
   else if(timer1>=40 && timer1<50) {
                    x1g=x1g+3.5;

   }
   else {
                        x1g=x1g+4.5;

   }
}

if(25+5>=(  sqrt(pow((g-x),2)+pow((x1g-y),2))) && s1sayac9==0 ){
        health=health-10;
        s1sayac9=1;
    }

    if(25+5<(  sqrt(pow((g-x),2)+pow((y-x1g),2)))){
        s1sayac9=0;
    }




if (100<bg && bg<110)   {
        x2g=bg;
        x2flag9=1;

}



if(x2flag9==1){
        circlefill(buffer,g+9.5,x2g+25,5,makecol(0,0,0)); 
        draw_sprite(buffer,en1missile,g,x2g);
               if(timer1<20){
        x2g=x2g+1.5;
    }
    else if(timer1>=20 && timer1<30){
            x2g=x2g+2;

   }
   else if(timer1>=30 && timer1<40){
                x2g=x2g+2.5;

   }
   else if(timer1>=40 && timer1<50) {
                    x2g=x2g+3.5;

   }
   else {
                        x2g=x2g+4.5;

   }
}

   if(25+5>=(  sqrt(pow((g-x),2)+pow((x2g-y),2))) && s2sayac9==0 ){
        health=health-10;
        s2sayac9=1;
    }

    if(25+5<(  sqrt(pow((g-x),2)+pow((y-x2g),2)))){
        s2sayac9=0;
    }




    if( ((30+5>=(  (sqrt(pow((l-mm),2)+pow((bl-tt),2))))) || (30+5>=(  (sqrt(pow((l-xx),2)+pow((bl-yy),2)))))) && bayrak10==0 ){


        enhealth10=enhealth10-40;
        bayrak10=1;


    }


    if( ((30+5<=(  (sqrt(pow((l-mm),2)+pow((bl-tt),2))))) && (30+5<=(  (sqrt(pow((l-xx),2)+pow((bl-yy),2))))))){


        bayrak10=0;


    }


    if(enhealth10==100){
     circlefill(buffer,l,bl,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship,l-30,bl);
     blit(can100,buffer,0,0,l-18,bl+30,45,8);


    }

    else if(enhealth10==60){
        circlefill(buffer,l,bl,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship,l-30,bl);
        blit(can60,buffer,0,0,l-18,bl+30,45,8);


    }

    else if(enhealth10==20){
     circlefill(buffer,l,bl,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship,l-30,bl);
     blit(can20,buffer,0,0,l-18,bl+30,45,8);

    }


  if(enhealth10<=0 && isarett10==2){
        isarett10=1;
        counter10=1;

    }

    if (isarett10==1){
        score=score+10;
        isarett10=0;
    }




    if(bl>780){
        counter10=0;
        enhealth10=100;
        isarett10=2;
    }



    if( ((30+5>=(  (sqrt(pow((m-mm),2)+pow((bm-tt),2))))) || (30+5>=(  (sqrt(pow((m-xx),2)+pow((bm-yy),2)))))) && bayrak11==0 ){


        enhealth11=enhealth11-40;
        bayrak11=1;


    }


    if( ((30+5<=(  (sqrt(pow((m-mm),2)+pow((bm-tt),2))))) && (30+5<=(  (sqrt(pow((m-xx),2)+pow((bm-yy),2))))))){


        bayrak11=0;


    }



    if(enhealth11==100){
     circlefill(buffer,m,bm,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship2,m-30,bm);
     blit(can100,buffer,0,0,m-18,bm+30,45,8);


    }

    else if(enhealth11==60){
        circlefill(buffer,m,bm,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship2,m-30,bm);
        blit(can60,buffer,0,0,m-18,bm+30,45,8);


    }

    else if(enhealth11==20){
     circlefill(buffer,m,bm,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship2,m-30,bm);
     blit(can20,buffer,0,0,m-18,bm+30,45,8);

    }

  


  if(enhealth11<=0 && isarett11==2){
        isarett11=1;
        counter11=1;

    }

    if (isarett11==1){
        score=score+10;
        isarett11=0;
    }




    if(bm>780){
        counter11=0;
        enhealth11=100;
        isarett11=2;

    }


    if(bm>30 && bm<40){
        x1m=bm;
        x1flag11=1;
}
   if(x1flag11==1){
         circlefill(buffer,m+9.5,x1m+25,5,makecol(0,0,0)); 
        draw_sprite(buffer,en1missile,m,x1m);
               if(timer1<20){
        x1m=x1m+1.5;
    }
    else if(timer1>=20 && timer1<30){
            x1m=x1m+2;

   }
   else if(timer1>=30 && timer1<40){
                x1m=x1m+2.5;

   }
   else if(timer1>=40 && timer1<50) {
                    x1m=x1m+3.5;

   }
   else {
                        x1m=x1m+4.5;

   }
}


if(25+5>=(  sqrt(pow((m-x),2)+pow((x1m-y),2))) && s1sayac11==0 ){
        health=health-10;
        s1sayac11=1;
    }

    if(25+5<(  sqrt(pow((m-x),2)+pow((y-x1m),2)))){
        s1sayac11=0;
    }




if (100<bm && bm<110)   {
        x2m=bm;
        x2flag11=1;

}



if(x2flag11==1){
             circlefill(buffer,m+9.5,x2m+25,5,makecol(0,0,0)); 

        draw_sprite(buffer,en1missile,m,x2m);
               if(timer1<20){
        x2m=x2m+1.5;
    }
    else if(timer1>=20 && timer1<30){
            x2m=x2m+2;

   }
   else if(timer1>=30 && timer1<40){
                x2m=x2m+2.5;

   }
   else if(timer1>=40 && timer1<50) {
                    x2m=x2m+3.5;

   }
   else {
                        x2m=x2m+4.5;

   }
}

if(25+5>=(  sqrt(pow((m-x),2)+pow((x2m-y),2))) && s2sayac11==0 ){
        health=health-10;
        s2sayac11=1;
    }

    if(25+5<(  sqrt(pow((m-x),2)+pow((y-x2m),2)))){
        s2sayac11=0;
    }



    if( ((30+5>=(  (sqrt(pow((n-mm),2)+pow((bn-tt),2))))) || (30+5>=(  (sqrt(pow((n-xx),2)+pow((bn-yy),2)))))) && bayrak12==0 ){


        enhealth12=enhealth12-40;
        bayrak12=1;


    }


    if( ((30+5<=(  (sqrt(pow((n-mm),2)+pow((bn-tt),2))))) && (30+5<=(  (sqrt(pow((n-xx),2)+pow((bn-yy),2))))))){


        bayrak12=0;


    }




    if(enhealth12==100){
     circlefill(buffer,n,bn,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship,n-30,bn);
     blit(can100,buffer,0,0,n-18,bn+30,45,8);


    }

    else if(enhealth12==60){
        circlefill(buffer,n,bn,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship,n-30,bn);
        blit(can60,buffer,0,0,n-18,bn+30,45,8);


    }

    else if(enhealth12==20){
     circlefill(buffer,n,bn,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship,n-30,bn);
     blit(can20,buffer,0,0,n-18,bn+30,45,8);

    }

  

  if(enhealth12<=0 && isarett12==2){
        isarett12=1;
        counter12=1;

    }

    if (isarett12==1){
        score=score+10;
        isarett12=0;
    }






    if(bn>780){
        counter12=0;
        enhealth12=100;
        isarett12=2;

    }




    if( ((30+5>=(  (sqrt(pow((p-mm),2)+pow((bp-tt),2))))) || (30+5>=(  (sqrt(pow((p-xx),2)+pow((bp-yy),2)))))) && bayrak13==0 ){


        enhealth13=enhealth13-40;
        bayrak13=1;


    }


    if( ((30+5<=(  (sqrt(pow((p-mm),2)+pow((bp-tt),2))))) && (30+5<=(  (sqrt(pow((p-xx),2)+pow((bp-yy),2))))))){


        bayrak13=0;


    }




    if(enhealth13==100){
     circlefill(buffer,p,bp,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship2,p-30,bp);
     blit(can100,buffer,0,0,p-18,bp+30,45,8);


    }

    else if(enhealth13==60){
        circlefill(buffer,p,bp,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship2,p-30,bp);
        blit(can60,buffer,0,0,p-18,bp+30,45,8);


    }

    else if(enhealth13==20){
     circlefill(buffer,p,bp,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship2,p-30,bp);
     blit(can20,buffer,0,0,p-18,bp+30,45,8);

    }


    if(enhealth13<=0 && isarett13==2){
        isarett13=1;
        counter13=1;

    }

    if (isarett13==1){
        score=score+10;
        isarett13=0;
    }





    if(bp>780){
        counter13=0;
        enhealth13=100;
        isarett13=2;
    }


if(bp>30 && bp<40){
        x1p=bp;
        x1flag13=1;
}
   if(x1flag13==1){
        circlefill(buffer,p+9.5,x1p+25,5,makecol(0,0,0)); 
        draw_sprite(buffer,en1missile,p,x1p);
                if(timer1<20){
        x1p=x1p+1.5;
    }
    else if(timer1>=20 && timer1<30){
            x1p=x1p+2;

   }
   else if(timer1>=30 && timer1<40){
                x1p=x1p+2.5;

   }
   else if(timer1>=40 && timer1<50) {
                    x1p=x1p+3.5;

   }
   else {
                        x1p=x1p+4.5;

   }
}

if(25+5>=(  sqrt(pow((p-x),2)+pow((x1p-y),2))) && s1sayac13==0 ){
        health=health-10;
        s1sayac13=1;
    }

    if(25+5<(  sqrt(pow((p-x),2)+pow((y-x1p),2)))){
        s1sayac13=0;
    }





if (100<bp && bp<110)   {
        x2p=bp;
        x2flag13=1;

}



if(x2flag13==1){
                circlefill(buffer,p+9.5,x2p+25,5,makecol(0,0,0)); 

        draw_sprite(buffer,en1missile,p,x2p);
          if(timer1<20){
        x2p=x2p+1.5;
    }
    else if(timer1>=20 && timer1<30){
            x2p=x2p+2;

   }
   else if(timer1>=30 && timer1<40){
                x2p=x2p+2.5;

   }
   else if(timer1>=40 && timer1<50) {
                    x2p=x2p+3.5;

   }
   else {
                        x2p=x2p+4.5;

   }
}
   if(25+5>=(  sqrt(pow((p-x),2)+pow((x2p-y),2))) && s2sayac13==0 ){
        health=health-10;
        s2sayac13=1;
    }

    if(25+5<(  sqrt(pow((p-x),2)+pow((y-x2p),2)))){
        s2sayac13=0;
    }



    if( ((30+5>=(  (sqrt(pow((r-mm),2)+pow((br-tt),2))))) || (30+5>=(  (sqrt(pow((r-xx),2)+pow((br-yy),2)))))) && bayrak14==0 ){


        enhealth14=enhealth14-40;
        bayrak14=1;


    }


    if( ((30+5<=(  (sqrt(pow((r-mm),2)+pow((br-tt),2))))) && (30+5<=(  (sqrt(pow((r-xx),2)+pow((br-yy),2))))))){


        bayrak14=0;


    }




    if(enhealth14==100){
     circlefill(buffer,r,br,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship,r-30,br);
     blit(can100,buffer,0,0,r-18,br+30,45,8);


    }

    else if(enhealth14==60){
        circlefill(buffer,r,br,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship,r-30,br);
        blit(can60,buffer,0,0,r-18,br+30,45,8);


    }

    else if(enhealth14==20){
     circlefill(buffer,r,br,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship,r-30,br);
     blit(can20,buffer,0,0,r-18,br+30,45,8);

    }


  if(enhealth14<=0 && isarett14==2){
        isarett14=1;
        counter14=1;

    }

    if (isarett14==1){
        score=score+10;
        isarett14=0;
    }



    if(br>780){
        counter14=0;
        enhealth14=100;
        isarett14=2;
    }




    if( ((30+5>=(  (sqrt(pow((s-mm),2)+pow((bs-tt),2))))) || (30+5>=(  (sqrt(pow((s-xx),2)+pow((bs-yy),2)))))) && bayrak15==0 ){


        enhealth15=enhealth15-40;
        bayrak15=1;


    }


    if( ((30+5<=(  (sqrt(pow((s-mm),2)+pow((bs-tt),2))))) && (30+5<=(  (sqrt(pow((s-xx),2)+pow((bs-yy),2))))))){


        bayrak15=0;


    }




    if(enhealth15==100){
     circlefill(buffer,s,bs,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship2,s-30,bs);
     blit(can100,buffer,0,0,s-18,bs+30,45,8);


    }

    else if(enhealth15==60){
        circlefill(buffer,s,bs,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship2,s-30,bs);
        blit(can60,buffer,0,0,s-18,bs+30,45,8);


    }

    else if(enhealth15==20){
     circlefill(buffer,s,bs,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship2,s-30,bs);
     blit(can20,buffer,0,0,s-18,bs+30,45,8);

    }


  if(enhealth15<=0 && isarett15==2){
        isarett15=1;
        counter15=1;

    }

    if (isarett15==1){
        score=score+10;
        isarett15=0;
    }


    if(bs>780){
        counter15=0;
        enhealth15=100;
        isarett15=2;
    }


if(bs>30 && bs<40){
        x1s=bs;
        x1flag15=1;
}
   if(x1flag15==1){
        circlefill(buffer,s+9.5,x1s+25,5,makecol(0,0,0)); 
        draw_sprite(buffer,en1missile,s,x1s);

         if(timer1<20){
        x1s=x1s+1.5;
    }
    else if(timer1>=20 && timer1<30){
            x1s=x1s+2;

   }
   else if(timer1>=30 && timer1<40){
                x1s=x1s+2.5;

   }
   else if(timer1>=40 && timer1<50) {
                    x1s=x1s+3.5;

   }
   else {
                        x1s=x1s+4.5;

   }
}




if(25+5>=(  sqrt(pow((s-x),2)+pow((x1s-y),2))) && s1sayac15==0 ){
        health=health-10;
        s1sayac15=1;
    }

    if(25+5<(  sqrt(pow((s-x),2)+pow((y-x1s),2)))){
        s1sayac15=0;
    }





if (100<bs && bs<110)   {
        x2s=bs;
        x2flag15=1;

}



if(x2flag15==1){
            circlefill(buffer,s+9.5,x2s+25,5,makecol(0,0,0)); 

        draw_sprite(buffer,en1missile,s,x2s);
        
         if(timer1<20){
        x2s=x2s+1.5;
    }
    else if(timer1>=20 && timer1<30){
            x2s=x2s+2;

   }
   else if(timer1>=30 && timer1<40){
                x2s=x2s+2.5;

   }
   else if(timer1>=40 && timer1<50) {
                    x2s=x2s+3.5;

   }
   else {
                        x2s=x2s+4.5;

   }
}





if(25+5>=(  sqrt(pow((s-x),2)+pow((x2s-y),2))) && s2sayac15==0 ){
        health=health-10;
        s2sayac15=1;
    }

    if(25+5<(  sqrt(pow((s-x),2)+pow((y-x2s),2)))){
        s2sayac15=0;
    }


    if( ((30+5>=(  (sqrt(pow((t-mm),2)+pow((bt-tt),2))))) || (30+5>=(  (sqrt(pow((t-xx),2)+pow((bt-yy),2)))))) && bayrak16==0 ){


        enhealth16=enhealth16-40;
        bayrak16=1;


    }


    if( ((30+5<=(  (sqrt(pow((t-mm),2)+pow((bt-tt),2))))) && (30+5<=(  (sqrt(pow((t-xx),2)+pow((bt-yy),2))))))){


        bayrak16=0;


    }




    if(enhealth16==100){
     circlefill(buffer,t,bt,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship,t-30,bt);
     blit(can100,buffer,0,0,t-18,bt+30,45,8);


    }

    else if(enhealth16==60){
        circlefill(buffer,t,bt,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship,t-30,bt);
        blit(can60,buffer,0,0,t-18,bt+30,45,8);


    }

    else if(enhealth16==20){
     circlefill(buffer,t,bt,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship,t-30,bt);
     blit(can20,buffer,0,0,t-18,bt+30,45,8);

    }

   
  if(enhealth16<=0 && isarett16==2){
        isarett16=1;
        counter16=1;

    }

    if (isarett16==1){
        score=score+10;
        isarett16=0;
    }




    if(bt>780){
        counter16=0;
        enhealth16=100;
        isarett16=2;

    }

if(bt>30 && bt<40){
        x1t=bt;
        x1flag16=1;
}
   if(x1flag16==1){
        circlefill(buffer,t+9.5,x1t+25,5,makecol(0,0,0)); 
        draw_sprite(buffer,en1missile,t,x1t);

         if(timer1<20){
        x1t=x1t+1.5;
    }
    else if(timer1>=20 && timer1<30){
            x1t=x1t+2;

   }
   else if(timer1>=30 && timer1<40){
                x1t=x1t+2.5;

   }
   else if(timer1>=40 && timer1<50) {
                    x1t=x1t+3.5;

   }
   else {
                        x1t=x1t+4.5;

   }
}




if(25+5>=(  sqrt(pow((t-x),2)+pow((x1t-y),2))) && s1sayac16==0 ){
        health=health-10;
        s1sayac16=1;
    }

    if(25+5<(  sqrt(pow((t-x),2)+pow((y-x1t),2)))){
        s1sayac16=0;
    }





if (100<bt && bt<110)   {
        x2t=bt;
        x2flag16=1;

}



if(x2flag16==1){
            circlefill(buffer,t+9.5,x2t+25,5,makecol(0,0,0)); 

        draw_sprite(buffer,en1missile,t,x2t);
        
         if(timer1<20){
        x2t=x2t+1.5;
    }
    else if(timer1>=20 && timer1<30){
            x2t=x2t+2;

   }
   else if(timer1>=30 && timer1<40){
                x2t=x2t+2.5;

   }
   else if(timer1>=40 && timer1<50) {
                    x2t=x2t+3.5;

   }
   else {
                        x2t=x2t+4.5;

   }
}


if(25+5>=(  sqrt(pow((t-x),2)+pow((x2t-y),2))) && s2sayac16==0 ){
        health=health-10;
        s2sayac16=1;
    }

    if(25+5<(  sqrt(pow((t-x),2)+pow((y-x2t),2)))){
        s2sayac16=0;
    }






    if(25+25>=(  sqrt(pow((a-x),2)+pow((y-ba),2))) && counter3!=1 && sayac3==0 ){
        health=health-10;
        sayac3=1;
    }

    if(25+25<(  sqrt(pow((a-x),2)+pow((y-ba),2)))){
        sayac3=0;
    }


    if(25+25>=(  sqrt(pow((b-x),2)+pow((y-bb),2)) ) && counter4!=1 && sayac4==0 ){
        health=health-10;
        sayac4=1;

    }
    if(25+25<(  sqrt(pow((b-x),2)+pow((y-bb),2)))){
        sayac4=0;
    }


    if(25+25>=(  sqrt(pow((c-x),2)+pow((y-bc),2)) ) && counter5!=1 && sayac5==0  ){
        health=health-10;
        sayac5=1;

    }
    if(25+25<(  sqrt(pow((c-x),2)+pow((y-bc),2)))){
        sayac5=0;
    }


    if(25+25>=(  sqrt(pow((d-x),2)+pow((y-bd),2)) ) && counter6!=1 && sayac6==0  ){
        health=health-10;
        sayac6=1;

    }
    if(25+25<(  sqrt(pow((d-x),2)+pow((y-bd),2)))){
        sayac6=0;
    }


    if(25+25>=(  sqrt(pow((e-x),2)+pow((y-be),2)) ) && counter7!=1 && sayac7==0  ){
        health=health-10;
        sayac7=1;

    }
    if(25+25<(  sqrt(pow((e-x),2)+pow((y-be),2)))){
        sayac7=0;
    }


    if(25+25>=(  sqrt(pow((f-x),2)+pow((y-bf),2)) ) && counter8!=1 && sayac8==0  ){
        health=health-10;
        sayac8=1;

    }
    if(25+25<(  sqrt(pow((f-x),2)+pow((y-bf),2)))){
        sayac8=0;
    }


    if(25+25>=(  sqrt(pow((g-x),2)+pow((y-bg),2))  ) && counter9!=1 && sayac9==0  ){
        health=health-10;
        sayac9=1;

    }
    if(25+25<(  sqrt(pow((g-x),2)+pow((y-bg),2)))){
        sayac9=0;
    }


    if(25+25>=(  sqrt(pow((l-x),2)+pow((y-bl),2)) )  && counter10!=1 && sayac10==0){
        health=health-10;
        sayac10=1;

    }
    if(25+25<(  sqrt(pow((l-x),2)+pow((y-bl),2)))){
        sayac10=0;
    }


    if(25+25>=(  sqrt(pow((m-x),2)+pow((y-bm),2)) ) && counter11!=1 && sayac11==0 ){
        health=health-10;
        sayac11=1;


    }
    if(25+25<(  sqrt(pow((m-x),2)+pow((y-bm),2)))){
        sayac11=0;
    }


    if(25+25>=(  sqrt(pow((n-x),2)+pow((y-bn),2)) ) && counter12!=1 && sayac12==0  ){
        health=health-10;
        sayac12=1;

    }
    if(25+25<(  sqrt(pow((n-x),2)+pow((y-bn),2)))){
        sayac12=0;
    }


    if(25+25>=(  sqrt(pow((p-x),2)+pow((y-bp),2)) ) && counter13!=1 && sayac13==0  ){
        health=health-10;
        sayac13=1;

    }
    if(25+25<(  sqrt(pow((p-x),2)+pow((y-bp),2)))){
        sayac13=0;
    }


    if(25+25>=(  sqrt(pow((r-x),2)+pow((y-br),2)) ) && counter14!=1 && sayac14==0  ){
        health=health-10;
        sayac14=1;

    }
    if(25+25<(  sqrt(pow((r-x),2)+pow((y-br),2)))){
        sayac14=0;
    }


    if(25+25>=(  sqrt(pow((s-x),2)+pow((y-bs),2)) ) && counter15!=1 && sayac15==0  ){
        health=health-10;
        sayac15=1;

    }
    if(25+25<(  sqrt(pow((s-x),2)+pow((y-bs),2)))){
        sayac15=0;
    }


    if(25+25>=(  sqrt(pow((t-x),2)+pow((y-bt),2)) ) && counter16!=1  && sayac16==0  ){
        health=health-10;
        sayac16=1;

    }
    if(25+25<(  sqrt(pow((t-x),2)+pow((y-bt),2)))){
        sayac16=0;
    }

    if(health==100){
        blit(gcan100,buffer,0,0,x-24,y+30,45,8);
        textprintf_ex(buffer,font,x-13,y+40,makecol(0,255,0),-1,"%d",health);
    }
    if(health==90){
        blit(gcan90,buffer,0,0,x-24,y+30,45,8);
        textprintf_ex(buffer,font,x-13,y+40,makecol(0,255,0),-1,"%d",health);

    }
    if(health==80){
        blit(gcan80,buffer,0,0,x-24,y+30,45,8);
        textprintf_ex(buffer,font,x-13,y+40,makecol(0,255,0),-1,"%d",health);

    }
    if(health==70){
        blit(gcan70,buffer,0,0,x-24,y+30,45,8);
        textprintf_ex(buffer,font,x-13,y+40,makecol(0,255,0),-1,"%d",health);

    }
    if(health==60){
        blit(gcan60,buffer,0,0,x-24,y+30,45,8);
        textprintf_ex(buffer,font,x-13,y+40,makecol(0,255,0),-1,"%d",health);

    }
    if(health==50){
        blit(gcan50,buffer,0,0,x-24,y+30,45,8);
        textprintf_ex(buffer,font,x-13,y+40,makecol(0,255,0),-1,"%d",health);

    }
    if(health==40){
        blit(gcan40,buffer,0,0,x-24,y+30,45,8);
        textprintf_ex(buffer,font,x-13,y+40,makecol(0,255,0),-1,"%d",health);

    }
    if(health==30){
        blit(gcan30,buffer,0,0,x-24,y+30,45,8);
        textprintf_ex(buffer,font,x-13,y+40,makecol(0,255,0),-1,"%d",health);

    }
    if(health==20){
        blit(gcan20,buffer,0,0,x-24,y+30,45,8);
        textprintf_ex(buffer,font,x-13,y+40,makecol(0,255,0),-1,"%d",health);

    }
    if(health==10){
        blit(gcan10,buffer,0,0,x-24,y+30,45,8);
        textprintf_ex(buffer,font,x-13,y+40,makecol(0,255,0),-1,"%d",health);

    }
    if(health<=0){
        sesflagi1=1;
                sesflagi2=1;
                healthflag=1;

    }



if(timer1<20){
            ba++;
        }
        else if(timer1>=20 && timer1<40){
            ba = ba + 1.5;
        }
        else if(timer1>=40 && timer1<60){
             ba = ba +2;   
        }
        else {
            ba = ba + 3;
        }    if(ba>790){
        ba=-50;
    }

    if(bb>790){
        bb=-50;
    }
    if(bc>790){
        bc=-50;
    } 
    if(bd>790){
        bd=-50;
    }
    if(be>790){
        be=-50;
    }
    if(bf>790){
        bf=-50;
    }
    if(bg>790){
        bg=-50;
    }
    if(bl>790){
        bl=-50;
    }
    if(bm>790){
        bm=-50;
    } 
    if(bn>790){
        bn=-50;
    }
    if(bp>790){
        bp=-50;
    }
    if(br>790){
        br=-50;
    }

    if(bs>790){
        bs=-50;
    }
    if(bt>790){
        bt=-50;
    }
/*  if(timer1<20){
        x1c=x1c+1.5;
    }
    else if(timer1>=20 && timer1<30){
            x1c=x1c+2;

   }
   else if(timer1>=30 && timer1<40){
                x1c=x1c+2.5;

   }
    else if(timer1>=40 && timer1<50) {
                x1c=x1c+3.5;

   }
   else {
                x1c=x1c+4.5;

   }
}*/


    if(bc>250 || bd>bc){

        if(timer1<20){
            bd++;
        }
        else if(timer1>=20 && timer1<40){
            bd = bd + 1.5;
        }
        else if(timer1>=40 && timer1<60){
             bd = bd +2;   
        }
        else {
            bd = bd + 3;
        }
    }


    if(bd>250 || be>bd){
if(timer1<20){
            be++;
        }
        else if(timer1>=20 && timer1<40){
            be = be + 1.5;
        }
        else if(timer1>=40 && timer1<60){
             be = be +2;   
        }
        else {
            be = be + 3;
        }    }

    if(ba>250 || bb>ba){
if(timer1<20){
            bb++;
        }
        else if(timer1>=20 && timer1<40){
            bb = bb + 1.5;
        }
        else if(timer1>=40 && timer1<60){
             bb = bb + 2;   
        }
        else {
            bb = bb + 3;
        }    }

    if(bb>250 || bc>bb){
if(timer1<20){
            bc++;
        }
        else if(timer1>=20 && timer1<40){
            bc = bc + 1.5;
        }
        else if(timer1>=40 && timer1<60){
             bc = bc +2;   
        }
        else {
            bc = bc+ 3;
        }    }



    if(bg>250 || bl>bg){
if(timer1<20){
            bl++;
        }
        else if(timer1>=20 && timer1<40){
            bl = bl + 1.5;
        }
        else if(timer1>=40 && timer1<60){
             bl = bl +2;   
        }
        else {
            bl= bd + 3;
        }    }

    if(bl>250 || bm>bl){
if(timer1<20){
            bm++;
        }
        else if(timer1>=20 && timer1<40){
            bm = bm + 1.5;
        }
        else if(timer1>=40 && timer1<60){
             bm = bm +2;   
        }
        else {
            bm = bm + 3;
        }    }


    if(bm>250 || bn>bm){
if(timer1<20){
            bn++;
        }
        else if(timer1>=20 && timer1<40){
            bn = bn + 1.5;
        }
        else if(timer1>=40 && timer1<60){
             bn = bn +2;   
        }
        else {
            bn = bn + 3;
        }    }

    if(bn>250 || bp>bn){
if(timer1<20){
            bp++;
        }
        else if(timer1>=20 && timer1<40){
            bp = bp + 1.5;
        }
        else if(timer1>=40 && timer1<60){
             bp= bp +2;   
        }
        else {
            bp = bp + 3;
        }    }


    if(be>250 || bf>be){
if(timer1<20){
            bf++;
        }
        else if(timer1>=20 && timer1<40){
            bf = bf + 1.5;
        }
        else if(timer1>=40 && timer1<60){
             bf = bf +2;   
        }
        else {
            bf = bf + 3;
        }    }


    if(bf>250 || bg>bf){
if(timer1<20){
            bg++;
        }
        else if(timer1>=20 && timer1<40){
            bg = bg + 1.5;
        }
        else if(timer1>=40 && timer1<60){
             bg = bg +2;   
        }
        else {
            bg = bg + 3;
        }    }
    if(bp>250 || br>bp){
if(timer1<20){
            br++;
        }
        else if(timer1>=20 && timer1<40){
            br = br + 1.5;
        }
        else if(timer1>=40 && timer1<60){
             br = br +2;   
        }
        else {
            br = br + 3;
        }    }

    if(br>250 || bs>br){
if(timer1<20){
            bs++;
        }
        else if(timer1>=20 && timer1<40){
            bs = bs + 1.5;
        }
        else if(timer1>=40 && timer1<60){
             bs = bs +2;   
        }
        else {
            bs = bs + 3;
        }    }

    if(bs>250 || bt>bs){
if(timer1<20){
            bt++;
        }
        else if(timer1>=20 && timer1<40){
            bt = bt + 1.5;
        }
        else if(timer1>=40 && timer1<60){
             bt = bt +2; 
        }
        else {
            bt = bt + 3;
        }    }





    }

}/*if healthflag==0)*/






if(scoreflag==0 && healthflag==1){
fprintf(scorefile, "%d\n",score );
fclose(scorefile);





fscanf(countfile,"%d",&countfilee);
countfilee++;
fclose(countfile);
   

countfile = fopen("count.txt","w");



fprintf(countfile, "%d", countfilee );

fclose(countfile);

scorefile = fopen("scores.txt","r");

countfileec=countfilee;


while(countfileec>0){
    fscanf(scorefile,"%d",&arr[ii]);
    countfileec--;

    ii++;

}
fclose(scorefile);

guncelskor=arr[countfilee-1];

    for (zi = 0; zi < countfilee; ++zi)

    {

        for (zj = zi + 1; zj < countfilee; ++zj)

        {

            if (arr[zi] < arr[zj])

            {

                ta =  arr[zi];

                arr[zi] = arr[zj];

                arr[zj] = ta;

            }

        }

    }




while(ilkonsize<10){
    ilkon[ilkonsize] = arr[ilkonsize];
    ilkonsize++;
    
}

scoreflag=1;


}



if(healthflag==1){

            textprintf_ex(buffer,font,200,50,makecol(255,255,255),-1,"SCORE BOARD");



            if(guncelskor==ilkon[0] && redflag==0){
                textprintf_ex(buffer,font,100,120,makecol(255,255,255),-1,"1.%d  <<",ilkon[0]);
                redflag=1;
            }
            else{
                textprintf_ex(buffer,font,100,120,makecol(0,255,0),-1,"1.%d",ilkon[0]);
                redflag=0;
            }





            if(guncelskor==ilkon[1] && redflag==0){
                textprintf_ex(buffer,font,100,140,makecol(255,255,255),-1,"2.%d  <<",ilkon[1]);
                redflag=1;

            }
            else{
                textprintf_ex(buffer,font,100,140,makecol(0,255,0),-1,"2.%d",ilkon[1]);
                redflag=0;

            }



            if(guncelskor==ilkon[2] && redflag==0){
                textprintf_ex(buffer,font,100,160,makecol(255,255,255),-1,"3.%d  <<",ilkon[2]);
                                redflag=1;


            }
            else{
                textprintf_ex(buffer,font,100,160,makecol(0,255,0),-1,"3.%d",ilkon[2]);
                redflag=0;

            }


            if(guncelskor==ilkon[3] && redflag==0){
                textprintf_ex(buffer,font,100,180,makecol(255,255,255),-1,"4.%d  <<",ilkon[3]);
                                redflag=1;

            }
            else{
                textprintf_ex(buffer,font,100,180,makecol(0,255,0),-1,"4.%d",ilkon[3]);
                redflag=0;

            }





            if(guncelskor==ilkon[4] && redflag==0){
                textprintf_ex(buffer,font,100,200,makecol(255,255,255),-1,"5.%d  <<",ilkon[4]);
                                redflag=1;

            }
            else{
                textprintf_ex(buffer,font,100,200,makecol(0,255,0),-1,"5.%d",ilkon[4]);
                                redflag=0;

            }




            if(guncelskor==ilkon[5] && redflag==0){
                textprintf_ex(buffer,font,100,220,makecol(255,255,255),-1,"6.%d  <<",ilkon[5]);
                                redflag=1;

            }
            else{
                textprintf_ex(buffer,font,100,220,makecol(0,255,0),-1,"6.%d",ilkon[5]);
                                redflag=0;

            }





            if(guncelskor==ilkon[6] && redflag==0){
                textprintf_ex(buffer,font,100,240,makecol(255,255,255),-1,"7.%d  <<",ilkon[6]);
                                redflag=1;

            }
            else{
                textprintf_ex(buffer,font,100,240,makecol(0,255,0),-1,"7.%d",ilkon[6]);
                                redflag=0;

            }






            if(guncelskor==ilkon[7] && redflag==0){
                textprintf_ex(buffer,font,100,260,makecol(255,255,255),-1,"8.%d  <<",ilkon[7]);
                                redflag=1;

            }
            else{
                textprintf_ex(buffer,font,100,260,makecol(0,255,0),-1,"8.%d",ilkon[7]);
                                redflag=0;

            }






            if(guncelskor==ilkon[8] && redflag==0){
                textprintf_ex(buffer,font,100,280,makecol(255,255,255),-1,"9.%d  <<",ilkon[8]);
                                redflag=1;

            }
            else{
                textprintf_ex(buffer,font,100,280,makecol(0,255,0),-1,"9.%d",ilkon[8]);
                                redflag=0;

            }




            if(guncelskor==ilkon[9] && redflag==0){
                textprintf_ex(buffer,font,100,300,makecol(255,255,255),-1,"10.%d  <<",ilkon[9]);
                                redflag=1;

            }
            else{
                textprintf_ex(buffer,font,100,300,makecol(0,255,0),-1,"10.%d",ilkon[9]);
                                redflag=0;

            }








}






    /*222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222*/
    /***********************************************************************************************************/



           if(healthflag==0) {



    if(lag3==0){

        scare_mouse();

        circlefill(buffer,x,y,25,makecol(0,0,0)); 
        draw_sprite(buffer,aircraft3,x-35,y);
        blit(gcan100,buffer,0,0,x-24,y+30,45,8);




        if(key[KEY_UP]){
            y--;
        }  
        else if(key[KEY_DOWN]){
            y++;
        }


        if(key[KEY_LEFT]){
            x=x-2;
        }  
        else if(key[KEY_RIGHT]){
            x=x+2;
        }











        if (flag==0 ){
            xx=x;
                            if(sesflagi2==0){

            play_sample(bombfile,255,128,1000,0);

}
        }
        flag=1;



        if( (30+5>=(  (sqrt(pow((a-xx),2)+pow((ba-yy),2))))))    {

            isaret=1;

        }
        if(isaret==0 || enhealth3<=0){
            circlefill(buffer,xx,yy,5,GREEN); 
            draw_sprite(buffer,bombpicfile3,xx-7,yy-5);
        }




        yy=yy-6;

        if(yy<0){
            flag=0;
            yy=y;
            isaret=0;
        }







        if(flag2==0){

            mm=x;
                            if(sesflagi2==0){

            play_sample(bombfile,255,128,1000,0);
}

        }
        flag2=1;



        if( (30+5>=(  (sqrt(pow((a-mm),2)+pow((ba-tt),2))))))    {

            isaret2=1;

        }




        if(isaret2==0 || enhealth3<=0){

            circlefill(buffer,mm,tt,5,RED); 
            draw_sprite(buffer,bombpicfile3,mm-7,tt-5);
        }
        tt=tt-6;

        if(tt<0 && yy<300){
            flag2=0;
            tt=y;
            isaret2=0;
        }



    
      if( ((30+5>=(  (sqrt(pow((a-mm),2)+pow((ba-tt),2))))) || (30+5>=(  (sqrt(pow((a-xx),2)+pow((ba-yy),2)))))) && bayrak3==0 ){


        enhealth3=enhealth3-50;
        bayrak3=1;


    }


    if( ((30+5<=(  (sqrt(pow((a-mm),2)+pow((ba-tt),2))))) && (30+5<=(  (sqrt(pow((a-xx),2)+pow((ba-yy),2))))))){


        bayrak3=0;


    }




    if(enhealth3==100){
        circlefill(buffer,a,ba,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship2,a-30,ba);
        blit(can100,buffer,0,0,a-18,ba+30,45,8);


    }

    else if(enhealth3==50){
        circlefill(buffer,a,ba,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship2,a-30,ba);
        blit(can50,buffer,0,0,a-18,ba+30,45,8);


    }

   

    if(enhealth3<=0 && isarett3==2){
        isarett3=1;
        counter3=1;

    }

    if (isarett3==1){
        score=score+10;
        isarett3=0;
    }





    if(ba>780){
        counter3=0;
        enhealth3=100;

    }




if(ba>30 && ba<40 ){
        x1a=ba;
        x1flag3=1;
}
   if(x1flag3==1 ){



        circlefill(buffer,a+9.5,x1a+25,5,makecol(0,0,0)); 
        draw_sprite(buffer,en1missile,a,x1a);
        if(timer1<20){
        x1a=x1a+1.5;
    }
    else if(timer1>=20 && timer1<30){
            x1a=x1a+2;

   }
   else if(timer1>=30 && timer1<40){
                x1a=x1a+2.5;

   }
    else if(timer1>=40 && timer1<50) {
                    x1a=x1a+3.5;

   }
   else {
                        x1a=x1a+4.5;

   }
}

if(25+5>=(  sqrt(pow((a-x),2)+pow((x1a-y),2))) && s1sayac3==0 ){
         health=health-10;
      
        s1sayac3=1;
    }

    if(25+5<(  sqrt(pow((a-x),2)+pow((y-x1a),2)))){
        s1sayac3=0;
    }



if (100<ba && ba<110)   {
        x2a=ba;
        x2flag3=1;

}



if(x2flag3==1){

            circlefill(buffer,a+9.5,x2a+25,5,makecol(0,0,0)); 

        draw_sprite(buffer,en1missile,a,x2a);
               if(timer1<20){
        x2a=x2a+1.5;
    }
    else if(timer1>=20 && timer1<30){
            x2a=x2a+2;

   }
   else if(timer1>=30 && timer1<40){
                x2a=x2a+2.5;

   }
   else if(timer1>=40 && timer1<50) {
                    x2a=x2a+3.5;

   }
   else {
                        x2a=x2a+4.5;

   }
}


if(25+5>=(  sqrt(pow((a-x),2)+pow((x2a-y),2))) && s2sayac3==0 ){
         health=health-10;
         s2sayac3=1;
    }

    if(25+5<(  sqrt(pow((a-x),2)+pow((y-x2a),2)))){
        s2sayac3=0;
    }








    if( ((30+5>=(  (sqrt(pow((b-mm),2)+pow((bb-tt),2))))) || (30+5>=(  (sqrt(pow((b-xx),2)+pow((bb-yy),2)))))) && bayrak4==0 ){


        enhealth4=enhealth4-50;
        bayrak4=1;


    }


    if( ((30+5<=(  (sqrt(pow((b-mm),2)+pow((bb-tt),2))))) && (30+5<=(  (sqrt(pow((b-xx),2)+pow((bb-yy),2))))))){


        bayrak4=0;


    }




    if(enhealth4==100){
        circlefill(buffer,b,bb,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship,b-30,bb);
        blit(can100,buffer,0,0,b-18,bb+30,45,8);


    }

    else if(enhealth4==50){
       circlefill(buffer,b,bb,30,makecol(0,0,0)); 
       draw_sprite(buffer,enspaceship,b-30,bb);
       blit(can50,buffer,0,0,b-18,bb+30,45,8);



    }

    

    if(enhealth4<=0 && isarett4==2){
        isarett4=1;
        counter4=1;

    }

   if (isarett4==1){
        score=score+10;
        isarett4=0;
    }


    if(bb>780){
        counter4=0;
        enhealth4=100;
        isarett4=2;

    }



    if( ((30+5>=(  (sqrt(pow((c-mm),2)+pow((bc-tt),2))))) || (30+5>=(  (sqrt(pow((c-xx),2)+pow((bc-yy),2)))))) && bayrak5==0 ){


        enhealth5=enhealth5-50;
        bayrak5=1;


    }


    if( ((30+5<=(  (sqrt(pow((c-mm),2)+pow((bc-tt),2))))) && (30+5<=(  (sqrt(pow((c-xx),2)+pow((bc-yy),2))))))){


        bayrak5=0;


    }




    if(enhealth5==100){
        circlefill(buffer,c,bc,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship2,c-30,bc);
        blit(can100,buffer,0,0,c-18,bc+30,45,8);


    }

    else if(enhealth5==50){
       circlefill(buffer,c,bc,30,makecol(0,0,0)); 
       draw_sprite(buffer,enspaceship2,c-30,bc);
       blit(can50,buffer,0,0,c-18,bc+30,45,8);



    }

    

  if(enhealth5<=0 && isarett5==2){
        isarett5=1;
        counter5=1;

    }

    if (isarett5==1){
        score=score+10;
        isarett5=0;
    }


    if(bc>780){
        counter5=0;
        enhealth5=100;
        isarett5=2;
    }



if(bc>30 && bc<40){
        x1c=bc;
        x1flag5=1;
}
   if(x1flag5==1){
            circlefill(buffer,c+9.5,x1c+25,5,makecol(0,0,0)); 

        draw_sprite(buffer,en1missile,c,x1c);
          if(timer1<20){
        x1c=x1c+1.5;
    }
    else if(timer1>=20 && timer1<30){
            x1c=x1c+2;

   }
   else if(timer1>=30 && timer1<40){
                x1c=x1c+2.5;

   }
    else if(timer1>=40 && timer1<50) {
                x1c=x1c+3.5;

   }
   else {
                x1c=x1c+4.5;

   }
}

if(25+5>=(  sqrt(pow((c-x),2)+pow((x1c-y),2))) && s1sayac5==0 ){
        health=health-10;
        s1sayac5=1;
    }

    if(25+5<(  sqrt(pow((c-x),2)+pow((y-x1c),2)))){
        s1sayac5=0;
    }



if (100<bc && bc<110)   {
        x2c=bc;
        x2flag5=1;

}



if(x2flag5==1){
            circlefill(buffer,c+9.5,x2c+25,5,makecol(0,0,0)); 

        draw_sprite(buffer,en1missile,c,x2c);
               if(timer1<20){
        x2c=x2c+1.5;
    }
    else if(timer1>=20 && timer1<30){
            x2c=x2c+2;

   }
   else if(timer1>=30 && timer1<40){
                x2c=x2c+2.5;

   }
   else if(timer1>=40 && timer1<50) {
                    x2c=x2c+3.5;

   }
   else {
                        x2c=x2c+4.5;

   }
}




if(25+5>=(  sqrt(pow((c-x),2)+pow((x2c-y),2))) && s2sayac5==0 ){
        health=health-10;
        s2sayac5=1;
    }

    if(25+5<(  sqrt(pow((c-x),2)+pow((y-x2c),2)))){
        s2sayac5=0;
    }




    if( ((30+5>=(  (sqrt(pow((d-mm),2)+pow((bd-tt),2))))) || (30+5>=(  (sqrt(pow((d-xx),2)+pow((bd-yy),2)))))) && bayrak6==0 ){


        enhealth6=enhealth6-50;
        bayrak6=1;


    }


    if( ((30+5<=(  (sqrt(pow((d-mm),2)+pow((bd-tt),2))))) && (30+5<=(  (sqrt(pow((d-xx),2)+pow((bd-yy),2))))))){


        bayrak6=0;


    }




    if(enhealth6==100){
        circlefill(buffer,d,bd,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship,d-30,bd);
        blit(can100,buffer,0,0,d-18,bd+30,45,8);


    }

    else if(enhealth6==50){
      circlefill(buffer,d,bd,30,makecol(0,0,0)); 
      draw_sprite(buffer,enspaceship,d-30,bd);
      blit(can50,buffer,0,0,d-18,bd+30,45,8);



    }

   

   if(enhealth6<=0 && isarett6==2){
        isarett6=1;
        counter6=1;

    }

    if (isarett6==1){
        score=score+10;
        isarett6=0;
    }



    if(bd>780){
        counter6=0;
        enhealth6=100;
        isarett6=2;
    }




    if( ((30+5>=(  (sqrt(pow((e-mm),2)+pow((be-tt),2))))) || (30+5>=(  (sqrt(pow((e-xx),2)+pow((be-yy),2)))))) && bayrak7==0 ){


        enhealth7=enhealth7-50;
        bayrak7=1;


    }


    if( ((30+5<=(  (sqrt(pow((e-mm),2)+pow((be-tt),2))))) && (30+5<=(  (sqrt(pow((e-xx),2)+pow((be-yy),2))))))){


        bayrak7=0;


    }




    if(enhealth7==100){
     circlefill(buffer,e,be,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship2,e-30,be);
     blit(can100,buffer,0,0,e-18,be+30,45,8);;


    }

    else if(enhealth7==50){
       circlefill(buffer,e,be,30,makecol(0,0,0)); 
       draw_sprite(buffer,enspaceship2,e-30,be);
       blit(can50,buffer,0,0,e-18,be+30,45,8);



    }

    


   if(enhealth7<=0 && isarett7==2){
        isarett7=1;
        counter7=1;

    }

    if (isarett7==1){
        score=score+10;
        isarett7=0;
    }





    if(be>780){
        counter7=0;
        enhealth7=100;
        isarett7=2;
    }


    if(be>30 && be<40){
        x1e=be;
        x1flag7=1;
}
   if(x1flag7==1){
                circlefill(buffer,e+9.5,x1e+25,5,makecol(0,0,0)); 

        draw_sprite(buffer,en1missile,e,x1e);
        if(timer1<20){
        x1e=x1e+1.5;
    }
    else if(timer1>=20 && timer1<30){
            x1e=x1e+2;

   }
   else if(timer1>=30 && timer1<40){
                x1e=x1e+2.5;

   }
   else if(timer1>=40 && timer1<50) {
                    x1e=x1e+3.5;

   }
   else {
                        x1e=x1e+4.5;

   }
}
if(25+5>=(  sqrt(pow((e-x),2)+pow((x1e-y),2))) && s1sayac7==0 ){
        health=health-10;
        s1sayac7=1;
    }

    if(25+5<(  sqrt(pow((e-x),2)+pow((y-x1e),2)))){
        s1sayac7=0;
    }



if (100<be && be<110)   {
        x2e=be;
        x2flag7=1;

}



if(x2flag7==1){
                circlefill(buffer,e+9.5,x2e+25,5,makecol(0,0,0)); 

        draw_sprite(buffer,en1missile,e,x2e);
        if(timer1<20){
        x2e=x2e+1.5;
    }
    else if(timer1>=20 && timer1<30){
            x2e=x2e+2;

   }
   else if(timer1>=30 && timer1<40){
                x2e=x2e+2.5;

   }
   else if(timer1>=40 && timer1<50) {
                    x2e=x2e+3.5;

   }
   else {
                        x2e=x2e+4.5;

   }
}
if(25+5>=(  sqrt(pow((e-x),2)+pow((x2e-y),2))) && s2sayac7==0 ){
        health=health-10;
        s2sayac7=1;
    }

    if(25+5<(  sqrt(pow((e-x),2)+pow((y-x2e),2)))){
        s2sayac7=0;
    }




    if( ((30+5>=(  (sqrt(pow((f-mm),2)+pow((bf-tt),2))))) || (30+5>=(  (sqrt(pow((f-xx),2)+pow((bf-yy),2)))))) && bayrak8==0 ){


        enhealth8=enhealth8-50;
        bayrak8=1;


    }


    if( ((30+5<=(  (sqrt(pow((f-mm),2)+pow((bf-tt),2))))) && (30+5<=(  (sqrt(pow((f-xx),2)+pow((bf-yy),2))))))){


        bayrak8=0;


    }




    if(enhealth8==100){
     circlefill(buffer,f,bf,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship,f-30,bf);
     blit(can100,buffer,0,0,f-18,bf+30,45,8);


    }

    else if(enhealth8==50){
       circlefill(buffer,f,bf,30,makecol(0,0,0)); 
       draw_sprite(buffer,enspaceship,f-30,bf);
       blit(can50,buffer,0,0,f-18,bf+30,45,8);


    }

   


   if(enhealth8<=0 && isarett8==2){
        isarett8=1;
        counter8=1;

    }

    if (isarett8==1){
        score=score+10;
        isarett8=0;
    }







    if(bf>780){
        counter8=0;
        enhealth8=100;
        isarett8=2;
    }






    if( ((30+5>=(  (sqrt(pow((g-mm),2)+pow((bg-tt),2))))) || (30+5>=(  (sqrt(pow((g-xx),2)+pow((bg-yy),2)))))) && bayrak9==0 ){


        enhealth9=enhealth9-50;
        bayrak9=1;


    }


    if( ((30+5<=(  (sqrt(pow((g-mm),2)+pow((bg-tt),2))))) && (30+5<=(  (sqrt(pow((g-xx),2)+pow((bg-yy),2))))))){


        bayrak9=0;


    }




    if(enhealth9==100){
     circlefill(buffer,g,bg,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship2,g-30,bg);
     blit(can100,buffer,0,0,g-18,bg+30,45,8);


    }

    else if(enhealth9==50){
       circlefill(buffer,g,bg,30,makecol(0,0,0)); 
       draw_sprite(buffer,enspaceship2,g-30,bg);
       blit(can50,buffer,0,0,g-18,bg+30,45,8);


    }


  if(enhealth9<=0 && isarett9==2){
        isarett9=1;
        counter9=1;

    }

    if (isarett9==1){
        score=score+10;
        isarett9=0;
    }





    if(bg>780){
        counter9=0;
        enhealth9=100;
        isarett9=2;

    }




if(bg>30 && bg<40){
        x1g=bg;
        x1flag9=1;
}
   if(x1flag9==1){
            circlefill(buffer,g+9.5,x1g+25,5,makecol(0,0,0)); 
draw_sprite(buffer,en1missile,g,x1g);
       if(timer1<20){
        x1g=x1g+1.5;
    }
    else if(timer1>=20 && timer1<30){
            x1g=x1g+2;

   }
   else if(timer1>=30 && timer1<40){
                x1g=x1g+2.5;

   }
   else if(timer1>=40 && timer1<50) {
                    x1g=x1g+3.5;

   }
   else {
                        x1g=x1g+4.5;

   }
}

if(25+5>=(  sqrt(pow((g-x),2)+pow((x1g-y),2))) && s1sayac9==0 ){
        health=health-10;
        s1sayac9=1;
    }

    if(25+5<(  sqrt(pow((g-x),2)+pow((y-x1g),2)))){
        s1sayac9=0;
    }




if (100<bg && bg<110)   {
        x2g=bg;
        x2flag9=1;

}



if(x2flag9==1){
        circlefill(buffer,g+9.5,x2g+25,5,makecol(0,0,0)); 
        draw_sprite(buffer,en1missile,g,x2g);
               if(timer1<20){
        x2g=x2g+1.5;
    }
    else if(timer1>=20 && timer1<30){
            x2g=x2g+2;

   }
   else if(timer1>=30 && timer1<40){
                x2g=x2g+2.5;

   }
   else if(timer1>=40 && timer1<50) {
                    x2g=x2g+3.5;

   }
   else {
                        x2g=x2g+4.5;

   }
}

   if(25+5>=(  sqrt(pow((g-x),2)+pow((x2g-y),2))) && s2sayac9==0 ){
        health=health-10;
        s2sayac9=1;
    }

    if(25+5<(  sqrt(pow((g-x),2)+pow((y-x2g),2)))){
        s2sayac9=0;
    }





    if( ((30+5>=(  (sqrt(pow((l-mm),2)+pow((bl-tt),2))))) || (30+5>=(  (sqrt(pow((l-xx),2)+pow((bl-yy),2)))))) && bayrak10==0 ){


        enhealth10=enhealth10-50;
        bayrak10=1;


    }


    if( ((30+5<=(  (sqrt(pow((l-mm),2)+pow((bl-tt),2))))) && (30+5<=(  (sqrt(pow((l-xx),2)+pow((bl-yy),2))))))){


        bayrak10=0;


    }


    if(enhealth10==100){
     circlefill(buffer,l,bl,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship,l-30,bl);
     blit(can100,buffer,0,0,l-18,bl+30,45,8);


    }

    else if(enhealth10==50){
        circlefill(buffer,l,bl,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship,l-30,bl);
        blit(can50,buffer,0,0,l-18,bl+30,45,8);


    }


  if(enhealth10<=0 && isarett10==2){
        isarett10=1;
        counter10=1;

    }

    if (isarett10==1){
        score=score+10;
        isarett10=0;
    }




    if(bl>780){
        counter10=0;
        enhealth10=100;
        isarett10=2;
    }



    if( ((30+5>=(  (sqrt(pow((m-mm),2)+pow((bm-tt),2))))) || (30+5>=(  (sqrt(pow((m-xx),2)+pow((bm-yy),2)))))) && bayrak11==0 ){


        enhealth11=enhealth11-50;
        bayrak11=1;


    }


    if( ((30+5<=(  (sqrt(pow((m-mm),2)+pow((bm-tt),2))))) && (30+5<=(  (sqrt(pow((m-xx),2)+pow((bm-yy),2))))))){


        bayrak11=0;


    }


    if(enhealth11==100){
     circlefill(buffer,m,bm,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship2,m-30,bm);
     blit(can100,buffer,0,0,m-18,bm+30,45,8);


    }

    else if(enhealth11==50){
        circlefill(buffer,m,bm,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship2,m-30,bm);
        blit(can50,buffer,0,0,m-18,bm+30,45,8);


    }

   


  if(enhealth11<=0 && isarett11==2){
        isarett11=1;
        counter11=1;

    }

    if (isarett11==1){
        score=score+10;
        isarett11=0;
    }




    if(bm>780){
        counter11=0;
        enhealth11=100;
        isarett11=2;

    }




    if(bm>30 && bm<40){
        x1m=bm;
        x1flag11=1;
}
   if(x1flag11==1){
         circlefill(buffer,m+9.5,x1m+25,5,makecol(0,0,0)); 
        draw_sprite(buffer,en1missile,m,x1m);
               if(timer1<20){
        x1m=x1m+1.5;
    }
    else if(timer1>=20 && timer1<30){
            x1m=x1m+2;

   }
   else if(timer1>=30 && timer1<40){
                x1m=x1m+2.5;

   }
   else if(timer1>=40 && timer1<50) {
                    x1m=x1m+3.5;

   }
   else {
                        x1m=x1m+4.5;

   }
}


if(25+5>=(  sqrt(pow((m-x),2)+pow((x1m-y),2))) && s1sayac11==0 ){
        health=health-10;
        s1sayac11=1;
    }

    if(25+5<(  sqrt(pow((m-x),2)+pow((y-x1m),2)))){
        s1sayac11=0;
    }




if (100<bm && bm<110)   {
        x2m=bm;
        x2flag11=1;

}



if(x2flag11==1){
             circlefill(buffer,m+9.5,x2m+25,5,makecol(0,0,0)); 

        draw_sprite(buffer,en1missile,m,x2m);
               if(timer1<20){
        x2m=x2m+1.5;
    }
    else if(timer1>=20 && timer1<30){
            x2m=x2m+2;

   }
   else if(timer1>=30 && timer1<40){
                x2m=x2m+2.5;

   }
   else if(timer1>=40 && timer1<50) {
                    x2m=x2m+3.5;

   }
   else {
                        x2m=x2m+4.5;

   }
}

if(25+5>=(  sqrt(pow((m-x),2)+pow((x2m-y),2))) && s2sayac11==0 ){
        health=health-10;
        s2sayac11=1;
    }

    if(25+5<(  sqrt(pow((m-x),2)+pow((y-x2m),2)))){
        s2sayac11=0;
    }



    if( ((30+5>=(  (sqrt(pow((n-mm),2)+pow((bn-tt),2))))) || (30+5>=(  (sqrt(pow((n-xx),2)+pow((bn-yy),2)))))) && bayrak12==0 ){


        enhealth12=enhealth12-50;
        bayrak12=1;


    }


    if( ((30+5<=(  (sqrt(pow((n-mm),2)+pow((bn-tt),2))))) && (30+5<=(  (sqrt(pow((n-xx),2)+pow((bn-yy),2))))))){


        bayrak12=0;


    }


    if(enhealth12==100){
     circlefill(buffer,n,bn,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship,n-30,bn);
     blit(can100,buffer,0,0,n-18,bn+30,45,8);


    }

    else if(enhealth12==50){
        circlefill(buffer,n,bn,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship,n-30,bn);
        blit(can50,buffer,0,0,n-18,bn+30,45,8);


    }

    
  if(enhealth12<=0 && isarett12==2){
        isarett12=1;
        counter12=1;

    }

    if (isarett12==1){
        score=score+10;
        isarett12=0;
    }






    if(bn>780){
        counter12=0;
        enhealth12=100;
        isarett12=2;

    }



    if( ((30+5>=(  (sqrt(pow((p-mm),2)+pow((bp-tt),2))))) || (30+5>=(  (sqrt(pow((p-xx),2)+pow((bp-yy),2)))))) && bayrak13==0 ){


        enhealth13=enhealth13-350;
        bayrak13=1;


    }


    if( ((30+5<=(  (sqrt(pow((p-mm),2)+pow((bp-tt),2))))) && (30+5<=(  (sqrt(pow((p-xx),2)+pow((bp-yy),2))))))){


        bayrak13=0;


    }


    if(enhealth13==100){
     circlefill(buffer,p,bp,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship2,p-30,bp);
     blit(can100,buffer,0,0,p-18,bp+30,45,8);


    }

    else if(enhealth13==50){
        circlefill(buffer,p,bp,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship2,p-30,bp);
        blit(can50,buffer,0,0,p-18,bp+30,45,8);


    }


    if(enhealth13<=0 && isarett13==2){
        isarett13=1;
        counter13=1;

    }

    if (isarett13==1){
        score=score+10;
        isarett13=0;
    }





    if(bp>780){
        counter13=0;
        enhealth13=100;
        isarett13=2;
    }



if(bp>30 && bp<40){
        x1p=bp;
        x1flag13=1;
}
   if(x1flag13==1){
        circlefill(buffer,p+9.5,x1p+25,5,makecol(0,0,0)); 
        draw_sprite(buffer,en1missile,p,x1p);
                if(timer1<20){
        x1p=x1p+1.5;
    }
    else if(timer1>=20 && timer1<30){
            x1p=x1p+2;

   }
   else if(timer1>=30 && timer1<40){
                x1p=x1p+2.5;

   }
   else if(timer1>=40 && timer1<50) {
                    x1p=x1p+3.5;

   }
   else {
                        x1p=x1p+4.5;

   }
}

if(25+5>=(  sqrt(pow((p-x),2)+pow((x1p-y),2))) && s1sayac13==0 ){
        health=health-10;
        s1sayac13=1;
    }

    if(25+5<(  sqrt(pow((p-x),2)+pow((y-x1p),2)))){
        s1sayac13=0;
    }


if (100<bp && bp<110)   {
        x2p=bp;
        x2flag13=1;

}



if(x2flag13==1){
                circlefill(buffer,p+9.5,x2p+25,5,makecol(0,0,0)); 

        draw_sprite(buffer,en1missile,p,x2p);
          if(timer1<20){
        x2p=x2p+1.5;
    }
    else if(timer1>=20 && timer1<30){
            x2p=x2p+2;

   }
   else if(timer1>=30 && timer1<40){
                x2p=x2p+2.5;

   }
   else if(timer1>=40 && timer1<50) {
                    x2p=x2p+3.5;

   }
   else {
                        x2p=x2p+4.5;

   }
}
   if(25+5>=(  sqrt(pow((p-x),2)+pow((x2p-y),2))) && s2sayac13==0 ){
        health=health-10;
        s2sayac13=1;
    }

    if(25+5<(  sqrt(pow((p-x),2)+pow((y-x2p),2)))){
        s2sayac13=0;
    }




    if( ((30+5>=(  (sqrt(pow((r-mm),2)+pow((br-tt),2))))) || (30+5>=(  (sqrt(pow((r-xx),2)+pow((br-yy),2)))))) && bayrak14==0 ){


        enhealth14=enhealth14-50;
        bayrak14=1;


    }


    if( ((30+5<=(  (sqrt(pow((r-mm),2)+pow((br-tt),2))))) && (30+5<=(  (sqrt(pow((r-xx),2)+pow((br-yy),2))))))){


        bayrak14=0;


    }




    if(enhealth14==100){
     circlefill(buffer,r,br,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship,r-30,br);
     blit(can100,buffer,0,0,r-18,br+30,45,8);


    }

    else if(enhealth14==50){
        circlefill(buffer,r,br,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship,r-30,br);
        blit(can50,buffer,0,0,r-18,br+30,45,8);


    }


  if(enhealth14<=0 && isarett14==2){
        isarett14=1;
        counter14=1;

    }

    if (isarett14==1){
        score=score+10;
        isarett14=0;
    }



    if(br>780){
        counter14=0;
        enhealth14=100;
        isarett14=2;
    }



    if( ((30+5>=(  (sqrt(pow((s-mm),2)+pow((bs-tt),2))))) || (30+5>=(  (sqrt(pow((s-xx),2)+pow((bs-yy),2)))))) && bayrak15==0 ){


        enhealth15=enhealth15-50;
        bayrak15=1;


    }


    if( ((30+5<=(  (sqrt(pow((s-mm),2)+pow((bs-tt),2))))) && (30+5<=(  (sqrt(pow((s-xx),2)+pow((bs-yy),2))))))){


        bayrak15=0;


    }




    if(enhealth15==100){
     circlefill(buffer,s,bs,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship2,s-30,bs);
     blit(can100,buffer,0,0,s-18,bs+30,45,8);


    }

    else if(enhealth15==50){
        circlefill(buffer,s,bs,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship2,s-30,bs);
        blit(can50,buffer,0,0,s-18,bs+30,45,8);


    }



  if(enhealth15<=0 && isarett15==2){
        isarett15=1;
        counter15=1;

    }

    if (isarett15==1){
        score=score+10;
        isarett15=0;
    }






    if(bs>780){
        counter15=0;
        enhealth15=100;
        isarett15=2;
    }


if(bs>30 && bs<40){
        x1s=bs;
        x1flag15=1;
}
   if(x1flag15==1){
        circlefill(buffer,s+9.5,x1s+25,5,makecol(0,0,0)); 
        draw_sprite(buffer,en1missile,s,x1s);

         if(timer1<20){
        x1s=x1s+1.5;
    }
    else if(timer1>=20 && timer1<30){
            x1s=x1s+2;

   }
   else if(timer1>=30 && timer1<40){
                x1s=x1s+2.5;

   }
   else if(timer1>=40 && timer1<50) {
                    x1s=x1s+3.5;

   }
   else {
                        x1s=x1s+4.5;

   }
}




if(25+5>=(  sqrt(pow((s-x),2)+pow((x1s-y),2))) && s1sayac15==0 ){
        health=health-10;
        s1sayac15=1;
    }

    if(25+5<(  sqrt(pow((s-x),2)+pow((y-x1s),2)))){
        s1sayac15=0;
    }





if (100<bs && bs<110)   {
        x2s=bs;
        x2flag15=1;

}



if(x2flag15==1){
            circlefill(buffer,s+9.5,x2s+25,5,makecol(0,0,0)); 

        draw_sprite(buffer,en1missile,s,x2s);
        
         if(timer1<20){
        x2s=x2s+1.5;
    }
    else if(timer1>=20 && timer1<30){
            x2s=x2s+2;

   }
   else if(timer1>=30 && timer1<40){
                x2s=x2s+2.5;

   }
   else if(timer1>=40 && timer1<50) {
                    x2s=x2s+3.5;

   }
   else {
                        x2s=x2s+4.5;

   }
}





if(25+5>=(  sqrt(pow((s-x),2)+pow((x2s-y),2))) && s2sayac15==0 ){
        health=health-10;
        s2sayac15=1;
    }

    if(25+5<(  sqrt(pow((s-x),2)+pow((y-x2s),2)))){
        s2sayac15=0;
    }



    if( ((30+5>=(  (sqrt(pow((t-mm),2)+pow((bt-tt),2))))) || (30+5>=(  (sqrt(pow((t-xx),2)+pow((bt-yy),2)))))) && bayrak16==0 ){


        enhealth16=enhealth16-50;
        bayrak16=1;


    }


    if( ((30+5<=(  (sqrt(pow((t-mm),2)+pow((bt-tt),2))))) && (30+5<=(  (sqrt(pow((t-xx),2)+pow((bt-yy),2))))))){


        bayrak16=0;


    }


    if(enhealth16==100){
     circlefill(buffer,t,bt,30,makecol(0,0,0)); 
     draw_sprite(buffer,enspaceship,t-30,bt);
     blit(can100,buffer,0,0,t-18,bt+30,45,8);


    }

    else if(enhealth16==50){
        circlefill(buffer,t,bt,30,makecol(0,0,0)); 
        draw_sprite(buffer,enspaceship,t-30,bt);
        blit(can70,buffer,0,0,t-18,bt+30,45,8);


    }



  if(enhealth16<=0 && isarett16==2){
        isarett16=1;
        counter16=1;

    }

    if (isarett16==1){
        score=score+10;
        isarett16=0;
    }




    if(bt>780){
        counter16=0;
        enhealth16=100;
        isarett16=2;

    }


    if(25+25>=(  sqrt(pow((a-x),2)+pow((y-ba),2))) && counter3!=1 && sayac3==0 ){
        health=health-10;
        sayac3=1;
    }

    if(25+25<(  sqrt(pow((a-x),2)+pow((y-ba),2)))){
        sayac3=0;
    }


    if(25+25>=(  sqrt(pow((b-x),2)+pow((y-bb),2)) ) && counter4!=1 && sayac4==0 ){
        health=health-10;
        sayac4=1;

    }
    if(25+25<(  sqrt(pow((b-x),2)+pow((y-bb),2)))){
        sayac4=0;
    }


    if(25+25>=(  sqrt(pow((c-x),2)+pow((y-bc),2)) ) && counter5!=1 && sayac5==0  ){
        health=health-10;
        sayac5=1;

    }
    if(25+25<(  sqrt(pow((c-x),2)+pow((y-bc),2)))){
        sayac5=0;
    }


    if(25+25>=(  sqrt(pow((d-x),2)+pow((y-bd),2)) ) && counter6!=1 && sayac6==0  ){
        health=health-10;
        sayac6=1;

    }
    if(25+25<(  sqrt(pow((d-x),2)+pow((y-bd),2)))){
        sayac6=0;
    }


    if(25+25>=(  sqrt(pow((e-x),2)+pow((y-be),2)) ) && counter7!=1 && sayac7==0  ){
        health=health-10;
        sayac7=1;

    }
    if(25+25<(  sqrt(pow((e-x),2)+pow((y-be),2)))){
        sayac7=0;
    }


    if(25+25>=(  sqrt(pow((f-x),2)+pow((y-bf),2)) ) && counter8!=1 && sayac8==0  ){
        health=health-10;
        sayac8=1;

    }
    if(25+25<(  sqrt(pow((f-x),2)+pow((y-bf),2)))){
        sayac8=0;
    }


    if(25+25>=(  sqrt(pow((g-x),2)+pow((y-bg),2))  ) && counter9!=1 && sayac9==0  ){
        health=health-10;
        sayac9=1;

    }
    if(25+25<(  sqrt(pow((g-x),2)+pow((y-bg),2)))){
        sayac9=0;
    }


    if(25+25>=(  sqrt(pow((l-x),2)+pow((y-bl),2)) )  && counter10!=1 && sayac10==0){
        health=health-10;
        sayac10=1;

    }
    if(25+25<(  sqrt(pow((l-x),2)+pow((y-bl),2)))){
        sayac10=0;
    }


    if(25+25>=(  sqrt(pow((m-x),2)+pow((y-bm),2)) ) && counter11!=1 && sayac11==0 ){
        health=health-10;
        sayac11=1;


    }
    if(25+25<(  sqrt(pow((m-x),2)+pow((y-bm),2)))){
        sayac11=0;
    }


    if(25+25>=(  sqrt(pow((n-x),2)+pow((y-bn),2)) ) && counter12!=1 && sayac12==0  ){
        health=health-10;
        sayac12=1;

    }
    if(25+25<(  sqrt(pow((n-x),2)+pow((y-bn),2)))){
        sayac12=0;
    }


    if(25+25>=(  sqrt(pow((p-x),2)+pow((y-bp),2)) ) && counter13!=1 && sayac13==0  ){
        health=health-10;
        sayac13=1;

    }
    if(25+25<(  sqrt(pow((p-x),2)+pow((y-bp),2)))){
        sayac13=0;
    }


    if(25+25>=(  sqrt(pow((r-x),2)+pow((y-br),2)) ) && counter14!=1 && sayac14==0  ){
        health=health-10;
        sayac14=1;

    }
    if(25+25<(  sqrt(pow((r-x),2)+pow((y-br),2)))){
        sayac14=0;
    }


    if(25+25>=(  sqrt(pow((s-x),2)+pow((y-bs),2)) ) && counter15!=1 && sayac15==0  ){
        health=health-10;
        sayac15=1;

    }
    if(25+25<(  sqrt(pow((s-x),2)+pow((y-bs),2)))){
        sayac15=0;
    }


    if(25+25>=(  sqrt(pow((t-x),2)+pow((y-bt),2)) ) && counter16!=1  && sayac16==0  ){
        health=health-10;
        sayac16=1;

    }
    if(25+25<(  sqrt(pow((t-x),2)+pow((y-bt),2)))){
        sayac16=0;
    }

    if(health==100){
        blit(gcan100,buffer,0,0,x-24,y+30,45,8);
        textprintf_ex(buffer,font,x-13,y+40,makecol(0,255,0),-1,"%d",health);
    }
    if(health==90){
        blit(gcan90,buffer,0,0,x-24,y+30,45,8);
        textprintf_ex(buffer,font,x-13,y+40,makecol(0,255,0),-1,"%d",health);

    }
    if(health==80){
        blit(gcan80,buffer,0,0,x-24,y+30,45,8);
        textprintf_ex(buffer,font,x-13,y+40,makecol(0,255,0),-1,"%d",health);

    }
    if(health==70){
        blit(gcan70,buffer,0,0,x-24,y+30,45,8);
        textprintf_ex(buffer,font,x-13,y+40,makecol(0,255,0),-1,"%d",health);

    }
    if(health==60){
        blit(gcan60,buffer,0,0,x-24,y+30,45,8);
        textprintf_ex(buffer,font,x-13,y+40,makecol(0,255,0),-1,"%d",health);

    }
    if(health==50){
        blit(gcan50,buffer,0,0,x-24,y+30,45,8);
        textprintf_ex(buffer,font,x-13,y+40,makecol(0,255,0),-1,"%d",health);

    }
    if(health==40){
        blit(gcan40,buffer,0,0,x-24,y+30,45,8);
        textprintf_ex(buffer,font,x-13,y+40,makecol(0,255,0),-1,"%d",health);

    }
    if(health==30){
        blit(gcan30,buffer,0,0,x-24,y+30,45,8);
        textprintf_ex(buffer,font,x-13,y+40,makecol(0,255,0),-1,"%d",health);

    }
    if(health==20){
        blit(gcan20,buffer,0,0,x-24,y+30,45,8);
        textprintf_ex(buffer,font,x-13,y+40,makecol(0,255,0),-1,"%d",health);

    }
    if(health==10){
        blit(gcan10,buffer,0,0,x-24,y+30,45,8);
        textprintf_ex(buffer,font,x-13,y+40,makecol(0,255,0),-1,"%d",health);

    }
    if(health<=0){   
        sesflagi1=1;
                sesflagi2=1;
                healthflag=1;

     }




if(timer1<20){
            ba++;
        }
        else if(timer1>=20 && timer1<40){
            ba = ba + 1.5;
        }
        else if(timer1>=40 && timer1<60){
             ba = ba +2;   
        }
        else {
            ba = ba + 3;
        }    if(ba>790){
        ba=-50;
    }

    if(bb>790){
        bb=-50;
    }
    if(bc>790){
        bc=-50;
    } 
    if(bd>790){
        bd=-50;
    }
    if(be>790){
        be=-50;
    }
    if(bf>790){
        bf=-50;
    }
    if(bg>790){
        bg=-50;
    }
    if(bl>790){
        bl=-50;
    }
    if(bm>790){
        bm=-50;
    } 
    if(bn>790){
        bn=-50;
    }
    if(bp>790){
        bp=-50;
    }
    if(br>790){
        br=-50;
    }

    if(bs>790){
        bs=-50;
    }
    if(bt>790){
        bt=-50;
    }

    if(bc>250 || bd>bc){

        if(timer1<20){
            bd++;
        }
        else if(timer1>=20 && timer1<40){
            bd = bd + 1.5;
        }
        else if(timer1>=40 && timer1<60){
             bd = bd +2;   
        }
        else {
            bd = bd + 3;
        }
    }


    if(bd>250 || be>bd){
if(timer1<20){
            be++;
        }
        else if(timer1>=20 && timer1<40){
            be = be + 1.5;
        }
        else if(timer1>=40 && timer1<60){
             be = be +2;   
        }
        else {
            be = be + 3;
        }    }

    if(ba>250 || bb>ba){
if(timer1<20){
            bb++;
        }
        else if(timer1>=20 && timer1<40){
            bb = bb + 1.5;
        }
        else if(timer1>=40 && timer1<60){
             bb = bb + 2;   
        }
        else {
            bb = bb + 3;
        }    }

    if(bb>250 || bc>bb){
if(timer1<20){
            bc++;
        }
        else if(timer1>=20 && timer1<40){
            bc = bc + 1.5;
        }
        else if(timer1>=40 && timer1<60){
             bc = bc +2;   
        }
        else {
            bc = bc+ 3;
        }    }



    if(bg>250 || bl>bg){
if(timer1<20){
            bl++;
        }
        else if(timer1>=20 && timer1<40){
            bl = bl + 1.5;
        }
        else if(timer1>=40 && timer1<60){
             bl = bl +2;   
        }
        else {
            bl= bd + 3;
        }    }

    if(bl>250 || bm>bl){
if(timer1<20){
            bm++;
        }
        else if(timer1>=20 && timer1<40){
            bm = bm + 1.5;
        }
        else if(timer1>=40 && timer1<60){
             bm = bm +2;   
        }
        else {
            bm = bm + 3;
        }    }


    if(bm>250 || bn>bm){
if(timer1<20){
            bn++;
        }
        else if(timer1>=20 && timer1<40){
            bn = bn + 1.5;
        }
        else if(timer1>=40 && timer1<60){
             bn = bn +2;   
        }
        else {
            bn = bn + 3;
        }    }

    if(bn>250 || bp>bn){
if(timer1<20){
            bp++;
        }
        else if(timer1>=20 && timer1<40){
            bp = bp + 1.5;
        }
        else if(timer1>=40 && timer1<60){
             bp= bp +2;   
        }
        else {
            bp = bp + 3;
        }    }


    if(be>250 || bf>be){
if(timer1<20){
            bf++;
        }
        else if(timer1>=20 && timer1<40){
            bf = bf + 1.5;
        }
        else if(timer1>=40 && timer1<60){
             bf = bf +2;   
        }
        else {
            bf = bf + 3;
        }    }


    if(bf>250 || bg>bf){
if(timer1<20){
            bg++;
        }
        else if(timer1>=20 && timer1<40){
            bg = bg + 1.5;
        }
        else if(timer1>=40 && timer1<60){
             bg = bg +2;   
        }
        else {
            bg = bg + 3;
        }    }
    if(bp>250 || br>bp){
if(timer1<20){
            br++;
        }
        else if(timer1>=20 && timer1<40){
            br = br + 1.5;
        }
        else if(timer1>=40 && timer1<60){
             br = br +2;   
        }
        else {
            br = br + 3;
        }    }

    if(br>250 || bs>br){
if(timer1<20){
            bs++;
        }
        else if(timer1>=20 && timer1<40){
            bs = bs + 1.5;
        }
        else if(timer1>=40 && timer1<60){
             bs = bs +2;   
        }
        else {
            bs = bs + 3;
        }    }

    if(bs>250 || bt>bs){
if(timer1<20){
            bt++;
        }
        else if(timer1>=20 && timer1<40){
            bt = bt + 1.5;
        }
        else if(timer1>=40 && timer1<60){
             bt = bt +2; 
        }
        else {
            bt = bt + 3;
        }    }





    }

}




if(scoreflag==0 && healthflag==1){
fprintf(scorefile, "%d\n",score );
fclose(scorefile);













fscanf(countfile,"%d",&countfilee);
countfilee++;
fclose(countfile);
   

countfile = fopen("count.txt","w");



fprintf(countfile, "%d", countfilee );

fclose(countfile);

scorefile = fopen("scores.txt","r");

countfileec=countfilee;


while(countfileec>0){
    fscanf(scorefile,"%d",&arr[ii]);
    countfileec--;

    ii++;

}
fclose(scorefile);

guncelskor=arr[countfilee-1];
for (zi = 0; zi < countfilee; ++zi)

    {

        for (zj = zi + 1; zj < countfilee; ++zj)

        {

            if (arr[zi] < arr[zj])

            {

                ta =  arr[zi];

                arr[zi] = arr[zj];

                arr[zj] = ta;

            }

        }

    }




while(ilkonsize<10){
    ilkon[ilkonsize] = arr[ilkonsize];
    ilkonsize++;
    
}

scoreflag=1;


}



if(healthflag==1){

            textprintf_ex(buffer,font,200,50,makecol(255,255,255),-1,"SCORE BOARD");



            if(guncelskor==ilkon[0] && redflag==0){
                textprintf_ex(buffer,font,100,120,makecol(255,255,255),-1,"1.%d  <<",ilkon[0]);
                redflag=1;
            }
            else{
                textprintf_ex(buffer,font,100,120,makecol(0,255,0),-1,"1.%d",ilkon[0]);
                redflag=0;
            }





            if(guncelskor==ilkon[1] && redflag==0){
                textprintf_ex(buffer,font,100,140,makecol(255,255,255),-1,"2.%d  <<",ilkon[1]);
                redflag=1;

            }
            else{
                textprintf_ex(buffer,font,100,140,makecol(0,255,0),-1,"2.%d",ilkon[1]);
                redflag=0;

            }



            if(guncelskor==ilkon[2] && redflag==0){
                textprintf_ex(buffer,font,100,160,makecol(255,255,255),-1,"3.%d  <<",ilkon[2]);
                                redflag=1;


            }
            else{
                textprintf_ex(buffer,font,100,160,makecol(0,255,0),-1,"3.%d",ilkon[2]);
                redflag=0;

            }


            if(guncelskor==ilkon[3] && redflag==0){
                textprintf_ex(buffer,font,100,180,makecol(255,255,255),-1,"4.%d  <<",ilkon[3]);
                                redflag=1;

            }
            else{
                textprintf_ex(buffer,font,100,180,makecol(0,255,0),-1,"4.%d",ilkon[3]);
                redflag=0;

            }





            if(guncelskor==ilkon[4] && redflag==0){
                textprintf_ex(buffer,font,100,200,makecol(255,255,255),-1,"5.%d  <<",ilkon[4]);
                                redflag=1;

            }
            else{
                textprintf_ex(buffer,font,100,200,makecol(0,255,0),-1,"5.%d",ilkon[4]);
                                redflag=0;

            }




            if(guncelskor==ilkon[5] && redflag==0){
                textprintf_ex(buffer,font,100,220,makecol(255,255,255),-1,"6.%d  <<",ilkon[5]);
                                redflag=1;

            }
            else{
                textprintf_ex(buffer,font,100,220,makecol(0,255,0),-1,"6.%d",ilkon[5]);
                                redflag=0;

            }





            if(guncelskor==ilkon[6] && redflag==0){
                textprintf_ex(buffer,font,100,240,makecol(255,255,255),-1,"7.%d  <<",ilkon[6]);
                                redflag=1;

            }
            else{
                textprintf_ex(buffer,font,100,240,makecol(0,255,0),-1,"7.%d",ilkon[6]);
                                redflag=0;

            }






            if(guncelskor==ilkon[7] && redflag==0){
                textprintf_ex(buffer,font,100,260,makecol(255,255,255),-1,"8.%d  <<",ilkon[7]);
                                redflag=1;

            }
            else{
                textprintf_ex(buffer,font,100,260,makecol(0,255,0),-1,"8.%d",ilkon[7]);
                                redflag=0;

            }






            if(guncelskor==ilkon[8] && redflag==0){
                textprintf_ex(buffer,font,100,280,makecol(255,255,255),-1,"9.%d  <<",ilkon[8]);
                                redflag=1;

            }
            else{
                textprintf_ex(buffer,font,100,280,makecol(0,255,0),-1,"9.%d",ilkon[8]);
                                redflag=0;

            }




            if(guncelskor==ilkon[9] && redflag==0){
                textprintf_ex(buffer,font,100,300,makecol(255,255,255),-1,"10.%d  <<",ilkon[9]);
                                redflag=1;

            }
            else{
                textprintf_ex(buffer,font,100,300,makecol(0,255,0),-1,"10.%d",ilkon[9]);
                                redflag=0;

            }


}


    rest(3);

    blit(buffer,screen,0,0,0,0,widht,height);
    clear_bitmap(buffer);

/***while içi*/
    }


    Bitir();
    return 0;
    }

    END_OF_MAIN()





    void incrementaltimer(){
        timer1++;
    }

    void Baslat(){
        int depth,res;
        allegro_init();
        depth = desktop_color_depth();
        if(depth == 0) depth=32;
        set_color_depth(depth);
        res=set_gfx_mode(GFX_AUTODETECT_WINDOWED, widht,height,0,0);
        if(res!=0){
            allegro_message("%s\n", allegro_error);               
            exit(-1);
        }
        install_timer();
        install_keyboard();
        install_mouse();
            install_sound(DIGI_AUTODETECT, MIDI_NONE, "A");         /*asdasdsad*/
    }


    void Bitir(){
     clear_keybuf();
      /*sdasdas*/
    }

    
