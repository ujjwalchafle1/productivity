//
//  NotesListView.swift
//  iosApp
//
//  Created by Ujjwal Chafle on 02/09/2022.
//  Copyright © 2022 orgName. All rights reserved.
//

import SwiftUI

struct NotesListView: View {
    var body: some View {
        NavigationView {
            ZStack {
                Color.background.edgesIgnoringSafeArea(.all)
                ZStack {
                    Color.background.edgesIgnoringSafeArea(.all)
                    Text("Coming Soon!")
                }
            }
            .navigationTitle("Notes")
        }
    }
}

struct NotesListView_Previews: PreviewProvider {
    static var previews: some View {
        NotesListView()
    }
}
