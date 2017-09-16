import { Component, Input } from "@angular/core"
@Component({
    selector: 'pool-thumbnail',
    template: `
    <h3>{{pool.name}}</h3>
    <program-list [programs]="pool.programs"></program-list>`
})
export class PoolThumbnailComponent {
    @Input() pool:any
}
