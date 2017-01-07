$('iframe').ready( function() {
    $('iframe').contents().find("head").append($("<style type='text/css'>  body{display:none;}  </style>"));
});