name = no-sidebar
description = No sidebar layout - all Content
template=no-sidebar-layout
engine = phptemplate
core = 7.x

; Regions
regions[branding]       = Branding
regions[header]         = Header
regions[navigation]     = Navigation
regions[highlighted]    = Highlighted
regions[help]           = Help
regions[content]        = Content
regions[footer]         = Footer

stylesheets[all][]= css/layouts/no-sidebar/no-sidebar.layout.css
stylesheets[all][]= css/layouts/no-sidebar/no-sidebar.layout.no-query.css

; Plugins
plugins[panels][layouts] = panels/layouts
plugins[panels][styles] = panels/styles

