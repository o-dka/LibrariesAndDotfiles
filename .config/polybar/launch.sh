#!/usr/bin/env sh

# More info : https://github.com/jaagr/polybar/wiki

# Install the following applications for polybar and icons in polybar if you are on ArcoLinuxD
# awesome-terminal-fonts
# Tip : There are other interesting fonts that provide icons like nerd-fonts-complete
# --log=error
# Terminate already running bar instances
killall -q polybar

# Wait until the processes have been shut down
while pgrep -u $UID -x polybar > /dev/null; do sleep 1; done

count=$(xrandr --query | grep " connected" | cut -d" " -f1 | wc -l)

    if type "xrandr" > /dev/null; then
      for m in $(xrandr --query | grep " connected" | cut -d" " -f1); do
        MONITOR=$m polybar --reload mainbar -c ~/.config/polybar/config.ini &
      done
    else
<<<<<<< HEAD
    polybar --reload mainbar -c ~/.config/polybar/config.ini &
    fi
    ;;

    spectrwm|/usr/share/xsessions/spectrwm)
    if type "xrandr" > /dev/null; then
      for m in $(xrandr --query | grep " connected" | cut -d" " -f1); do
        MONITOR=$m polybar --reload mainbar-spectrwm -c ~/.config/polybar/config.ini &
      done
    else
    polybar --reload mainbar-spectrwm -c ~/.config/polybar/config.ini &
=======
      polybar --reload mainbar -c ~/.config/polybar/config &
>>>>>>> c762d754a0367ac1189078413e99b98610260949
    fi
    ;;
