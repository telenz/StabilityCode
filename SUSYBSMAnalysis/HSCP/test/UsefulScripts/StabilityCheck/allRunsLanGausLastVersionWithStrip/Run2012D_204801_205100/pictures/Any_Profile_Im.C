{
//=========Macro generated from canvas: c1/c1
//=========  (Thu Aug 21 17:27:24 2014) by ROOT version5.32/00
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
   
   TProfile *AnydEdxMProf = new TProfile("AnydEdxMProf","",1,0,1,"");
   AnydEdxMProf->SetBinEntries(1,360);
   AnydEdxMProf->SetBinContent(1,1147.478);
   AnydEdxMProf->SetBinError(1,60.63806);
   AnydEdxMProf->SetEntries(360);
   AnydEdxMProf->SetStats(0);
   AnydEdxMProf->SetFillColor(1);
   AnydEdxMProf->SetLineStyle(0);
   AnydEdxMProf->SetMarkerStyle(20);
   AnydEdxMProf->SetMarkerSize(0.4);
   AnydEdxMProf->GetXaxis()->SetBinLabel(1,"205086");
   AnydEdxMProf->GetXaxis()->SetBit(TAxis::kLabelsVert);
   AnydEdxMProf->GetXaxis()->SetNdivisions(505);
   AnydEdxMProf->GetXaxis()->SetLabelFont(42);
   AnydEdxMProf->GetXaxis()->SetLabelOffset(0.007);
   AnydEdxMProf->GetXaxis()->SetTitleOffset(1.1);
   AnydEdxMProf->GetXaxis()->SetTitleFont(42);
   AnydEdxMProf->GetYaxis()->SetTitle("dE/dx estimator");
   AnydEdxMProf->GetYaxis()->SetLabelFont(42);
   AnydEdxMProf->GetYaxis()->SetLabelOffset(0.007);
   AnydEdxMProf->GetYaxis()->SetLabelSize(0.05);
   AnydEdxMProf->GetYaxis()->SetTitleOffset(0.9);
   AnydEdxMProf->GetYaxis()->SetTitleFont(42);
   AnydEdxMProf->GetZaxis()->SetLabelFont(42);
   AnydEdxMProf->GetZaxis()->SetLabelOffset(0.007);
   AnydEdxMProf->GetZaxis()->SetLabelSize(0.05);
   AnydEdxMProf->GetZaxis()->SetTitleFont(42);
   AnydEdxMProf->Draw("E1");
   
   TPaveText *pt = new TPaveText(7.228991e-316,7.598144e-316,7.598021e-316,7.228991e-316,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(12);
   pt->SetTextFont(43);
   pt->SetTextSize(21);
   TText *text = pt->AddText("");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
