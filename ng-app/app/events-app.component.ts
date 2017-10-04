import { Component } from '@angular/core'
import { ScheduleService } from './schedules/shared/schedule.service';
@Component({
    selector: 'events-app',
    template: `
    <div>
    <button
        class="btn btn-default"
        [class.active]="filterBy=='all'"
        (click)="filterBy='all'"
        >All</button>
    <button
        class="btn btn-default"
        [class.active]="filterBy=='Fitness swim'"
        (click)="filterBy='Fitness swim'"
        >Fitness swim</button>
    <button
        class="btn btn-default"
        [class.active]="filterBy=='Leisure swim'"
        (click)="filterBy='Leisure swim'"
        >Leisure swim</button>
    <button
        class="btn btn-default"
        [class.active]="filterBy=='Public swim'"
        (click)="filterBy='Public swim'"
        >Public swim</button>
    </div>
    <div class="card-group">
    <program-thumbnail [schedules]="schedules" [filterBy]="'Public swim'"></program-thumbnail>
    <program-thumbnail [schedules]="schedules" [filterBy]="'Leisure swim'"></program-thumbnail>
    <program-thumbnail [schedules]="schedules" [filterBy]="'Fitness swim'"></program-thumbnail>
    </div>
    `
})
//<schedule-list [schedules]="schedules" [filterBy]="filterBy"></schedule-list>

export class EventsAppComponent {
    filterBy: string = 'all'
    schedules: any
    constructor(private scheduleService : ScheduleService) {
        this.schedules = scheduleService.getSchedules();
    }
}