var $ = jQuery;

$(function() {
    'use strict';

	/**
	 * Slideshow 
	 */
	/*$('#flexslider-1').bind('start', function(e) {
			$(".flex-active-slide").toggleClass("animated");
	});

	$('#flexslider-1').bind('after', function(e) {
			$(".flex-active-slide").toggleClass("animated");
	});
	
	$('#flexslider-1').bind('before', function(e) {
			$(".flex-active-slide").toggleClass("animated");
	});*/

	/**
	 * Equal Heights
	 */
	/*
	// Signup Block
	$(".field-name-field-signup-columns .field-item").matchHeight();

	// Footer Menu
	$("#zone-footer li.expanded").matchHeight();

	// Latest Activity Blocks
	$(".page-community .region-content .view-content").matchHeight();
	*/
	/**
	 * Form Styling 
	 */
	/*$(".views-exposed-form select").fancySelect();
	//$(".block-superfish select").fancySelect();
	
	Drupal.behaviors.ting = {
  	attach: function (context, settings) {
			$(".views-exposed-form select").fancySelect();
	  }
	};*/


    var $body;

    var widthNormal = 980;

    $(document).ready(function() {
        $body = $('body');

        cropBackgroundImage();
        mobileMenu();
        //stickySidebar();
        projectEntries();
        toTheTop();
    });

    function cropBackgroundImage() {
        var $footer = $('#section-footer');
        var footerOffset;
        var $slideShowWrapper = $('#zone-slideshow-wrapper');

        function _crop() {
            if($body.hasClass('not-front')) {
                footerOffset = $footer.offset().top;

                $slideShowWrapper.css({
                    'overflow-y': 'hidden',
                    'height': footerOffset + 'px'
                });
            }
        }

        $(window).load(function() {
            _crop();
        });

        $(window).resize(function() {
            _crop();
        });
    }

    function mobileMenu() {
        var $mobileMenu = $('#region-mobile-menu');
        var $toggleMobileMenu = $('#block-smartaarhus-toggle-mobile-menu');

        $mobileMenu.mmenu({});

        $toggleMobileMenu.click(function() {
            $mobileMenu.trigger('open.mm');
        });

        $(window).resize(function() {
            if($mobileMenu.hasClass('mm-opened') && window.innerWidth >= widthNormal) {
                $mobileMenu.trigger('close.mm');
            }
        });

    }
    
    function projectEntries() {
      var $projectEntries = $('#block-views-ting-projects-block-1');
      if($projectEntries.length) {
        $projectEntries.find('.project-entry-text-content').matchHeight();
      }
    }

    function stickySidebar() {
        var $sidebar = $('#region-sidebar-first');
        if($sidebar.length) {
            $sidebar.waypoint(function(direction) {
               $sidebar.toggleClass('sticky');
            });
        }
    }

    function toTheTop() {
        var $toTheTop = $('#block-smartaarhus-to-the-top');

        if($toTheTop.length) {
            $toTheTop.click(function() {
                $('body, html').animate({ scrollTop: 0 }, "slow");
            });
        }
    }
	
});