{
c1 = new TCanvas("c1","Fitting",5000,2000);

 
   //Plot pp spectra scaled up by TAA with a fit
    g1=new TGraphErrors("C:/root/JetsPPScaledUpByTAA.txt","%lg %lg %lg","");
    g1->SetMarkerStyle(21);
    g1->SetTitle("pp spectra with a fit(0-10%)(0-0.3);p_{T}(GeV);Cross Section");
    g1->SetFillStyle(0);
    g1->SetMinimum(0.0000000004851);
     g1->SetMaximum(30);
      g1->Draw("AP");
      g1->SetMarkerColor(kRed);

      //Fitting
      
    TF1* f1= new TF1("f1", "[0]*x^[1]",50,200);
   
    f1->SetParNames("A","B");
    f1->SetParameters(  2.03008e+007 ,  -6.00790e+000);
  f1->SetLineColor(kBlack);
 
   f1->Draw("same");
    f1->SetTitle("Fitting");
    
   
    
    g1->Fit(f1);
    
     


     
 c1->BuildLegend();
    c1.SetLogy();


   
  
    
   
    
     
    // Another Canvas for  Sloss 
    c2= new TCanvas("c2","My Plots",5000,2000);
   
    
      
     //Get the parameters from previous fitting
  Double_t a=f1->GetParameter("A");
  Double_t b=f1->GetParameter("B");
  
   // Get PbPb data from the following file
   s1= new TGraph("C:/root/JetsPbPb010.txt");
   
    // Create a new graph called sr1 for plotting the Sloss value
   sr1= new TGraph();
   Int_t j;
    
    
    
   //There are 6 data points from the PbPb data
    for(j=0;j<6;j++){
     //  say that the transverse momemtum for PbPb data is Pbx
     Double_t Pbx=s1->GetX()[j];
     //say that whatever value on the y axis for PbPb data is Pby
     Double_t Pby=s1->GetY()[j];
    
     Double_t PPx=pow((Pby)/a,1/b);
    
     //print out the corresponding transeverse momentum and the Sloss
     printf("%lf\t%lf\n",PPx,(PPx-Pbx)/PPx);
     sr1->SetPoint(j,PPx,(PPx-Pbx)/PPx);
     
   }
   
   
   //entitle
   sr1->SetTitle("S_{loss}(0-0.3);p_{T}(GeV);S_{loss}"); 
sr1->SetMarkerStyle(20);
 sr1->SetFillStyle(0);
 sr1->SetMinimum(0);
   sr1->SetMaximum(0.5);
   
   sr1->Draw("AP");
   
 c2->BuildLegend()->SetTextSize(0.05);
 
 //0.3-0.8
 c3 = new TCanvas("c3","Fitting",5000,2000);

 
   //Plot pp spectra scaled up by TAA with a fit
    g2=new TGraphErrors("C:/root/JetsPPScaledUpByTAA(0.3-0.8).txt","%lg %lg %lg","");
    g2->SetMarkerStyle(21);
    g2->SetTitle("pp spectra with a fit(0-10%)(0.3-0.8);p_{T}(GeV);Cross Section");
    g2->SetFillStyle(0);
    g2->SetMinimum(0.0000000004851);
     g2->SetMaximum(30);
      g2->Draw("AP");
      g2->SetMarkerColor(kRed);

      //Fitting
      
    TF1* f3= new TF1("f3", "[0]*x^[1]",50,200);
    
    f3->SetParNames("A","B");
    f3->SetParameters(  2.03008e+007 ,  -6.00790e+000);
  f3->SetLineColor(kBlack);
 
   f3->Draw("same");
    f3->SetTitle("Fitting");
    
  

    
    
    g2->Fit(f3);
   
     


     
 c3->BuildLegend();
    c3.SetLogy();


   
  
    
   
    
     
    // Another Canvas for  Sloss 
    c4= new TCanvas("c4","My Plots",5000,2000);
   
    
      
     //Get the parameters from previous fitting
  Double_t a=f3->GetParameter("A");
  Double_t b=f3->GetParameter("B");
   
   // Get PbPb data from the following file
   s3= new TGraph("C:/root/JetsPbPb010(0.3-0.8).txt");
   
    // Create a new graph called sr1 for plotting the Sloss value
   sr2= new TGraph();
   Int_t j;
   

   //There are 6 data points from the PbPb data
    for(j=0;j<6;j++){
     //  say that the transverse momemtum for PbPb data is Pbx
     Double_t Pbx=s3->GetX()[j];
     //say that whatever value on the y axis for PbPb data is Pby
     Double_t Pby=s3->GetY()[j];
     Double_t PPx=pow((Pby)/a,1/b);
    
     //print out the corresponding transeverse momentum and the Sloss
     printf("%lf\t%lf\n",PPx,(PPx-Pbx)/PPx);
     sr2->SetPoint(j,PPx,(PPx-Pbx)/PPx);
     
   }
    
  
    
   
   //entitle
   sr2->SetTitle("S_{loss}(0.3-0.8);p_{T}(GeV);S_{loss}"); 
sr2->SetMarkerStyle(20);
 sr2->SetFillStyle(0);
 sr2->SetMinimum(0);
   sr2->SetMaximum(0.5);
   sr2->Draw("AP");
   
 c4->BuildLegend()->SetTextSize(0.05);
 //0.8-1.2
  c5 = new TCanvas("c5","Fitting",5000,2000);

 
   //Plot pp spectra scaled up by TAA with a fit
    g3=new TGraphErrors("C:/root/JetsPPScaledUpByTAA(0.8-1.2).txt","%lg %lg %lg","");
    g3->SetMarkerStyle(21);
    g3->SetTitle("pp spectra with a fit(0-10%)(0.8-1.2);p_{T}(GeV);Cross Section");
    g3->SetFillStyle(0);
    g3->SetMinimum(0.0000000004851);
     g3->SetMaximum(30);
      g3->Draw("AP");
      g3->SetMarkerColor(kRed);

      //Fitting
      
    TF1* f5= new TF1("f5", "[0]*x^[1]",50,200);
    
    f5->SetParNames("A","B");
    f5->SetParameters(  2.03008e+007 ,  -6.00790e+000);
  f5->SetLineColor(kBlack);
 
   f5->Draw("same");
    f5->SetTitle("Fitting");
    
  

    
    g3->Fit(f5);
   
     


     
 c5->BuildLegend();
    c5.SetLogy();


   
  
    
   
    
     
    // Another Canvas for  Sloss 
    c6= new TCanvas("c6","My Plots",5000,2000);
   
    
      
     //Get the parameters from previous fitting
  Double_t a=f5->GetParameter("A");
  Double_t b=f5->GetParameter("B");
  
   // Get PbPb data from the following file
   s5= new TGraph("C:/root/JetsPbPb010(0.8-1.2).txt");
   
    // Create a new graph called sr1 for plotting the Sloss value
   sr3= new TGraph();
   Int_t j;
    

   //There are 6 data points from the PbPb data
    for(j=0;j<6;j++){
     //  say that the transverse momemtum for PbPb data is Pbx
     Double_t Pbx=s5->GetX()[j];
     //say that whatever value on the y axis for PbPb data is Pby
     Double_t Pby=s5->GetY()[j];
     Double_t PPx=pow((Pby)/a,1/b);
    
     //print out the corresponding transeverse momentum and the Sloss
     printf("%lf\t%lf\n",PPx,(PPx-Pbx)/PPx);
     sr3->SetPoint(j,PPx,(PPx-Pbx)/PPx);
     
   }
    
   
   
   //entitle
   sr3->SetTitle("S_{loss}(0.8-1.2);p_{T}(GeV);S_{loss}"); 
sr3->SetMarkerStyle(20);
 sr3->SetFillStyle(0);
 sr3->SetMinimum(0);
   sr3->SetMaximum(0.5);
   sr3->Draw("AP");
   
 c6->BuildLegend()->SetTextSize(0.05);
 //1.2-2.1
 c7 = new TCanvas("c7","Fitting",5000,2000);

 
   //Plot pp spectra scaled up by TAA with a fit
    g4=new TGraphErrors("C:/root/JetsPPScaledUpByTAA(1.2-2.1).txt","%lg %lg %lg","");
    g4->SetMarkerStyle(21);
    g4->SetTitle("pp spectra with a fit(0-10%)(1.2-2.1);p_{T}(GeV);Cross Section");
    g4->SetFillStyle(0);
    g4->SetMinimum(0.0000000004851);
     g4->SetMaximum(30);
      g4->Draw("AP");
      g4->SetMarkerColor(kRed);

      //Fitting
    TF1* f7= new TF1("f7", "[0]*x^[1]",50,179);
    TF1* f8= new TF1("f8", "[0]*x^[1]",177,500);
    TF1* total4= new TF1("total4","[0]*x^[1]+[0]*x^[1]",50,500);
  f7->SetParNames("A","B");
  f7->SetParameters(  7.18296e+006, -5.77399e+000);
  f7->SetLineColor(kBlack);
 
   f7->Draw("same");
    f7->SetTitle("Fitting");

    

     g4->Fit(f7);
   
 c7->BuildLegend();
    c7.SetLogy();


    
   

     
    // Another Canvas for  Sloss 
    c8= new TCanvas("c8","My Plots",5000,2000);
   
     
      
     //Get the parameters from previous fitting
  Double_t a=f7->GetParameter("A");
  Double_t b=f7->GetParameter("B");
 
  //Get PbPb data from the following file
   s7= new TGraph("C:/root/JetsPbPb010(1.2-2.1).txt");
   
   //Create a new graph called sr1 for plotting the Sloss value
   sr4= new TGraph();
   Int_t j;
   

   //There are 6 data points from the PbPb data
   for(j=0;j<6;j++){
     //  say that the transverse momemtum for PbPb data is Pbx
     Double_t Pbx=s7->GetX()[j];
     //say that whatever value on the y axis for PbPb data is Pby
     Double_t Pby=s7->GetY()[j];
     Double_t PPx=pow((Pby)/a,1/b);
     //print out the corresponding transeverse momentum and the Sloss
     printf("%lf\t%lf\n",PPx,(PPx-Pbx)/PPx);
     sr4->SetPoint(j,PPx,(PPx-Pbx)/PPx);
   }
   
  
   //entitle
   sr4->SetTitle("S_{loss}(1.2-2.1);p_{T}(GeV);S_{loss}"); 
sr4->SetMarkerStyle(20);
 sr4->SetFillStyle(0);
 sr4->SetMinimum(0);
   sr4->SetMaximum(0.5);
   sr4->Draw("AP");
   
 c8->BuildLegend()->SetTextSize(0.05);
 
}
