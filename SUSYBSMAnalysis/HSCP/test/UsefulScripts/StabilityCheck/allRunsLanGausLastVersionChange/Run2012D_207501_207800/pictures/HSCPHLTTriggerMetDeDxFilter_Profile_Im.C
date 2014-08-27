{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Aug 22 13:25:13 2014) by ROOT version5.32/00
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
   
   TProfile *HSCPHLTTriggerMetDeDxFilterdEdxMProf = new TProfile("HSCPHLTTriggerMetDeDxFilterdEdxMProf","",3,0,3,"");
   HSCPHLTTriggerMetDeDxFilterdEdxMProf->SetBinEntries(1,373);
   HSCPHLTTriggerMetDeDxFilterdEdxMProf->SetBinEntries(2,20);
   HSCPHLTTriggerMetDeDxFilterdEdxMProf->SetBinEntries(3,15);
   HSCPHLTTriggerMetDeDxFilterdEdxMProf->SetBinContent(1,1233.58);
   HSCPHLTTriggerMetDeDxFilterdEdxMProf->SetBinContent(2,67.22062);
   HSCPHLTTriggerMetDeDxFilterdEdxMProf->SetBinContent(3,50.85771);
   HSCPHLTTriggerMetDeDxFilterdEdxMProf->SetBinError(1,64.14273);
   HSCPHLTTriggerMetDeDxFilterdEdxMProf->SetBinError(2,15.06461);
   HSCPHLTTriggerMetDeDxFilterdEdxMProf->SetBinError(3,13.18991);
   HSCPHLTTriggerMetDeDxFilterdEdxMProf->SetEntries(408);
   HSCPHLTTriggerMetDeDxFilterdEdxMProf->SetStats(0);
   HSCPHLTTriggerMetDeDxFilterdEdxMProf->SetFillColor(1);
   HSCPHLTTriggerMetDeDxFilterdEdxMProf->SetLineStyle(0);
   HSCPHLTTriggerMetDeDxFilterdEdxMProf->SetMarkerStyle(20);
   HSCPHLTTriggerMetDeDxFilterdEdxMProf->SetMarkerSize(0.4);
   HSCPHLTTriggerMetDeDxFilterdEdxMProf->GetXaxis()->SetBinLabel(1,"207515");
   HSCPHLTTriggerMetDeDxFilterdEdxMProf->GetXaxis()->SetBinLabel(2,"207517");
   HSCPHLTTriggerMetDeDxFilterdEdxMProf->GetXaxis()->SetBinLabel(3,"207518");
   HSCPHLTTriggerMetDeDxFilterdEdxMProf->GetXaxis()->SetBit(TAxis::kLabelsVert);
   HSCPHLTTriggerMetDeDxFilterdEdxMProf->GetXaxis()->SetNdivisions(505);
   HSCPHLTTriggerMetDeDxFilterdEdxMProf->GetXaxis()->SetLabelFont(42);
   HSCPHLTTriggerMetDeDxFilterdEdxMProf->GetXaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerMetDeDxFilterdEdxMProf->GetXaxis()->SetTitleOffset(1.1);
   HSCPHLTTriggerMetDeDxFilterdEdxMProf->GetXaxis()->SetTitleFont(42);
   HSCPHLTTriggerMetDeDxFilterdEdxMProf->GetYaxis()->SetTitle("dE/dx estimator");
   HSCPHLTTriggerMetDeDxFilterdEdxMProf->GetYaxis()->SetLabelFont(42);
   HSCPHLTTriggerMetDeDxFilterdEdxMProf->GetYaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerMetDeDxFilterdEdxMProf->GetYaxis()->SetLabelSize(0.05);
   HSCPHLTTriggerMetDeDxFilterdEdxMProf->GetYaxis()->SetTitleOffset(0.9);
   HSCPHLTTriggerMetDeDxFilterdEdxMProf->GetYaxis()->SetTitleFont(42);
   HSCPHLTTriggerMetDeDxFilterdEdxMProf->GetZaxis()->SetLabelFont(42);
   HSCPHLTTriggerMetDeDxFilterdEdxMProf->GetZaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerMetDeDxFilterdEdxMProf->GetZaxis()->SetLabelSize(0.05);
   HSCPHLTTriggerMetDeDxFilterdEdxMProf->GetZaxis()->SetTitleFont(42);
   HSCPHLTTriggerMetDeDxFilterdEdxMProf->Draw("E1");
   
   TPaveText *pt = new TPaveText(6.300503e-316,2.321585e-310,6.132008e-316,6.131872e-316,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(12);
   pt->SetTextFont(43);
   pt->SetTextSize(21);
   TText *text = pt->AddText("");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
