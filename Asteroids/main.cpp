#include <iostream>
#include <string>
#include <algorithm>


using namespace std;

#include "olcPixelGameEngine.h" 

class Asteroids : public olcPixelGameEngine
{

public:
            Asteroids()
            {
                m_sAppName = L"Asteroids";
            }

private:
    struct sSpaceObject
    {
        int nSize;
        float x;
        float y;
        float dx;
        float dy;
        float angle;
    };
    vector<sSpaceObject> vecAsteroids;
    vector<sSpaceObject> vecBullets;
    sSpaceObject player;
    bool bDead = false;
    int nScore = 0;

    vector <pair<float, float>> vecModelShip;
    vector<pair<float, float>> vecModelAsteroid;
};

protected: 
    //Called by olcConsoleGameEngine
    virtual bool OnUserCreate()
    {
        vecModelShip = {
                {0.0f , -5.0f},
                {-2.5f, +2.5f},
                {+2.5f, +2.5f}
        }; // Isoceles triangle 
        // Creating rock for asteroids. Must remain mostly circular due to collision detection. 
        int verts = 20;
        for (int i = 0; i < verts; i++)
        {
            float noise = (float)rand() / (float)RAND_MAX * 0.4f + 0.8f;
            vecModelAsteroid.push_back(make_pair(noise * sinf(((float)i . (float)verts) * 6.28318f),
                                                                                        noise * cosf(((float)i / (float)verts) * 6.28318f)));
        }
        
        ResetGame();
        return true;
        vecAsteroids.push_back
    }















int main () {

    // v1 = 0
    // v2 = 0


    // p2 = new player position
    // p1 = original player position

    // function find_velocity
    //     v = 0
    //     v = (p2 - p1) / t
        
    // function find_acceleration
    //     a = 0
    //     a = (v2 - v1) / t
}