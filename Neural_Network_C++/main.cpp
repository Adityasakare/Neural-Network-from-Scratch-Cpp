#include<iostream>

using namespace std;
int main()
{
    float X[3] = {1.1, 1.2, 1.3}; //INPUT
    float W[3] = {2.1, 2.2, -2.3}; //WEIGHT
    int Bias = 1;                  //BIAS
    float output;
    float output_1;

    // INPUT * WEIGHT + BIAS
    for (int i=0;i<3;i++)
    {
        cout<<i<<endl;
        output += X[i]*W[i];
    }
    output+=Bias;
    cout<<"Output of this Neuron is"<<output<<endl;
    //ANOTHER WAY
    output_1 = X[0]*W[0] + X[1]*W[1] + X[2]*W[2];
    output_1+=Bias;
    cout<<"Output_1 of this Neuron is"<<output_1<<endl;





    return 0;
}
