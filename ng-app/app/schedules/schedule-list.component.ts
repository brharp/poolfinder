import { Component } from "@angular/core"
import { ScheduleService } from "./shared/schedule.service"
@Component({
    selector: 'schedule-list',
    template: `<div *ngFor="let schedule of schedules">
        <schedule-thumbnail [schedule]="schedule"></schedule-thumbnail>
    </div>`
})
export class ScheduleListComponent {
    schedules:any[]
    constructor(private scheduleService:ScheduleService) {
        this.schedules = scheduleService.getSchedules();
    }
}