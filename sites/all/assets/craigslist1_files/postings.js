function initFlag(inppid,row){var mypID=pID||inppid;row=row||$(document);$(row).find(".flagChooser>a").click(function(e){$.get("/flag/?async=async&flagCode="+$(this).data('flag')+"&postingID="+mypID);$(this).parent().html("Thanks for flagging!");e.preventDefault();});}
$(document).ready(function(){if(typeof(pID)!=='undefined'){initFlag(pID);}
var maxWidth=$('section.body').innerWidth();$(window).resize(function(){if((window.innerWidth<maxWidth)&&(window.innerWidth>0)){$('#postingbody').css('width',window.innerWidth-16);$('aside.tsb').css('width',window.innerWidth-32);}}).resize();var format=get_format_cookie();if(typeof(bestOf)!=='undefined'&&!bestOf&&typeof(isPreview)!=='undefined'&&!isPreview&&format!=='mobile'&&format!=='tablet'&&$('.reply_button').length>0){$('.returnemail,.reply_button,.replytext').toggle();$('.reply_button').click(function(){if($('.reply_options').length){$('.returnemail').toggle();}else{$('.returnemail').load('/reply?v=2','',function(){$('.reply_options a, html').click(function(){$('.returnemail').hide();});$('.reply_options,.reply_button').click(function(e){e.stopPropagation();});$('.reply_options').each(function(){var c=$(this).html();c=c.replace(/#PT#/g,encodeURIComponent(postingTitle));c=c.replace(/#URL#/g,postingURL);c=c.replace(/#DE#/g,encodeURIComponent(displayEmail));c=c.replace(/#DEP#/g,displayEmail);$(this).html(c);});$('.anonemail').mouseup(function(e){e.preventDefault();});$('.reply_options,.returnemail').show();$('.anonemail').select();});}
$('.anonemail').select();});}
function get_format_cookie(){var mode='none';var C=document.cookie.split(';');for(i=0;i<C.length;i++){var c=$.trim(C[i]);if(c.indexOf('cl_fmt=')==0){mode=c.substring(7);}}
return mode;}
$('#thumbs a,#iwt a').mouseover(function(){var index=$(this).attr('title');$('#thumbs a img,#iwt a img').removeClass('hover');$('#ci').removeClass('expanded');$(this).find('img').addClass('hover');$("img#iwi")
.attr('src',imgList[index-1])
.attr('title','image '+index);})
.click(function(e){e.preventDefault();})
.first().find('img').addClass('hover');$('#ci').click(function(){$(this).toggleClass('expanded');});});