
(function($) {
	window.news_calendar = function(settings) {
		var $block = $('#block-news-calendar-news-calendar-month');
		if ($block.size() === 0)
			return;
			
		var month = settings.month,
			year = settings.year,
			$month = $block.find('.news_calendar_month_body'),
			$title = $block.find('.news_calendar_month_title');
	
		$block.find('.news_calendar_prev_button').bind('click', function() {
			month--;
			if (month < 1) {
				year--;
				month = 12;
			}
			load_month();
			return false;
		});
		
		$block.find('.news_calendar_next_button').bind('click', function() {
			month++;
			if (month > 12) {
				year++;
				month = 1;
			}
			load_month();
			return false;
		});
	
		function load_month() {
			$month.html('<div class="loading">' + settings.loading_message + '</div>');
			$.ajax({
				type: 'POST',
				url: settings.url,
				data: {
					year: year,
					month: month,
					active_date: settings.active_date
				},
				error: function(jqXHR, status, errorThrown) {
					$month.html('<div class="error">Error.</div>');
				},
				success: function(data) {
					$title.html(data.title);
					$month.html(data.body);
				}
			});
		}
	}
})(jQuery);

