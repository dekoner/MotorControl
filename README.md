# MotorControl
Библиотека для Arduino, которая позволяет управлять двумя моторами

## Использование

- Добавте библиотеку к скетчу

~~~c++
#include <MotorControl.h>
~~~

- Создайте экземпляр

~~~c++
Motors motorsName(LeftForward, LeftBackward, RightForward, RightBackward);
~~~
~~~
motorsName	: имя объекта
LeftForward : пин, отвечающий за движение левого мотора вперед
LeftBackward	: пин, отвечающий за движение левого мотора назад
RightForward	: пин, отвечающий за движение правого мотора вперед
LeftBackward	: пин, отвечающий за движение правого мотора назад
~~~    

- Задайте скорость

~~~c++
motorsName.Move(LeftSpeed, RightSpeed);
~~~

Метод позволяет задавать скорость моторов в пределах от -255 до 255, где значения скорости меньше 0 - это вращение мотора в обратную сторону

## License ##

MotorControl by [dekoner](https://github.com/dekoner "dekoner") is licensed under a MIT License.
See [LICENSE](https://github.com/ErickSimoes/Ultrasonic/blob/master/LICENSE) for details.
