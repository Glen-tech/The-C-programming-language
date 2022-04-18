#include <iostream>
#include <cstdlib>

using namespace std;

enum eDir{ STOP = 0 , LEFT = 1, UPLEFT = 2, DOWNLEFT = 3 , RIGHT = 4, UPRIGHT = 5 , DOWNRIGHT = 6};

    class cball
    {
            private:
                int x , y;
                int originalX,originalY;//originele positie bal
                eDir direction ;
            public :
             cball(int posX , int posY)
                {

                 originalX = posX;
                 originalY = posY;// originele plaats bij reset spel
                 x = posX ; y = posY;
                 direction = STOP ;

                }

     void Reset()
     {
         x = originalX ; y = originalY;
         direction = STOP;
     }

     void changeDirection(eDir d)
     {
         direction = d;
     }
     void randomDirection()
     {
         direction =(eDir)((rand() % 6)+1); // random nummers 1 tot 6
     }

     inline int getx() {return x;}
     inline int gety() {return y;}
     inline eDir getDirection(){return direction;}

     void Move()
     {
             switch(direction)
             {
             case STOP:
                 break;

             case LEFT:
                 x--;
                   break;

             case  RIGHT:
                 x++;
                 break;

              case UPLEFT:
                x--; y--;
                break;

               case DOWNLEFT:
                 x-- ; y++;
                break ;
                 
                case UPRIGHT:
                 x++; y--;
                 
                 case DOWNRIGHT; 
                 x++; y++
             break;

         default:
         break;


         }
     }


     friend ostream & operator <<( ostream & o, cball c)
    {

     o << "Ball [" << c.x << "," << c.y << "][" << c.direction << "]";

        return o;
    }

 };


int main()
{
       cball c(0,0);
       cout << c << endl;
       c.randomDirection();
       c.Move();
       cout << c << endl;
       c.Move();
       cout << c << endl ;
       c.randomDirection();
       c.Move();
       cout << c << endl;

    return 0;
}
