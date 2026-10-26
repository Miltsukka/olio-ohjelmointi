#include "engine.h"
Engine::Engine(int h,double d):horsepower(h),displacement(d){} int Engine::getHorsepower()const{return horsepower;}double Engine::getDisplacement()const{return displacement;}void Engine::setHorsepower(int h){horsepower=h;}void Engine::setDisplacement(double d){displacement=d;}
