{
//=========Macro generated from canvas: c1/c1
//=========  (Thu Aug 21 17:27:41 2014) by ROOT version5.32/00
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
   
   TProfile *HSCPHLTTriggerHtDeDxFilterdEdxMSProf = new TProfile("HSCPHLTTriggerHtDeDxFilterdEdxMSProf","",4,0,4,"");
   HSCPHLTTriggerHtDeDxFilterdEdxMSProf->SetBinEntries(3,5);
   HSCPHLTTriggerHtDeDxFilterdEdxMSProf->SetBinEntries(4,5);
   HSCPHLTTriggerHtDeDxFilterdEdxMSProf->SetBinContent(3,17.21431);
   HSCPHLTTriggerHtDeDxFilterdEdxMSProf->SetBinContent(4,17.00897);
   HSCPHLTTriggerHtDeDxFilterdEdxMSProf->SetBinError(3,7.707705);
   HSCPHLTTriggerHtDeDxFilterdEdxMSProf->SetBinError(4,7.624376);
   HSCPHLTTriggerHtDeDxFilterdEdxMSProf->SetEntries(10);
   HSCPHLTTriggerHtDeDxFilterdEdxMSProf->SetStats(0);
   HSCPHLTTriggerHtDeDxFilterdEdxMSProf->SetFillColor(1);
   HSCPHLTTriggerHtDeDxFilterdEdxMSProf->SetLineStyle(0);
   HSCPHLTTriggerHtDeDxFilterdEdxMSProf->SetMarkerStyle(20);
   HSCPHLTTriggerHtDeDxFilterdEdxMSProf->SetMarkerSize(0.4);
   HSCPHLTTriggerHtDeDxFilterdEdxMSProf->GetXaxis()->SetBinLabel(1,"190645");
   HSCPHLTTriggerHtDeDxFilterdEdxMSProf->GetXaxis()->SetBinLabel(2,"190704");
   HSCPHLTTriggerHtDeDxFilterdEdxMSProf->GetXaxis()->SetBinLabel(3,"190705");
   HSCPHLTTriggerHtDeDxFilterdEdxMSProf->GetXaxis()->SetBinLabel(4,"190738");
   HSCPHLTTriggerHtDeDxFilterdEdxMSProf->GetXaxis()->SetBit(TAxis::kLabelsVert);
   HSCPHLTTriggerHtDeDxFilterdEdxMSProf->GetXaxis()->SetNdivisions(505);
   HSCPHLTTriggerHtDeDxFilterdEdxMSProf->GetXaxis()->SetLabelFont(42);
   HSCPHLTTriggerHtDeDxFilterdEdxMSProf->GetXaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerHtDeDxFilterdEdxMSProf->GetXaxis()->SetTitleOffset(1.1);
   HSCPHLTTriggerHtDeDxFilterdEdxMSProf->GetXaxis()->SetTitleFont(42);
   HSCPHLTTriggerHtDeDxFilterdEdxMSProf->GetYaxis()->SetTitle("dE/dx estimator");
   HSCPHLTTriggerHtDeDxFilterdEdxMSProf->GetYaxis()->SetLabelFont(42);
   HSCPHLTTriggerHtDeDxFilterdEdxMSProf->GetYaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerHtDeDxFilterdEdxMSProf->GetYaxis()->SetLabelSize(0.05);
   HSCPHLTTriggerHtDeDxFilterdEdxMSProf->GetYaxis()->SetTitleOffset(0.9);
   HSCPHLTTriggerHtDeDxFilterdEdxMSProf->GetYaxis()->SetTitleFont(42);
   HSCPHLTTriggerHtDeDxFilterdEdxMSProf->GetZaxis()->SetLabelFont(42);
   HSCPHLTTriggerHtDeDxFilterdEdxMSProf->GetZaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerHtDeDxFilterdEdxMSProf->GetZaxis()->SetLabelSize(0.05);
   HSCPHLTTriggerHtDeDxFilterdEdxMSProf->GetZaxis()->SetTitleFont(42);
   HSCPHLTTriggerHtDeDxFilterdEdxMSProf->Draw("E1");
   
   TPaveText *pt = new TPaveText(8.199495e-316,9.348179e-316,2.335722e-310,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(12);
   pt->SetTextFont(43);
   pt->SetTextSize(21);
   TText *text = pt->AddText("f");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
