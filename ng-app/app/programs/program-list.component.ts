import { Component, Input } from "@angular/core"
@Component({
    selector: 'program-list',
    template: `
    <table class="table">
        <tr>
            <th>Program</th>
            <th>Monday</th>
            <th>Tuesday</th>
            <th>Wednesday</th>
            <th>Thursday</th>
            <th>Friday</th>
            <th>Saturday</th>
            <th>Sunday</th>
        </tr>
        <tr *ngFor="let program of programs">
            <program-thumbnail [program]="program"></program-thumbnail>
        </tr>
    </table>
    `
})
export class ProgramListComponent {
    @Input() programs:any
}