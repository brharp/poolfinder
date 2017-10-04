import { Component, Input, SimpleChanges } from "@angular/core"
@Component({
    selector: 'program-thumbnail',
    template: `
    <div class="card">
        <div class="card-body">
            <h3 class="card-title">{{filterBy}}</h3>
            <p *ngFor="let schedule of visibleSchedules"
                class="card-text">
                {{schedule.start}} - {{schedule.end}}
                <a href="{{schedule.href}}" class="card-link">{{schedule.pool}}</a>                
            </p>
        </div>
    </div>
    `
})
export class ProgramThumbnailComponent {
    @Input() program:any
    @Input() filterBy:any
    @Input() schedules:any
    visibleSchedules:any
    ngOnChanges(changes: SimpleChanges): void {
        if (this.schedules) {
            this.filterSchedules(this.filterBy)
        }
    }
    filterSchedules(filter) {
        var today = new Date();
        this.visibleSchedules = this.schedules.filter(schedule => { 
            return schedule.dayofweek == DayOfWeek[today.getDay()] 
        }).filter(schedule => {
            return filter === 'all' || schedule.program.toLowerCase() === filter.toLowerCase()
        })
    }
}
const DayOfWeek = [ "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" ]
