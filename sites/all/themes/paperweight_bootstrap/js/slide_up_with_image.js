(function ($) {
$(document).ready(function(){

//alert("JS LOADED");
$(".field-name-field-header-image img").each(function(i, elem) {
  var img = $(elem);
  //var div = "<h2>Replaced</h2>"
  var div = $("<div class = 'header_image'/>").css({
    background: "url(" + img.attr("src") + ") no-repeat 50% 65%",
    height: img.height() + "px"
  });
  img.replaceWith(div);
  //$(".field-name-field-header-image img").hide();
});

});
})(jQuery);

//	background: #f57421 url('images/reeses_title.png') no-repeat fixed 50% 0px;
