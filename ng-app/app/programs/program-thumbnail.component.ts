import { Component, Input } from "@angular/core"
@Component({
    selector: 'program-thumbnail',
    template: `
    <th>{{program.name}}</th>
    <td><events-list [events]="program.monday"></events-list></td>
    <td><events-list [events]="program.tuesday"></events-list></td>
    <td><events-list [events]="program.wednesday"></events-list></td>
    <td><events-list [events]="program.thursday"></events-list></td>
    <td><events-list [events]="program.friday"></events-list></td>
    <td><events-list [events]="program.saturday"></events-list></td>
    <td><events-list [events]="program.sunday"></events-list></td>
    `
})
export class ProgramThumbnailComponent {
    @Input() program:any
}
