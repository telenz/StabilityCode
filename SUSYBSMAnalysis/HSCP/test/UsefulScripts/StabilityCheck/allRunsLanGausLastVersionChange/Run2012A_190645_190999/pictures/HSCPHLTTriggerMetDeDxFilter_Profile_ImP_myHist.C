{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Aug 22 13:20:43 2014) by ROOT version5.32/00
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
   
   TProfile *HSCPHLTTriggerMetDeDxFiltermyHist = new TProfile("HSCPHLTTriggerMetDeDxFiltermyHist","",4,0,4,"");
   HSCPHLTTriggerMetDeDxFiltermyHist->SetBinEntries(1,2);
   HSCPHLTTriggerMetDeDxFiltermyHist->SetBinEntries(3,117);
   HSCPHLTTriggerMetDeDxFiltermyHist->SetBinEntries(4,83);
   HSCPHLTTriggerMetDeDxFiltermyHist->SetBinContent(1,7.788199);
   HSCPHLTTriggerMetDeDxFiltermyHist->SetBinContent(3,429.5851);
   HSCPHLTTriggerMetDeDxFiltermyHist->SetBinContent(4,314.6046);
   HSCPHLTTriggerMetDeDxFiltermyHist->SetBinError(1,5.516929);
   HSCPHLTTriggerMetDeDxFiltermyHist->SetBinError(3,40.07781);
   HSCPHLTTriggerMetDeDxFiltermyHist->SetBinError(4,34.92404);
   HSCPHLTTriggerMetDeDxFiltermyHist->SetEntries(202);
   HSCPHLTTriggerMetDeDxFiltermyHist->SetStats(0);
   HSCPHLTTriggerMetDeDxFiltermyHist->SetFillColor(1);
   HSCPHLTTriggerMetDeDxFiltermyHist->SetLineStyle(0);
   HSCPHLTTriggerMetDeDxFiltermyHist->SetMarkerStyle(20);
   HSCPHLTTriggerMetDeDxFiltermyHist->SetMarkerSize(0.4);
   HSCPHLTTriggerMetDeDxFiltermyHist->GetXaxis()->SetBinLabel(1,"190645");
   HSCPHLTTriggerMetDeDxFiltermyHist->GetXaxis()->SetBinLabel(2,"190704");
   HSCPHLTTriggerMetDeDxFiltermyHist->GetXaxis()->SetBinLabel(3,"190705");
   HSCPHLTTriggerMetDeDxFiltermyHist->GetXaxis()->SetBinLabel(4,"190738");
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
   
   TPaveText *pt = new TPaveText(1.656365e-314,7.291122e-304,2.370219e-310,1.572947e+93,"brNDC");
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
