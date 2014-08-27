{
//=========Macro generated from canvas: c1/c1
//=========  (Thu Aug 21 17:40:39 2014) by ROOT version5.32/00
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptTitle(0);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.07);
   c1->SetRightMargin(0.03);
   c1->SetTopMargin(0.06);
   c1->SetBottomMargin(0.15);
   c1->SetFrameFillStyle(0);
   c1->SetFrameBorderMode(0);
   
   TProfile *HSCPHLTTriggerMetDeDxFiltermyHist = new TProfile("HSCPHLTTriggerMetDeDxFiltermyHist","",2,0,2,"");
   HSCPHLTTriggerMetDeDxFiltermyHist->SetBinEntries(1,25);
   HSCPHLTTriggerMetDeDxFiltermyHist->SetBinEntries(2,400);
   HSCPHLTTriggerMetDeDxFiltermyHist->SetBinContent(1,94.42206);
   HSCPHLTTriggerMetDeDxFiltermyHist->SetBinContent(2,1527.254);
   HSCPHLTTriggerMetDeDxFiltermyHist->SetBinError(1,19.22879);
   HSCPHLTTriggerMetDeDxFiltermyHist->SetBinError(2,77.38164);
   HSCPHLTTriggerMetDeDxFiltermyHist->SetEntries(425);
   HSCPHLTTriggerMetDeDxFiltermyHist->SetStats(0);
   HSCPHLTTriggerMetDeDxFiltermyHist->SetFillColor(1);
   HSCPHLTTriggerMetDeDxFiltermyHist->SetLineStyle(0);
   HSCPHLTTriggerMetDeDxFiltermyHist->SetMarkerStyle(20);
   HSCPHLTTriggerMetDeDxFiltermyHist->SetMarkerSize(0.4);
   HSCPHLTTriggerMetDeDxFiltermyHist->GetXaxis()->SetBinLabel(1,"204238");
   HSCPHLTTriggerMetDeDxFiltermyHist->GetXaxis()->SetBinLabel(2,"204250");
   HSCPHLTTriggerMetDeDxFiltermyHist->GetXaxis()->SetBit(TAxis::kLabelsVert);
   HSCPHLTTriggerMetDeDxFiltermyHist->GetXaxis()->SetNdivisions(505);
   HSCPHLTTriggerMetDeDxFiltermyHist->GetXaxis()->SetLabelFont(42);
   HSCPHLTTriggerMetDeDxFiltermyHist->GetXaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerMetDeDxFiltermyHist->GetXaxis()->SetTitleOffset(1.1);
   HSCPHLTTriggerMetDeDxFiltermyHist->GetXaxis()->SetTitleFont(42);
   HSCPHLTTriggerMetDeDxFiltermyHist->GetYaxis()->SetTitle("dE/dx estimator");
   HSCPHLTTriggerMetDeDxFiltermyHist->GetYaxis()->SetLabelFont(42);
   HSCPHLTTriggerMetDeDxFiltermyHist->GetYaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerMetDeDxFiltermyHist->GetYaxis()->SetLabelSize(0.05);
   HSCPHLTTriggerMetDeDxFiltermyHist->GetYaxis()->SetTitleOffset(0.9);
   HSCPHLTTriggerMetDeDxFiltermyHist->GetYaxis()->SetTitleFont(42);
   HSCPHLTTriggerMetDeDxFiltermyHist->GetZaxis()->SetLabelFont(42);
   HSCPHLTTriggerMetDeDxFiltermyHist->GetZaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerMetDeDxFiltermyHist->GetZaxis()->SetLabelSize(0.05);
   HSCPHLTTriggerMetDeDxFiltermyHist->GetZaxis()->SetTitleFont(42);
   HSCPHLTTriggerMetDeDxFiltermyHist->Draw("E1");
   
   TPaveText *pt = new TPaveText(5.601391e-316,2.352142e-310,6.149692e-316,5.887897e-316,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(12);
   pt->SetTextFont(43);
   pt->SetTextSize(21);
   TText *text = pt->AddText("");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
