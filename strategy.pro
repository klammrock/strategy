TEMPLATE = subdirs

SUBDIRS += \
    strategy_core \
    strategy_w_ui

strategy_w_ui.depends = strategy_core
