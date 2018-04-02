#ifndef NB_CPX_H
#define NB_CPX_H
class MesComplexes {
	protected :
	float re_;
 	float im_;
	float module_;
	float argument_;



	public :
	 // Getters
 	float re();
 	float im();
	float module();
	float argument();
	float Module (float re , float im);
	float Argument (float re , float im);
	

	// 	Seters
	float set_re (float re);
	float set_im (float im);

	// Constructor
	MesComplexes();
	MesComplexes(const MesComplexes& model); 
	MesComplexes (float re , float im );

	// Fonction
	MesComplexes Sum (float Re_x , float Im_x);
	MesComplexes Sum(MesComplexes C);
	MesComplexes Subtract (float Re_x , float Im_x);
	MesComplexes Subtract(MesComplexes C);
}; 
#endif
