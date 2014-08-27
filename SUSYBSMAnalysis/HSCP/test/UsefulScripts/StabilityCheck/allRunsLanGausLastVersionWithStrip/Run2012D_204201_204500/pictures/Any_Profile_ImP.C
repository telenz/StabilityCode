{
//=========Macro generated from canvas: c1/c1
//=========  (Thu Aug 21 17:37:56 2014) by ROOT version5.32/00
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
   
   TProfile *AnydEdxMPProf = new TProfile("AnydEdxMPProf","",2,0,2,"");
   AnydEdxMPProf->SetBinEntries(1,1313);
   AnydEdxMPProf->SetBinEntries(2,26186);
   AnydEdxMPProf->SetBinContent(1,4463.464);
   AnydEdxMPProf->SetBinContent(2,89204.37);
   AnydEdxMPProf->SetBinError(1,124.0101);
   AnydEdxMPProf->SetBinError(2,555.3782);
   AnydEdxMPProf->SetEntries(27499);
   AnydEdxMPProf->SetStats(0);
   AnydEdxMPProf->SetFillColor(1);
   AnydEdxMPProf->SetLineStyle(0);
   AnydEdxMPProf->SetMarkerStyle(20);
   AnydEdxMPProf->SetMarkerSize(0.4);
   AnydEdxMPProf->GetXaxis()->SetBinLabel(1,"204238");
   AnydEdxMPProf->GetXaxis()->SetBinLabel(2,"204250");
   AnydEdxMPProf->GetXaxis()->SetBit(TAxis::kLabelsVert);
   AnydEdxMPProf->GetXaxis()->SetNdivisions(505);
   AnydEdxMPProf->GetXaxis()->SetLabelFont(42);
   AnydEdxMPProf->GetXaxis()->SetLabelOffset(0.007);
   AnydEdxMPProf->GetXaxis()->SetTitleOffset(1.1);
   AnydEdxMPProf->GetXaxis()->SetTitleFont(42);
   AnydEdxMPProf->GetYaxis()->SetTitle("dE/dx estimator");
   AnydEdxMPProf->GetYaxis()->SetLabelFont(42);
   AnydEdxMPProf->GetYaxis()->SetLabelOffset(0.007);
   AnydEdxMPProf->GetYaxis()->SetLabelSize(0.05);
   AnydEdxMPProf->GetYaxis()->SetTitleOffset(0.9);
   AnydEdxMPProf->GetYaxis()->SetTitleFont(42);
   AnydEdxMPProf->GetZaxis()->SetLabelFont(42);
   AnydEdxMPProf->GetZaxis()->SetLabelOffset(0.007);
   AnydEdxMPProf->GetZaxis()->SetLabelSize(0.05);
   AnydEdxMPProf->GetZaxis()->SetTitleFont(42);
   AnydEdxMPProf->Draw("E1");
   
   TPaveText *pt = new TPaveText(7.416672e-316,2.352142e-310,4.66062e-316,5.602413e-316,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(12);
   pt->SetTextFont(43);
   pt->SetTextSize(21);
   TText *text = pt->AddText("P");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
