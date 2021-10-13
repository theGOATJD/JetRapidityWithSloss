{
   c1 = new TCanvas("c1","My Plots",3000,1000);
 
 TMultiGraph *mg = new TMultiGraph;
 /* g5 = new TGraph("C:/root/0-2.1.txt");
   g5->SetMarkerStyle(33);
    g5->SetMarkerColor(kBlue-6);
   g5->SetTitle("S_{loss}(0<y<2.1)");
   g5->SetFillStyle(0);
 */
 f1= new TGraphErrors("C:/root/0-0.3(WithErrors).txt","%lg %lg %lg");
   f1->SetMarkerStyle(20);
    f1->SetMarkerColor(kRed);
   f1->SetTitle("S_{loss}(0<y<0.3)");
   f1->SetFillStyle(0);
   
   f2= new TGraphErrors("C:/root/0.3-0.8(WithErrors).txt","%lg %lg %lg");
    f2->SetMarkerStyle(20);
   f2->SetMarkerColor(kViolet);
   f2->SetTitle("S_{loss}(0.3<y<0.8)");
   f2->SetFillStyle(0);
  
 
   f3= new TGraphErrors("C:/root/0.8-1.2(WithErrors).txt","%lg %lg %lg");
   f3->SetMarkerStyle(20);
   f3->SetMarkerColor(kBlack);
  f3->SetFillStyle(0);
   f3->SetTitle("S_{loss}(0.8<y<1.2)");
 
   f4= new TGraphErrors("C:/root/1.2-2.1(WithErrors).txt","%lg %lg %lg");
     f4->SetMarkerStyle(20);
   f4->SetMarkerColor(kBlue);
  f4->SetFillStyle(0);
  f4->SetTitle("S_{loss}(1.2<y<2.1)");
  
  mg->SetTitle("S_{loss}(0-10%,#sqrt{S_{NN}}=2.76 TeV);p_{T}(GeV/c);S_{loss}");
  // mg->Add(g5,"AP");
  mg->Add(f1,"AP");
  mg->Add(f2,"AP");
  mg->Add(f3,"AP");
  mg->Add(f4,"AP");
  mg->SetMinimum(0);
  mg->SetMaximum(0.3);
  
    mg->Draw("a");
   
     c1->BuildLegend();
}
