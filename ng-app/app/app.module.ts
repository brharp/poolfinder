import { NgModule } from '@angular/core'
import { BrowserModule } from '@angular/platform-browser'
import { EventsAppComponent } from './events-app.component'
import { EventsListComponent } from './events/events-list.component'
import { EventThumbnailComponent } from './events/event-thumbnail.component'
import { ScheduleThumbnailComponent } from './schedules/schedule-thumbnail.component'
import { ScheduleListComponent } from './schedules/schedule-list.component'
import { PoolListComponent } from './pools/pools-list.component'
import { PoolThumbnailComponent } from './pools/pool-thumbnail.component'
import { ProgramListComponent } from './programs/program-list.component'
import { ProgramThumbnailComponent } from './programs/program-thumbnail.component'
import { ScheduleService } from './schedules/shared/schedule.service'
@NgModule({
    imports: [BrowserModule],
    declarations: [
        EventsAppComponent,
        EventsListComponent, EventThumbnailComponent,
        ScheduleThumbnailComponent, ScheduleListComponent,
        PoolListComponent, PoolThumbnailComponent,
        ProgramListComponent, ProgramThumbnailComponent        
    ],
    providers: [ScheduleService],
    bootstrap: [EventsAppComponent]
})
export class AppModule { }
