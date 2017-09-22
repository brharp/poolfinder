import { Component, Input } from '@angular/core'
@Component({
    selector: 'events-list',
    template: 
    `<div *ngFor="let event of events">
        <event-thumbnail [event]="event"></event-thumbnail>
    </div>`
})
export class EventsListComponent {
    @Input() events:any
}