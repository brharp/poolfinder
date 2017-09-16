import { Component, Input } from "@angular/core"
@Component({
    selector: 'schedule-thumbnail',
    template: `<h2>{{schedule.start}} to {{schedule.end}}</h2>
    <hr>
    <pool-list [pools]="schedule.pools"></pool-list>`
})
export class ScheduleThumbnailComponent {
    @Input() schedule:any
}