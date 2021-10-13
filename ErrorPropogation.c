{
  
  //0-0.3
  file1=new TGraphErrors("C:/root/JetsPbPb010.txt","%lg %lg %lg", "");
  file2=new TGraphErrors("C:/root/JetsPbPb0102ndPart.txt","%lg %lg %lg","");
  file3=new TGraph("C:/root/0-0.3(Updated).txt");
 
  Int_t i;
  Int_t j;
  //first part parameters and errors
  Double_t A=4.22838e+006;
  Double_t B=-5.65242e+000;
  Double_t Aerr=4.89609e+005;
  Double_t Berr=2.50215e-002;
  Double_t A_hi;
  Double_t B_hi;
  Double_t A_low;
  Double_t B_low;
  //Second part parameters and errors
  Double_t C=2.72927e+009;
  Double_t D=-6.90624e+000;
  Double_t Cerr=9.95437e+008;
  Double_t Derr=6.76578e-002;
  Double_t C_hi;
  Double_t D_hi;
  Double_t C_low;
  Double_t D_low;
  //1st part for calculating the standard deviation of pTpp and Sloss
   cout<<"Sigma pTPP 1st part(0-0.3)\t\t\t\t";
   cout<<"Sigma_Sloss 1st part(0-0.3)\n\n";
  for(i=0;i<6;i++){
    
    Double_t Pby_1=file1->GetY()[i];
    Double_t Value1=pow((Pby_1)/(A+Aerr),1/(B));
    Double_t Value2=pow((Pby_1)/(A-Aerr),1/(B));
    Double_t Value3=pow((Pby_1)/(A),1/(B+Berr));
    Double_t Value4=pow((Pby_1)/(A),1/(B-Berr));


    
    A_hi=Value1;
    A_low=Value2;
    
    B_hi=Value3;
    B_low=Value4;
    
    Double_t ppx_1=file3->GetX()[i];


    
    
    Double_t Sigma_ppx_1_low=sqrt(pow((A_hi-ppx_1),2)+pow((B_hi-ppx_1),2));
    Double_t Sigma_ppx_1_high=sqrt(pow(A_low-ppx_1,2)+pow(B_low-ppx_1,2));

    
    
    Double_t Pby_1_Err=file1->GetEY()[i];

    Double_t ppx_1_pbyErr_1=pow((Pby_1+Pby_1_Err)/A,1/B);
    Double_t ppx_1_pbyErr_2=pow((Pby_1-Pby_1_Err)/A,1/B);

   
     Double_t ppx_1_pbyErr_high=ppx_1_pbyErr_2;
     Double_t ppx_1_pbyErr_low=ppx_1_pbyErr_1;
   
    
    
     
     
     Double_t err_pbyhi= ppx_1_pbyErr_high-ppx_1;
     Double_t err_pbylow= ppx_1_pbyErr_low-ppx_1;

     //Sloss Error
     Double_t err_Sloss_high=sqrt(pow(err_pbyhi/ppx_1,2)+pow((Sigma_ppx_1_high/ppx_1),2));
     Double_t err_Sloss_low=sqrt(pow(err_pbylow/ppx_1,2)+pow((Sigma_ppx_1_low/ppx_1),2));
     
     
      
     
      
      
     
     
     
      
     printf("highErrors: %lf \t\t\t\t\t%lf\n",Sigma_ppx_1_high,err_Sloss_high);
     printf("lowErrors: %lf \t\t\t\t\t%lf\n",Sigma_ppx_1_low,err_Sloss_low);
     
     cout<<"\n";
    
  }
  
  cout << "\n\n" ;
  //2nd part for calculating the standard deviation of pTpp and Sloss
  cout<<"Sigma pTpp 2nd part(0-0.3)\t\t\t\t";
  cout<<"Sigma Sloss 2nd part(0-0.3)\n\n";
  for(j=0;j<2;j++){
    Double_t Pby_2=file2->GetY()[j];
    Double_t Value1=pow((Pby_2)/(C+Cerr),1/(D));
    Double_t Value2=pow((Pby_2)/(C-Cerr),1/(D));
    Double_t Value3=pow((Pby_2)/(C),1/(D+Derr));
    Double_t Value4=pow((Pby_2)/(C),1/(D-Derr));

     C_hi=Value1;
    C_low=Value2;
    
    D_hi=Value3;
    D_low=Value4;

    
    Double_t ppx_2=file3->GetX()[j+6];
   
    
     Double_t Sigma_ppx_2_low=sqrt(pow((C_hi-ppx_2),2)+pow((D_hi-ppx_2),2));
    Double_t Sigma_ppx_2_high=sqrt(pow(C_low-ppx_2,2)+pow(D_low-ppx_2,2));

   
    
    Double_t Pby_2_Err=file2->GetEY()[j];

    Double_t ppx_2_pbyErr_1=pow((Pby_2+Pby_2_Err)/C,1/D);
    Double_t ppx_2_pbyErr_2=pow((Pby_2-Pby_2_Err)/C,1/D);

   
     Double_t ppx_2_pbyErr_high=ppx_2_pbyErr_2;
     Double_t ppx_2_pbyErr_low=ppx_2_pbyErr_1;

      Double_t err_pbyhi= ppx_2_pbyErr_high-ppx_2;
     Double_t err_pbylow= ppx_2_pbyErr_low-ppx_2;
     //Sloss Error
     Double_t err_Sloss_high=sqrt(pow(err_pbyhi/ppx_2,2)+pow((Sigma_ppx_2_high/ppx_2),2));
     Double_t err_Sloss_low=sqrt(pow(err_pbylow/ppx_2,2)+pow((Sigma_ppx_2_low/ppx_2),2));
     
     
      
     
      
      
     
     
     
      
     printf("highErrors: %lf \t\t\t\t\t%lf\n",Sigma_ppx_2_high,err_Sloss_high);
     printf("lowErrors: %lf \t\t\t\t\t%lf\n",Sigma_ppx_2_low,err_Sloss_low);
     
     cout<<"\n";
     
    
  }
  
  //0.3-0.8
  file5=new TGraphErrors("C:/root/JetsPbPb010(0.3-0.8).txt","%lg %lg %lg","");
  file6=new TGraphErrors("C:/root/JetsPbPb010(0.3-0.8)2ndPart.txt","%lg %lg %lg","");
  file7=new TGraph("C:/root/0.3-0.8(Updated).txt");

  //first part parameters and errors
   A=5.86460e+006;
   B=-5.72970e+000;
   Aerr=4.35352e+005;
   Berr=1.56644e-002;
  
  //Second part parameters and errors
   C=5.29418e+009;
   D=-7.05374e+000;
   Cerr=1.44518e+009;
   Derr=5.12585e-002;
 
 
   //1st part for calculating the standard deviation of pTpp and Sloss
   cout<<"Sigma pTPP 1st part(0.3-0.8)\t\t\t\t";
   cout<<"Sigma_Sloss 1st part(0.3-0.8)\n\n";
  
 
  for(Int_t i=0;i<6;i++){
    
    Double_t Pby_1=file5->GetY()[i];
    Double_t Value1=pow((Pby_1)/(A+Aerr),1/(B));
    Double_t Value2=pow((Pby_1)/(A-Aerr),1/(B));
    Double_t Value3=pow((Pby_1)/(A),1/(B+Berr));
    Double_t Value4=pow((Pby_1)/(A),1/(B-Berr));


    A_hi=Value1;
    A_low=Value2;
    B_hi=Value3;
    B_low=Value4;
    
    
    Double_t ppx_1=file7->GetX()[i];

    Double_t Sigma_ppx_1_low=sqrt(pow((A_hi-ppx_1),2)+pow((B_hi-ppx_1),2));
    Double_t Sigma_ppx_1_high=sqrt(pow(A_low-ppx_1,2)+pow(B_low-ppx_1,2));

    
    
    Double_t Pby_1_Err=file5->GetEY()[i];

    Double_t ppx_1_pbyErr_1=pow((Pby_1+Pby_1_Err)/A,1/B);
    Double_t ppx_1_pbyErr_2=pow((Pby_1-Pby_1_Err)/A,1/B);

   
     Double_t ppx_1_pbyErr_high=ppx_1_pbyErr_2;
     Double_t ppx_1_pbyErr_low=ppx_1_pbyErr_1;
   
    
    
     
     
     Double_t err_pbyhi= ppx_1_pbyErr_high-ppx_1;
     Double_t err_pbylow= ppx_1_pbyErr_low-ppx_1;

     //Sloss Error
     Double_t err_Sloss_high=sqrt(pow(err_pbyhi/ppx_1,2)+pow((Sigma_ppx_1_high/ppx_1),2));
     Double_t err_Sloss_low=sqrt(pow(err_pbylow/ppx_1,2)+pow((Sigma_ppx_1_low/ppx_1),2));
     
     
      
     
      
      
     
     
     
      
     printf("highErrors: %lf \t\t\t\t\t%lf\n",Sigma_ppx_1_high,err_Sloss_high);
     printf("lowErrors: %lf \t\t\t\t\t%lf\n",Sigma_ppx_1_low,err_Sloss_low);
     
     cout<<"\n";
    
   
     

  }
  
  //2nd part for calculating the standard deviation of pTpp and Sloss
  cout<<"Sigma pTpp 2nd part(0.3-0.8)\t\t\t\t";
  cout<<"Sigma Sloss 2nd part(0.3-0.8)\n\n";
  for(Int_t j=0;j<3;j++){
  Double_t Pby_2=file6->GetY()[j];
    Double_t Value1=pow((Pby_2)/(C+Cerr),1/(D));
    Double_t Value2=pow((Pby_2)/(C-Cerr),1/(D));
    Double_t Value3=pow((Pby_2)/(C),1/(D+Derr));
    Double_t Value4=pow((Pby_2)/(C),1/(D-Derr));

    C_hi=Value1;
    C_low=Value2;
    
    D_hi=Value3;
    D_low=Value4;

    Double_t ppx_2=file7->GetX()[j+6];

     Double_t Sigma_ppx_2_low=sqrt(pow((C_hi-ppx_2),2)+pow((D_hi-ppx_2),2));
    Double_t Sigma_ppx_2_high=sqrt(pow(C_low-ppx_2,2)+pow(D_low-ppx_2,2));

   
    
    Double_t Pby_2_Err=file6->GetEY()[j];

    Double_t ppx_2_pbyErr_1=pow((Pby_2+Pby_2_Err)/C,1/D);
    Double_t ppx_2_pbyErr_2=pow((Pby_2-Pby_2_Err)/C,1/D);

   
     Double_t ppx_2_pbyErr_high=ppx_2_pbyErr_2;
     Double_t ppx_2_pbyErr_low=ppx_2_pbyErr_1;

      Double_t err_pbyhi= ppx_2_pbyErr_high-ppx_2;
     Double_t err_pbylow= ppx_2_pbyErr_low-ppx_2;
     //Sloss Error
     Double_t err_Sloss_high=sqrt(pow(err_pbyhi/ppx_2,2)+pow((Sigma_ppx_2_high/ppx_2),2));
     Double_t err_Sloss_low=sqrt(pow(err_pbylow/ppx_2,2)+pow((Sigma_ppx_2_low/ppx_2),2));
     
     
      
     
      
      
     
     
     
      
     printf("highErrors: %lf \t\t\t\t\t%lf\n",Sigma_ppx_2_high,err_Sloss_high);
     printf("lowErrors: %lf \t\t\t\t\t%lf\n",Sigma_ppx_2_low,err_Sloss_low);
     
     cout<<"\n";
    
    
  }


  

//0.8-1.2
  file8=new TGraphErrors("C:/root/JetsPbPb010(0.8-1.2).txt","%lg %lg %lg", "");
  file9=new TGraphErrors("C:/root/JetsPbPb010(0.8-1.2)2ndPart.txt", "%lg %lg %lg", "");
  file10=new TGraph("C:/root/0.8-1.2(Updated).txt");

//first part parameters and errors
  Double_t A=7.52277e+006;
  Double_t B=-5.80903e+000;
  Double_t Aerr=6.85245e+005;
  Double_t Berr=1.92037e-002;
  //Second part parameters and errors
  Double_t C=2.01719e+011;
  Double_t D=-7.79067e+000;
  Double_t Cerr=7.18183e+010;
  Double_t Derr=6.70584e-002;

  //1st part for calculating the standard deviation of pTpp and Sloss
   cout<<"Sigma pTPP 1st part(0.8-1.2)\t\t\t\t";
   cout<<"Sigma_Sloss 1st part(0.8-1.2)\n\n";

   for(Int_t i=0;i<6;i++){
    
    Double_t Pby_1=file8->GetY()[i];
    Double_t Value1=pow((Pby_1)/(A+Aerr),1/(B));
    Double_t Value2=pow((Pby_1)/(A-Aerr),1/(B));
    Double_t Value3=pow((Pby_1)/(A),1/(B+Berr));
    Double_t Value4=pow((Pby_1)/(A),1/(B-Berr));
   
    Double_t ppx_1=file10->GetX()[i];

    A_hi=Value1;
    A_low=Value2;
    B_hi=Value3;
    B_low=Value4;


   
     Double_t Sigma_ppx_1_low=sqrt(pow((A_hi-ppx_1),2)+pow((B_hi-ppx_1),2));
    Double_t Sigma_ppx_1_high=sqrt(pow(A_low-ppx_1,2)+pow(B_low-ppx_1,2));

    
    
    Double_t Pby_1_Err=file8->GetEY()[i];

    Double_t ppx_1_pbyErr_1=pow((Pby_1+Pby_1_Err)/A,1/B);
    Double_t ppx_1_pbyErr_2=pow((Pby_1-Pby_1_Err)/A,1/B);
     
    
     Double_t ppx_1_pbyErr_high=ppx_1_pbyErr_2;
     Double_t ppx_1_pbyErr_low=ppx_1_pbyErr_1;
   
    
    
     
     
     Double_t err_pbyhi= ppx_1_pbyErr_high-ppx_1;
     Double_t err_pbylow= ppx_1_pbyErr_low-ppx_1;


     
     //Sloss Error
     Double_t err_Sloss_high=sqrt(pow((err_pbyhi/ppx_1),2)+pow((Sigma_ppx_1_high/ppx_1),2));
     Double_t err_Sloss_low=sqrt(pow((err_pbylow/ppx_1),2)+pow((Sigma_ppx_1_low/ppx_1),2));

    
     
      
     
      
      
     
     
     
      
     printf("highErrors: %lf \t\t\t\t\t%lf\n",Sigma_ppx_1_high,err_Sloss_high);
     printf("lowErrors: %lf \t\t\t\t\t%lf\n",Sigma_ppx_1_low,err_Sloss_low);
     
     cout<<"\n";

  }
   //2nd part for calculating the standard deviation of pTpp and Sloss
  cout<<"Sigma pTpp 2nd part(0.8-1.2)\t\t\t\t";
  cout<<"Sigma Sloss 2nd part(0.8-1.2)\n\n";
  for(Int_t j=0;j<3;j++){
  Double_t Pby_2=file9->GetY()[j];

    Double_t Value1=pow((Pby_2)/(C+Cerr),1/(D));
    Double_t Value2=pow((Pby_2)/(C-Cerr),1/(D));
    Double_t Value3=pow((Pby_2)/(C),1/(D+Derr));
    Double_t Value4=pow((Pby_2)/(C),1/(D-Derr));

    Double_t ppx_2=file10->GetX()[j+6];

     C_hi=Value1;
    C_low=Value2;
    
    D_hi=Value3;
    D_low=Value4;

   
    

     Double_t Sigma_ppx_2_low=sqrt(pow((C_hi-ppx_2),2)+pow((D_hi-ppx_2),2));
    Double_t Sigma_ppx_2_high=sqrt(pow(C_low-ppx_2,2)+pow(D_low-ppx_2,2));

   
    
    Double_t Pby_2_Err=file9->GetEY()[j];

    Double_t ppx_2_pbyErr_1=pow((Pby_2+Pby_2_Err)/C,1/D);
    Double_t ppx_2_pbyErr_2=pow((Pby_2-Pby_2_Err)/C,1/D);

   
     Double_t ppx_2_pbyErr_high=ppx_2_pbyErr_2;
     Double_t ppx_2_pbyErr_low=ppx_2_pbyErr_1;

      Double_t err_pbyhi= ppx_2_pbyErr_high-ppx_2;
     Double_t err_pbylow= ppx_2_pbyErr_low-ppx_2;
     //Sloss Error
     Double_t err_Sloss_high=sqrt(pow(err_pbyhi/ppx_2,2)+pow((Sigma_ppx_2_high/ppx_2),2));
     Double_t err_Sloss_low=sqrt(pow(err_pbylow/ppx_2,2)+pow((Sigma_ppx_2_low/ppx_2),2));
     
     
      
     
      
      
     
     
     
      
     printf("highErrors: %lf \t\t\t\t\t%lf\n",Sigma_ppx_2_high,err_Sloss_high);
     printf("lowErrors: %lf \t\t\t\t\t%lf\n",Sigma_ppx_2_low,err_Sloss_low);
     
     cout<<"\n";
    
    
  }
  //1.2-2.1
  file11=new TGraphErrors("C:/root/JetsPbPb010(1.2-2.1).txt","%lg %lg %lg");
  file12=new TGraph("C:/root/1.2-2.1(Updated).txt");

  //first part parameters and errors
  Double_t A=2.81502e+007;
  Double_t B=-6.22279e+000;
  Double_t Aerr=1.59600e+006;
  Double_t Berr=1.21346e-002;

  // calculating the standard deviation of pTpp and Sloss
   cout<<"Sigma pTPP (1.2-2.1)\t\t\t\t";
   cout<<"Sigma_Sloss (1.2-2.1)\n\n";

   for(Int_t i=0;i<6;i++){
    
    Double_t Pby_1=file11->GetY()[i];
    Double_t Value1=pow((Pby_1)/(A+Aerr),1/(B));
    Double_t Value2=pow((Pby_1)/(A-Aerr),1/(B));
    Double_t Value3=pow((Pby_1)/(A),1/(B+Berr));
    Double_t Value4=pow((Pby_1)/(A),1/(B-Berr));


    A_hi=Value1;
    A_low=Value2;
    B_hi=Value3;
    B_low=Value4;
    
    Double_t ppx_1=file12->GetX()[i];

    Double_t Sigma_ppx_1_low=sqrt(pow((A_hi-ppx_1),2)+pow((B_hi-ppx_1),2));
    Double_t Sigma_ppx_1_high=sqrt(pow(A_low-ppx_1,2)+pow(B_low-ppx_1,2));

    
    
    Double_t Pby_1_Err=file11->GetEY()[i];

    Double_t ppx_1_pbyErr_1=pow((Pby_1+Pby_1_Err)/A,1/B);
    Double_t ppx_1_pbyErr_2=pow((Pby_1-Pby_1_Err)/A,1/B);

   
     Double_t ppx_1_pbyErr_high=ppx_1_pbyErr_2;
     Double_t ppx_1_pbyErr_low=ppx_1_pbyErr_1;
   
    
    
     
     
     Double_t err_pbyhi= ppx_1_pbyErr_high-ppx_1;
     Double_t err_pbylow= ppx_1_pbyErr_low-ppx_1;

     //Sloss Error
     Double_t err_Sloss_high=sqrt(pow(err_pbyhi/ppx_1,2)+pow((Sigma_ppx_1_high/ppx_1),2));
     Double_t err_Sloss_low=sqrt(pow(err_pbylow/ppx_1,2)+pow((Sigma_ppx_1_low/ppx_1),2));
     
     
      
     
      
      
     
     
     
      
     printf("highErrors: %lf \t\t\t\t\t%lf\n",Sigma_ppx_1_high,err_Sloss_high);
     printf("lowErrors: %lf \t\t\t\t\t%lf\n",Sigma_ppx_1_low,err_Sloss_low);
     
     cout<<"\n";

  }
  
}
