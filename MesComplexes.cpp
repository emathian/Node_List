#include "MesComplexes.h"
#include <math.h>

/* Fonctions module et atgument pouvant etre utilisee nimporte ou*/
/*float fonc_module (float Re , float Im) {
	float M = sqrt (Re*Re + Im* Im);
	return M ;
}

float fonc_argument ( float Re , float Im){
	float Arg = 0 ;
	
}
*/

float MesComplexes:: re() {
 return re_;
}

float MesComplexes:: im() {
 return im_;
}

float MesComplexes:: module() {
 return module_;
}

float MesComplexes:: argument() {
 return argument_;
}

/* Constructeur por defaut */
MesComplexes::MesComplexes() {
 re_ = 0;
 im_ = 0;	
 module_ =0;
 argument_ = -2;
}

/* Constructeur por parametres*/
MesComplexes::MesComplexes(float re, float im) {

	re_ = re; // Rappel: re_  et im_ sont protégé, on y a
	im_ = im; // accès car on est dans la classe
	module_ = Module (re_ , im_);
	argument_ = Argument (re_ , im_);
}



MesComplexes::MesComplexes(const MesComplexes& model) {

 re_ = model.re_; 
 im_ = model.im_; 
 module_ = model.module_;
 argument_ = model.argument_;
	 
}

float MesComplexes::Module (float re , float im){
	
	float module = sqrt (re*re + im* im);
	return module;
}	

float MesComplexes::Argument (float re , float im){
	
	float argument ;
	if ((re = 0) && (im > 0)) 
	{
	float argument = M_PI / 2;
	}
	else if ((re = 0 ) && (im < 0))
	{
	float argument = - M_PI / 2;
	}
	else if (re <= 0 )
	{
	float argument = atan(im/re);
	}
	else if (re >= 0 )
	{
	float argument = atan(im/re) + M_PI;
	}
	else 
	{
	float argument = -2;
	}
	return argument;
}

MesComplexes MesComplexes::Sum (float x){
	float Sre = re_ + x;
	float Sim = im_ + x;
	module_ = Module (Sre , Sim);
	argument_ = Argument (Sre , Sim);
	return MesComplexes(Sre, Sim);
}

MesComplexes MesComplexes::Sum(MesComplexes C){
	float Sre = re_ + C.re();
	float Sim = im_ + C.im();
	module_ = Module (Sre , Sim);
	argument_ = Argument (Sre , Sim);
	return MesComplexes(Sre, Sim);
}

MesComplexes MesComplexes::Substract (float x){
	float Sre = re_ - x;
	float Sim = im_ - x;
	module_ = Module (Sre , Sim);
	argument_ = Argument (Sre , Sim);
	return MesComplexes(Sre, Sim);
}

MesComplexes MesComplexes::Substract(MesComplexes C){
	float Sre = re_ - C.re();
	float Sim = im_ - C.im();
	module_ = Module (Sre , Sim);
	argument_ = Argument (Sre , Sim);
	return MesComplexes(Sre, Sim);
}






