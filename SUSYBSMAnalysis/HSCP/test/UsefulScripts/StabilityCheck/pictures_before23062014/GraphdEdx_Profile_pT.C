{
//=========Macro generated from canvas: c1/c1,
//=========  (Tue Mar 18 15:16:57 2014) by ROOT version5.32/00
   TCanvas *c1 = new TCanvas("c1", "c1,",0,0,1200,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptTitle(0);
   c1->Range(0.4929858,49.35775,0.8471947,63.1936);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetRightMargin(0.03);
   c1->SetTopMargin(0.06);
   c1->SetBottomMargin(0.15);
   c1->SetFrameFillStyle(0);
   c1->SetFrameBorderMode(0);
   c1->SetFrameFillStyle(0);
   c1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(4);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,0.5508399,60.44226);
   gre->SetPointError(0,0,1.010329);
   gre->SetPoint(1,0.5797014,56.34392);
   gre->SetPointError(1,0,3.999931);
   gre->SetPoint(2,0.7240087,60.00667);
   gre->SetPointError(2,0,0.1909484);
   gre->SetPoint(3,0.8105931,59.83253);
   gre->SetPointError(3,0,0.198802);
   
   TH1F *Graph_Graph9 = new TH1F("Graph_Graph9","",100,0.5248646,0.8365684);
   Graph_Graph9->SetMinimum(51.43313);
   Graph_Graph9->SetMaximum(62.36345);
   Graph_Graph9->SetDirectory(0);
   Graph_Graph9->SetStats(0);
   Graph_Graph9->SetLineStyle(0);
   Graph_Graph9->SetMarkerStyle(20);
   Graph_Graph9->GetXaxis()->SetTitle("Int. Luminosity (/pb)");
   Graph_Graph9->GetXaxis()->SetLabelFont(42);
   Graph_Graph9->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph9->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph9->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph9->GetXaxis()->SetTitleFont(42);
   Graph_Graph9->GetYaxis()->SetTitle("<p_{T}> (GeV/c)");
   Graph_Graph9->GetYaxis()->SetLabelFont(42);
   Graph_Graph9->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph9->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph9->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph9->GetYaxis()->SetTitleFont(42);
   Graph_Graph9->GetZaxis()->SetLabelFont(42);
   Graph_Graph9->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph9->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph9->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph9);
   
   gre->Draw("ap");
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
