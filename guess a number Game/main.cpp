#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int userInput;

    cout<<"You have to guess the number which is randomly generated, you have only 3 shoots";
    srand(time(0));
    int randomizer=rand()%100;
    
    
    for(int cda=0; cda<3; cda++){
        
        cin >> userInput;
        
            if(userInput!=randomizer){
                
                if(userInput<randomizer){
                    cout<<"Your input is smaller than randomly generated number"<<endl;
                }else if(userInput>randomizer){
                    cout<<"Your input is greater than randomly generated number"<<endl;
                }
                
    
            }else if(userInput==randomizer){
                
                cout << "Good job,you guessed the number";
                break;
            }
        
        
        if(cda==2){
            cout<<"Number was"<<randomizer<<endl;
        }
        
    }
        
    
   
    return 0;
}
