{
//=========Macro generated from canvas: c1/c1
//=========  (Thu Aug 21 17:45:48 2014) by ROOT version5.32/00
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
   
   TProfile *HSCPHLTTriggerMuFilterdEdxMPProf = new TProfile("HSCPHLTTriggerMuFilterdEdxMPProf","",3,0,3,"");
   HSCPHLTTriggerMuFilterdEdxMPProf->SetBinEntries(1,24476);
   HSCPHLTTriggerMuFilterdEdxMPProf->SetBinEntries(2,1000);
   HSCPHLTTriggerMuFilterdEdxMPProf->SetBinEntries(3,1438);
   HSCPHLTTriggerMuFilterdEdxMPProf->SetBinContent(1,82582.25);
   HSCPHLTTriggerMuFilterdEdxMPProf->SetBinContent(2,3404.069);
   HSCPHLTTriggerMuFilterdEdxMPProf->SetBinContent(3,4867.493);
   HSCPHLTTriggerMuFilterdEdxMPProf->SetBinError(1,531.7006);
   HSCPHLTTriggerMuFilterdEdxMPProf->SetBinError(2,108.5175);
   HSCPHLTTriggerMuFilterdEdxMPProf->SetBinError(3,129.297);
   HSCPHLTTriggerMuFilterdEdxMPProf->SetEntries(26914);
   HSCPHLTTriggerMuFilterdEdxMPProf->SetStats(0);
   HSCPHLTTriggerMuFilterdEdxMPProf->SetFillColor(1);
   HSCPHLTTriggerMuFilterdEdxMPProf->SetLineStyle(0);
   HSCPHLTTriggerMuFilterdEdxMPProf->SetMarkerStyle(20);
   HSCPHLTTriggerMuFilterdEdxMPProf->SetMarkerSize(0.4);
   HSCPHLTTriggerMuFilterdEdxMPProf->GetXaxis()->SetBinLabel(1,"207515");
   HSCPHLTTriggerMuFilterdEdxMPProf->GetXaxis()->SetBinLabel(2,"207517");
   HSCPHLTTriggerMuFilterdEdxMPProf->GetXaxis()->SetBinLabel(3,"207518");
   HSCPHLTTriggerMuFilterdEdxMPProf->GetXaxis()->SetBit(TAxis::kLabelsVert);
   HSCPHLTTriggerMuFilterdEdxMPProf->GetXaxis()->SetNdivisions(505);
   HSCPHLTTriggerMuFilterdEdxMPProf->GetXaxis()->SetLabelFont(42);
   HSCPHLTTriggerMuFilterdEdxMPProf->GetXaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerMuFilterdEdxMPProf->GetXaxis()->SetTitleOffset(1.1);
   HSCPHLTTriggerMuFilterdEdxMPProf->GetXaxis()->SetTitleFont(42);
   HSCPHLTTriggerMuFilterdEdxMPProf->GetYaxis()->SetTitle("dE/dx estimator");
   HSCPHLTTriggerMuFilterdEdxMPProf->GetYaxis()->SetLabelFont(42);
   HSCPHLTTriggerMuFilterdEdxMPProf->GetYaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerMuFilterdEdxMPProf->GetYaxis()->SetLabelSize(0.05);
   HSCPHLTTriggerMuFilterdEdxMPProf->GetYaxis()->SetTitleOffset(0.9);
   HSCPHLTTriggerMuFilterdEdxMPProf->GetYaxis()->SetTitleFont(42);
   HSCPHLTTriggerMuFilterdEdxMPProf->GetZaxis()->SetLabelFont(42);
   HSCPHLTTriggerMuFilterdEdxMPProf->GetZaxis()->SetLabelOffset(0.007);
   HSCPHLTTriggerMuFilterdEdxMPProf->GetZaxis()->SetLabelSize(0.05);
   HSCPHLTTriggerMuFilterdEdxMPProf->GetZaxis()->SetTitleFont(42);
   HSCPHLTTriggerMuFilterdEdxMPProf->Draw("E1");
   
   TPaveText *pt = new TPaveText(6.731282e-316,2.340405e-310,6.731297e-316,6.731282e-316,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(12);
   pt->SetTextFont(43);
   pt->SetTextSize(21);
   TText *text = pt->AddText("c");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
