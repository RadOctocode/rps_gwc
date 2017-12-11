#include <iostream>
#include <cstring>
#include <boost/algorithm/string.hpp>


#define WIN   1
#define LOSE  2
#define TIE   3
#define ERROR 4

bool play(std::string my_string){
    if((boost::to_upper_copy<std::string>(my_string))=="YES"){
        return true; 
    }

    else if((boost::to_upper_copy<std::string>(my_string))=="NO"){
        return false;    
    }

    else{
        std::cout<<"please try a yes/no\n";
        return false; 
    }

} 


int check(std::string my_string, std::string comp_string){
    std::locale loc;
    if((boost::to_upper_copy<std::string>(my_string))=="PAPER"){
        if(boost::to_upper_copy<std::string>(comp_string)=="PAPER"){ return TIE;} 
        
        else if(boost::to_upper_copy<std::string>(comp_string)=="ROCK"){ return WIN;} 
        
        else if(boost::to_upper_copy<std::string>(comp_string)=="SCISSORS"){ return LOSE;} 
        
        else{
            std::cout<<"bad input\n";
            return ERROR;
        }
    }
    else if((boost::to_upper_copy<std::string>(my_string))=="SCISSORS"){
         if(boost::to_upper_copy<std::string>(comp_string)=="PAPER"){ return WIN;} 
        
        else if(boost::to_upper_copy<std::string>(comp_string)=="ROCK"){ return LOSE;} 
        
        else if(boost::to_upper_copy<std::string>(comp_string)=="SCISSORS"){ return TIE;} 
        
        else{

            std::cout<<"bad input\n";
            return ERROR;
        } 
        
        
    }
    else if((boost::to_upper_copy<std::string>(my_string))=="ROCK"){
          if(boost::to_upper_copy<std::string>(comp_string)=="PAPER"){ return LOSE;} 
        
        else if(boost::to_upper_copy<std::string>(comp_string)=="ROCK"){ return TIE;} 
        
        else if(boost::to_upper_copy<std::string>(comp_string)=="SCISSORS"){ return WIN;} 
        
        else{
            std::cout<<"bad input\n";
            return ERROR;
        }
    }

    else{
        std::cout<<"bad input\n";
        return ERROR;
        //throw error 
    }

}

int main(){
   std::string response_string,error_response_string,player1_string,player2_string;
   std::cout<<"enter yes or no\n";
   std::cin>>response_string;
   bool my_check=play(response_string);

   while(my_check){ 
       std::cout<<"player one enter string\n";
       std::cin>>player1_string;
       std::cout<<"player two enter string\n";
       std::cin>>player2_string;
       int check_winner=check(player1_string,player2_string);
       
       if(check_winner==WIN){
            std::cout<<"PLAYER 1 WINS\n";
       }    
       else if(check_winner==LOSE){
            std::cout<<"PLAYER 2 WINS\n";
       }
       else if(check_winner==TIE){
            std::cout<<"IT'S A TIE\n";
       }
       else if(check_winner==ERROR){
            std::cout<<"BAD INPUT WOULD YOU LIKE TO PLAY AGAIN? please answer yes or no\n";
            std::cin>>error_response_string;
            if((boost::to_upper_copy<std::string>(error_response_string))=="YES"){
                continue;
            }
            else if((boost::to_upper_copy<std::string>(error_response_string))=="NO"){
                break;
            
            }
            else{
                std::cout<<"RAN INTO AN ERROR STOPPING\n";
                break; 
            
            }
       } 
       std::cout<<"PLAY AGAIN?\n";
       response_string.clear();
       std::cin>>response_string;
       my_check=play(response_string); 
   } 

    return 0;
}
