mw.loader.implement("jquery.tipsy",function(){(function($){function maybeCall(thing,ctx){return(typeof thing=='function')?(thing.call(ctx)):thing;};function fixTitle($ele){if($ele.attr('title')||typeof($ele.attr('original-title'))!='string'){$ele.attr('original-title',$ele.attr('title')||'').removeAttr('title');}}function Tipsy(element,options){this.$element=$(element);this.options=options;this.enabled=true;fixTitle(this.$element);}Tipsy.prototype={show:function(){var title=this.getTitle();if(title&&this.enabled){var $tip=this.tip();$tip.find('.tipsy-inner')[this.options.html?'html':'text'](title);$tip[0].className='tipsy';if(this.options.className){$tip.addClass(maybeCall(this.options.className,this.$element[0]));}$tip.remove().css({top:0,left:0,visibility:'hidden',display:'block'}).appendTo(document.body);var pos=$.extend({},this.$element.offset(),{width:this.$element[0].offsetWidth,height:this.$element[0].offsetHeight});var actualWidth=$tip[0].offsetWidth,actualHeight=$tip[0].
offsetHeight;var gravity=(typeof this.options.gravity=='function')?this.options.gravity.call(this.$element[0]):this.options.gravity;var tp;switch(gravity.charAt(0)){case'n':tp={top:pos.top+pos.height+this.options.offset,left:pos.left+pos.width/2-actualWidth/2};break;case's':tp={top:pos.top-actualHeight-this.options.offset,left:pos.left+pos.width/2-actualWidth/2};break;case'e':tp={top:pos.top+pos.height/2-actualHeight/2,left:pos.left-actualWidth-this.options.offset};break;case'w':tp={top:pos.top+pos.height/2-actualHeight/2,left:pos.left+pos.width+this.options.offset};break;}if(gravity.length==2){if(gravity.charAt(1)=='w'){if(this.options.center){tp.left=pos.left+pos.width/2-15;}else{tp.left=pos.left;}}else{if(this.options.center){tp.left=pos.left+pos.width/2-actualWidth+15;}else{tp.left=pos.left+pos.width;}}}$tip.css(tp).addClass('tipsy-'+gravity);if(this.options.fade){$tip.stop().css({opacity:0,display:'block',visibility:'visible'}).animate({opacity:this.options.opacity},100);}else{
$tip.css({visibility:'visible',opacity:this.options.opacity});}}},hide:function(){if(this.options.fade){this.tip().stop().fadeOut(100,function(){$(this).remove();});}else{this.tip().remove();}},getTitle:function(){var title,$e=this.$element,o=this.options;fixTitle($e);var title,o=this.options;if(typeof o.title=='string'){title=$e.attr(o.title=='title'?'original-title':o.title);}else if(typeof o.title=='function'){title=o.title.call($e[0]);}title=(''+title).replace(/(^\s*|\s*$)/,"");return title||o.fallback;},tip:function(){if(!this.$tip){this.$tip=$('<div class="tipsy"></div>').html('<div class="tipsy-arrow"></div><div class="tipsy-inner"/></div>');}return this.$tip;},validate:function(){if(!this.$element[0].parentNode){this.hide();this.$element=null;this.options=null;}},enable:function(){this.enabled=true;},disable:function(){this.enabled=false;},toggleEnabled:function(){this.enabled=!this.enabled;}};$.fn.tipsy=function(options){if(options===true){return this.data('tipsy');}else if(
typeof options=='string'){return this.data('tipsy')[options]();}options=$.extend({},$.fn.tipsy.defaults,options);function get(ele){var tipsy=$.data(ele,'tipsy');if(!tipsy){tipsy=new Tipsy(ele,$.fn.tipsy.elementOptions(ele,options));$.data(ele,'tipsy',tipsy);}return tipsy;}function enter(){var tipsy=get(this);tipsy.hoverState='in';if(options.delayIn==0){tipsy.show();}else{setTimeout(function(){if(tipsy.hoverState=='in')tipsy.show();},options.delayIn);}};function leave(){var tipsy=get(this);tipsy.hoverState='out';if(options.delayOut==0){tipsy.hide();}else{setTimeout(function(){if(tipsy.hoverState=='out')tipsy.hide();},options.delayOut);}};if(!options.live)this.each(function(){get(this);});if(options.trigger!='manual'){var binder=options.live?'live':'bind',eventIn=options.trigger=='hover'?'mouseenter':'focus',eventOut=options.trigger=='hover'?'mouseleave':'blur';this[binder](eventIn,enter)[binder](eventOut,leave);}return this;};$.fn.tipsy.defaults={className:null,delayIn:0,delayOut:0,fade
:true,fallback:'',gravity:'n',center:true,html:false,live:false,offset:0,opacity:1.0,title:'title',trigger:'hover'};$.fn.tipsy.elementOptions=function(ele,options){return $.metadata?$.extend({},options,$(ele).metadata()):options;};$.fn.tipsy.autoNS=function(){return $(this).offset().top>($(document).scrollTop()+$(window).height()/2)?'s':'n';};$.fn.tipsy.autoWE=function(){return $(this).offset().left>($(document).scrollLeft()+$(window).width()/2)?'e':'w';};})(jQuery);;},{"css":[
".tipsy{padding:5px;position:absolute;z-index:100000;cursor:default}.tipsy-inner{padding:5px 8px 4px 8px; background-color:#ffffff;border:solid 1px #a7d7f9;color:black;max-width:15em;border-radius:4px;-moz-border-radius:4px;-webkit-border-radius:4px; }.tipsy-arrow{position:absolute;background:url(data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAsAAAALAgMAAADUwp+1AAAACVBMVEX5+fmn1/n///9s6BFKAAAAAXRSTlMAQObYZgAAACpJREFUCB1jZBD4wMiQMoeRcUU4I9uSaYxSE54xZjn8AtMgPkgcJA9UBwAeDw1Qrb3pVAAAAABJRU5ErkJggg==) no-repeat top left;background:url(//bits.wikimedia.org/static-1.23wmf14/resources/jquery.tipsy/images/tipsy.png?2014-02-13T17:46:40Z) no-repeat top left!ie;width:11px;height:6px} .tipsy-n .tipsy-arrow{top:0px;left:50%;margin-left:-5px} .tipsy-nw .tipsy-arrow{top:1px;left:10px} .tipsy-ne .tipsy-arrow{top:1px;right:10px} .tipsy-s .tipsy-arrow{bottom:0px;left:50%;margin-left:-5px;background-position:bottom left} .tipsy-sw .tipsy-arrow{bottom:0px;left:10px;background-position:bottom left} .tipsy-se .tipsy-arrow{bottom:0px;right:10px;background-position:bottom left} .tipsy-e .tipsy-arrow{top:50%;margin-top:-5px;right:1px;width:5px;height:11px;background-position:top right} .tipsy-w .tipsy-arrow{top:50%;margin-top:-5px;left:0px;width:6px;height:11px}\n/* cache key: enwiki:resourceloader:filter:minify-css:7:a698aa5d67345d60aabc59a329d04328 */"
]},{});
/* cache key: enwiki:resourceloader:filter:minify-js:7:8307e8ef2792c67f98896663de1d34d2 */