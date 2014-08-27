{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Aug 22 13:35:37 2014) by ROOT version5.32/00
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
   
   TProfile *HSCPHLTTriggerHtDeDxFilterdEdxMProf = new TProfile("HSCPHLTTriggerHtDeDxFilterdEdxMProf","",1,0,1,"");
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->SetBinEntries(1,24);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->SetBinContent(1,76.83435);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->SetBinError(1,15.72168);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->SetEntries(24);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->SetStats(0);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->SetFillColor(1);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->SetLineStyle(0);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->SetMarkerStyle(20);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->SetMarkerSize(0.4);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->GetXaxis()->SetBinLabel(1,"203894");
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->GetXaxis()->SetBit(TAxis::kLabelsVert);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->GetXaxis()->SetNdivisions(505);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->GetXaxis()->SetLabelFont(42);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->GetXaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->GetXaxis()->SetTitleOffset(1.1);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->GetXaxis()->SetTitleFont(42);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->GetYaxis()->SetTitle("dE/dx estimator");
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->GetYaxis()->SetLabelFont(42);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->GetYaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->GetYaxis()->SetLabelSize(0.05);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->GetYaxis()->SetTitleOffset(0.9);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->GetYaxis()->SetTitleFont(42);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->GetZaxis()->SetLabelFont(42);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->GetZaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->GetZaxis()->SetLabelSize(0.05);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->GetZaxis()->SetTitleFont(42);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->Draw("E1");
   
   TPaveText *pt = new TPaveText(0,4.243997e-314,3.952525e-322,2.371515e-322,"brNDC");
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
