#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>


void myInit (void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}


void myDisplay(void)
{
    /********************************************************************************************************
    *
    *                           BATMAN - ARKAM CITY :D
    *
    *********************************************************************************************************/

    /*  BATMAN HEAD */

    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (0.0, 0.0, 0.0);
    glPointSize(4.0);

    //left horn - dark blue

    glBegin(GL_QUADS);
    glColor3f ( 0.02,0.05,0.12 );
    glVertex2i(150,300);
    glVertex2i(170,300);
    glVertex2i(170,360);
    glVertex2i(150,360);
    glEnd();
    glFlush ();

    //right horn - light blue
    glBegin(GL_QUADS);
    glColor3f ( 0.04,0.11,0.30 );
    glVertex2i(190,300);
    glVertex2i(210,300);
    glVertex2i(210,360);
    glVertex2i(190,360);

    glEnd();
    glFlush ();

    //middle eyes - light blue
    glBegin(GL_QUADS);
    glColor3f ( 0.04,0.11,0.30 );
    glVertex2i(170,300);
    glVertex2i(190,300);
    glVertex2i(190,330);
    glVertex2i(170,330);

    glEnd();
    glFlush ();

    //middle eyes - skin color
    glBegin(GL_QUADS);
    glColor3f ( 0.67,0.40,0.07 );
    glVertex2i(150,300);
    glVertex2i(170,300);
    glVertex2i(170,280);
    glVertex2i(150,280);
    glEnd();
    glFlush ();

    //right skin - skin color
    glBegin(GL_QUADS);
    glColor3f ( 0.97,0.61,0.20 );
    glVertex2i(170,300);
    glVertex2i(210,300);
    glVertex2i(210,280);
    glVertex2i(170,280);

    glEnd();
    glFlush ();



    /*  BATMAN BODY */

    //first layer
    glBegin(GL_QUADS);
    glColor3f ( 0.47,0.47,0.47 );
    glVertex2i(120,280);
    glVertex2i(240,280);
    glVertex2i(240,250);
    glVertex2i(120,250);

    glEnd();
    glFlush ();

    //second layer
    glBegin(GL_QUADS);
    glColor3f ( 0.47,0.47,0.47 );
    glVertex2i(100,250);
    glVertex2i(260,250);
    glVertex2i(260,225);
    glVertex2i(100,225);

    glEnd();
    glFlush();

    /* hand */

    //hands hand
    glBegin(GL_QUADS);
    glColor3f ( 0.97,0.61,0.20 );
    glVertex2i(100,225);
    glVertex2i(260,225);
    glVertex2i(260,200);
    glVertex2i(100,200);

    glEnd();
    glFlush ();

    //third layer - gray color
    glBegin(GL_QUADS);
    glColor3f ( 0.47,0.47,0.47 );
    glVertex2i(120,225);
    glVertex2i(240,225);
    glVertex2i(240,200);
    glVertex2i(120,200);

    glEnd();
    glFlush ();


    //glopss blue color
    glBegin(GL_QUADS);
    glColor3f ( 0.04,0.11,0.30 );
    glVertex2i(100,200);
    glVertex2i(260,200);
    glVertex2i(260,175);
    glVertex2i(100,175);

    glEnd();
    glFlush ();


    /*  BATMAN BELT COLOR - YELLOW   */

    // batman belt
    glBegin(GL_QUADS);
    glColor3f ( 0.99,0.93,0.13 );
    glVertex2i(120,200);
    glVertex2i(240,200);
    glVertex2i(240,175);
    glVertex2i(120,175);

    glEnd();
    glFlush ();


    /*  BATMAN WINGS COLOR - BLACK   */

    // BATMAN WINGS
    glBegin(GL_QUADS);
    glColor3f ( 0.0 ,0.0 ,0.0 );
    glVertex2i(100,175);
    glVertex2i(260,175);
    glVertex2i(260,110);
    glVertex2i(100,110);

    glEnd();
    glFlush ();


    /*  BATMAN UNDERWARE    */
    //BATMAN UNDERWARE
    glBegin(GL_QUADS);
    glColor3f ( 0.04,0.11,0.30 );
    glVertex2i(120,175);
    glVertex2i(240,175);
    glVertex2i(240,150);
    glVertex2i(120,150);

    glEnd();
    glFlush ();




    /*  BATMAN LEGS  */
    //batman left leg
    glBegin(GL_QUADS);
    glColor3f ( 0.4,0.4,0.4 );
    glVertex2i(120,150);
    glVertex2i(170,150);
    glVertex2i(170,70);
    glVertex2i(120,70);

    glEnd();
    glFlush ();

    //batman right leg
    glBegin(GL_QUADS);
    glColor3f ( 0.4,0.4,0.4 );
    glVertex2i(240,150);
    glVertex2i(190,150);
    glVertex2i(190,70);
    glVertex2i(240,70);

    glEnd();
    glFlush ();

    //BATMAN UNDERWARE DARK AREA
    glBegin(GL_QUADS);
    glColor3f ( 0.02,0.04,0.12 );
    glVertex2i(120,175);
    glVertex2i(145,175);
    glVertex2i(145,150);
    glVertex2i(120,150);

    glEnd();
    glFlush ();

    //batman uderware bottom area
    glBegin(GL_QUADS);
    glColor3f ( 0.04,0.11,0.30 );
    glVertex2i(145,150);
    glVertex2i(215,150);
    glVertex2i(215,130);
    glVertex2i(145,130);

    glEnd();
    glFlush ();


    /*  BATMAN LEGS LEFT SHADOW */
    //batman left leg shadow
    glBegin(GL_QUADS);
    glColor3f ( 0.2,0.2,0.2 );
    glVertex2i(120,150);
    glVertex2i(145,150);
    glVertex2i(145,70);
    glVertex2i(120,70);

    glEnd();
    glFlush ();

    /*  BATMAN LEGS RIGHT SHADOW */
    //batman right leg shadow
    glBegin(GL_QUADS);
    glColor3f ( 0.2,0.2,0.2 );
    glVertex2i(215,130);
    glVertex2i(190,130);
    glVertex2i(190,70);
    glVertex2i(215,70);

    glEnd();
    glFlush ();


    /*  BATMAN LEFT LEG SHOE */
    //batman right leg show
    glBegin(GL_QUADS);
    glColor3f ( 0.04,0.11,0.30 );
    glVertex2i(120,70);
    glVertex2i(170,70);
    glVertex2i(170,50);
    glVertex2i(120,50);

    glEnd();
    glFlush ();

    //batman left shadow leg show
    glBegin(GL_QUADS);
    glColor3f ( 0.02,0.05,0.12 );
    glVertex2i(120,70);
    glVertex2i(145,70);
    glVertex2i(145,50);
    glVertex2i(120,50);

    glEnd();
    glFlush ();


    /*  BATMAN RIGHT LEG SHOE */
    //batman right leg show
    glBegin(GL_QUADS);
    glColor3f ( 0.04,0.11,0.30 );
    glVertex2i(190,70);
    glVertex2i(240,70);
    glVertex2i(240,50);
    glVertex2i(190,50);

    glEnd();
    glFlush ();

    //batman left shadow leg show
    glBegin(GL_QUADS);
    glColor3f ( 0.02,0.05,0.12 );
    glVertex2i(190,70);
    glVertex2i(215,70);
    glVertex2i(215,50);
    glVertex2i(190,50);

    glEnd();
    glFlush ();


    /*  BATMAN LOGO */
    //batman left shadow leg show
    glBegin(GL_QUADS);
    glColor3f ( 0.2,0.2,0.2 );
    glVertex2i(135,250);
    glVertex2i(225,250);
    glVertex2i(225,225);
    glVertex2i(135,225);

    glEnd();
    glFlush ();



    /********************************************************************************************************
    *
    *                           ROBIN - ARKAM CITY :D
    *
    *********************************************************************************************************/


    /*  ROBIN HEAD  */
    //robin hair
    glBegin(GL_QUADS);
    glColor3f(0.09 ,0.09, 0.09);
    glVertex2i(400,360);
    glVertex2i(460,360);
    glVertex2i(460,345);
    glVertex2i(400,345);

    glEnd();
    glFlush ();


    //robin face
    glBegin(GL_QUADS);
    glColor3f(0.97 ,0.61, 0.19);
    glVertex2i(400,345);
    glVertex2i(460,345);
    glVertex2i(460,305);
    glVertex2i(400,305);

    glEnd();
    glFlush ();


    //robin face shadow part
    glBegin(GL_QUADS);
    glColor3f(0.67 ,0.4, 0.05);
    glVertex2i(400,345);
    glVertex2i(420,345);
    glVertex2i(420,325);
    glVertex2i(400,325);

    glEnd();
    glFlush ();

    /*  YELLOW MASK */
    //robin face left yellow mask
    glBegin(GL_QUADS);
    glColor3f ( 0.99,0.93,0.13 );
    glVertex2i(440,325);
    glVertex2i(460,325);
    glVertex2i(460,305);
    glVertex2i(440,305);

    glEnd();
    glFlush ();

    //robin face right yellow mask
    glBegin(GL_QUADS);
    glColor3f ( 0.99,0.93,0.13 );
    glVertex2i(400,325);
    glVertex2i(420,325);
    glVertex2i(420,305);
    glVertex2i(400,305);

    glEnd();
    glFlush ();


    /*  ROBIN HAND SECTION  */

    //robin hand green color
    glBegin(GL_QUADS);
    glColor3f ( 0.05,0.23,0.12 );
    glVertex2i(345,280);
    glVertex2i(515,280);
    glVertex2i(515,255);
    glVertex2i(345,255);

    glEnd();
    glFlush ();

    //robin hand skin color
    glBegin(GL_QUADS);
    glColor3f ( 0.97,0.61,0.19 );
    glVertex2i(345,255);
    glVertex2i(515,255);
    glVertex2i(515,230);
    glVertex2i(345,230);

    glEnd();
    glFlush ();

    //robin hand golden color
    glBegin(GL_QUADS);
    glColor3f ( 0.67,0.4,0.05 );
    glVertex2i(345,230);
    glVertex2i(515,230);
    glVertex2i(515,205);
    glVertex2i(345,205);

    glEnd();
    glFlush ();


    //robin backside wings color
    glBegin(GL_QUADS);
    glColor3f ( 0.81,0.75,0.11 );
    glVertex2i(345,205);
    glVertex2i(515,205);
    glVertex2i(515,130);
    glVertex2i(345,130);

    glEnd();
    glFlush ();

    /*  ROBIN YELLOW BELT   */
    //robin hand golden color
    glBegin(GL_QUADS);
    glColor3f ( 0.99,0.93,0.13 );
    glVertex2i(370,230);
    glVertex2i(490,230);
    glVertex2i(490,205);
    glVertex2i(370,205);

    glEnd();
    glFlush ();


    /*  ROBIN LEGS  */

    //robin left legs
    glBegin(GL_QUADS);
    glColor3f ( 0.97,0.61,0.20 );
    glVertex2i(370,180);
    glVertex2i(420,180);
    glVertex2i(420,90);
    glVertex2i(370,90);

    glEnd();
    glFlush ();

    //robin left legs shadow
    glBegin(GL_QUADS);
    glColor3f ( 0.67,0.4,0.05 );
    glVertex2i(370,180);
    glVertex2i(395,180);
    glVertex2i(395,90);
    glVertex2i(370,90);

    glEnd();
    glFlush ();

    //robin right legs
    glBegin(GL_QUADS);
    glColor3f ( 0.97,0.61,0.20 );
    glVertex2i(440,180);
    glVertex2i(490,180);
    glVertex2i(490,90);
    glVertex2i(440,90);

    glEnd();
    glFlush ();

    //robin right legs shadow
    glBegin(GL_QUADS);
    glColor3f ( 0.67,0.4,0.05 );
    glVertex2i(440,180);
    glVertex2i(465,180);
    glVertex2i(465,90);
    glVertex2i(440,90);

    glEnd();
    glFlush ();



    /*  ROBIN GREEN UNDERWARE  */

    //robin hand green color
    glBegin(GL_QUADS);
    glColor3f ( 0.08,0.41,0.22 );
    glVertex2i(370,205);
    glVertex2i(490,205);
    glVertex2i(490,180);
    glVertex2i(370,180);

    glEnd();
    glFlush ();

    //robin hand light green color
    glBegin(GL_QUADS);
    glColor3f ( 0.08,0.41,0.22 );
    glVertex2i(395,180);
    glVertex2i(465,180);
    glVertex2i(465,155);
    glVertex2i(395,155);

    glEnd();
    glFlush ();


    /*  ROBIN LEGS SHOES    */

    //robin left legs show light green
    glBegin(GL_QUADS);
    glColor3f ( 0.08,0.41,0.22 );
    glVertex2i(370,90);
    glVertex2i(420,90);
    glVertex2i(420,70);
    glVertex2i(370,70);

    glEnd();
    glFlush ();

    //robin left legs shoe shadow - dark green
    glBegin(GL_QUADS);
    glColor3f ( 0.05,0.23,0.12 );
    glVertex2i(370,90);
    glVertex2i(395,90);
    glVertex2i(395,70);
    glVertex2i(370,70);


    //robin right legs shoe - light green
    glBegin(GL_QUADS);
    glColor3f ( 0.08,0.41,0.22 );
    glVertex2i(440,90);
    glVertex2i(490,90);
    glVertex2i(490,70);
    glVertex2i(440,70);

    glEnd();
    glFlush ();

    //robin right show shadow - dark green
    glBegin(GL_QUADS);
    glColor3f ( 0.05,0.23,0.12 );
    glVertex2i(440,90);
    glVertex2i(465,90);
    glVertex2i(465,70);
    glVertex2i(440,70);

    glEnd();
    glFlush ();





    /*  ROBIN BODY SECTION  */

    //robin body section
    glBegin(GL_QUADS);
    glColor3f ( 0.92,0.11,0.14 );
    glVertex2i(370,305);
    glVertex2i(490,305);
    glVertex2i(490,230);
    glVertex2i(370,230);

    glEnd();
    glFlush ();

    //robin body left shadow - dark red
    glBegin(GL_QUADS);
    glColor3f ( 0.55,0.08 ,0.12 );
    glVertex2i(370,305);
    glVertex2i(400,305);
    glVertex2i(400,230);
    glVertex2i(370,230);

    glEnd();
    glFlush ();


    //robin body black logo
    glBegin(GL_QUADS);
    glColor3f(0.09 ,0.09, 0.09);
    glVertex2i(450,280);
    glVertex2i(470,280);
    glVertex2i(470,260);
    glVertex2i(450,260);

    glEnd();
    glFlush ();


}



int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1024, 768);
    glutInitWindowPosition (100, 150);
    glutCreateWindow ("Batman Vs Robin");
    glutDisplayFunc(myDisplay);
    myInit ();
    glutMainLoop();
}



