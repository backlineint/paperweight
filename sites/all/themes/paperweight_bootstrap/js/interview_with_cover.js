(function ($) {

var isBreakPoint = function (bp) {
    var bps = [767],
        w = $(window).width(),
        min, max
    for (var i = 0, l = bps.length; i < l; i++) {
      if (bps[i] === bp) {
        min = bps[i-1] || 0
        max = bps[i]
        break
      }
    }
    return w > min && w <= max
}

$(document).ready(function(){
	// TODO - Change this to execute automatically on a window bind event.
	if (isBreakPoint(767)) { 
		$(".header_image").append($("#name")); 
	} // Breakpoint between 320 and 480
	else {
		$(".stretch").fitText();
	}
});

})(jQuery);


