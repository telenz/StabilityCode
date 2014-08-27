{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Aug 22 13:43:49 2014) by ROOT version5.32/00
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
   
   TProfile *HSCPHLTTriggerMetDeDxFilterdEdxMSProf = new TProfile("HSCPHLTTriggerMetDeDxFilterdEdxMSProf","",2,0,2,"");
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->SetBinEntries(1,20);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->SetBinEntries(2,395);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->SetBinContent(1,67.25606);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->SetBinContent(2,1354.761);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->SetBinError(1,15.09533);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->SetBinError(2,68.34077);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->SetEntries(415);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->SetStats(0);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->SetFillColor(1);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->SetLineStyle(0);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->SetMarkerStyle(20);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->SetMarkerSize(0.4);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->GetXaxis()->SetBinLabel(1,"204238");
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->GetXaxis()->SetBinLabel(2,"204250");
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->GetXaxis()->SetBit(TAxis::kLabelsVert);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->GetXaxis()->SetNdivisions(505);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->GetXaxis()->SetLabelFont(42);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->GetXaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->GetXaxis()->SetTitleOffset(1.1);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->GetXaxis()->SetTitleFont(42);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->GetYaxis()->SetTitle("dE/dx estimator");
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->GetYaxis()->SetLabelFont(42);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->GetYaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->GetYaxis()->SetLabelSize(0.05);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->GetYaxis()->SetTitleOffset(0.9);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->GetYaxis()->SetTitleFont(42);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->GetZaxis()->SetLabelFont(42);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->GetZaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->GetZaxis()->SetLabelSize(0.05);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->GetZaxis()->SetTitleFont(42);
   HSCPHLTTriggerMetDeDxFilterdEdxMSProf->Draw("E1");
   
   TPaveText *pt = new TPaveText(8.068603e-316,2.326726e-310,8.404988e-316,8.068615e-316,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(12);
   pt->SetTextFont(43);
   pt->SetTextSize(21);
   TText *text = pt->AddText("g");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
