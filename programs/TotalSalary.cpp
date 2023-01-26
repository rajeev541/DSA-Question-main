
//  #accenture

int totalSalary(int basic, char grade) 
{
     float totalSalary = 0;
    int allowance ;
//     float hra = ((20*basic)/100) + 0.5;
    float hra = (0.2*basic) + 0.5;
    
//     float da = ((50*basic)/100) + 0.5;
   	float da = (0.5*basic)+0.5;
    
//     float pf = ((11*basic)/100) + 0.5;
   		float pf = (0.11*basic)+0.5;
    if(grade == 'A'){
        allowance = 1700;
    }
    else if(grade == 'B'){
        allowance = 1500;
    }
    else{
        allowance = 1300;
    }
    totalSalary = basic + hra + da + allowance - pf;
    return int(totalSalary);
   

   
    
}