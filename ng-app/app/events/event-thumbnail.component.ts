import { Component, Input, Output, EventEmitter } from '@angular/core'
@Component({
    selector: 'event-thumbnail',
    template: `<span>{{ event }}</span>`
})
export class EventThumbnailComponent {
    @Input() event:any
}