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
        List {
            ForEach(0..<100) { note in
                Text("Note \(note)")
                    .font(.system(size: 30, weight: .bold, design: .rounded))
            }
        }
    }
}

struct NotesListView_Previews: PreviewProvider {
    static var previews: some View {
        NotesListView()
    }
}
