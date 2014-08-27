{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Aug 22 13:21:36 2014) by ROOT version5.32/00
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
   
   TProfile *HSCPHLTTriggerMetDeDxFilterdEdxMPProf = new TProfile("HSCPHLTTriggerMetDeDxFilterdEdxMPProf","",1,0,1,"");
   HSCPHLTTriggerMetDeDxFilterdEdxMPProf->SetBinEntries(1,2);
   HSCPHLTTriggerMetDeDxFilterdEdxMPProf->SetBinContent(1,5.946058);
   HSCPHLTTriggerMetDeDxFilterdEdxMPProf->SetBinError(1,4.212426);
   HSCPHLTTriggerMetDeDxFilterdEdxMPProf->SetEntries(2);
   HSCPHLTTriggerMetDeDxFilterdEdxMPProf->SetStats(0);
   HSCPHLTTriggerMetDeDxFilterdEdxMPProf->SetFillColor(1);
   HSCPHLTTriggerMetDeDxFilterdEdxMPProf->SetLineStyle(0);
   HSCPHLTTriggerMetDeDxFilterdEdxMPProf->SetMarkerStyle(20);
   HSCPHLTTriggerMetDeDxFilterdEdxMPProf->SetMarkerSize(0.4);
   HSCPHLTTriggerMetDeDxFilterdEdxMPProf->GetXaxis()->SetBinLabel(1,"205086");
   HSCPHLTTriggerMetDeDxFilterdEdxMPProf->GetXaxis()->SetBit(TAxis::kLabelsVert);
   HSCPHLTTriggerMetDeDxFilterdEdxMPProf->GetXaxis()->SetNdivisions(505);
   HSCPHLTTriggerMetDeDxFilterdEdxMPProf->GetXaxis()->SetLabelFont(42);
   HSCPHLTTriggerMetDeDxFilterdEdxMPProf->GetXaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerMetDeDxFilterdEdxMPProf->GetXaxis()->SetTitleOffset(1.1);
   HSCPHLTTriggerMetDeDxFilterdEdxMPProf->GetXaxis()->SetTitleFont(42);
   HSCPHLTTriggerMetDeDxFilterdEdxMPProf->GetYaxis()->SetTitle("dE/dx estimator");
   HSCPHLTTriggerMetDeDxFilterdEdxMPProf->GetYaxis()->SetLabelFont(42);
   HSCPHLTTriggerMetDeDxFilterdEdxMPProf->GetYaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerMetDeDxFilterdEdxMPProf->GetYaxis()->SetLabelSize(0.05);
   HSCPHLTTriggerMetDeDxFilterdEdxMPProf->GetYaxis()->SetTitleOffset(0.9);
   HSCPHLTTriggerMetDeDxFilterdEdxMPProf->GetYaxis()->SetTitleFont(42);
   HSCPHLTTriggerMetDeDxFilterdEdxMPProf->GetZaxis()->SetLabelFont(42);
   HSCPHLTTriggerMetDeDxFilterdEdxMPProf->GetZaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerMetDeDxFilterdEdxMPProf->GetZaxis()->SetLabelSize(0.05);
   HSCPHLTTriggerMetDeDxFilterdEdxMPProf->GetZaxis()->SetTitleFont(42);
   HSCPHLTTriggerMetDeDxFilterdEdxMPProf->Draw("E1");
   
   TPaveText *pt = new TPaveText(6.99952e-316,6.691707e-316,6.69171e-316,6.696397e-316,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(12);
   pt->SetTextFont(43);
   pt->SetTextSize(21);
   TText *text = pt->AddText("h");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
