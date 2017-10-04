import { Component, Input, OnChanges, SimpleChanges } from "@angular/core"
import { ScheduleService } from "./shared/schedule.service"
@Component({
    selector: 'schedule-list',
    template: `
    <h1>{{filterBy}} <small class="text-muted">{{day}}</small></h1>
    <div class="">
      <schedule-thumbnail [schedule]="schedule"
          *ngFor="let schedule of visibleSchedules"></schedule-thumbnail>
    </div>
    `
})
export class ScheduleListComponent implements OnChanges {
    @Input() schedules: any[]
    visibleSchedules:any[]
    day = DayOfWeek[new Date().getDay()]
    @Input() filterBy: string = 'all'
    ngOnChanges(changes: SimpleChanges): void {
        console.log(this.filterBy);
        console.log(this.schedules.length);
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
        console.log(this.visibleSchedules.length)
    }
}
const DayOfWeek = [ "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" ]