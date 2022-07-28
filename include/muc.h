#ifndef MUC_H 
#define MUC_H
/* METHOD OF UNDETERMINED COEFFICIENTS 

*/

typedef unsigned int muc_type;

class Muc {
    private:
        muc_type polynomial = 0;
        muc_type sinusoidal = 1;
        muc_type exponential = 2;
        muc_type combination = 3;

    public:
        Muc();
        muc_type determine_type();  
        
};

#endif