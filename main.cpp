#include <windows.h>
#include <gl/glut.h>
#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

GLfloat positionWitch = 0.0f;
GLfloat positionShip = 0.0f;
GLfloat positionPumkin = 0.0f;
GLfloat positionBatsH = 0.0f;
GLfloat positionBatsM = 0.0f;

bool Ship_moveCondition = false;
bool Pumkin_moveCondition = false;

void update(int value)
{
///witch move

    positionWitch -= 0.015f;

    if (positionWitch < -1.3f)
    {
        positionWitch = 0.95f ;
    }

///bats fly

    positionBatsH += 0.02f;

    if (positionBatsH > 1.0f)
    {
        positionBatsH = 0.0f ;
    }

    positionBatsM += 0.02f;

    if (positionBatsM > 1.0f)
    {
        positionBatsM = 0.0f ;
    }

/// ship move

    if (!Ship_moveCondition)
   {
       positionShip += 0.02f;

    if (positionShip > 0.7f)
    {
        Ship_moveCondition = true;
          // positionShip = -0.15f ;
    }
   }

    if (Ship_moveCondition)
    {
        positionShip -= 0.02f ;

     if  (positionShip < -0.15f )
     {
        Ship_moveCondition = false;
     }
    }

/// pumkin dance

    if  (!Pumkin_moveCondition)
    {
        positionPumkin -= 0.028f;

      if (positionPumkin < -0.12f )
      {
          Pumkin_moveCondition = true;
      }
    }

    if (Pumkin_moveCondition)
    {
        positionPumkin +=0.028f;

        if (positionPumkin > 0.0f )
        {
            Pumkin_moveCondition = false;
        }
    }

    glutPostRedisplay();

    glutTimerFunc(50, update, 0);
}

void sky()
{
    glBegin(GL_POLYGON);
       glColor3f(0.39f, 0.58f, 0.93f);
       glVertex2f(-1.0f, 0.305f);
       glVertex2f(-1.0f, 1.0f);
       glColor3f(0.0f, 0.0f, 0.5f);
       glVertex2f(0.5f, 1.0f);
       glVertex2f(1.0f, 1.0f);
       glVertex2f(1.0f, 0.305f);
    glEnd();
}

void stars()
{
   glPointSize(2.5);
   glBegin(GL_POINTS);
       glColor3f(0.85f, 1.0f, 1.0f);
       glVertex2f(-0.96f, 0.95f);
       glVertex2f(-0.88f, 0.95f);
       glVertex2f(-0.8f, 0.95f);
       glVertex2f(-0.72f, 0.95f);
       glVertex2f(-0.64f, 0.95f);
       glVertex2f(-0.56f, 0.95f);
       glVertex2f(-0.48f, 0.95f);
       glVertex2f(-0.4f, 0.95f);
       glVertex2f(-0.32f, 0.95f);
       glVertex2f(-0.24f, 0.95f);
       glVertex2f(-0.16f, 0.95f);
       glVertex2f(-0.08f, 0.95f);
       glVertex2f(0.0f, 0.95f);
       glVertex2f(0.08f, 0.95f);
       glVertex2f(0.16f, 0.95f);
       glVertex2f(0.24f, 0.95f);
       glVertex2f(0.32f, 0.95f);
       glVertex2f(0.4f, 0.95f);
       glVertex2f(0.48f, 0.95f);
       glVertex2f(0.56f, 0.95f);
       glVertex2f(0.64f, 0.95f);
       glVertex2f(0.72f, 0.95f);
       glVertex2f(0.8f, 0.95f);
       glVertex2f(0.88f, 0.95f);
       glVertex2f(0.96f, 0.95f);

       glVertex2f(-0.98f, 0.9f);
       glVertex2f(-0.94f, 0.9f);
       glVertex2f(-0.89f, 0.9f);
       glVertex2f(-0.82f, 0.9f);
       glVertex2f(-0.75f, 0.9f);
       glVertex2f(-0.68f, 0.9f);
       glVertex2f(-0.62f, 0.9f);
       glVertex2f(-0.54f, 0.9f);
       glVertex2f(-0.48f, 0.9f);
       glVertex2f(-0.41f, 0.9f);
       glVertex2f(-0.34f, 0.9f);
       glVertex2f(-0.27f, 0.9f);
       glVertex2f(-0.2f, 0.9f);
       glVertex2f(-0.12f, 0.9f);
       glVertex2f(-0.05f, 0.9f);
       glVertex2f(0.0f, 0.9f);
       glVertex2f(0.05f, 0.9f);
       glVertex2f(0.12f, 0.9f);
       glVertex2f(0.19f, 0.9f);
       glVertex2f(0.26f, 0.9f);
       glVertex2f(0.34f, 0.9f);
       glVertex2f(0.4f, 0.9f);
       glVertex2f(0.46f, 0.9f);
       glVertex2f(0.53f, 0.9f);
       glVertex2f(0.6f, 0.9f);
       glVertex2f(0.67f, 0.9f);
       glVertex2f(0.75f, 0.9f);
       glVertex2f(0.82f, 0.9f);
       glVertex2f(0.89f, 0.9f);
       glVertex2f(0.96f, 0.9f);

       glVertex2f(-0.96f, 0.85f);
       glVertex2f(-0.88f, 0.85f);
       glVertex2f(-0.8f, 0.85f);
       glVertex2f(-0.72f, 0.85f);
       glVertex2f(-0.64f, 0.85f);
       glVertex2f(-0.56f, 0.85f);
       glVertex2f(-0.48f, 0.85f);
       glVertex2f(-0.4f, 0.85f);
       glVertex2f(-0.32f, 0.85f);
       glVertex2f(-0.24f, 0.85f);
       glVertex2f(-0.16f, 0.85f);
       glVertex2f(-0.08f, 0.85f);
       glVertex2f(0.0f, 0.85f);
       glVertex2f(0.08f, 0.85f);
       glVertex2f(0.16f, 0.85f);
       glVertex2f(0.24f, 0.85f);
       glVertex2f(0.32f, 0.85f);
       glVertex2f(0.4f, 0.85f);
       glVertex2f(0.48f, 0.85f);
       glVertex2f(0.56f, 0.85f);
       glVertex2f(0.64f, 0.85f);
       glVertex2f(0.72f, 0.85f);
       glVertex2f(0.8f, 0.85f);
       glVertex2f(0.88f, 0.85f);
       glVertex2f(0.96f, 0.85f);

       glVertex2f(-0.96f, 0.8f);
       glVertex2f(-0.89f, 0.8f);
       glVertex2f(-0.82f, 0.8f);
       glVertex2f(-0.75f, 0.8f);
       glVertex2f(-0.68f, 0.8f);
       glVertex2f(-0.62f, 0.8f);
       glVertex2f(-0.54f, 0.8f);
       glVertex2f(-0.48f, 0.8f);
       glVertex2f(-0.41f, 0.8f);
       glVertex2f(-0.34f, 0.8f);
       glVertex2f(-0.27f, 0.8f);
       glVertex2f(-0.2f, 0.8f);
       glVertex2f(-0.12f, 0.8f);
       glVertex2f(-0.05f, 0.8f);
       glVertex2f(0.0f, 0.8f);
       glVertex2f(0.05f, 0.8f);
       glVertex2f(0.12f, 0.8f);
       glVertex2f(0.19f, 0.8f);
       glVertex2f(0.26f, 0.8f);
       glVertex2f(0.34f, 0.8f);
       glVertex2f(0.4f, 0.8f);
       glVertex2f(0.46f, 0.8f);
       glVertex2f(0.53f, 0.8f);
       glVertex2f(0.6f, 0.8f);
       glVertex2f(0.67f, 0.8f);
       glVertex2f(0.75f, 0.8f);
       glVertex2f(0.82f, 0.8f);
       glVertex2f(0.89f, 0.8f);
       glVertex2f(0.96f, 0.8f);

       glVertex2f(-0.98f, 0.75f);
       glVertex2f(-0.94f, 0.75f);
       glVertex2f(-0.88f, 0.75f);
       glVertex2f(-0.82f, 0.75f);
       glVertex2f(-0.76f, 0.75f);
       glVertex2f(-0.7f, 0.75f);
       glVertex2f(-0.64f, 0.75f);
       glVertex2f(-0.58f, 0.75f);
       glVertex2f(-0.52f, 0.75f);
       glVertex2f(-0.46f, 0.75f);
       glVertex2f(-0.4f, 0.75f);
       glVertex2f(-0.34f, 0.75f);
       glVertex2f(-0.28f, 0.75f);
       glVertex2f(-0.22f, 0.75f);
       glVertex2f(-0.16f, 0.75f);
       glVertex2f(-0.1f, 0.75f);
       glVertex2f(-0.04f, 0.75f);
       glVertex2f(0.02f, 0.75f);
       glVertex2f(0.08f, 0.75f);
       glVertex2f(0.14f, 0.75f);
       glVertex2f(0.2f, 0.75f);
       glVertex2f(0.26f, 0.75f);
       glVertex2f(0.32f, 0.75f);
       glVertex2f(0.38f, 0.75f);
       glVertex2f(0.44f, 0.75f);
       glVertex2f(0.5f, 0.75f);
       glVertex2f(0.56f, 0.75f);
       glVertex2f(0.62f, 0.75f);
       glVertex2f(0.68f, 0.75f);
       glVertex2f(0.74f, 0.75f);
       glVertex2f(0.8f, 0.75f);
       glVertex2f(0.86f, 0.75f);
       glVertex2f(0.93f, 0.75f);
       glVertex2f(0.98f, 0.75f);

       glVertex2f(-0.96f, 0.7f);
       glVertex2f(-0.89f, 0.7f);
       glVertex2f(-0.82f, 0.7f);
       glVertex2f(-0.75f, 0.7f);
       glVertex2f(-0.68f, 0.7f);
       glVertex2f(-0.62f, 0.7f);
       glVertex2f(-0.54f, 0.7f);
       glVertex2f(-0.48f, 0.7f);
       glVertex2f(-0.41f, 0.7f);
       glVertex2f(-0.34f, 0.7f);
       glVertex2f(-0.27f, 0.7f);
       glVertex2f(-0.2f, 0.7f);
       glVertex2f(-0.12f, 0.7f);
       glVertex2f(-0.05f, 0.7f);
       glVertex2f(0.0f, 0.7f);
       glVertex2f(0.05f, 0.7f);
       glVertex2f(0.12f, 0.7f);
       glVertex2f(0.19f, 0.7f);
       glVertex2f(0.26f, 0.7f);
       glVertex2f(0.34f, 0.7f);
       glVertex2f(0.4f, 0.7f);
       glVertex2f(0.46f, 0.7f);
       glVertex2f(0.53f, 0.7f);
       glVertex2f(0.6f, 0.7f);
       glVertex2f(0.67f, 0.7f);
       glVertex2f(0.75f, 0.7f);
       glVertex2f(0.82f, 0.7f);
       glVertex2f(0.89f, 0.7f);
       glVertex2f(0.96f, 0.7f);

       glVertex2f(-0.96f, 0.65f);
       glVertex2f(-0.88f, 0.65f);
       glVertex2f(-0.8f, 0.65f);
       glVertex2f(-0.72f, 0.65f);
       glVertex2f(-0.64f, 0.65f);
       glVertex2f(-0.56f, 0.65f);
       glVertex2f(-0.48f, 0.65f);
       glVertex2f(-0.4f, 0.65f);
       glVertex2f(-0.32f, 0.65f);
       glVertex2f(-0.24f, 0.65f);
       glVertex2f(-0.16f, 0.65f);
       glVertex2f(-0.08f, 0.65f);
       glVertex2f(0.0f, 0.65f);
       glVertex2f(0.08f, 0.65f);
       glVertex2f(0.16f, 0.65f);
       glVertex2f(0.24f, 0.65f);
       glVertex2f(0.32f, 0.65f);
       glVertex2f(0.4f, 0.65f);
       glVertex2f(0.48f, 0.65f);
       glVertex2f(0.56f, 0.65f);
       glVertex2f(0.64f, 0.65f);
       glVertex2f(0.72f, 0.65f);
       glVertex2f(0.8f, 0.65f);
       glVertex2f(0.88f, 0.65f);
       glVertex2f(0.96f, 0.65f);
   glEnd();
}

void moon()
{
    glBegin(GL_TRIANGLE_FAN);
       glColor3f(0.99f, 0.95f, 0.84f);
       glVertex2f(0.65f, 0.55f);
       for(int i = 0; i <= 250 ; i++)
       {
            glVertex2f( 0.65 + (0.25*cos(i*((2*3.1416)/250))),
                        0.55 + (0.25*sin(i*((2*3.1416)/250)))
                       );
        }
    glEnd();
}

void rain()
{
    glLineWidth(0.8);
    glBegin(GL_LINES);
       glColor3f(1.0f, 1.0f, 1.0f);
       glVertex2f(1.0,1.0);
       glVertex2f(0.995,0.975);

       glVertex2f(0.980,1.0);
       glVertex2f(0.975,0.975);

       glVertex2f(0.960,1.0);
       glVertex2f(0.955,0.975);

       glVertex2f(0.940,1.0);
       glVertex2f(0.935,0.98);

       glVertex2f(0.920,1.0);
       glVertex2f(0.915,0.98);

       glVertex2f(0.900,1.0);
       glVertex2f(0.895,0.98);

       glVertex2f(0.880,1.0);
       glVertex2f(0.875,0.98);

       glVertex2f(0.860,1.0);
       glVertex2f(0.855,0.98);

       glVertex2f(0.840,1.0);
       glVertex2f(0.835,0.98);

       glVertex2f(0.820,1.0);
       glVertex2f(0.815,0.98);

       glVertex2f(0.800,1.0);
       glVertex2f(0.795,0.98);

       glVertex2f(0.780,1.0);
       glVertex2f(0.775,0.98);

       glVertex2f(0.760,1.0);
       glVertex2f(0.755,0.98);

       glVertex2f(0.740,1.0);
       glVertex2f(0.735,0.98);

       glVertex2f(0.720,1.0);
       glVertex2f(0.715,0.98);

       glVertex2f(0.700,1.0);
       glVertex2f(0.695,0.98);

       glVertex2f(0.680,1.0);
       glVertex2f(0.675,0.98);

       glVertex2f(0.660,1.0);
       glVertex2f(0.655,0.98);

       glVertex2f(0.640,1.0);
       glVertex2f(0.635,0.98);

       glVertex2f(0.620,1.0);
       glVertex2f(0.615,0.98);

       glVertex2f(0.600,1.0);
       glVertex2f(0.595,0.98);

       glVertex2f(0.580,1.0);
       glVertex2f(0.575,0.98);

       glVertex2f(0.560,1.0);
       glVertex2f(0.555,0.98);

       glVertex2f(0.540,1.0);
       glVertex2f(0.535,0.98);

       glVertex2f(0.520,1.0);
       glVertex2f(0.515,0.98);

       glVertex2f(0.500,1.0);
       glVertex2f(0.495,0.98);

       glVertex2f(0.480,1.0);
       glVertex2f(0.475,0.98);

       glVertex2f(0.460,1.0);
       glVertex2f(0.455,0.98);

       glVertex2f(0.440,1.0);
       glVertex2f(0.435,0.98);

       glVertex2f(0.420,1.0);
       glVertex2f(0.415,0.98);

       glVertex2f(0.400,1.0);
       glVertex2f(0.395,0.98);

       glVertex2f(0.380,1.0);
       glVertex2f(0.375,0.98);

       glVertex2f(0.360,1.0);
       glVertex2f(0.355,0.98);

       glVertex2f(0.340,1.0);
       glVertex2f(0.335,0.98);

       glVertex2f(0.320,1.0);
       glVertex2f(0.315,0.98);

       glVertex2f(0.300,1.0);
       glVertex2f(0.295,0.98);

       glVertex2f(0.280,1.0);
       glVertex2f(0.275,0.98);

       glVertex2f(0.260,1.0);
       glVertex2f(0.255,0.98);

       glVertex2f(0.240,1.0);
       glVertex2f(0.235,0.98);

       glVertex2f(0.220,1.0);
       glVertex2f(0.215,0.98);

       glVertex2f(0.200,1.0);
       glVertex2f(0.195,0.98);

       glVertex2f(0.180,1.0);
       glVertex2f(0.175,0.98);

       glVertex2f(0.160,1.0);
       glVertex2f(0.155,0.98);

       glVertex2f(0.140,1.0);
       glVertex2f(0.135,0.98);

       glVertex2f(0.120,1.0);
       glVertex2f(0.115,0.98);

       glVertex2f(0.100,1.0);
       glVertex2f(0.095,0.98);

       glVertex2f(0.080,1.0);
       glVertex2f(0.075,0.98);

       glVertex2f(0.060,1.0);
       glVertex2f(0.055,0.98);

       glVertex2f(0.040,1.0);
       glVertex2f(0.035,0.98);

       glVertex2f(0.020,1.0);
       glVertex2f(0.015,0.98);

       glVertex2f(0.000,1.0);
       glVertex2f(-0.005,0.98);

       glVertex2f(-0.020,1.0);
       glVertex2f(-0.025,0.98);

       glVertex2f(-0.040,1.0);
       glVertex2f(-0.045,0.98);

       glVertex2f(-0.060,1.0);
       glVertex2f(-0.065,0.98);

       glVertex2f(-0.080,1.0);
       glVertex2f(-0.085,0.98);

       glVertex2f(-0.100,1.0);
       glVertex2f(-0.105,0.98);

       glVertex2f(-0.120,1.0);
       glVertex2f(-0.125,0.98);

       glVertex2f(-0.140,1.0);
       glVertex2f(-0.145,0.98);

       glVertex2f(-0.160,1.0);
       glVertex2f(-0.165,0.98);

       glVertex2f(-0.180,1.0);
       glVertex2f(-0.185,0.98);

       glVertex2f(-0.200,1.0);
       glVertex2f(-0.205,0.98);

       glVertex2f(-0.220,1.0);
       glVertex2f(-0.225,0.98);

       glVertex2f(-0.240,1.0);
       glVertex2f(-0.245,0.98);

       glVertex2f(-0.260,1.0);
       glVertex2f(-0.265,0.98);

       glVertex2f(-0.280,1.0);
       glVertex2f(-0.285,0.98);

       glVertex2f(-0.300,1.0);
       glVertex2f(-0.305,0.98);

       glVertex2f(-0.320,1.0);
       glVertex2f(-0.325,0.98);

       glVertex2f(-0.340,1.0);
       glVertex2f(-0.345,0.98);

       glVertex2f(-0.360,1.0);
       glVertex2f(-0.365,0.98);

       glVertex2f(-0.380,1.0);
       glVertex2f(-0.385,0.98);

       glVertex2f(-0.400,1.0);
       glVertex2f(-0.405,0.98);

       glVertex2f(-0.420,1.0);
       glVertex2f(-0.425,0.98);

       glVertex2f(-0.440,1.0);
       glVertex2f(-0.445,0.98);

       glVertex2f(-0.460,1.0);
       glVertex2f(-0.465,0.98);

       glVertex2f(-0.480,1.0);
       glVertex2f(-0.485,0.98);

       glVertex2f(-0.500,1.0);
       glVertex2f(-0.505,0.98);

       glVertex2f(-0.520,1.0);
       glVertex2f(-0.525,0.98);

       glVertex2f(-0.540,1.0);
       glVertex2f(-0.545,0.98);

       glVertex2f(-0.560,1.0);
       glVertex2f(-0.565,0.98);

       glVertex2f(-0.580,1.0);
       glVertex2f(-0.585,0.98);

       glVertex2f(-0.600,1.0);
       glVertex2f(-0.605,0.98);

       glVertex2f(-0.620,1.0);
       glVertex2f(-0.625,0.98);

       glVertex2f(-0.640,1.0);
       glVertex2f(-0.645,0.98);

       glVertex2f(-0.660,1.0);
       glVertex2f(-0.665,0.98);

       glVertex2f(-0.680,1.0);
       glVertex2f(-0.685,0.98);

       glVertex2f(-0.700,1.0);
       glVertex2f(-0.705,0.98);

       glVertex2f(-0.720,1.0);
       glVertex2f(-0.725,0.98);

       glVertex2f(-0.740,1.0);
       glVertex2f(-0.745,0.98);

       glVertex2f(-0.760,1.0);
       glVertex2f(-0.765,0.98);

       glVertex2f(-0.780,1.0);
       glVertex2f(-0.785,0.98);

       glVertex2f(-0.800,1.0);
       glVertex2f(-0.805,0.98);

       glVertex2f(-0.820,1.0);
       glVertex2f(-0.825,0.98);

       glVertex2f(-0.840,1.0);
       glVertex2f(-0.845,0.98);

       glVertex2f(-0.860,1.0);
       glVertex2f(-0.865,0.98);

       glVertex2f(-0.880,1.0);
       glVertex2f(-0.885,0.98);

       glVertex2f(-0.900,1.0);
       glVertex2f(-0.905,0.98);

       glVertex2f(-0.920,1.0);
       glVertex2f(-0.925,0.98);

       glVertex2f(-0.940,1.0);
       glVertex2f(-0.945,0.98);

       glVertex2f(-0.960,1.0);
       glVertex2f(-0.965,0.98);

       glVertex2f(-0.980,1.0);
       glVertex2f(-0.985,0.98);
    glEnd();
}

void grass()
{
    glLineWidth(2.3);
    glBegin(GL_LINES);
        glColor3f(0.0f, 0.4f, 0.0f);
        glVertex2f(1.0f, 0.301f);
        glVertex2f(-1.0f, 0.301f);
    glEnd();

    glBegin(GL_TRIANGLES);
        glColor3f(0.0f, 0.35f, 0.0f);
        glVertex2f(-1.0f, 0.3f);
        glVertex2f(-0.95f, 0.33f);
        glVertex2f(-0.9f, 0.3f);

        glVertex2f(-0.9f, 0.3f);
        glVertex2f(-0.85f, 0.33f);
        glVertex2f(-0.8f, 0.3f);

        glVertex2f(-0.8f, 0.3f);
        glVertex2f(-0.75f, 0.33f);
        glVertex2f(-0.7f, 0.3f);

        glVertex2f(-0.7f, 0.3f);
        glVertex2f(-0.65f, 0.33f);
        glVertex2f(-0.6f, 0.3f);

        glVertex2f(-0.6f, 0.3f);
        glVertex2f(-0.55f, 0.33f);
        glVertex2f(-0.5f, 0.3f);

        glVertex2f(-0.5f, 0.3f);
        glVertex2f(-0.45f, 0.33f);
        glVertex2f(-0.4f, 0.3f);

        glVertex2f(-0.4f, 0.3f);
        glVertex2f(-0.35f, 0.33f);
        glVertex2f(-0.3f, 0.3f);

        glVertex2f(-0.3f, 0.3f);
        glVertex2f(-0.25f, 0.33f);
        glVertex2f(-0.2f, 0.3f);

        glVertex2f(-0.2f, 0.3f);
        glVertex2f(-0.15f, 0.33f);
        glVertex2f(-0.1f, 0.3f);

        glVertex2f(-0.1f, 0.3f);
        glVertex2f(-0.05f, 0.33f);
        glVertex2f(0.0f, 0.3f);

        glVertex2f(0.0f, 0.3f);
        glVertex2f(0.05f, 0.33f);
        glVertex2f(0.1f, 0.3f);

        glVertex2f(0.1f, 0.3f);
        glVertex2f(0.15f, 0.33f);
        glVertex2f(0.2f, 0.3f);

        glVertex2f(0.2f, 0.3f);
        glVertex2f(0.25f, 0.33f);
        glVertex2f(0.3f, 0.3f);

        glVertex2f(0.3f, 0.3f);
        glVertex2f(0.35f, 0.33f);
        glVertex2f(0.4f, 0.3f);

        glVertex2f(0.4f, 0.3f);
        glVertex2f(0.45f, 0.33f);
        glVertex2f(0.5f, 0.3f);

        glVertex2f(0.5f, 0.3f);
        glVertex2f(0.55f, 0.33f);
        glVertex2f(0.6f, 0.3f);

        glVertex2f(0.6f, 0.3f);
        glVertex2f(0.65f, 0.33f);
        glVertex2f(0.7f, 0.3f);

        glVertex2f(0.7f, 0.3f);
        glVertex2f(0.75f, 0.33f);
        glVertex2f(0.8f, 0.3f);

        glVertex2f(0.8f, 0.3f);
        glVertex2f(0.85f, 0.33f);
        glVertex2f(0.9f, 0.3f);

        glVertex2f(0.9f, 0.3f);
        glVertex2f(0.95f, 0.33f);
        glVertex2f(1.0f, 0.3f);
    glEnd();
}

void grass2()
{
    glBegin(GL_POLYGON);
       glColor3f(0.05f, 1.0f, 0.05f);
       glVertex2f(1.0f, 0.2967f);
       glVertex2f(-1.0f, 0.2967f);
       glColor3f(0.0f, 0.08f, 0.0f);
       glVertex2f(-1.0f, -1.0f);
       glVertex2f(1.0f, -1.0f);
    glEnd();
}

void river()
{
   glBegin(GL_POLYGON);
       glColor3f(0.65f, 0.92f, 0.98f);
       glVertex2f(1.0f, 0.296f);
       glVertex2f(0.34f, 0.296f);
       glVertex2f(0.26f, 0.17f);
       glVertex2f(0.2f,  0.0f);
       glVertex2f(0.16f, -0.16f);
       glVertex2f(0.16f, -0.24f);
       glVertex2f(0.22f, -0.42f);
       glVertex2f(0.34f, -0.58f);
       glVertex2f(0.51f, -0.73f);
       glVertex2f(0.7f, -0.79f);
       glVertex2f(1.0f, -0.8f);
    glEnd();
}

void tress()
{
    glBegin(GL_TRIANGLES);
        glColor3f(0.03f, 0.62f, 0.376f);
        glVertex2f(-0.905f, 0.00f);
        glVertex2f(-0.755f, 0.00f);
        glVertex2f(-0.83f, 0.4f);
    glEnd();

    glLineWidth(2.3f);
    glBegin(GL_LINES);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(-0.83f, 0.32f);
        glVertex2f(-0.83f, -0.04f);

        glVertex2f(-0.83f, 0.04f);
        glVertex2f(-0.87f, 0.1f);

        glVertex2f(-0.83f, 0.16f);
        glVertex2f(-0.858f, 0.22f);

        glVertex2f(-0.83f, 0.09f);
        glVertex2f(-0.792f, 0.15f);

        glVertex2f(-0.83f, 0.2f);
        glVertex2f(-0.81f, 0.26f);
    glEnd();

    glBegin(GL_TRIANGLES);
        glColor3f(0.03f, 0.62f, 0.376f);
        glVertex2f(-0.215f, 0.1f);
        glVertex2f(-0.365f, 0.1f);
        glVertex2f(-0.29f, 0.45f);
    glEnd();

    glLineWidth(2.3f);
    glBegin(GL_LINES);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(-0.29f, 0.048f);
        glVertex2f(-0.29f, 0.38f);

        glVertex2f(-0.29f, 0.15f);
        glVertex2f(-0.33f, 0.21f);

        glVertex2f(-0.29f, 0.24f);
        glVertex2f(-0.313f, 0.3f);

        glVertex2f(-0.29f, 0.2f);
        glVertex2f(-0.26f, 0.26f);

        glVertex2f(-0.29f, 0.29f);
        glVertex2f(-0.274f, 0.34f);

        glVertex2f(-0.29f, 0.12f);
        glVertex2f(-0.245f, 0.18f);
    glEnd();
}

void ghost_house()
{
    //ground floor
    glBegin(GL_POLYGON);
        glColor3f(0.25f, 0.0f, 0.29f);
        glVertex2f(-0.86f, 0.02f);
        glVertex2f(-0.8f, 0.2f);
        glVertex2f(-0.36f, 0.2f);
        glVertex2f(-0.3f, 0.02f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.19f, 0.67f);
        glVertex2f(-0.81f, 0.02f);
        glVertex2f(-0.78f, -0.17f);
        glVertex2f(-0.382f, -0.17f);
        glVertex2f(-0.35f, 0.02f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.25f, 0.0f, 0.29f);
        glVertex2f(-0.78f, -0.17f);
        glVertex2f(-0.382f, -0.17f);
        glVertex2f(-0.378f, -0.2f);
        glVertex2f(-0.784f, -0.2f);
    glEnd();

    //top floor
    glBegin(GL_POLYGON);
        glColor3f(0.2f, 0.0f, 0.2f);
        glVertex2f(-0.72f, 0.2f);
        glVertex2f(-0.723f, 0.25f);
        glVertex2f(-0.437f, 0.25f);
        glVertex2f(-0.44f, 0.2f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.25f, 0.0f, 0.29f);
        glVertex2f(-0.7f, 0.32f);
        glVertex2f(-0.67f, 0.4f);
        glVertex2f(-0.49f, 0.4f);
        glVertex2f(-0.46f, 0.32f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.7f, 0.2f, 0.7f);
        glVertex2f(-0.68f, 0.32f);
        glVertex2f(-0.67f, 0.25f);
        glVertex2f(-0.49f, 0.25f);
        glVertex2f(-0.48f, 0.32f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.7f, 0.2f, 0.7f);
        glVertex2f(-0.62f, 0.4f);
        glVertex2f(-0.62f, 0.46f);
        glVertex2f(-0.54f, 0.46f);
        glVertex2f(-0.54f, 0.4f);
    glEnd();

    glBegin(GL_TRIANGLES);
        glColor3f(0.2f, 0.0f, 0.2f);
        glVertex2f(-0.58f, 0.52f);
        glVertex2f(-0.635f, 0.46f);
        glVertex2f(-0.525f, 0.46f);
    glEnd();

    //side-tomb
    glBegin(GL_POLYGON);
        glColor3f(0.7f, 0.2f, 0.7f);
        glVertex2f(-0.73f, 0.2f);
        glVertex2f(-0.73f, 0.36f);
        glVertex2f(-0.79f, 0.36f);
        glVertex2f(-0.79f, 0.2f);
    glEnd();

    glBegin(GL_TRIANGLES);
        glColor3f(0.2f, 0.0f, 0.2f);
        glVertex2f(-0.76f, 0.44f);
        glVertex2f(-0.71f, 0.36f);
        glVertex2f(-0.81f, 0.36f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.6f, 0.0f);
        glVertex2f(-0.775f, 0.31f);
        glVertex2f(-0.76f, 0.318f);
        glVertex2f(-0.745f, 0.31f);
        glColor3f(1.0f, 1.0f, 0.0f);
        glVertex2f(-0.745f, 0.25f);
        glVertex2f(-0.775f, 0.25f);
    glEnd();

    glLineWidth(1.0f);
    glBegin(GL_LINES);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2f(-0.76f, 0.318f);
        glVertex2f(-0.76f, 0.249f);

        glVertex2f(-0.745f, 0.282f);
        glVertex2f(-0.775f, 0.282f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.7f, 0.2f, 0.7f);
        glVertex2f(-0.43f, 0.2f);
        glVertex2f(-0.43f, 0.405f);
        glVertex2f(-0.37f, 0.405f);
        glVertex2f(-0.37f, 0.2f);
    glEnd();

    glBegin(GL_TRIANGLES);
        glColor3f(0.2f, 0.0f, 0.2f);
        glVertex2f(-0.4f, 0.48f);
        glVertex2f(-0.45f, 0.405f);
        glVertex2f(-0.35f, 0.405f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.6f, 0.0f);
        glVertex2f(-0.415f, 0.34f);
        glVertex2f(-0.4f, 0.35f);
        glVertex2f(-0.385f, 0.34f);
        glColor3f(1.0f, 1.0f, 0.0f);
        glVertex2f(-0.385f, 0.27f);
        glVertex2f(-0.415f, 0.27f);
    glEnd();

    glLineWidth(1.0f);
    glBegin(GL_LINES);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2f(-0.4f, 0.35f);
        glVertex2f(-0.4f, 0.27f);

        glVertex2f(-0.385f, 0.307f);
        glVertex2f(-0.415f, 0.307f);
    glEnd();

    //doors & windows
    glBegin(GL_POLYGON);
        glColor3f(1.0f, 1.0f, 0.0f);
        glVertex2f(-0.592f, 0.443f);
        glVertex2f(-0.592f, 0.415f);
        glVertex2f(-0.568f, 0.415f);
        glVertex2f(-0.568f, 0.443f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(1.0f, 1.0f, 0.0f);
        glVertex2f(-0.592f, 0.267f);
        glVertex2f(-0.592f, 0.303f);
        glVertex2f(-0.568f, 0.303f);
        glVertex2f(-0.568f, 0.267f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(1.0f, 1.0f, 0.0f);
        glVertex2f(-0.652f, 0.267f);
        glVertex2f(-0.652f, 0.303f);
        glVertex2f(-0.628f, 0.303f);
        glVertex2f(-0.628f, 0.267f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(1.0f, 1.0f, 0.0f);
        glVertex2f(-0.532f, 0.267f);
        glVertex2f(-0.532f, 0.303f);
        glVertex2f(-0.508f, 0.303f);
        glVertex2f(-0.508f, 0.267f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.6f, 0.0f);
        glVertex2f(-0.54f, -0.015f);
        glVertex2f(-0.62f, -0.015f);
        glColor3f(1.0f, 1.0f, 0.0f);
        glVertex2f(-0.62f, -0.17f);
        glVertex2f(-0.54f, -0.17f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.6f, 0.0f);
        glVertex2f(-0.414f, -0.03f);
        glVertex2f(-0.47f, -0.03f);
        glColor3f(1.0f, 1.0f, 0.0f);
        glVertex2f(-0.47f, -0.105f);
        glVertex2f(-0.414f, -0.105f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.6f, 0.0f);
        glVertex2f(-0.7f, -0.03f);
        glVertex2f(-0.756f, -0.03f);
        glColor3f(1.0f, 1.0f, 0.0f);
        glVertex2f(-0.756f, -0.105f);
        glVertex2f(-0.7f, -0.105f);
    glEnd();

    glLineWidth(1.0f);
    glBegin(GL_LINES);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2f(-0.7f, -0.0675f);
        glVertex2f(-0.756, -0.0675f);

        glVertex2f(-0.728f, -0.105f);
        glVertex2f(-0.728f, -0.03f);
    glEnd();

    glBegin(GL_LINES);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2f(-0.47f, -0.0675f);
        glVertex2f(-0.414f, -0.0675f);

        glVertex2f(-0.442f, -0.105f);
        glVertex2f(-0.442f, -0.03f);
    glEnd();

    glLineWidth(1.5f);
    glBegin(GL_LINES);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2f(-0.723f, 0.25f);
        glVertex2f(-0.437f, 0.25f);

        glVertex2f(-0.718f, 0.25f);
        glVertex2f(-0.718f, 0.28f);

        glVertex2f(-0.705f, 0.25f);
        glVertex2f(-0.705f, 0.28f);

        glVertex2f(-0.692f, 0.25f);
        glVertex2f(-0.692f, 0.28f);

        glVertex2f(-0.679f, 0.25f);
        glVertex2f(-0.679f, 0.28f);

        glVertex2f(-0.666f, 0.25f);
        glVertex2f(-0.666f, 0.28f);

        glVertex2f(-0.653f, 0.25f);
        glVertex2f(-0.653f, 0.28f);

        glVertex2f(-0.64f, 0.25f);
        glVertex2f(-0.64f, 0.28f);

        glVertex2f(-0.627f, 0.25f);
        glVertex2f(-0.627f, 0.28f);

        glVertex2f(-0.614f, 0.25f);
        glVertex2f(-0.614f, 0.28f);

        glVertex2f(-0.601f, 0.25f);
        glVertex2f(-0.601f, 0.28f);

        glVertex2f(-0.588f, 0.25f);
        glVertex2f(-0.588f, 0.28f);

        glVertex2f(-0.575f, 0.25f);
        glVertex2f(-0.575f, 0.28f);

        glVertex2f(-0.562f, 0.25f);
        glVertex2f(-0.562f, 0.28f);

        glVertex2f(-0.548f, 0.25f);
        glVertex2f(-0.548f, 0.28f);

        glVertex2f(-0.534f, 0.25f);
        glVertex2f(-0.534f, 0.28f);

        glVertex2f(-0.52f, 0.25f);
        glVertex2f(-0.52f, 0.28f);

        glVertex2f(-0.507f, 0.25f);
        glVertex2f(-0.507f, 0.28f);

        glVertex2f(-0.494f, 0.25f);
        glVertex2f(-0.494f, 0.28f);

        glVertex2f(-0.481f, 0.25f);
        glVertex2f(-0.481f, 0.28f);

        glVertex2f(-0.468f, 0.25f);
        glVertex2f(-0.468f, 0.28f);

        glVertex2f(-0.455f, 0.25f);
        glVertex2f(-0.455f, 0.28f);

        glVertex2f(-0.442f, 0.25f);
        glVertex2f(-0.442f, 0.28f);
    glEnd();
}

void ghost_ship()
{
    glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.65f, 0.0f);
        glVertex2f(0.34f, -0.26f);
        glVertex2f(0.94f, -0.26f);
        glColor3f(0.59f, 0.22f, 0.13f);
        glVertex2f(0.88f, -0.46f);
        glVertex2f(0.405f, -0.46f);
    glEnd();

     glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.7f, 0.0f);
        glVertex2f(0.92f, -0.26f);
        glVertex2f(0.72f, -0.26f);
        glVertex2f(0.72f, -0.14f);
        glVertex2f(0.92f, -0.14f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.7f, 0.0f);
        glVertex2f(0.39f, -0.26f);
        glVertex2f(0.52f, -0.26f);
        glVertex2f(0.52f, -0.19f);
        glVertex2f(0.39f, -0.19f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2f(0.41f, -0.245f);
        glVertex2f(0.44f, -0.245f);
        glVertex2f(0.44f, -0.21f);
        glVertex2f(0.41f, -0.21f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2f(0.47f, -0.245f);
        glVertex2f(0.5f, -0.245f);
        glVertex2f(0.5f, -0.21f);
        glVertex2f(0.47f, -0.21f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2f(0.74f, -0.245f);
        glVertex2f(0.77f, -0.245f);
        glVertex2f(0.77f, -0.215f);
        glVertex2f(0.74f, -0.215f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2f(0.805f, -0.245f);
        glVertex2f(0.835f, -0.245f);
        glVertex2f(0.835f, -0.215f);
        glVertex2f(0.805f, -0.215f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2f(0.87f, -0.245f);
        glVertex2f(0.9f, -0.245f);
        glVertex2f(0.9f, -0.215f);
        glVertex2f(0.87f, -0.215f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2f(0.74f, -0.155f);
        glVertex2f(0.77f, -0.155f);
        glVertex2f(0.77f, -0.185f);
        glVertex2f(0.74f, -0.185f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2f(0.805f, -0.155f);
        glVertex2f(0.835f, -0.155f);
        glVertex2f(0.835f, -0.185f);
        glVertex2f(0.805f, -0.185f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2f(0.87f, -0.155f);
        glVertex2f(0.9f, -0.155f);
        glVertex2f(0.9f, -0.185f);
        glVertex2f(0.87f, -0.185f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
        glColor3f(0.4f, 0.22f, 0.13f);
        glVertex2f(0.34f, -0.26f);
        glVertex2f(0.94f, -0.26f);
        glVertex2f(0.52f, -0.19f);
        glVertex2f(0.39f, -0.19f);
        glVertex2f(0.72f, -0.14f);
        glVertex2f(0.92f, -0.14f);
        glVertex2f(0.72f, -0.203f);
        glVertex2f(0.92f, -0.203f);
        glVertex2f(0.72f, -0.196f);
        glVertex2f(0.92f, -0.196f);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
        glColor3f(0.7f, 0.7f, 0.7f);
        glVertex2f(0.58f, -0.31f);
        for(int i = 0; i <= 400 ; i++)
        {
            glVertex2f( 0.58 + (0.012*cos(i*((2*3.1416)/400))),
                        -0.31 + (0.012*sin(i*((2*3.1416)/400)))
                       );
        }
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
        glColor3f(0.7f, 0.7f, 0.7f);
        glVertex2f(0.68f, -0.31f);
        for(int i = 0; i <= 400 ; i++)
        {
            glVertex2f( 0.68 + (0.012*cos(i*((2*3.1416)/400))),
                        -0.31 + (0.012*sin(i*((2*3.1416)/400)))
                       );
        }
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
        glColor3f(0.7f, 0.7f, 0.7f);
        glVertex2f(0.78f, -0.31f);
        for(int i = 0; i <= 400 ; i++)
        {
            glVertex2f( 0.78 + (0.012*cos(i*((2*3.1416)/400))),
                        -0.31 + (0.012*sin(i*((2*3.1416)/400)))
                       );
        }
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
        glColor3f(0.7f, 0.7f, 0.7f);
        glVertex2f(0.432f, -0.294f);
        for(int i = 0; i <= 400 ; i++)
        {
            glVertex2f( 0.43 + (0.008*cos(i*((2*3.1416)/400))),
                        -0.29 + (0.008*sin(i*((2*3.1416)/400)))
                       );
        }
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2f(0.432f, -0.29f);
        glVertex2f(0.432f, -0.41f);

        glVertex2f(0.432f, -0.41f);
        glVertex2f(0.414f, -0.375f);

        glVertex2f(0.432f, -0.41f);
        glVertex2f(0.45f, -0.375f);

        glVertex2f(0.419f, -0.34f);
        glVertex2f(0.444f, -0.34f);

        glVertex2f(0.419f, -0.33f);
        glVertex2f(0.444f, -0.33f);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2f(0.414f, -0.375f);
        for(int i = 0; i <= 100 ; i++)
        {
            glVertex2f( 0.414 + (0.005*cos(i*((2*3.1416)/100))),
                        -0.375 + (0.005*sin(i*((2*3.1416)/100)))
                       );
        }
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2f(0.45f, -0.375f);
        for(int i = 0; i <= 100 ; i++)
        {
            glVertex2f( 0.45 + (0.005*cos(i*((2*3.1416)/100))),
                        -0.375 + (0.005*sin(i*((2*3.1416)/100)))
                       );
        }
    glEnd();

    glLineWidth(2.5);
    glBegin(GL_LINES);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(0.675f, -0.43f);
        glVertex2f(0.725f, -0.46f);

        glVertex2f(0.725f, -0.43f);
        glVertex2f(0.675f, -0.46f);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(0.7f, -0.4f);
        for(int i = 0; i <= 200 ; i++)
        {
            glVertex2f( 0.7 + (0.023*cos(i*((2*3.1416)/200))),
                        -0.4 + (0.023*sin(i*((2*3.1416)/200)))
                       );
        }
    glEnd();

    glPointSize(3);
    glBegin(GL_POINTS);
       glColor3f(1.0f, 0.0f, 0.0f);
       glVertex2f(0.69f, -0.4f);
       glVertex2f(0.71f, -0.4f);
    glEnd();
}

void ship_flag()
{
    glBegin(GL_POLYGON);
        glColor3f(0.4f, 0.22f, 0.13f);
        glVertex2f(0.37f, 0.022f);
        glVertex2f(0.37f, 0.01f);
        glVertex2f(0.56f, 0.01f);
        glVertex2f(0.56f, 0.022f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.4f, 0.22f, 0.13f);
        glVertex2f(0.46f, -0.19f);
        glVertex2f(0.46f, 0.14f);
        glVertex2f(0.47f, 0.14f);
        glVertex2f(0.47f, -0.19f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.4f, 0.22f, 0.13f);
        glVertex2f(0.681f, -0.26f);
        glVertex2f(0.681f, 0.18f);
        glVertex2f(0.67f, 0.18f);
        glVertex2f(0.67f, -0.26f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.4f, 0.22f, 0.13f);
        glVertex2f(0.58f, 0.098f);
        glVertex2f(0.58f, 0.086f);
        glVertex2f(0.77f, 0.086f);
        glVertex2f(0.77f, 0.098f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.4f, 0.22f, 0.13f);
        glVertex2f(0.6f, -0.08f);
        glVertex2f(0.61f, -0.092f);
        glVertex2f(0.755f, -0.092f);
        glVertex2f(0.755f, -0.08f);
    glEnd();

    glBegin(GL_TRIANGLES);
        glColor3f(0.91f, 0.86f, 0.68f);
        glVertex2f(0.385f, 0.012f);
        glVertex2f(0.385f, -0.1f);
        glVertex2f(0.41f, 0.012f);

        glVertex2f(0.48f, 0.012f);
        glVertex2f(0.5f, -0.07f);
        glVertex2f(0.52f, 0.012f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.91f, 0.86f, 0.68f);
        glVertex2f(0.418f, 0.012f);
        glVertex2f(0.426f, -0.02f);
        glVertex2f(0.436f, 0.00f);
        glVertex2f(0.446f, -0.04f);
        glVertex2f(0.452f, 0.012f);
    glEnd();

    glBegin(GL_TRIANGLES);
        glColor3f(0.91f, 0.86f, 0.68f);
        glVertex2f(0.6f, 0.088f);
        glVertex2f(0.62f, -0.05f);
        glVertex2f(0.65f, 0.088f);

        glVertex2f(0.672f, 0.088f);
        glVertex2f(0.687f, 0.00f);
        glVertex2f(0.71f, 0.088f);

        glVertex2f(0.717f, 0.088f);
        glVertex2f(0.764f, -0.06f);
        glVertex2f(0.761f, 0.088f);
    glEnd();
}

void grave1()
{
    glBegin(GL_POLYGON);
       glColor3f(0.1f, 0.1f, 0.1f);
       glVertex2f(0.66f, 0.55f);
       glVertex2f(0.64f, 0.51f);
       glVertex2f(0.68f, 0.3f);
       glVertex2f(0.72f, 0.3f);
       glVertex2f(0.76f, 0.51f);
       glVertex2f(0.74f, 0.55f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(0.665f, 0.475f);
        glVertex2f(0.665f, 0.46f);
        glVertex2f(0.735f, 0.46f);
        glVertex2f(0.735f, 0.475f);
    glEnd();

     glBegin(GL_POLYGON);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(0.695f, 0.51f);
        glVertex2f(0.695f, 0.38f);
        glVertex2f(0.705f, 0.38f);
        glVertex2f(0.705f, 0.51f);
    glEnd();
}

void grave2()
{
    glBegin(GL_POLYGON);
       glColor3f(0.1f, 0.1f, 0.1f);
       glVertex2f(0.49f, 0.51f);
       glVertex2f(0.47f, 0.47f);
       glVertex2f(0.505f, 0.3f);
       glVertex2f(0.535f, 0.3f);
       glVertex2f(0.57f, 0.47f);
       glVertex2f(0.55f, 0.51f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(0.49f, 0.45f);
        glVertex2f(0.49f, 0.44f);
        glVertex2f(0.55f, 0.44f);
        glVertex2f(0.55f, 0.45f);
    glEnd();

     glBegin(GL_POLYGON);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(0.515f, 0.48f);
        glVertex2f(0.515f, 0.37f);
        glVertex2f(0.525f, 0.37f);
        glVertex2f(0.525f, 0.48f);
    glEnd();
}

void grave3()
{
    glBegin(GL_POLYGON);
        glColor3f(0.1f, 0.1f, 0.1f);
        glVertex2f(0.36f, 0.44f);
        glVertex2f(0.36f, 0.42f);
        glVertex2f(0.43f, 0.43f);
        glVertex2f(0.43f, 0.45f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.1f, 0.1f, 0.1f);
        glVertex2f(0.388f, 0.475f);
        glVertex2f(0.391f, 0.3f);
        glVertex2f(0.399f, 0.3f);
        glVertex2f(0.402f, 0.475f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.1f, 0.1f, 0.1f);
        glVertex2f(0.585f, 0.38f);
        glVertex2f(0.585f, 0.364f);
        glVertex2f(0.63f, 0.364f);
        glVertex2f(0.63f, 0.38f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.1f, 0.1f, 0.1f);
        glVertex2f(0.602f, 0.4f);
        glVertex2f(0.602f, 0.3f);
        glVertex2f(0.613f, 0.3f);
        glVertex2f(0.613f, 0.4f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.1f, 0.1f, 0.1f);
        glVertex2f(0.78f, 0.44f);
        glVertex2f(0.78f, 0.422f);
        glVertex2f(0.86f, 0.422f);
        glVertex2f(0.86f, 0.44f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.1f, 0.1f, 0.1f);
        glVertex2f(0.812f, 0.475f);
        glVertex2f(0.8164f, 0.3f);
        glVertex2f(0.8236f, 0.3f);
        glVertex2f(0.828f, 0.475f);
    glEnd();
}

void grave4()
{
    glBegin(GL_POLYGON);
       glColor3f(0.07f, 0.07f, 0.07f);
       glVertex2f(0.9f, 0.3f);
       glVertex2f(0.9f, 0.35f);
       glVertex2f(0.917f, 0.375f);
       glVertex2f(0.933f, 0.375f);
       glVertex2f(0.95f, 0.35f);
       glVertex2f(0.95f, 0.3f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.07f, 0.07f, 0.07f);
        glVertex2f(0.918f, 0.375f);
        glVertex2f(0.918f, 0.45f);
        glVertex2f(0.932f, 0.45f);
        glVertex2f(0.932f, 0.375f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.07f, 0.07f, 0.07f);
        glVertex2f(0.904f, 0.405f);
        glVertex2f(0.904f, 0.417f);
        glVertex2f(0.946f, 0.417f);
        glVertex2f(0.946f, 0.405f);
    glEnd();
}

void pumpkin1()
{
    glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0f, 0.46f, 0.094f);
        glVertex2f(-0.63f, -0.22f);
        for(int i = 0; i <= 200 ; i++)
        {
            glVertex2f( -0.63 + (0.05*cos(i*((2*3.1416)/200))),
                        -0.22 + (0.05*sin(i*((2*3.1416)/200)))
                      );
        }
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.0f, 0.55f, 0.0f);
        glVertex2f(-0.624f, -0.173f);
        glVertex2f(-0.624f, -0.14f);
        glVertex2f(-0.636f, -0.14f);
        glVertex2f(-0.636f, -0.173f);
    glEnd();

    glBegin(GL_TRIANGLES);
        glColor3f(0.2f, 0.2f, 0.2f);
        glVertex2f(-0.65f, -0.194f);
        glVertex2f(-0.66f, -0.21f);
        glVertex2f(-0.64f, -0.21f);
    glEnd();

    glBegin(GL_TRIANGLES);
        glColor3f(0.2f, 0.2f, 0.2f);
        glVertex2f(-0.61f, -0.194f);
        glVertex2f(-0.6f, -0.21f);
        glVertex2f(-0.62f, -0.21f);
    glEnd();

    glBegin(GL_TRIANGLES);
        glColor3f(0.2f, 0.2f, 0.2f);
        glVertex2f(-0.63f, -0.205f);
        glVertex2f(-0.624f, -0.22f);
        glVertex2f(-0.636f, -0.22f);
    glEnd();

    glLineWidth(1.5f);
    glBegin(GL_LINES);
        glColor3f(0.2f, 0.2f, 0.2f);
        glVertex2f(-0.658f, -0.252f);
        glVertex2f(-0.652f, -0.233f);

        glVertex2f(-0.652f, -0.233f);
        glVertex2f(-0.644f, -0.26f);

        glVertex2f(-0.644f, -0.26f);
        glVertex2f(-0.636f, -0.233f);

        glVertex2f(-0.636f, -0.233f);
        glVertex2f(-0.628f, -0.26f);

        glVertex2f(-0.628f, -0.26f);
        glVertex2f(-0.62f, -0.233f);

        glVertex2f(-0.62f, -0.233f);
        glVertex2f(-0.612f, -0.26f);

        glVertex2f(-0.612f, -0.26f);
        glVertex2f(-0.604f, -0.233f);

        glVertex2f(-0.604f, -0.233f);
        glVertex2f(-0.598f, -0.252f);
    glEnd();
}

void pumpkin2()
{
   glBegin(GL_TRIANGLE_FAN);
            glColor3f(1.0f, 0.46f, 0.094f);
            glVertex2f(-0.0032f,  -0.4574f);
            glVertex2f(0.0186f,  -0.4574f);
            glVertex2f(0.0418f,  -0.4574f);
            glVertex2f(0.0684f,  -0.4424f);
            glVertex2f(0.0866f,  -0.4148f);
            glVertex2f(0.0938f,  -0.3934f);
            glVertex2f(0.1008f,  -0.3618f);
            glVertex2f(0.1008f,  -0.3254f);
            glVertex2f(0.1f,  -0.2836f);
            glVertex2f(0.0938f,  -0.2558f);
            glVertex2f(0.0808f,  -0.2234f);
            glVertex2f(0.0604f,  -0.1998f);
            glVertex2f(0.0454f,  -0.1966f);
            glVertex2f(0.0276f,  -0.1918f);
            glVertex2f(0.0026f,  -0.1872f);
            glVertex2f(-0.0276f,  -0.1918f);
            glVertex2f(-0.0534f,  -0.2022f);
            glVertex2f(-0.0666f,  -0.2266f);
            glVertex2f(-0.0774f,  -0.255f);
            glVertex2f(-0.0822f,  -0.278f);
            glVertex2f(-0.0844f,  -0.3034f);
            glVertex2f(-0.0862f,  -0.3318f);
            glVertex2f(-0.0826f,  -0.3736f);
            glVertex2f(-0.0724f,  -0.4038f);
            glVertex2f(-0.0592f,  -0.4322f);
            glVertex2f(-0.0414f,  -0.452f);
            glVertex2f(-0.0218f,  -0.4574f);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
            glColor3ub(10,199,48);
           glVertex2f(-0.0066f,  -0.1782f);
            glVertex2f(-0.008f,  -0.1878f);
            glVertex2f(-0.0116f,  -0.2044f);
            glVertex2f(-0.0146f,  -0.2068f);
            glVertex2f(-0.008f,  -0.2076f);
            glVertex2f(-0.0018f,  -0.2052f);
            glVertex2f(0.0026f,  -0.2090f);
            glVertex2f(0.0076f,  -0.2114f);
            glVertex2f(0.0156f,  -0.2114f);
            glVertex2f(0.0258f,  -0.206f);
            glVertex2f(0.0186f,  -0.1996f);
            glVertex2f(0.0186f,  -0.1766f);
            glVertex2f(0.0134f,  -0.153f);
            glVertex2f(0.0098f,  -0.1482f);
            glVertex2f(-0.0008f,  -0.1546f);
            glVertex2f(-0.008f,  -0.157f);
            glVertex2f(-0.0094f,  -0.1624f);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
            glColor3ub(0,0,0);
            glVertex2f(-0.0192f,  -0.2952f);
            glVertex2f(-0.0254f,  -0.2234f);
            glVertex2f(-0.0516f,  -0.2842f);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
            glColor3ub(0,0,0);
             glVertex2f(0.0232f,  -0.2890f);
            glVertex2f(0.0356f,  -0.2210f);
            glVertex2f(0.0552f,  -0.2858f);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
            glColor3ub(0,0,0);
             glVertex2f(-0.0098f,  -0.319f);
            glVertex2f(0.0134f,  -0.319f);
            glVertex2f(0.0018f,  -0.2778f);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
            glColor3ub(0,0,0);
            glVertex2f(0.0076f,  -0.3554f);
            glVertex2f(0.024f,  -0.354f);
            glVertex2f(0.0244f,  -0.3698f);
            glVertex2f(0.0328f,  -0.3658f);
            glVertex2f(0.0342f,  -0.3508f);
            glVertex2f(0.0552f,  -0.335f);
            glVertex2f(0.0756f,  -0.3088f);
            glVertex2f(0.0644f,  -0.3532f);
            glVertex2f(0.0396f,  -0.388f);
            glVertex2f(0.0128f,  -0.3966f);
            glVertex2f(-0.0098f,  -0.3848f);
            glVertex2f(-0.0076f,  -0.372f);
            glVertex2f(-0.0222f,  -0.3666f);
            glVertex2f(-0.0266f,  -0.3894f);
            glVertex2f(-0.0454f,  -0.372f);
            glVertex2f(-0.0574f,  -0.3444f);
            glVertex2f(-0.0546f,  -0.3144f);
            glVertex2f(-0.0448f,  -0.3396f);
            glVertex2f(-0.0214f,  -0.3548f);
    glEnd();
}

void witch()
{

///boomstick
    glBegin(GL_TRIANGLES);      //wwitch's hand
        glColor3f(0.22f, 0.8f, 0.22f);
        glVertex2f(-0.067f, 0.55f);
        glVertex2f(-0.068f, 0.52f);
        glVertex2f(-0.16f, 0.46f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.3f, 0.2f, 0.2f);
        glVertex2f(-0.192f, 0.475f);
        glVertex2f(0.23f, 0.32f);
        glVertex2f(0.236f, 0.345f);
        glVertex2f(-0.19f, 0.5f);
    glEnd();

    glBegin(GL_POLYGON);
       glColor3f(0.2f, 0.2f, 0.2f);
       glVertex2f(0.252f, 0.3f);
       glVertex2f(0.227f, 0.3f);
       glVertex2f(0.232f, 0.364f);
       glVertex2f(0.252f, 0.364f);
    glEnd();

    glBegin(GL_POLYGON);
       glColor3f(0.9f, 0.9f, 0.15f);
       glVertex2f(0.252f, 0.3f);
       glVertex2f(0.33f, 0.26f);
       glVertex2f(0.33f, 0.364f);
       glVertex2f(0.252f, 0.364f);
    glEnd();

///witch
    glBegin(GL_POLYGON);
        glColor3f(0.18f, 0.18f, 0.18f);
        glVertex2f(-0.1f, 0.705f);
        glVertex2f(-0.06f, 0.73f);
        glVertex2f(0.0f, 0.73f);
        glVertex2f(0.04f, 0.705f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.18f, 0.18f, 0.18f);
        glVertex2f(-0.06f, 0.73f);
        glVertex2f(-0.03f, 0.91f);
        glVertex2f(0.0f, 0.89f);
        glVertex2f(0.0f, 0.73f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.18f, 0.18f, 0.18f);
        glVertex2f(-0.03f, 0.91f);
        glVertex2f(0.06f, 0.905f);
        glVertex2f(0.0f, 0.89f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.22f, 0.8f, 0.22f);
        glVertex2f(-0.08f, 0.705f);
        glVertex2f(-0.078f, 0.63f);
        glVertex2f(-0.03f, 0.63f);
        glVertex2f(-0.03f, 0.69f);
        glVertex2f(-0.04f, 0.705f);
    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2f(-0.066f, 0.68f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.42f, 0.42f);
        glVertex2f(0.0f, 0.705f);
        glVertex2f(0.03f, 0.61f);
        glVertex2f(-0.03f, 0.61f);
        glVertex2f(-0.03f, 0.67f);
        glVertex2f(-0.04f, 0.705f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.22f, 0.8f, 0.22f);
        glVertex2f(-0.08f, 0.69f);
        glVertex2f(-0.125f, 0.682f);
        glVertex2f(-0.08f, 0.674f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.22f, 0.8f, 0.22f);
        glVertex2f(-0.078f, 0.63f);
        glVertex2f(-0.105f, 0.62f);
        glVertex2f(-0.103f, 0.61f);
        glVertex2f(-0.046f, 0.63f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.22f, 0.8f, 0.22f);
        glVertex2f(-0.046f, 0.63f);
        glVertex2f(-0.046f, 0.585f);
        glVertex2f(-0.03f, 0.585f);
        glVertex2f(-0.03f, 0.63f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.18f, 0.18f, 0.18f);
        glVertex2f(-0.03f, 0.585f);
        glVertex2f(-0.067f, 0.585f);
        glVertex2f(-0.068f, 0.47f);
        glVertex2f(-0.11f, 0.37f);
        glVertex2f(-0.11f, 0.3f);
        glVertex2f(-0.06f, 0.3f);
        glVertex2f(0.01f, 0.4f);
        glVertex2f(0.0f, 0.44f);
        glVertex2f(0.0f, 0.585f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.1f, 0.1f, 0.1f);
        glVertex2f(-0.11f, 0.273f);
        glVertex2f(-0.11f, 0.3f);
        glVertex2f(-0.095f, 0.3f);
        glVertex2f(-0.085f, 0.273f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.1f, 0.1f, 0.1f);
        glVertex2f(-0.075f, 0.273f);
        glVertex2f(-0.075f, 0.3f);
        glVertex2f(-0.06f, 0.3f);
        glVertex2f(-0.05f, 0.273f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.1f, 0.1f, 0.1f);
        glVertex2f(-0.02f, 0.585f);
        glVertex2f(0.25f, 0.565f);
        glVertex2f(0.225f, 0.54f);
        glVertex2f(0.25f, 0.514f);
        glVertex2f(0.225f, 0.488f);
        glVertex2f(0.25f, 0.462f);
        glVertex2f(0.225f, 0.436f);
        glVertex2f(0.25f, 0.42f);
        glVertex2f(0.2f, 0.44f);
        glVertex2f(0.15f, 0.45f);
        glVertex2f(0.1f, 0.44f);
        glVertex2f(0.05f, 0.455f);
        glVertex2f(-0.01f, 0.44f);
    glEnd();
}

void bat1()
{
    glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(-0.699f, 0.5158f);
            glVertex2f(-0.7047f, 0.5126f);
            glVertex2f(-0.7062f, 0.5225f);
            glVertex2f(-0.7062f, 0.5296f);
            glVertex2f(-0.7084f, 0.519f);
            glVertex2f(-0.7071f, 0.5079f);
            glVertex2f(-0.7098f, 0.4964f);
            glVertex2f(-0.714f, 0.4984f);
            glVertex2f(-0.72f, 0.5111f);
            glVertex2f(-0.7273f, 0.5332f);
            glVertex2f(-0.7709f, 0.5502f);
            glVertex2f(-0.7616f, 0.53f);
            glVertex2f(-0.7602f, 0.5178f);
            glVertex2f(-0.7484f, 0.5051f);
            glVertex2f(-0.7438f, 0.4889f);
            glVertex2f(-0.7327f, 0.481f);
            glVertex2f(-0.7251f, 0.4676f);
            glVertex2f(-0.7089f, 0.4668f);
            glVertex2f(-0.7002f, 0.4468f);
            glVertex2f(-0.6902f, 0.468f);
            glVertex2f(-0.674f, 0.468f);
            glVertex2f(-0.6671f, 0.4814f);
            glVertex2f(-0.6547f, 0.4921f);
            glVertex2f(-0.6491f, 0.5095f);
            glVertex2f(-0.6387f, 0.5178f);
            glVertex2f(-0.6373f, 0.5328f);
            glVertex2f(-0.6287f, 0.5506f);
            glVertex2f(-0.6722f, 0.532f);
            glVertex2f(-0.68f, 0.5091f);
            glVertex2f(-0.6849f, 0.4996f);
            glVertex2f(-0.6902f, 0.4957f);
            glVertex2f(-0.692f, 0.5091f);
            glVertex2f(-0.6911f, 0.519f);
            glVertex2f(-0.6927f, 0.5269f);
            glVertex2f(-0.6951f, 0.5115f);
    glEnd();
}

void bat2()
{
    glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(0.801f, 0.5958f);
            glVertex2f(0.7913f, 0.5926f);
            glVertex2f(0.7938f, 0.6025f);
            glVertex2f(0.7938f, 0.6096f);
            glVertex2f(0.7916f, 0.599f);
            glVertex2f(0.7929f, 0.5879f);
            glVertex2f(0.7902f, 0.5764f);
            glVertex2f(0.786f, 0.5784f);
            glVertex2f(0.78f, 0.5911f);
            glVertex2f(0.7727f, 0.6132f);
            glVertex2f(0.7291f, 0.6302f);
            glVertex2f(0.7384f, 0.61f);
            glVertex2f(0.7398f, 0.5978f);
            glVertex2f(0.7516f, 0.5851f);
            glVertex2f(0.7562f, 0.5689f);
            glVertex2f(0.7673f, 0.561f);
            glVertex2f(0.7749f, 0.5476f);
            glVertex2f(0.7911f, 0.5468f);
            glVertex2f(0.7998f, 0.5268f);
            glVertex2f(0.8098f, 0.548f);
            glVertex2f(0.826f, 0.548f);
            glVertex2f(0.8329f, 0.5614f);
            glVertex2f(0.8453f, 0.5721f);
            glVertex2f(0.8509f, 0.5895);
            glVertex2f(0.8613f, 0.5978f);
            glVertex2f(0.8627f, 0.6128f);
            glVertex2f(0.8713f, 0.6306f);
            glVertex2f(0.8278f, 0.612f);
            glVertex2f(0.82f, 0.5891f);
            glVertex2f(0.8151f, 0.5796f);
            glVertex2f(0.8098f, 0.5757f);
            glVertex2f(0.808f,0.5891f);
            glVertex2f(0.8089f, 0.599f);
            glVertex2f(0.8073f, 0.6069f);
            glVertex2f(0.8049f, 0.5915f);
    glEnd();
}

void bat3()
{
     glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(0.5515f, 0.59378f);
            glVertex2f(0.53695f, 0.5889f);
            glVertex2f(0.5407f, 0.60375f);
            glVertex2f(0.5407f, 0.6144f);
            glVertex2f(0.5374f, 0.5985f);
            glVertex2f(0.53935f, 0.58185f);
            glVertex2f(0.5353f, 0.5646f);
            glVertex2f(0.529f, 0.5676f);
            glVertex2f(0.52f, 0.58665f);
            glVertex2f(0.50905f, 0.6198f);
            glVertex2f(0.44365f, 0.6453f);
            glVertex2f(0.4576f, 0.615f);
            glVertex2f(0.4597f, 0.5967f);
            glVertex2f(0.4774f, 0.57765f);
            glVertex2f(0.4843f, 0.55335f);
            glVertex2f(0.50095f, 0.5415f);
            glVertex2f(0.51235f, 0.5214f);
            glVertex2f(0.53665f, 0.4968f);
            glVertex2f(0.5497f, 0.4902f);
            glVertex2f(0.5647f, 0.522f);
            glVertex2f(0.589f, 0.522f);
            glVertex2f(0.59935f, 0.5421f);
            glVertex2f(0.61795f, 0.55815f);
            glVertex2f(0.6263f, 0.58425);
            glVertex2f(0.64195f, 0.5967f);
            glVertex2f(0.64405f, 0.6192f);
            glVertex2f(0.65695f, 0.6459f);
            glVertex2f(0.5917f, 0.618f);
            glVertex2f(0.58f, 0.58365f);
            glVertex2f(0.57265f, 0.5694f);
            glVertex2f(0.5647f, 0.56355f);
            glVertex2f(0.562f, 0.58365f);
            glVertex2f(0.56335f, 0.59865f);
            glVertex2f(0.56095f, 0.61035f);
            glVertex2f(0.55735f, 0.58725f);
    glEnd();
}

void bat4()
{
     glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(0.701f, 0.6958f);
            glVertex2f(0.6913f, 0.6926f);
            glVertex2f(0.6938f, 0.7025f);
            glVertex2f(0.6938f, 0.7096f);
            glVertex2f(0.6916f, 0.699f);
            glVertex2f(0.6929f, 0.6879f);
            glVertex2f(0.6902f, 0.6764f);
            glVertex2f(0.686f, 0.6784f);
            glVertex2f(0.68f, 0.6911f);
            glVertex2f(0.6727f, 0.7132f);
            glVertex2f(0.6291f, 0.7302f);
            glVertex2f(0.6384f, 0.71f);
            glVertex2f(0.6398f, 0.6978f);
            glVertex2f(0.6516f, 0.6851f);
            glVertex2f(0.6562f, 0.6689f);
            glVertex2f(0.6673f, 0.661f);
            glVertex2f(0.6749f, 0.6476f);
            glVertex2f(0.6911f, 0.6468f);
            glVertex2f(0.6998f, 0.6268f);
            glVertex2f(0.7098f, 0.648f);
            glVertex2f(0.726f, 0.648f);
            glVertex2f(0.7329f, 0.6614f);
            glVertex2f(0.7453f, 0.6721f);
            glVertex2f(0.7509f, 0.6895);
            glVertex2f(0.7613f, 0.6978f);
            glVertex2f(0.7627f, 0.7128f);
            glVertex2f(0.7713f, 0.7306f);
            glVertex2f(0.7278f, 0.712f);
            glVertex2f(0.72f, 0.6891f);
            glVertex2f(0.7151f, 0.6796f);
            glVertex2f(0.7098f, 0.6757f);
            glVertex2f(0.708f,0.6891f);
            glVertex2f(0.7089f, 0.6991f);
            glVertex2f(0.7073f, 0.7069f);
            glVertex2f(0.7049f, 0.6915f);
    glEnd();
}

void bat5()
{
    glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(-0.8193f, 0.48606f);
            glVertex2f(-0.8233f, 0.48382f);
            glVertex2f(-0.82434f, 0.49075f);
            glVertex2f(-0.82434f, 0.49572f);
            glVertex2f(-0.82588f, 0.4883f);
            glVertex2f(-0.82497f, 0.48053f);
            glVertex2f(-0.82686f, 0.47248f);
            glVertex2f(-0.8298f, 0.47388f);
            glVertex2f(-0.834f, 0.48277f);
            glVertex2f(-0.83911f, 0.49824f);
            glVertex2f(-0.86963f, 0.51014f);
            glVertex2f(-0.86312f, 0.496f);
            glVertex2f(-0.86214f, 0.48746f);
            glVertex2f(-0.85388f, 0.47857f);
            glVertex2f(-0.85066f, 0.46723f);
            glVertex2f(-0.84289f, 0.4617f);
            glVertex2f(-0.83757f, 0.45232f);
            glVertex2f(-0.82623f, 0.45176f);
            glVertex2f(-0.82014f, 0.43776f);
            glVertex2f(-0.81314f, 0.4526f);
            glVertex2f(-0.8018f, 0.4526f);
            glVertex2f(-0.79697f, 0.46198f);
            glVertex2f(-0.78829f, 0.46947f);
            glVertex2f(-0.78437f, 0.48165f);
            glVertex2f(-0.77709f, 0.48746f);
            glVertex2f(-0.77611f, 0.49796f);
            glVertex2f(-0.77009f, 0.51042f);
            glVertex2f(-0.80054f, 0.4974f);
            glVertex2f(-0.806f, 0.48137f);
            glVertex2f(-0.80943f, 0.47472f);
            glVertex2f(-0.81314f, 0.47199f);
            glVertex2f(-0.8144f, 0.48137f);
            glVertex2f(-0.81377f, 0.4883f);
            glVertex2f(-0.81489f, 0.49383f);
            glVertex2f(-0.81657f, 0.48305f);
        glEnd();
}

void bat6()
{
    glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(0.6893f, 0.53606f);
            glVertex2f(0.6933f, 0.53382f);
            glVertex2f(0.69434f, 0.54075f);
            glVertex2f(0.69434f, 0.54572f);
            glVertex2f(0.69588f, 0.5383f);
            glVertex2f(0.69497f, 0.53053f);
            glVertex2f(0.69686f, 0.52248f);
            glVertex2f(0.6998f, 0.52388f);
            glVertex2f(0.704f, 0.53277f);
            glVertex2f(0.70911f, 0.54824f);
            glVertex2f(0.73963f, 0.56014f);
            glVertex2f(0.73312f, 0.546f);
            glVertex2f(0.73214f, 0.53746f);
            glVertex2f(0.72388f, 0.52857f);
            glVertex2f(0.72066f, 0.51723f);
            glVertex2f(0.71289f, 0.5117f);
            glVertex2f(0.70757f, 0.50232f);
            glVertex2f(0.69623f, 0.50176f);
            glVertex2f(0.69014f, 0.48776f);
            glVertex2f(0.68314f, 0.5026f);
            glVertex2f(0.6718f, 0.5026f);
            glVertex2f(0.66697f, 0.51198f);
            glVertex2f(0.65829f, 0.51947f);
            glVertex2f(0.65437f, 0.53165f);
            glVertex2f(0.64709f, 0.53746f);
            glVertex2f(0.64611f, 0.54796f);
            glVertex2f(0.64009f, 0.56042f);
            glVertex2f(0.67054f, 0.5474f);
            glVertex2f(0.676f, 0.53137f);
            glVertex2f(0.67943f, 0.52472f);
            glVertex2f(0.68314f, 0.522f);
            glVertex2f(0.6844f, 0.53137f);
            glVertex2f(0.68377f, 0.5383f);
            glVertex2f(0.68489f, 0.54383f);
            glVertex2f(0.68657f, 0.53305f);
        glEnd();
}

void bat7()
{
     glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(0.8809f, 0.70101f);
            glVertex2f(0.87217f, 0.69797f);
            glVertex2f(0.87442f, 0.707375f);
            glVertex2f(0.87442f, 0.71412f);
            glVertex2f(0.87244f, 0.70405f);
            glVertex2f(0.87361f, 0.693505f);
            glVertex2f(0.87118f, 0.68258f);
            glVertex2f(0.8674f, 0.68448f);
            glVertex2f(0.862f, 0.696545f);
            glVertex2f(0.85543f, 0.71754f);
            glVertex2f(0.8162f, 0.73369f);
            glVertex2f(0.82456f, 0.7145f);
            glVertex2f(0.82582f, 0.70291f);
            glVertex2f(0.83644f, 0.690845f);
            glVertex2f(0.84058f, 0.675455f);
            glVertex2f(0.85057f, 0.66795f);
            glVertex2f(0.85741f, 0.65522f);
            glVertex2f(0.87199f, 0.65446f);
            glVertex2f(0.87982f, 0.63546f);
            glVertex2f(0.88882f, 0.6556f);
            glVertex2f(0.9034f, 0.6556f);
            glVertex2f(0.90961f, 0.66833f);
            glVertex2f(0.92077f, 0.678494f);
            glVertex2f(0.92581f, 0.695025);
            glVertex2f(0.93517f, 0.70291f);
            glVertex2f(0.93643f, 0.71716f);
            glVertex2f(0.94417f, 0.73407f);
            glVertex2f(0.90502f, 0.7164f);
            glVertex2f(0.898f, 0.694645f);
            glVertex2f(0.89359f, 0.68562f);
            glVertex2f(0.88882f, 0.681915f);
            glVertex2f(0.8872f,0.694645f);
            glVertex2f(0.88801f, 0.704145f);
            glVertex2f(0.88657f, 0.71165f);
            glVertex2f(0.88441f, 0.69699f);
    glEnd();
}

void bat8()
{
    glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(0.8893f, 0.51606f);
            glVertex2f(0.8933f, 0.51382f);
            glVertex2f(0.89434f, 0.52075f);
            glVertex2f(0.89434f, 0.52572f);
            glVertex2f(0.89588f, 0.5183f);
            glVertex2f(0.89497f, 0.51053f);
            glVertex2f(0.89686f, 0.50248f);
            glVertex2f(0.8998f, 0.50388f);
            glVertex2f(0.904f, 0.51277f);
            glVertex2f(0.90911f, 0.52824f);
            glVertex2f(0.93963f, 0.54014f);
            glVertex2f(0.93312f, 0.526f);
            glVertex2f(0.93214f, 0.51746f);
            glVertex2f(0.92388f, 0.50857f);
            glVertex2f(0.92066f, 0.49723f);
            glVertex2f(0.91289f, 0.4917f);
            glVertex2f(0.90757f, 0.48232f);
            glVertex2f(0.89623f, 0.48176f);
            glVertex2f(0.89014f, 0.46776f);
            glVertex2f(0.88314f, 0.4826f);
            glVertex2f(0.8718f, 0.4826f);
            glVertex2f(0.86697f, 0.481198f);
            glVertex2f(0.85829f, 0.49947f);
            glVertex2f(0.85437f, 0.51165f);
            glVertex2f(0.84709f, 0.51746f);
            glVertex2f(0.84611f, 0.52796f);
            glVertex2f(0.84009f, 0.54042f);
            glVertex2f(0.87054f, 0.5274f);
            glVertex2f(0.876f, 0.51137f);
            glVertex2f(0.87943f, 0.50472f);
            glVertex2f(0.88314f, 0.502f);
            glVertex2f(0.8844f, 0.51137f);
            glVertex2f(0.88377f, 0.5183f);
            glVertex2f(0.88489f, 0.52383f);
            glVertex2f(0.88657f, 0.51305f);
        glEnd();
}

void ghost1()
{
    glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(-0.822029f, -0.18416f);
        glVertex2f(-0.808863f, -0.28751f);
        glVertex2f(-0.806913f, -0.31832f);
        glVertex2f(-0.817638f, -0.32729f);
        glVertex2f(-0.838113f, -0.32729f);
        glVertex2f(-0.856638f, -0.3152f);
        glVertex2f(-0.87175f, -0.32729f);
        glVertex2f(-0.887838f, -0.32885f);
        glVertex2f(-0.905388f, -0.31988f);
        glVertex2f(-0.925863f, -0.33353f);
        glVertex2f(-0.940975f, -0.33197f);
        glVertex2f(-0.9478f, -0.31832f);
        glVertex2f(-0.934638f, -0.21809f);
        glVertex2f(-0.91958f, -0.12722f);
        glVertex2f(-0.91075f, -0.09329f);
        glVertex2f(-0.895638f, -0.06677f);
        glVertex2f(-0.88345f, -0.05624f);
        glVertex2f(-0.870775f, -0.05624f);
        glVertex2f(-0.8542f, -0.06092f);
        glVertex2f(-0.839088f, -0.08393f);
        glVertex2f(-0.829338f, -0.12254f);
    glEnd();
}

void ghost2()
{
    glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(0.0621f,-0.0204f);
        glVertex2f(0.0687f,-0.063f);
        glVertex2f(0.0861f,-0.1365f);
        glVertex2f(0.1041f,-0.1935f);
        glVertex2f(0.1041f,-0.2076f);
        glVertex2f(0.0939f,-0.216f);
        glVertex2f(0.0873f,-0.2124f);
        glVertex2f(0.0741f,-0.2031f);
        glVertex2f(0.0627f,-0.1923f);
        glVertex2f(0.0546f,-0.1863f);
        glVertex2f(0.0468f,-0.1851f);
        glVertex2f(0.0372f,-0.1875f);
        glVertex2f(0.0201f,-0.2019f);
        glVertex2f(0.0048f,-0.2124f);
        glVertex2f(-0.0108f,-0.2124f);
        glVertex2f(-0.0207f,-0.2067f);
        glVertex2f(-0.0366f,-0.1935f);
        glVertex2f(-0.0528f,-0.1959f);
        glVertex2f(-0.06f,-0.2007f);
        glVertex2f(-0.0726f,-0.2076f);
        glVertex2f(-0.0813f,-0.2031f);
        glVertex2f(-0.0867f,-0.1983f);
        glVertex2f(-0.09f,-0.1899f);
        glVertex2f(-0.0939f,-0.1746f);
        glVertex2f(-0.0954f,-0.1473f);
        glVertex2f(-0.0888f,-0.1035f);
        glVertex2f(-0.0813f,-0.0642f);
        glVertex2f(-0.072f,-0.0276f);
        glVertex2f(-0.0681f,-0.0063f);
        glVertex2f(-0.0768f,0.021f);
        glVertex2f(-0.0933f,0.039f);
        glVertex2f(-0.1059f,0.039f);
        glVertex2f(-0.108f,0.0435f);
        glVertex2f(-0.1059f,0.0543f);
        glVertex2f(-0.1059f,0.0627f);
        glVertex2f(-0.1107f,0.0675f);
        glVertex2f(-0.1161f,0.072f);
        glVertex2f(-0.1167f,0.0804f);
        glVertex2f(-0.1161f,0.0864f);
        glVertex2f(-0.108f,0.0864f);
        glVertex2f(-0.1032f,0.0876f);
        glVertex2f(-0.1041f,0.0993f);
        glVertex2f(-0.1041f,0.1113f);
        glVertex2f(-0.0993f,0.1149f);
        glVertex2f(-0.0927f,0.1065f);
        glVertex2f(-0.0879f,0.0912f);
        glVertex2f(-0.0807f,0.0744f);
        glVertex2f(-0.0714f,0.0675f);
        glVertex2f(-0.0552f,0.0567f);
        glVertex2f(-0.0453f,0.0627f);
        glVertex2f(-0.0387f,0.123f);
        glVertex2f(-0.0294f,0.1704f);
        glVertex2f(-0.0186f,0.2001f);
        glVertex2f(0.0012f,0.2145f);
        glVertex2f(0.0213f, 0.2049f);
        glVertex2f(0.0312f, 0.1929f);
        glVertex2f(0.0393f, 0.1611f);
        glVertex2f(0.0468f, 0.1218f);
        glVertex2f(0.0513f, 0.0912f);
        glVertex2f(0.0519f, 0.0675f);
        glVertex2f(0.0519f, 0.0603f);
        glVertex2f(0.0681f, 0.0627f);
        glVertex2f(0.0828f, 0.0732f);
        glVertex2f(0.0912f, 0.09f);
        glVertex2f(0.0966f, 0.1089f);
        glVertex2f(0.1032f, 0.1125f);
        glVertex2f(0.1068f, 0.1101f);
        glVertex2f(0.1068f, 0.0993f);
        glVertex2f(0.1053f, 0.0957f);
        glVertex2f(0.1047f, 0.0888f);
        glVertex2f(0.1074f, 0.0864f);
        glVertex2f(0.1107f, 0.0816f);
        glVertex2f(0.1128f, 0.0792f);
        glVertex2f(0.114f, 0.0684f);
        glVertex2f(0.1113f, 0.0615f);
        glVertex2f(0.1092f, 0.0567f);
        glVertex2f(0.1086f, 0.0531f);
        glVertex2f(0.1074f, 0.039f);
        glVertex2f(0.102f, 0.0354f);
        glVertex2f(0.0888f, 0.0354f);
        glVertex2f(0.0834f, 0.0294f);
        glVertex2f(0.0741f, 0.0198f);
        glVertex2f(0.0639f, -0.0039f);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2f(-0.006f, 0.039f);
        glVertex2f(-0.0081f, 0.0603f);
        glVertex2f(-0.0087f, 0.078f);
        glVertex2f(-0.0048f, 0.0876f);
        glVertex2f(0.0033f, 0.0924f);
        glVertex2f(0.0087f, 0.0924f);
        glVertex2f(0.0141f, 0.09f);
        glVertex2f(0.0192f, 0.0768f);
        glVertex2f(0.0207f, 0.0627f);
        glVertex2f(0.0207f, 0.0579f);
        glVertex2f(0.0186f, 0.0414f);
        glVertex2f(0.0141f, 0.0282f);
        glVertex2f(0.0093f, 0.0153f);
        glVertex2f(-0.0012f, 0.0093f);
        glVertex2f(-0.0033f, 0.0141f);
        glVertex2f(-0.0048f, 0.021f);
        glVertex2f(-0.0048f, 0.0318f);

    glEnd();

    glBegin(GL_TRIANGLE_FAN);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2f(-0.006f, 0.129f);
        glVertex2f(-0.0033f, 0.1338f);
        glVertex2f(-0.0012f, 0.1386f);
        glVertex2f(-0.0012f, 0.1443f);
        glVertex2f(-0.0072f, 0.1503f);
        glVertex2f(-0.0126f, 0.1503f);
        glVertex2f(-0.0159f, 0.1503f);
        glVertex2f(-0.0213f, 0.1467f);
        glVertex2f(-0.0246f, 0.1386f);
        glVertex2f(-0.0219f, 0.1242f);
        glVertex2f(-0.018f, 0.1206f);
        glVertex2f(-0.0168f, 0.1173f);
        glVertex2f(-0.0108f, 0.1161f);
        glVertex2f(-0.0081f, 0.1182f);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2f(0.0174f, 0.1254f);
        glVertex2f(0.0174f, 0.1173f);
        glVertex2f(0.0213f, 0.1173f);
        glVertex2f(0.0273f, 0.1206f);
        glVertex2f(0.0339f, 0.1338f);
        glVertex2f(0.0333f, 0.1467f);
        glVertex2f(0.03f, 0.1491f);
        glVertex2f(0.0267f, 0.1515f);
        glVertex2f(0.0192f, 0.1515f);
        glVertex2f(0.0141f, 0.1479f);
        glVertex2f(0.0114f, 0.1479f);
        glVertex2f(0.0099f, 0.1422f);
        glVertex2f(0.0132f, 0.1338f);

    glEnd();
}


void display(void)
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	glMatrixMode(GL_MODELVIEW);

    grass2();
    sky();
    stars();
    moon();
    grass();
    tress();
    ghost_house();
    river();

    glPushMatrix();
    glTranslatef(0.0f, positionPumkin, 0.0f);
    pumpkin1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0f, positionBatsH, 0.0f);
    bat1();
    bat5();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0f, positionBatsM, 0.0f);
    bat3();
    bat2();
    bat4();
    bat6();
    bat7();
    bat8();
    glPopMatrix();

    grave1();
    grave2();
    grave3();
    grave4();

    glPushMatrix();
    glTranslatef(positionShip, 0.0f, 0.0f);
    ghost_ship();
    ship_flag();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(positionWitch, 0.0f, 0.0f);
    witch();
    glPopMatrix();

    ghost1();
    ghost2();
    pumpkin2();

	glFlush();
}

void reshape(int w,int h)
{
	glViewport(0,0, (GLsizei)w,(GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(100.0f, (GLfloat)w/(GLfloat)h, 1.0f, 100.0f);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
	glutInitWindowSize (1280, 840);
	glutInitWindowPosition (10, 10);
	glutCreateWindow ("THE HALLOWEEN");
    //glutReshapeFunc(reshape);
	glutDisplayFunc(display);
    glutTimerFunc(50, update, 0);
	glutMainLoop();
	return 0;
}
