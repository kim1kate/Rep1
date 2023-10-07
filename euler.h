#pragma once

/*
* @brief Найдите сумму всех чисел меньше value_ ,кратных multeplies_
* @param value_:Число меньше которого ищем сумму
* @param multeplies_ массив кратных чисел.
* @return Сумма чисел
*/
 unsigned long long Problem_1(const int value_, const int* multiplies_,unsigned int size_);

 /*@brief Найдите сумму всех четных чисел фибoначи меньше value_ 
 * @param value_: Число меньше которого ищем сумму 
 * @return Сумма чисел
 */
 unsigned long long Problem_2(const unsigned int value_);

/*@brief Найдите самый больший простой делитель числа value_
* @param value_: числой,делитель которого ищем 
* @return делитель
*/
 unsigned long long Problem_3(const unsigned long long int value_);

 /*@brief Найдите самый большой палиндром, полученный умножением двух трезначных чисел
 * @return наиболшьший палиндром
 */
 unsigned long long Problem_4();