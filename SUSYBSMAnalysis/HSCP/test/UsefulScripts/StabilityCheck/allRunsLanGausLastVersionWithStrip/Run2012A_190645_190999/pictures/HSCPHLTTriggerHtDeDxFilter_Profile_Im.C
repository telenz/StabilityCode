{
//=========Macro generated from canvas: c1/c1
//=========  (Thu Aug 21 17:27:39 2014) by ROOT version5.32/00
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
   
   TProfile *HSCPHLTTriggerHtDeDxFilterdEdxMProf = new TProfile("HSCPHLTTriggerHtDeDxFilterdEdxMProf","",4,0,4,"");
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->SetBinEntries(3,5);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->SetBinEntries(4,5);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->SetBinContent(3,16.94685);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->SetBinContent(4,17.19585);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->SetBinError(3,7.588276);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->SetBinError(4,7.704003);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->SetEntries(10);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->SetStats(0);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->SetFillColor(1);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->SetLineStyle(0);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->SetMarkerStyle(20);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->SetMarkerSize(0.4);
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->GetXaxis()->SetBinLabel(1,"190645");
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->GetXaxis()->SetBinLabel(2,"190704");
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->GetXaxis()->SetBinLabel(3,"190705");
   HSCPHLTTriggerHtDeDxFilterdEdxMProf->GetXaxis()->SetBinLabel(4,"190738");
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
   
   TPaveText *pt = new TPaveText(9.537014e-316,2.335724e-310,9.348044e-316,9.498362e-316,"brNDC");
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
