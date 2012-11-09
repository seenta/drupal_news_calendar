News calendar module for Drupal 7
=================================

### How to install

* Download the [latest version][0]
* Unpack module files to the `sites/all/modules/custom/news_calendar`
* Enable module
* Configure module at `/admin/config/content/news-calendar`
* If you have changed the year calendar path you should flush the site cache

### How to configure

Follow to the `/admin/config/content/news-calendar` page and read description for the fields.

### How to theme

Theme functions:

* `theme_news_calendar_year_markup($variables)`
* `theme_news_calendar_block_markup`
* `theme_news_calendar_month_markup`

Classes:

* `news_calendar_active` - a date of currently opened node (affects only in monthly calendar)
* `news_calendar_today` - today date
* `#block-news-calendar-news-calendar-month .loading` - ajax loader

### Recomended modules

Recomended to use with news_calendar:

* [Calendar][1]

 [0]: https://github.com/seenta/drupal_news_calendar/archive/master.tar.gz
 [1]: http://drupal.org/project/calendar