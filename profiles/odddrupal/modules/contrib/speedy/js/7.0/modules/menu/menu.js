// $Id$
(function(a){Drupal.behaviors.menuFieldsetSummaries={attach:function(b){a("fieldset.menu-link-form",b).drupalSetSummary(function(b){return a(".form-item-menu-enabled input",b).is(":checked")?Drupal.checkPlain(a(".form-item-menu-link-title input",b).val()):Drupal.t("Not in menu")})}},Drupal.behaviors.menuLinkAutomaticTitle={attach:function(b){a("fieldset.menu-link-form",b).each(function(){var c=a(".form-item-menu-enabled input",this),d=a(".form-item-menu-link-title input",b),e=a(this).closest("form").find(".form-item-title input");if(!(c.length&&d.length&&e.length))return;c.is(":checked")&&d.val().length&&d.data("menuLinkAutomaticTitleOveridden",!0),d.keyup(function(){d.data("menuLinkAutomaticTitleOveridden",!0)}),c.change(function(){c.is(":checked")?d.data("menuLinkAutomaticTitleOveridden")||d.val(e.val()):(d.val(""),d.removeData("menuLinkAutomaticTitleOveridden")),c.closest("fieldset.vertical-tabs-pane").trigger("summaryUpdated"),c.trigger("formUpdated")}),e.keyup(function(){!d.data("menuLinkAutomaticTitleOveridden")&&c.is(":checked")&&(d.val(e.val()),d.val(e.val()).trigger("formUpdated"))})})}}})(jQuery);