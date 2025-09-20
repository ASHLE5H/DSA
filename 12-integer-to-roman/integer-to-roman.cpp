class Solution {
public:
    string intToRoman(int num) {
        
        string s;
        while(num>0){


            if(num - 1000 >= 0){
                
num = num -1000;
                s += "M";
                
            }
            else if(num - 500 >= 0){
                if(num>=900 && num < 1000){
                    num = num - 900;
                    s += "CM";
                }
                else{
                num = num -500;
                s += "D";
                }
            }
            else if(num - 100 >= 0){
                if( num >= 400 && num < 500){
                    num = num -400;
                    s += "CD";
                }
                else{
                num = num - 100;
                s += "C";
                }
               
            }
            else if(num - 50 >= 0){
                if(num >= 90 && num < 100){
                    num = num - 90;
                    s += "XC";
                }
                else{
                num = num -50;
                s += "L";
                }
               
            }
            else if(num - 10 >=0){
                if(num >= 40 && num < 50){
                    num = num - 40;
                    s += "XL";
                }
                else{
                    num = num -10;
                s += "X";
                }
            }
            else if(num - 5 >= 0){
                if(num ==9 ){
                    num = num - 9;
                    s += "IX";
                }
                else{
                    num = num - 5;
                s += "V";
                }
            }
            else if(num -1 >= 0){
               if(num == 4){
                    num = num -4;
                    s += "IV";
                }
               else{
                 num = num - 1;
                s += "I";
               }
            }
        } 
        return s;
    }
};