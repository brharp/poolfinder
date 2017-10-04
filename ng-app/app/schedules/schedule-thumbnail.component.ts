import { Component, Input } from "@angular/core"
@Component({
    selector: 'schedule-thumbnail',
    template: `
    <div class="card mb-4">
      <div class="card-body">
        <h4 class="card-title">{{schedule.program}}</h4>
        <h6 class="card-subtitle mb-2 text-muted">
          {{schedule.start}} - {{schedule.end}}
        </h6>
        <a href="{{schedule.href}}" class="card-link">{{schedule.pool}}</a>
    </div>
    `
})
export class ScheduleThumbnailComponent {
    @Input() schedule:any
}