{
  
  //0-0.3
  file1=new TGraph("C:/root/JetsPbPb010.txt");
  file2=new TGraph("C:/root/JetsPbPb0102ndPart.txt");
  file3=new TGraph("C:/root/0-0.3(Updated).txt");
  file4=new TGraph("C:/root/pTAA_Error.txt");
  Int_t i;
  Int_t j;
  //first part parameters and errors
  Float_t A=4.22838e+006;
  Float_t B=-5.65242e+000;
  Float_t Aerr=4.89609e+005;
  Float_t Berr=2.50215e-002;
  //Second part parameters and errors
  Float_t C=2.72927e+009;
  Float_t D=-6.90624e+000;
  Float_t Cerr=9.95437e+008;
  Float_t Derr=6.76578e-002;
  //1st part for calculating the standard deviation of pTpp and Sloss
   cout<<"Sigma pTPP 1st part(0-0.3)\t\t\t\t";
   cout<<"Sigma_Sloss 1st part(0-0.3)\n\n";
  for(i=0;i<6;i++){
    
    Float_t Pby_1=file1->GetY()[i];
    Float_t Value1=pow((Pby_1)/(A+Aerr),1/(B+Berr));
    Float_t Value2=pow((Pby_1)/(A+Aerr),1/(B-Berr));
    Float_t Value3=pow((Pby_1)/(A-Aerr),1/(B-Berr));
    Float_t Value4=pow((Pby_1)/(A-Aerr),1/(B+Berr));
   
    Float_t ppx_1=file3->GetX()[i];

    Float_t Sigma_ppx_1=sqrt((pow(Value1-ppx_1,2)+pow(Value2-ppx_1,2)+pow(Value3-ppx_1,2)+pow(Value4-ppx_1,2))/4);
    
   
     //Sigma Sloss
      Float_t Sigma_pTAA=file4->GetY()[i];
      
     
      Float_t pTAA=file1->GetX()[i];
      
     
      Float_t Sigma_Sloss_1=(1/ppx_1)*sqrt(pow(pTAA*Sigma_ppx_1,2)+pow(Sigma_pTAA,2));
     
      
       printf("%lf\t\t\t\t\t%lf\n",Sigma_ppx_1,Sigma_Sloss_1);

  }
  cout << "\n\n" ;
  //2nd part for calculating the standard deviation of pTpp and Sloss
  cout<<"Sigma pTpp 2nd part(0-0.3)\t\t\t\t";
  cout<<"Sigma Sloss 2nd part(0-0.3)\n\n";
  for(j=0;j<2;j++){
  Float_t Pby_2=file2->GetY()[j];
    Float_t Value1=pow((Pby_2)/(C+Aerr),1/(D+Berr));
    Float_t Value2=pow((Pby_2)/(C+Aerr),1/(D-Berr));
    Float_t Value3=pow((Pby_2)/(C-Aerr),1/(D-Berr));
    Float_t Value4=pow((Pby_2)/(C-Aerr),1/(D+Berr));

    Float_t ppx_2=file3->GetX()[j+6];
   
    Float_t Sigma_ppx_2=sqrt((pow(Value1-ppx_2,2)+pow(Value2-ppx_2,2)+pow(Value3-ppx_2,2)+pow(Value4-ppx_2,2))/4);
    
     
    
     Float_t Sigma_pTAA=file4->GetY()[j+6];
      Float_t pTAA=file2->GetX()[j];
      Float_t Sigma_Sloss_2=(1/ppx_2)*sqrt(pow(pTAA*Sigma_ppx_2,2)+pow(Sigma_pTAA,2));
       printf("%lf\t\t\t\t\t%lf\n",Sigma_ppx_2,Sigma_Sloss_2);
    
  }
  //0.3-0.8
  file5=new TGraph("C:/root/JetsPbPb010(0.3-0.8).txt");
  file6=new TGraph("C:/root/JetsPbPb010(0.3-0.8)2ndPart.txt");
  file7=new TGraph("C:/root/0.3-0.8(Updated).txt");

  //first part parameters and errors
  Float_t A=5.86460e+006;
  Float_t B=-5.72970e+000;
  Float_t Aerr=4.35352e+005;
  Float_t Berr=1.56644e-002;
  //Second part parameters and errors
  Float_t C=5.29418e+009;
  Float_t D=-7.05374e+000;
  Float_t Cerr=1.44518e+009;
  Float_t Derr=5.12585e-002;
 
   //1st part for calculating the standard deviation of pTpp and Sloss
   cout<<"Sigma pTPP 1st part(0.3-0.8)\t\t\t\t";
   cout<<"Sigma_Sloss 1st part(0.3-0.8)\n\n";
  
 
  for(Int_t i=0;i<6;i++){
    
    Float_t Pby_1=file5->GetY()[i];
    Float_t Value1=pow((Pby_1)/(A+Aerr),1/(B+Berr));
    Float_t Value2=pow((Pby_1)/(A+Aerr),1/(B-Berr));
    Float_t Value3=pow((Pby_1)/(A-Aerr),1/(B-Berr));
    Float_t Value4=pow((Pby_1)/(A-Aerr),1/(B+Berr));
   
    Float_t ppx_1=file7->GetX()[i];

    Float_t Sigma_ppx_1=sqrt((pow(Value1-ppx_1,2)+pow(Value2-ppx_1,2)+pow(Value3-ppx_1,2)+pow(Value4-ppx_1,2))/4);
    
   
     //Sigma Sloss
      Float_t Sigma_pTAA=file4->GetY()[i];
      
     
      Float_t pTAA=file5->GetX()[i];
      
     
      Float_t Sigma_Sloss_1=(1/ppx_1)*sqrt(pow(pTAA*Sigma_ppx_1,2)+pow(Sigma_pTAA,2));
     
      
       printf("%lf\t\t\t\t\t%lf\n",Sigma_ppx_1,Sigma_Sloss_1);

  }

  //2nd part for calculating the standard deviation of pTpp and Sloss
  cout<<"Sigma pTpp 2nd part(0.3-0.8)\t\t\t\t";
  cout<<"Sigma Sloss 2nd part(0.3-0.8)\n\n";
  for(Int_t j=0;j<3;j++){
  Float_t Pby_2=file6->GetY()[j];
    Float_t Value1=pow((Pby_2)/(C+Aerr),1/(D+Berr));
    Float_t Value2=pow((Pby_2)/(C+Aerr),1/(D-Berr));
    Float_t Value3=pow((Pby_2)/(C-Aerr),1/(D-Berr));
    Float_t Value4=pow((Pby_2)/(C-Aerr),1/(D+Berr));

    Float_t ppx_2=file7->GetX()[j+6];
   
    Float_t Sigma_ppx_2=sqrt((pow(Value1-ppx_2,2)+pow(Value2-ppx_2,2)+pow(Value3-ppx_2,2)+pow(Value4-ppx_2,2))/4);
    
     
    
     Float_t Sigma_pTAA=file4->GetY()[j+6];
      Float_t pTAA=file6->GetX()[j];
      Float_t Sigma_Sloss_2=(1/ppx_2)*sqrt(pow(pTAA*Sigma_ppx_2,2)+pow(Sigma_pTAA,2));
       printf("%lf\t\t\t\t\t%lf\n",Sigma_ppx_2,Sigma_Sloss_2);
    
  }




//0.8-1.2
  file8=new TGraph("C:/root/JetsPbPb010(0.8-1.2).txt");
  file9=new TGraph("C:/root/JetsPbPb010(0.8-1.2)2ndPart.txt");
  file10=new TGraph("C:/root/0.8-1.2(Updated).txt");

//first part parameters and errors
  Float_t A=7.52277e+006;
  Float_t B=-5.80903e+000;
  Float_t Aerr=6.85245e+005;
  Float_t Berr=1.92037e-002;
  //Second part parameters and errors
  Float_t C=2.01719e+011;
  Float_t D=-7.79067e+000;
  Float_t Cerr=7.18183e+010;
  Float_t Derr=6.70584e-002;

  //1st part for calculating the standard deviation of pTpp and Sloss
   cout<<"Sigma pTPP 1st part(0.8-1.2)\t\t\t\t";
   cout<<"Sigma_Sloss 1st part(0.8-1.2)\n\n";

   for(Int_t i=0;i<6;i++){
    
    Float_t Pby_1=file8->GetY()[i];
    Float_t Value1=pow((Pby_1)/(A+Aerr),1/(B+Berr));
    Float_t Value2=pow((Pby_1)/(A+Aerr),1/(B-Berr));
    Float_t Value3=pow((Pby_1)/(A-Aerr),1/(B-Berr));
    Float_t Value4=pow((Pby_1)/(A-Aerr),1/(B+Berr));
   
    Float_t ppx_1=file10->GetX()[i];

    Float_t Sigma_ppx_1=sqrt((pow(Value1-ppx_1,2)+pow(Value2-ppx_1,2)+pow(Value3-ppx_1,2)+pow(Value4-ppx_1,2))/4);
    
   
     //Sigma Sloss
      Float_t Sigma_pTAA=file4->GetY()[i];
      
     
      Float_t pTAA=file8->GetX()[i];
      
     
      Float_t Sigma_Sloss_1=(1/ppx_1)*sqrt(pow(pTAA*Sigma_ppx_1,2)+pow(Sigma_pTAA,2));
     
      
       printf("%lf\t\t\t\t\t%lf\n",Sigma_ppx_1,Sigma_Sloss_1);

  }
   //2nd part for calculating the standard deviation of pTpp and Sloss
  cout<<"Sigma pTpp 2nd part(0.8-1.2)\t\t\t\t";
  cout<<"Sigma Sloss 2nd part(0.8-1.2)\n\n";
  for(Int_t j=0;j<3;j++){
  Float_t Pby_2=file9->GetY()[j];
    Float_t Value1=pow((Pby_2)/(C+Aerr),1/(D+Berr));
    Float_t Value2=pow((Pby_2)/(C+Aerr),1/(D-Berr));
    Float_t Value3=pow((Pby_2)/(C-Aerr),1/(D-Berr));
    Float_t Value4=pow((Pby_2)/(C-Aerr),1/(D+Berr));

    Float_t ppx_2=file10->GetX()[j+6];
   
    Float_t Sigma_ppx_2=sqrt((pow(Value1-ppx_2,2)+pow(Value2-ppx_2,2)+pow(Value3-ppx_2,2)+pow(Value4-ppx_2,2))/4);
    
     
    
     Float_t Sigma_pTAA=file4->GetY()[j+6];
      Float_t pTAA=file9->GetX()[j];
      Float_t Sigma_Sloss_2=(1/ppx_2)*sqrt(pow(pTAA*Sigma_ppx_2,2)+pow(Sigma_pTAA,2));
       printf("%lf\t\t\t\t\t%lf\n",Sigma_ppx_2,Sigma_Sloss_2);
    
  }
  //1.2-2.1
  file11=new TGraph("C:/root/JetsPbPb010(1.2-2.1).txt");
  file12=new TGraph("C:/root/1.2-2.1(Updated).txt");

  //first part parameters and errors
  Float_t A=2.81502e+007;
  Float_t B=-6.22279e+000;
  Float_t Aerr=1.59600e+006;
  Float_t Berr=1.21346e-002;

  // calculating the standard deviation of pTpp and Sloss
   cout<<"Sigma pTPP (1.2-2.1)\t\t\t\t";
   cout<<"Sigma_Sloss (1.2-2.1)\n\n";

   for(Int_t i=0;i<6;i++){
    
    Float_t Pby_1=file11->GetY()[i];
    Float_t Value1=pow((Pby_1)/(A+Aerr),1/(B+Berr));
    Float_t Value2=pow((Pby_1)/(A+Aerr),1/(B-Berr));
    Float_t Value3=pow((Pby_1)/(A-Aerr),1/(B-Berr));
    Float_t Value4=pow((Pby_1)/(A-Aerr),1/(B+Berr));
   
    Float_t ppx_1=file12->GetX()[i];

    Float_t Sigma_ppx_1=sqrt((pow(Value1-ppx_1,2)+pow(Value2-ppx_1,2)+pow(Value3-ppx_1,2)+pow(Value4-ppx_1,2))/4);
    
   
     //Sigma Sloss
      Float_t Sigma_pTAA=file4->GetY()[i];
      
     
      Float_t pTAA=file11->GetX()[i];
      
     
      Float_t Sigma_Sloss_1=(1/ppx_1)*sqrt(pow(pTAA*Sigma_ppx_1,2)+pow(Sigma_pTAA,2));
     
      
       printf("%lf\t\t\t\t\t%lf\n",Sigma_ppx_1,Sigma_Sloss_1);

  }

  
}
