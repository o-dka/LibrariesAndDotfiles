#!/usr/bin/env sh

# More info : https://github.com/jaagr/polybar/wiki


killall -q polybar

# Wait until the processes have been shut down
while pgrep -u $UID -x polybar > /dev/null; do sleep 1; done

desktop=$(echo $DESKTOP_SESSION)
count=$(xrandr --query | grep " connected" | cut -d" " -f1 | wc -l)


case $desktop in

    openbox|/usr/share/xsessions/openbox)
    if type "xrandr" > /dev/null; then
      for m in $(xrandr --query | grep " connected" | cut -d" " -f1); do
        MONITOR=$m polybar --reload mainbar-openbox -c ~/.config/polybar/config &
      done
    else
    polybar --reload mainbar-openbox -c ~/.config/polybar/config &
    fi
    # second polybar at bottom
    # if type "xrandr" > /dev/null; then
    #   for m in $(xrandr --query | grep " connected" | cut -d" " -f1); do
    #     MONITOR=$m polybar --reload mainbar-openbox-extra -c ~/.config/polybar/config &
    #   done
    # else
    # polybar --reload mainbar-openbox-extra -c ~/.config/polybar/config &
    # fi
    ;;

    bspwm|/usr/share/xsessions/bspwm)
    if type "xrandr" > /dev/null; then
      for m in $(xrandr --query | grep " connected" | cut -d" " -f1); do
        MONITOR=$m polybar --reload mainbar-bspwm -c ~/.config/polybar/config &
      done
    else
    polybar --reload mainbar-bspwm -c ~/.config/polybar/config &
    fi
    # second polybar at bottom
    # if type "xrandr" > /dev/null; then
    #   for m in $(xrandr --query | grep " connected" | cut -d" " -f1); do
    #     MONITOR=$m polybar --reload mainbar-bspwm-extra -c ~/.config/polybar/config &
    #   done
    # else
    # polybar --reload mainbar-bspwm-extra -c ~/.config/polybar/config &
    # fi
    ;;

    spectrwm|/usr/share/xsessions/spectrwm)
    if type "xrandr" > /dev/null; then
      for m in $(xrandr --query | grep " connected" | cut -d" " -f1); do
        MONITOR=$m polybar --reload mainbar-spectrwm -c ~/.config/polybar/config &
      done
    else
    polybar --reload mainbar-spectrwm -c ~/.config/polybar/config &
    fi
    ;;

esac
