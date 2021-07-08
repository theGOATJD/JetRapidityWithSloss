
{
   c1 = new TCanvas("c1","My Plots",3000,1000);
 
 TMultiGraph *mg = new TMultiGraph;
 /* g5 = new TGraph("C:/root/0-2.1.txt");
   g5->SetMarkerStyle(33);
    g5->SetMarkerColor(kBlue-6);
   g5->SetTitle("S_{loss}(0<y<2.1)");
   g5->SetFillStyle(0);
 */
    g1 = new TGraph("C:/root/0-0.3(Updated).txt");
   g1->SetMarkerStyle(20);
    g1->SetMarkerColor(kRed);
   g1->SetTitle("S_{loss}(0<y<0.3)");
   g1->SetFillStyle(0);
   
  g2 = new TGraph("C:/root/0.3-0.8(Updated).txt");
   g2->SetMarkerStyle(20);
   g2->SetMarkerColor(kViolet);
   
   g2->SetTitle("S_{loss}(0.3<y<0.8))");
   g2->SetFillStyle(0);
  
 
  g3 = new TGraph("C:/root/0.8-1.2(Updated).txt");
   g3->SetMarkerStyle(20);
   g3->SetMarkerColor(kBlack);
  g3->SetFillStyle(0);
   g3->SetTitle("S_{loss}(0.8<y<1.2)");
 
    g4= new TGraph("C:/root/1.2-2.1(Updated).txt");
     g4->SetMarkerStyle(20);
   g4->SetMarkerColor(kBlue);
  g4->SetFillStyle(0);
  g4->SetTitle("S_{loss}(1.2<y<2.1)");
  
  mg->SetTitle("S_{loss}(0-10%,#sqrt{S_{NN}}=2.76 TeV);p_{T}(GeV/c);S_{loss}");
  // mg->Add(g5,"AP");
  mg->Add(g1,"AP");
  mg->Add(g2,"AP");
  mg->Add(g3,"AP");
  mg->Add(g4,"AP");
  mg->SetMinimum(0);
  mg->SetMaximum(0.2);
  
    mg->Draw("a");
     c1->BuildLegend();
}
