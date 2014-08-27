{
//=========Macro generated from canvas: c1/c1
//=========  (Thu Aug 21 17:29:16 2014) by ROOT version5.32/00
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
   
   TProfile *AnymyHist = new TProfile("AnymyHist","",1,0,1,"");
   AnymyHist->SetBinEntries(1,9182);
   AnymyHist->SetBinContent(1,31929.56);
   AnymyHist->SetBinError(1,335.8127);
   AnymyHist->SetEntries(9182);
   AnymyHist->SetStats(0);
   AnymyHist->SetFillColor(1);
   AnymyHist->SetLineStyle(0);
   AnymyHist->SetMarkerStyle(20);
   AnymyHist->SetMarkerSize(0.4);
   AnymyHist->GetXaxis()->SetBinLabel(1,"198522");
   AnymyHist->GetXaxis()->SetBit(TAxis::kLabelsVert);
   AnymyHist->GetXaxis()->SetNdivisions(505);
   AnymyHist->GetXaxis()->SetLabelFont(42);
   AnymyHist->GetXaxis()->SetLabelOffset(0.007);
   AnymyHist->GetXaxis()->SetTitleOffset(1.1);
   AnymyHist->GetXaxis()->SetTitleFont(42);
   AnymyHist->GetYaxis()->SetTitle("dE/dx estimator");
   AnymyHist->GetYaxis()->SetLabelFont(42);
   AnymyHist->GetYaxis()->SetLabelOffset(0.007);
   AnymyHist->GetYaxis()->SetLabelSize(0.05);
   AnymyHist->GetYaxis()->SetTitleOffset(0.9);
   AnymyHist->GetYaxis()->SetTitleFont(42);
   AnymyHist->GetZaxis()->SetLabelFont(42);
   AnymyHist->GetZaxis()->SetLabelOffset(0.007);
   AnymyHist->GetZaxis()->SetLabelSize(0.05);
   AnymyHist->GetZaxis()->SetTitleFont(42);
   AnymyHist->Draw("E1");
   
   TPaveText *pt = new TPaveText(7.620684e-316,7.853909e-316,2.347421e-310,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(12);
   pt->SetTextFont(43);
   pt->SetTextSize(21);
   TText *text = pt->AddText(" É‚");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
