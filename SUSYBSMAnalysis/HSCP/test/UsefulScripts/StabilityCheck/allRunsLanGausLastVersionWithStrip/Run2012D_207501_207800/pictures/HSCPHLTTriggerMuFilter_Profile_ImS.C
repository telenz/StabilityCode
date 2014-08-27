{
//=========Macro generated from canvas: c1/c1
//=========  (Thu Aug 21 17:45:43 2014) by ROOT version5.32/00
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
   
   TProfile *HSCPHLTTriggerMuFilterdEdxMSProf = new TProfile("HSCPHLTTriggerMuFilterdEdxMSProf","",3,0,3,"");
   HSCPHLTTriggerMuFilterdEdxMSProf->SetBinEntries(1,100537);
   HSCPHLTTriggerMuFilterdEdxMSProf->SetBinEntries(2,3921);
   HSCPHLTTriggerMuFilterdEdxMSProf->SetBinEntries(3,5687);
   HSCPHLTTriggerMuFilterdEdxMSProf->SetBinContent(1,331845.6);
   HSCPHLTTriggerMuFilterdEdxMSProf->SetBinContent(2,13015.87);
   HSCPHLTTriggerMuFilterdEdxMSProf->SetBinContent(3,18887.57);
   HSCPHLTTriggerMuFilterdEdxMSProf->SetBinError(1,1048.549);
   HSCPHLTTriggerMuFilterdEdxMSProf->SetBinError(2,208.2626);
   HSCPHLTTriggerMuFilterdEdxMSProf->SetBinError(3,250.9369);
   HSCPHLTTriggerMuFilterdEdxMSProf->SetEntries(110145);
   HSCPHLTTriggerMuFilterdEdxMSProf->SetStats(0);
   HSCPHLTTriggerMuFilterdEdxMSProf->SetFillColor(1);
   HSCPHLTTriggerMuFilterdEdxMSProf->SetLineStyle(0);
   HSCPHLTTriggerMuFilterdEdxMSProf->SetMarkerStyle(20);
   HSCPHLTTriggerMuFilterdEdxMSProf->SetMarkerSize(0.4);
   HSCPHLTTriggerMuFilterdEdxMSProf->GetXaxis()->SetBinLabel(1,"207515");
   HSCPHLTTriggerMuFilterdEdxMSProf->GetXaxis()->SetBinLabel(2,"207517");
   HSCPHLTTriggerMuFilterdEdxMSProf->GetXaxis()->SetBinLabel(3,"207518");
   HSCPHLTTriggerMuFilterdEdxMSProf->GetXaxis()->SetBit(TAxis::kLabelsVert);
   HSCPHLTTriggerMuFilterdEdxMSProf->GetXaxis()->SetNdivisions(505);
   HSCPHLTTriggerMuFilterdEdxMSProf->GetXaxis()->SetLabelFont(42);
   HSCPHLTTriggerMuFilterdEdxMSProf->GetXaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerMuFilterdEdxMSProf->GetXaxis()->SetTitleOffset(1.1);
   HSCPHLTTriggerMuFilterdEdxMSProf->GetXaxis()->SetTitleFont(42);
   HSCPHLTTriggerMuFilterdEdxMSProf->GetYaxis()->SetTitle("dE/dx estimator");
   HSCPHLTTriggerMuFilterdEdxMSProf->GetYaxis()->SetLabelFont(42);
   HSCPHLTTriggerMuFilterdEdxMSProf->GetYaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerMuFilterdEdxMSProf->GetYaxis()->SetLabelSize(0.05);
   HSCPHLTTriggerMuFilterdEdxMSProf->GetYaxis()->SetTitleOffset(0.9);
   HSCPHLTTriggerMuFilterdEdxMSProf->GetYaxis()->SetTitleFont(42);
   HSCPHLTTriggerMuFilterdEdxMSProf->GetZaxis()->SetLabelFont(42);
   HSCPHLTTriggerMuFilterdEdxMSProf->GetZaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerMuFilterdEdxMSProf->GetZaxis()->SetLabelSize(0.05);
   HSCPHLTTriggerMuFilterdEdxMSProf->GetZaxis()->SetTitleFont(42);
   HSCPHLTTriggerMuFilterdEdxMSProf->Draw("E1");
   
   TPaveText *pt = new TPaveText(7.661893e-316,6.706387e-316,6.706388e-316,6.466163e-316,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(12);
   pt->SetTextFont(43);
   pt->SetTextSize(21);
   TText *text = pt->AddText("b");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
