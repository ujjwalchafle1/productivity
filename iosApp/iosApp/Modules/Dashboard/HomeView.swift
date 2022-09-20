//
//  HomeView.swift
//  iosApp
//
//  Created by Ujjwal Chafle on 16/09/2022.
//  Copyright © 2022 orgName. All rights reserved.
//

import SwiftUI

struct HomeView: View {
    @StateObject private var viewModelAdapter: DashboardViewModelAdapter
    
    init(viewModelAdapter: DashboardViewModelAdapter = DashboardViewModelAdapter()) {
        _viewModelAdapter = StateObject(wrappedValue: viewModelAdapter)
    }
    
    var body: some View {
        VStack {
            switch viewModelAdapter.viewData {
            case .empty:
                EmptyView()
            case .content(let viewData):
                content(from: viewData)
            }
        }
        .onAppear {
            viewModelAdapter.present()
        }
    }
    
    func content(from viewData: DashboardViewData.Content) -> some View {
        VStack(spacing: 0) {
            HStack {
                
                Text.Headline4(viewData.greetingLabel, color: .white)
                    .padding(.top, 32)
                
                Spacer()
                
                Button {
                } label: {
                    
                    Image(systemName: "gearshape.fill")
                        .font(.title)
                        .foregroundColor(.white)
                        .padding(.top, 16)
                }
                .padding(.top)
            }
            .padding(.horizontal)
            .padding(.top, 20)
            .padding(.bottom, 80)
            .background(Color("Color1"))
            .clipShape(Corners(corner: [.bottomRight], size: CGSize(width: 55, height: 55)))
            .shadow(radius: 2)
            
            HStack {
                
                VStack {
                    
                    HStack {
                        
                        VStack(alignment: .leading, spacing: 5) {
                            
                            Text.Headline1(viewData.daysRemainingInYear)
                            
                            Text.Headline4(viewData.daysLeftLabel)
                        }
                        
                        Spacer()
                    }
                    .padding(.top, 30)
                    .padding(.leading, 30)
                }
                .padding(.bottom, 35)
                .frame(width: UIScreen.main.bounds.width - 100)
                .background(Color("Color2"))
                .clipShape(Corners(corner: [.topLeft, .topRight, .bottomRight], size: CGSize(width: 70, height: 70)))
                
                Spacer()
            }
            .padding(.top, -67)
            .shadow(radius: 2)
            
            ZStack {
                
                Color("Color2")
                
                ScrollView(.vertical, showsIndicators: false) {
                    
                    // Self check-in view
                    Button {
                        //
                    } label: {
                        HStack {
                            
                            HStack {
                                Text("🧘🏻")
                                    .font(.system(size: 35))
                                Text.Headline5(viewData.selfCheckInBtnLabel, color: Color("Color1"))
                                    .minimumScaleFactor(0.2)
                                
                            }
                            
                            Spacer()
                            Image(systemName: "chevron.forward")
                                .font(.title)
                                .foregroundColor(Color("Color1"))
                            
                        }
                        .padding()
                        .padding(.horizontal)
                    }
                    .padding(.top, 20)
                    
                    VStack {
                        HStack {
                            Text.Headline5(viewData.toolboxHeader)
                            
                            Spacer()
                        }
                        .foregroundColor(.black)
                        .padding(.leading, 25)
                        .padding(.trailing)
                        
                        CardView()
                        
                        Spacer()
                    }
                    .clipShape(Corners(corner: [.topRight], size: CGSize(width: 70, height: 70)))
                }
                .background(Color.white)
                .clipShape(Corners(corner: [.topLeft], size: CGSize(width: 70, height: 70)))
            }
            Spacer()
        }
        .ignoresSafeArea()
        
    }
}

struct HomeView_Previews: PreviewProvider {
    static var previews: some View {
        HomeView()
    }
}


struct Corners: Shape {
    
    var corner: UIRectCorner
    var size: CGSize
    
    func path(in rect: CGRect) -> Path {
        let path  = UIBezierPath(roundedRect: rect, byRoundingCorners: corner, cornerRadii: size)
        
        return Path(path.cgPath)
    }
}
