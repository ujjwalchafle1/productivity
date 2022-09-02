//
//  DashboardView.swift
//  iosApp
//
//  Created by Ujjwal Chafle on 02/09/2022.
//  Copyright © 2022 orgName. All rights reserved.
//

import SwiftUI

struct DashboardView: View {
    var body: some View {
        NavigationView {
            VStack(alignment: .leading, spacing: 20) {
                VStack {
                    Text("122")
                        .font(.system(size: 100, weight: .bold, design: .rounded))
                        .foregroundColor(.green)
                }
                .frame(maxWidth: .infinity, maxHeight: 200)
                .background(Color.gray)
                .cornerRadius(16)
                
                HStack {
                    Text("🧘🏻 Today's self check-in")
                        .padding()
                    Spacer()
                    Image(systemName: "chevron.forward")
                        .padding()
                }
                .background(Color.gray)
                .cornerRadius(10)
                
                Text("Your Toolbox")
                    .font(.system(size: 20, weight: .bold, design: .rounded))
                HStack {
                    VStack {
                        Text("0")
                            .padding(.top, 10)
                            .padding(.bottom, 2)
                        Text("Notes")
                            .padding(.bottom, 10)
                    }
                    .frame(maxWidth: .infinity)
                    .background(Color.gray)
                    .cornerRadius(10)
                    
                    VStack {
                        Text("0")
                            .padding(.top, 10)
                            .padding(.bottom, 2)
                        Text("Tasks")
                            .padding(.bottom, 10)
                    }
                    .frame(maxWidth: .infinity)
                    .background(Color.gray)
                    .cornerRadius(10)
                    
                    VStack {
                        Text("0")
                            .padding(.top, 10)
                            .padding(.bottom, 2)
                        Text("Routine")
                            .padding(.bottom, 10)
                    }
                    .frame(maxWidth: .infinity)
                    .background(Color.gray)
                    .cornerRadius(10)
                }
                .frame(maxWidth: .infinity)
                
                Spacer()
            }
            .padding()

            .navigationTitle("Hello Ujjwal!")
        }
    }
}

struct DashboardView_Previews: PreviewProvider {
    static var previews: some View {
        VStack(alignment: .leading, spacing: 20) {
            VStack {
                Text("122")
                    .font(.system(size: 100, weight: .bold, design: .rounded))
                    .foregroundColor(.green)
            }
            .frame(maxWidth: .infinity, maxHeight: 200)
            .background(Color.gray)
            .cornerRadius(16)
            
            HStack {
                Text("🧘🏻 Today's self check-in")
                    .padding()
                Spacer()
                Image(systemName: "chevron.forward")
                    .padding()
            }
            .background(Color.gray)
            .cornerRadius(10)
            
            Text("Your Toolbox")
                .font(.system(size: 20, weight: .bold, design: .rounded))
            HStack {
                VStack {
                    Text("0")
                        .padding(.top, 10)
                        .padding(.bottom, 2)
                    Text("Notes")
                        .padding(.bottom, 10)
                }
                .frame(maxWidth: .infinity)
                .background(Color.gray)
                .cornerRadius(10)
                
                VStack {
                    Text("0")
                        .padding(.top, 10)
                        .padding(.bottom, 2)
                    Text("Tasks")
                        .padding(.bottom, 10)
                }
                .frame(maxWidth: .infinity)
                .background(Color.gray)
                .cornerRadius(10)
                
                VStack {
                    Text("0")
                        .padding(.top, 10)
                        .padding(.bottom, 2)
                    Text("Routine")
                        .padding(.bottom, 10)
                }
                .frame(maxWidth: .infinity)
                .background(Color.gray)
                .cornerRadius(10)
            }
            .frame(maxWidth: .infinity)
            
            Spacer()
        }
        .padding()
        
    }
}
