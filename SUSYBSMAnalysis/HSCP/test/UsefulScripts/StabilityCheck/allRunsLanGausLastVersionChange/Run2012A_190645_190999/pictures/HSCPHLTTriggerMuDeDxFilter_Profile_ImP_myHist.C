{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Aug 22 13:23:07 2014) by ROOT version5.32/00
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
   
   TProfile *HSCPHLTTriggerMuDeDxFiltermyHist = new TProfile("HSCPHLTTriggerMuDeDxFiltermyHist","",4,0,4,"");
   HSCPHLTTriggerMuDeDxFiltermyHist->SetBinEntries(1,34);
   HSCPHLTTriggerMuDeDxFiltermyHist->SetBinEntries(3,731);
   HSCPHLTTriggerMuDeDxFiltermyHist->SetBinEntries(4,691);
   HSCPHLTTriggerMuDeDxFiltermyHist->SetBinContent(1,130.5976);
   HSCPHLTTriggerMuDeDxFiltermyHist->SetBinContent(3,2766.781);
   HSCPHLTTriggerMuDeDxFiltermyHist->SetBinContent(4,2600.721);
   HSCPHLTTriggerMuDeDxFiltermyHist->SetBinError(1,22.65338);
   HSCPHLTTriggerMuDeDxFiltermyHist->SetBinError(3,103.4543);
   HSCPHLTTriggerMuDeDxFiltermyHist->SetBinError(4,100.0121);
   HSCPHLTTriggerMuDeDxFiltermyHist->SetEntries(1456);
   HSCPHLTTriggerMuDeDxFiltermyHist->SetStats(0);
   HSCPHLTTriggerMuDeDxFiltermyHist->SetFillColor(1);
   HSCPHLTTriggerMuDeDxFiltermyHist->SetLineStyle(0);
   HSCPHLTTriggerMuDeDxFiltermyHist->SetMarkerStyle(20);
   HSCPHLTTriggerMuDeDxFiltermyHist->SetMarkerSize(0.4);
   HSCPHLTTriggerMuDeDxFiltermyHist->GetXaxis()->SetBinLabel(1,"190645");
   HSCPHLTTriggerMuDeDxFiltermyHist->GetXaxis()->SetBinLabel(2,"190704");
   HSCPHLTTriggerMuDeDxFiltermyHist->GetXaxis()->SetBinLabel(3,"190705");
   HSCPHLTTriggerMuDeDxFiltermyHist->GetXaxis()->SetBinLabel(4,"190738");
   HSCPHLTTriggerMuDeDxFiltermyHist->GetXaxis()->SetBit(TAxis::kLabelsVert);
   HSCPHLTTriggerMuDeDxFiltermyHist->GetXaxis()->SetNdivisions(505);
   HSCPHLTTriggerMuDeDxFiltermyHist->GetXaxis()->SetLabelFont(42);
   HSCPHLTTriggerMuDeDxFiltermyHist->GetXaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerMuDeDxFiltermyHist->GetXaxis()->SetTitleOffset(1.1);
   HSCPHLTTriggerMuDeDxFiltermyHist->GetXaxis()->SetTitleFont(42);
   HSCPHLTTriggerMuDeDxFiltermyHist->GetYaxis()->SetTitle("dE/dx estimator");
   HSCPHLTTriggerMuDeDxFiltermyHist->GetYaxis()->SetLabelFont(42);
   HSCPHLTTriggerMuDeDxFiltermyHist->GetYaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerMuDeDxFiltermyHist->GetYaxis()->SetLabelSize(0.05);
   HSCPHLTTriggerMuDeDxFiltermyHist->GetYaxis()->SetTitleOffset(0.9);
   HSCPHLTTriggerMuDeDxFiltermyHist->GetYaxis()->SetTitleFont(42);
   HSCPHLTTriggerMuDeDxFiltermyHist->GetZaxis()->SetLabelFont(42);
   HSCPHLTTriggerMuDeDxFiltermyHist->GetZaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerMuDeDxFiltermyHist->GetZaxis()->SetLabelSize(0.05);
   HSCPHLTTriggerMuDeDxFiltermyHist->GetZaxis()->SetTitleFont(42);
   HSCPHLTTriggerMuDeDxFiltermyHist->Draw("E1");
   
   TPaveText *pt = new TPaveText(1.649038e-314,2.370221e-310,1.649038e-314,1.649038e-314,"brNDC");
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
